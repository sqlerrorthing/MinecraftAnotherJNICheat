// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_MUTABLEWORLDPROPERTIES_HPP
#define NET_MINECRAFT_WORLD_MUTABLEWORLDPROPERTIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.MutableWorldProperties
 * Remapped: erm
 */
namespace MutableWorldProperties {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("erm", "net/minecraft/world/level/storage/WritableLevelData", "net/minecraft/class_5269", "net/minecraft/world/MutableWorldProperties", "net/minecraft/src/C_2796_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_setSpawnPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSpawn", "method_187", "setSpawnPos", "m_7250_"), "(Ljd;F)V");
    }

    static void setSpawnPos(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_setSpawnPos();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_MUTABLEWORLDPROPERTIES_HPP