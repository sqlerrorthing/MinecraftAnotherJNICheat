// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDER$DISTANCEFUNCTION_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDER$DISTANCEFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.Blender$DistanceFunction
 * Remapped: eaa$c
 */
namespace Blender$DistanceFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eaa$c", "net/minecraft/world/level/levelgen/blending/Blender$DistanceGetter", "net/minecraft/class_6748$class_6831", "net/minecraft/world/gen/chunk/Blender$DistanceFunction", "net/minecraft/src/C_182955_$C_196111_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getDistance", "getDistance", "getDistance", "getDistance", "m_197061_"), "(DDD)D");
    }

    static jdouble getDistance(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2) {
                
       const auto methodID = methodID_getDistance();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDER$DISTANCEFUNCTION_HPP