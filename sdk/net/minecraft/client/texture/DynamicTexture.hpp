// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_DYNAMICTEXTURE_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_DYNAMICTEXTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.DynamicTexture
 * Remapped: gpx
 */
namespace DynamicTexture {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gpx", "net/minecraft/client/renderer/texture/Dumpable", "net/minecraft/class_8215", "net/minecraft/client/texture/DynamicTexture", "net/minecraft/src/C_276066_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_save() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dumpContents", "method_49712", "save", "m_276079_"), "(Lakr;Ljava/nio/file/Path;)V");
    }

    static void save(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_save();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_DYNAMICTEXTURE_HPP