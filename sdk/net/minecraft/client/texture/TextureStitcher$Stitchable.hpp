// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER$STITCHABLE_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER$STITCHABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.TextureStitcher$Stitchable
 * Remapped: gqi$a
 */
namespace TextureStitcher$Stitchable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqi$a", "net/minecraft/client/renderer/texture/Stitcher$Entry", "net/minecraft/class_1055$class_7769", "net/minecraft/client/texture/TextureStitcher$Stitchable", "net/minecraft/src/C_4478_$C_243583_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "width", "method_45807", "getWidth", "m_246492_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "height", "method_45815", "getHeight", "m_245330_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "name", "method_45816", "getId", "m_246162_"), "()Lakr;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER$STITCHABLE_HPP