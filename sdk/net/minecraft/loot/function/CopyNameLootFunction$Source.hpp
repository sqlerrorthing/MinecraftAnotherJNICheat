// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_COPYNAMELOOTFUNCTION$SOURCE_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_COPYNAMELOOTFUNCTION$SOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.CopyNameLootFunction$Source
 * Remapped: est$a
 */
namespace CopyNameLootFunction$Source {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("est$a", "net/minecraft/world/level/storage/loot/functions/CopyNameFunction$NameSource", "net/minecraft/class_101$class_102", "net/minecraft/loot/function/CopyNameLootFunction$Source", "net/minecraft/src/C_2892_$C_2894_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#THIS
    [[maybe_unused]] static jobject get_field_THIS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "THIS", "field_1022", "THIS", "THIS"), "Lest$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#THIS
    [[maybe_unused]] static void set_field_THIS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "THIS", "field_1022", "THIS", "THIS"), "Lest$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#ATTACKING_ENTITY
    [[maybe_unused]] static jobject get_field_ATTACKING_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ATTACKING_ENTITY", "field_51790", "ATTACKING_ENTITY", "ATTACKING_ENTITY"), "Lest$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#ATTACKING_ENTITY
    [[maybe_unused]] static void set_field_ATTACKING_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ATTACKING_ENTITY", "field_51790", "ATTACKING_ENTITY", "ATTACKING_ENTITY"), "Lest$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#LAST_DAMAGE_PLAYER
    [[maybe_unused]] static jobject get_field_LAST_DAMAGE_PLAYER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LAST_DAMAGE_PLAYER", "field_51791", "LAST_DAMAGE_PLAYER", "LAST_DAMAGE_PLAYER"), "Lest$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#LAST_DAMAGE_PLAYER
    [[maybe_unused]] static void set_field_LAST_DAMAGE_PLAYER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LAST_DAMAGE_PLAYER", "field_51791", "LAST_DAMAGE_PLAYER", "LAST_DAMAGE_PLAYER"), "Lest$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#BLOCK_ENTITY
    [[maybe_unused]] static jobject get_field_BLOCK_ENTITY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BLOCK_ENTITY", "field_1023", "BLOCK_ENTITY", "BLOCK_ENTITY"), "Lest$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#BLOCK_ENTITY
    [[maybe_unused]] static void set_field_BLOCK_ENTITY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BLOCK_ENTITY", "field_1023", "BLOCK_ENTITY", "BLOCK_ENTITY"), "Lest$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_45818", "CODEC", "f_291515_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.CopyNameLootFunction$Source#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_45818", "CODEC", "f_291515_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.CopyNameLootFunction$Source#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "name", "field_1025", "name", "f_80199_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.CopyNameLootFunction$Source#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "name", "field_1025", "name", "f_80199_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.loot.function.CopyNameLootFunction$Source#parameter
    static jobject get_field_parameter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "param", "field_1024", "parameter", "f_80200_"), "Leuk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.loot.function.CopyNameLootFunction$Source#parameter
    static void set_field_parameter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "param", "field_1024", "parameter", "f_80200_"), "Leuk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lest$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lest$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_COPYNAMELOOTFUNCTION$SOURCE_HPP