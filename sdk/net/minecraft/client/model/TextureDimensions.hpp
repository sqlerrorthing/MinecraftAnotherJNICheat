// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_MODEL_TEXTUREDIMENSIONS_HPP
#define NET_MINECRAFT_CLIENT_MODEL_TEXTUREDIMENSIONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.model.TextureDimensions
 * Remapped: fyr
 */
namespace TextureDimensions {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fyr", "net/minecraft/client/model/geom/builders/MaterialDefinition", "net/minecraft/class_5608", "net/minecraft/client/model/TextureDimensions", "net/minecraft/src/C_141664_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.model.TextureDimensions#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "xTexSize", "field_27725", "width", "f_171569_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.model.TextureDimensions#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "xTexSize", "field_27725", "width", "f_171569_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.model.TextureDimensions#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "yTexSize", "field_27726", "height", "f_171570_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.model.TextureDimensions#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "yTexSize", "field_27726", "height", "f_171570_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_MODEL_TEXTUREDIMENSIONS_HPP