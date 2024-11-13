// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCETYPE_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCETYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.atlas.AtlasSourceType
 * Remapped: gqr
 */
namespace AtlasSourceType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqr", "net/minecraft/client/renderer/texture/atlas/SpriteSourceType", "net/minecraft/class_7951", "net/minecraft/client/texture/atlas/AtlasSourceType", "net/minecraft/src/C_260409_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.texture.atlas.AtlasSourceType#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "codec", "comp_1162", "codec", "f_260449_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.atlas.AtlasSourceType#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "codec", "comp_1162", "codec", "f_260449_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "comp_1162", "codec", "f_260449_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject _codec(const jobject& obj) {
                
       const auto methodID = methodID__codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCETYPE_HPP