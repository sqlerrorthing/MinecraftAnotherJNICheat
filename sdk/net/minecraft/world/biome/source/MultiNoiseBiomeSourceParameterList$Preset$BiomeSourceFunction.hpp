// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_SOURCE_MULTINOISEBIOMESOURCEPARAMETERLIST$PRESET$BIOMESOURCEFUNCTION_HPP
#define NET_MINECRAFT_WORLD_BIOME_SOURCE_MULTINOISEBIOMESOURCEPARAMETERLIST$PRESET$BIOMESOURCEFUNCTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.source.MultiNoiseBiomeSourceParameterList$Preset$BiomeSourceFunction
 * Remapped: dek$a$a
 */
namespace MultiNoiseBiomeSourceParameterList$Preset$BiomeSourceFunction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dek$a$a", "net/minecraft/world/level/biome/MultiNoiseBiomeSourceParameterList$Preset$SourceProvider", "net/minecraft/class_8197$class_5305$class_8165", "net/minecraft/world/biome/source/MultiNoiseBiomeSourceParameterList$Preset$BiomeSourceFunction", "net/minecraft/src/C_273807_$C_273799_$C_273805_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "apply", "apply", "m_274430_"), "(Ljava/util/function/Function;)Ldef$c;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_SOURCE_MULTINOISEBIOMESOURCEPARAMETERLIST$PRESET$BIOMESOURCEFUNCTION_HPP