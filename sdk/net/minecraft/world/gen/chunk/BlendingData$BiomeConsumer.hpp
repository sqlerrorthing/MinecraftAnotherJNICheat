// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDINGDATA$BIOMECONSUMER_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDINGDATA$BIOMECONSUMER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.BlendingData$BiomeConsumer
 * Remapped: eab$a
 */
namespace BlendingData$BiomeConsumer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eab$a", "net/minecraft/world/level/levelgen/blending/BlendingData$BiomeConsumer", "net/minecraft/class_6749$class_6853", "net/minecraft/world/gen/chunk/BlendingData$BiomeConsumer", "net/minecraft/src/C_182959_$C_201409_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_consume() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("consume", "consume", "consume", "consume", "m_204673_"), "(IILjm;)V");
    }

    static void consume(const jobject& obj, const jint& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_consume();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_BLENDINGDATA$BIOMECONSUMER_HPP