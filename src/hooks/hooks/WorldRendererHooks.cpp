//
// Created by .1qxz on 11/14/2024.
//

#include "../Hooks.hpp"

#include <jni.h>
#include <string>
#include <sstream>

jmethodID WorldRendererHooks::original_render;
void WorldRendererHooks::hkRender(JNIEnv *env, jobject thiz, jobject tickCounter, jboolean renderBlockOutline,
                                  jobject camera, jobject gameRenderer, jobject lightmapTextureManager,
                                  jobject matrix4f, jobject matrix4f2) {
    // FIXME !!!! CALL IT
//    env->CallNonvirtualVoidMethod(thiz, WorldRenderer::self(), original_render,
//                                  tickCounter, renderBlockOutline, camera, gameRenderer, lightmapTextureManager, matrix4f, matrix4f2);
}