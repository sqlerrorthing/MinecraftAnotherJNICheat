// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_BIOMEEFFECTS$GRASSCOLORMODIFIER$3_HPP
#define NET_MINECRAFT_WORLD_BIOME_BIOMEEFFECTS$GRASSCOLORMODIFIER$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.BiomeEffects$GrassColorModifier$3
 * Remapped: dec$b$3
 */
namespace BiomeEffects$GrassColorModifier$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dec$b$3", "net/minecraft/world/level/biome/BiomeSpecialEffects$GrassColorModifier$3", "net/minecraft/class_4763$class_5486$3", "net/minecraft/world/biome/BiomeEffects$GrassColorModifier$3", "net/minecraft/src/C_1645_$C_1648_$C_1651_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getModifiedGrassColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "modifyColor", "method_30823", "getModifiedGrassColor", "m_6583_"), "(DDI)I");
    }

    static jint getModifiedGrassColor(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getModifiedGrassColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_BIOMEEFFECTS$GRASSCOLORMODIFIER$3_HPP