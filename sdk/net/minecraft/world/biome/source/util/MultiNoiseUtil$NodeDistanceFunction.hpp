// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_UTIL_MULTINOISEUTIL$NODEDISTANCEFUNCTION_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_UTIL_MULTINOISEUTIL$NODEDISTANCEFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.util.MultiNoiseUtil$NodeDistanceFunction
 * Remapped: def$a
 */
namespace MultiNoiseUtil$NodeDistanceFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("def$a", "net/minecraft/world/level/biome/Climate$DistanceMetric", "net/minecraft/class_6544$class_6545", "net/minecraft/world/biome/source/util/MultiNoiseUtil$NodeDistanceFunction", "net/minecraft/src/C_182857_$C_182858_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("distance", "distance", "distance", "getDistance", "m_186809_"), "(Ldef$e$b;[J)J");
    }

    static jlong getDistance(const jobject& obj, const jobject& arg0, const jarray& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_getDistance();
       return MinecraftSDK::env->CallLongMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_UTIL_MULTINOISEUTIL$NODEDISTANCEFUNCTION_HPP