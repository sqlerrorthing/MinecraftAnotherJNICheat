// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCE_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.atlas.AtlasSource
 * Remapped: gqp
 */
namespace AtlasSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqp", "net/minecraft/client/renderer/texture/atlas/SpriteSource", "net/minecraft/class_7948", "net/minecraft/client/texture/atlas/AtlasSource", "net/minecraft/src/C_260369_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.texture.atlas.AtlasSource#RESOURCE_FINDER
    [[maybe_unused]] static jobject get_field_RESOURCE_FINDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURE_ID_CONVERTER", "field_42075", "RESOURCE_FINDER", "f_266012_"), "Lakk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.atlas.AtlasSource#RESOURCE_FINDER
    [[maybe_unused]] static void set_field_RESOURCE_FINDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TEXTURE_ID_CONVERTER", "field_42075", "RESOURCE_FINDER", "f_266012_"), "Lakk;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "run", "method_47673", "load", "m_260891_"), "(Laue;Lgqp$a;)V");
    }

    static void load(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_load();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_47672", "getType", "m_260850_"), "()Lgqr;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCE_HPP