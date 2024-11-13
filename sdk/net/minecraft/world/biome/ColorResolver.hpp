// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_COLORRESOLVER_HPP
#define NET_MINECRAFT_WORLD_BIOME_COLORRESOLVER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.ColorResolver
 * Remapped: dch
 */
namespace ColorResolver {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dch", "net/minecraft/world/level/ColorResolver", "net/minecraft/class_6539", "net/minecraft/world/biome/ColorResolver", "net/minecraft/src/C_4982_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getColor", "getColor", "getColor", "getColor", "m_130045_"), "(Lddw;DD)I");
    }

    static jint getColor(const jobject& obj, const jobject& arg0, const jdouble& arg1, const jdouble& arg2) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_COLORRESOLVER_HPP