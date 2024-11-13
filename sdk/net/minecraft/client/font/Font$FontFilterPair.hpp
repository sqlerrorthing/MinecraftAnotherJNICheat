// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_FONT$FONTFILTERPAIR_HPP
#define NET_MINECRAFT_CLIENT_FONT_FONT$FONTFILTERPAIR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.Font$FontFilterPair
 * Remapped: ezm$a
 */
namespace Font$FontFilterPair {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ezm$a", "com/mojang/blaze3d/font/GlyphProvider$Conditional", "net/minecraft/class_390$class_9241", "net/minecraft/client/font/Font$FontFilterPair", "net/minecraft/src/C_3099_$C_313852_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.font.Font$FontFilterPair#provider
    static jobject get_field_provider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "provider", "comp_2348", "provider", "f_316017_"), "Lezm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.Font$FontFilterPair#provider
    static void set_field_provider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "provider", "comp_2348", "provider", "f_316017_"), "Lezm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.Font$FontFilterPair#filter
    static jobject get_field_filter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "filter", "comp_2349", "filter", "f_316533_"), "Lflc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.Font$FontFilterPair#filter
    static void set_field_filter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "filter", "comp_2349", "filter", "f_316533_"), "Lflc$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__provider() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "provider", "comp_2348", "provider", "f_316017_"), "()Lezm;");
    }

    static jobject _provider(const jobject& obj) {
                
       const auto methodID = methodID__provider();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__filter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "filter", "comp_2349", "filter", "f_316533_"), "()Lflc$a;");
    }

    static jobject _filter(const jobject& obj) {
                
       const auto methodID = methodID__filter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_FONT$FONTFILTERPAIR_HPP