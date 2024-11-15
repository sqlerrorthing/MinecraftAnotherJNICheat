//
// Created by .1qxz on 11/14/2024.
//


#include "../Hooks.hpp"
#include "features/impl/render/NoCameraClip.h"
#include "features/impl/render/FreeCam.h"
#include "utils/MathUtil.h"
#include "net/minecraft/util/math/MathHelper.hpp"
#include "net/minecraft/block/enums/CameraSubmersionType.hpp"
#include "net/minecraft/util/math/BlockPos$Mutable.hpp"

jmethodID CameraHooks::original_clipToSpace;
jfloat CameraHooks::hkClipToSpace(JNIEnv *env, jobject thiz, jfloat f) {
    return FeatureManager::getInstance().findFeatureByClass<NoCameraClip>()->isEnabled()
        ? f : env->CallNonvirtualFloatMethod(thiz, Camera::self(), original_clipToSpace, f);
}

jmethodID CameraHooks::original_get_submersion_type;
jobject CameraHooks::hkGetSubmersionType(JNIEnv *env, jobject thiz) {
    if(FeatureManager::getInstance().findFeatureByClass<FreeCam>()->isEnabled()) {
        return CameraSubmersionType::get_field_NONE();
    }

    return env->CallNonvirtualObjectMethod(thiz, Camera::self(), original_get_submersion_type);
}

jmethodID CameraHooks::original_set_rotation;
void CameraHooks::hkSetRotation(JNIEnv *env, jobject thiz, jfloat yaw, jfloat pitch) {
    auto setRotation = [env, thiz](jfloat _yaw, jfloat _pitch){
        env->CallNonvirtualVoidMethod(thiz, Camera::self(), original_set_rotation, _yaw, _pitch);
    };

    auto freeCam = FeatureManager::getInstance().findFeatureByClass<FreeCam>();
    if(freeCam->isEnabled()) {
        fmt::println("setRots: {0}, {1}", freeCam->getFakeYaw(), freeCam->getFakePitch());
        setRotation(freeCam->getFakeYaw(), freeCam->getFakePitch());
    } else {
        setRotation(yaw, pitch);
    }
}

jmethodID CameraHooks::original_set_pos;
void CameraHooks::hkSetPos(JNIEnv *env, jobject thiz, jdouble x, jdouble y, jdouble z) {
    auto setPos = [env, thiz](jdouble posX, jdouble posY, jdouble posZ){
        jmethodID constructor = env->GetMethodID(Vec3d::self(), "<init>", "(DDD)V");
        Camera::_setPos(thiz, env->NewObject(Vec3d::self(), constructor, posX, posY, posZ), env);
    };

    auto freeCam = FeatureManager::getInstance().findFeatureByClass<FreeCam>();
    if(freeCam->isEnabled()) {
        fmt::println("setPos: {0}, {1}, {2}", freeCam->getFakeX(), freeCam->getFakeY(), freeCam->getFakeZ());
        setPos(freeCam->getFakeX(), freeCam->getFakeY(), freeCam->getFakeZ());
    } else {
        setPos(x, y, z);
    }
}
