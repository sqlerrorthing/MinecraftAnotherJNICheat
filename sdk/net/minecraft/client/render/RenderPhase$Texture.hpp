// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TEXTURE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TEXTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderPhase$Texture
 * Remapped: gfg$n
 */
namespace RenderPhase$Texture {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfg$n", "net/minecraft/client/renderer/RenderStateShard$TextureStateShard", "net/minecraft/class_4668$class_4683", "net/minecraft/client/render/RenderPhase$Texture", "net/minecraft/src/C_4149_$C_4164_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.RenderPhase$Texture#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aQ", "texture", "field_21397", "id", "f_110328_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderPhase$Texture#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aQ", "texture", "field_21397", "id", "f_110328_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderPhase$Texture#blur
    static jboolean get_field_blur(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aR", "blur", "field_21398", "blur", "f_110329_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderPhase$Texture#blur
    static void set_field_blur(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aR", "blur", "field_21398", "blur", "f_110329_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderPhase$Texture#mipmap
    static jboolean get_field_mipmap(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aS", "mipmap", "field_21399", "mipmap", "f_110330_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderPhase$Texture#mipmap
    static void set_field_mipmap(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("aS", "mipmap", "field_21399", "mipmap", "f_110330_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "cutoutTexture", "method_23564", "getId", "m_142706_"), "()Ljava/util/Optional;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERPHASE$TEXTURE_HPP