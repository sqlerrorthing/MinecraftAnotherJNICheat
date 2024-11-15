// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_WOLFVARIANT_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_WOLFVARIANT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.WolfVariant
 * Remapped: cgi
 */
namespace WolfVariant {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgi", "net/minecraft/world/entity/animal/WolfVariant", "net/minecraft/class_9346", "net/minecraft/entity/passive/WolfVariant", "net/minecraft/src/C_313327_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.passive.WolfVariant#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_49724", "CODEC", "f_314617_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.WolfVariant#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_49724", "CODEC", "f_314617_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.WolfVariant#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DIRECT_STREAM_CODEC", "field_51943", "PACKET_CODEC", "f_336862_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.WolfVariant#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DIRECT_STREAM_CODEC", "field_51943", "PACKET_CODEC", "f_336862_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.WolfVariant#ENTRY_CODEC
    [[maybe_unused]] static jobject get_field_ENTRY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_49980", "ENTRY_CODEC", "f_316262_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.WolfVariant#ENTRY_CODEC
    [[maybe_unused]] static void set_field_ENTRY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_49980", "ENTRY_CODEC", "f_316262_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.WolfVariant#ENTRY_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_ENTRY_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_51944", "ENTRY_PACKET_CODEC", "f_337086_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.WolfVariant#ENTRY_PACKET_CODEC
    [[maybe_unused]] static void set_field_ENTRY_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_51944", "ENTRY_PACKET_CODEC", "f_337086_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfVariant#wildId
    static jobject get_field_wildId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "wildTexture", "field_49981", "wildId", "f_315652_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfVariant#wildId
    static void set_field_wildId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "wildTexture", "field_49981", "wildId", "f_315652_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfVariant#tameId
    static jobject get_field_tameId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "tameTexture", "field_49982", "tameId", "f_314029_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfVariant#tameId
    static void set_field_tameId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "tameTexture", "field_49982", "tameId", "f_314029_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfVariant#angryId
    static jobject get_field_angryId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "angryTexture", "field_49983", "angryId", "f_316040_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfVariant#angryId
    static void set_field_angryId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "angryTexture", "field_49983", "angryId", "f_316040_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfVariant#wildTextureId
    static jobject get_field_wildTextureId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "wildTextureFull", "field_49984", "wildTextureId", "f_314959_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfVariant#wildTextureId
    static void set_field_wildTextureId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "wildTextureFull", "field_49984", "wildTextureId", "f_314959_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfVariant#tameTextureId
    static jobject get_field_tameTextureId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "tameTextureFull", "field_49985", "tameTextureId", "f_314931_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfVariant#tameTextureId
    static void set_field_tameTextureId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "tameTextureFull", "field_49985", "tameTextureId", "f_314931_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfVariant#angryTextureId
    static jobject get_field_angryTextureId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "angryTextureFull", "field_49986", "angryTextureId", "f_314025_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfVariant#angryTextureId
    static void set_field_angryTextureId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "angryTextureFull", "field_49986", "angryTextureId", "f_314025_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.WolfVariant#biomes
    static jobject get_field_biomes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "biomes", "field_49987", "biomes", "f_314141_"), "Ljq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.WolfVariant#biomes
    static void set_field_biomes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "biomes", "field_49987", "biomes", "f_314141_"), "Ljq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTextureId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fullTextureId", "method_58378", "getTextureId", "m_319020_"), "(Lakr;)Lakr;");
    }

    static jobject getTextureId(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getTextureId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getWildTextureId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "wildTexture", "method_58377", "getWildTextureId", "m_321466_"), "()Lakr;");
    }

    static jobject getWildTextureId(const jobject& obj) {
                
       const auto methodID = methodID_getWildTextureId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTameTextureId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tameTexture", "method_58381", "getTameTextureId", "m_323730_"), "()Lakr;");
    }

    static jobject getTameTextureId(const jobject& obj) {
                
       const auto methodID = methodID_getTameTextureId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAngryTextureId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "angryTexture", "method_58383", "getAngryTextureId", "m_323442_"), "()Lakr;");
    }

    static jobject getAngryTextureId(const jobject& obj) {
                
       const auto methodID = methodID_getAngryTextureId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "biomes", "method_58385", "getBiomes", "m_320548_"), "()Ljq;");
    }

    static jobject getBiomes(const jobject& obj) {
                
       const auto methodID = methodID_getBiomes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_WOLFVARIANT_HPP