// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_BIOME$TEMPERATUREMODIFIER$2_HPP
#define NET_MINECRAFT_WORLD_BIOME_BIOME$TEMPERATUREMODIFIER$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.Biome$TemperatureModifier$2
 * Remapped: ddw$d$2
 */
namespace Biome$TemperatureModifier$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddw$d$2", "net/minecraft/world/level/biome/Biome$TemperatureModifier$2", "net/minecraft/class_1959$class_5484$2", "net/minecraft/world/biome/Biome$TemperatureModifier$2", "net/minecraft/src/C_1629_$C_1636_$C_1638_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getModifiedTemperature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "modifyTemperature", "method_30798", "getModifiedTemperature", "m_8117_"), "(Ljd;F)F");
    }

    static jfloat getModifiedTemperature(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_getModifiedTemperature();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_BIOME$TEMPERATUREMODIFIER$2_HPP