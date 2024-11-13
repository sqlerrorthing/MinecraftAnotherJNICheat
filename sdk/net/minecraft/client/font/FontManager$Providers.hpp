// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_FONTMANAGER$PROVIDERS_HPP
#define NET_MINECRAFT_CLIENT_FONT_FONTMANAGER$PROVIDERS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.FontManager$Providers
 * Remapped: flb$c
 */
namespace FontManager$Providers {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flb$c", "net/minecraft/client/gui/font/FontManager$FontDefinitionFile", "net/minecraft/class_378$class_8556", "net/minecraft/client/font/FontManager$Providers", "net/minecraft/src/C_3509_$C_285540_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.font.FontManager$Providers#providers
    static jobject get_field_providers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "providers", "comp_1518", "providers", "f_285612_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.FontManager$Providers#providers
    static void set_field_providers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "providers", "comp_1518", "providers", "f_285612_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.FontManager$Providers#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44798", "CODEC", "f_285562_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.FontManager$Providers#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44798", "CODEC", "f_285562_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__providers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "providers", "comp_1518", "providers", "f_285612_"), "()Ljava/util/List;");
    }

    static jobject _providers(const jobject& obj) {
                
       const auto methodID = methodID__providers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_FONTMANAGER$PROVIDERS_HPP