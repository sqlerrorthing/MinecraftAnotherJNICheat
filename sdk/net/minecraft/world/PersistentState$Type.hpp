// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_PERSISTENTSTATE$TYPE_HPP
#define NET_MINECRAFT_WORLD_PERSISTENTSTATE$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.PersistentState$Type
 * Remapped: eql$a
 */
namespace PersistentState$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eql$a", "net/minecraft/world/level/saveddata/SavedData$Factory", "net/minecraft/class_18$class_8645", "net/minecraft/world/PersistentState$Type", "net/minecraft/src/C_2764_$C_290195_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.PersistentState$Type#constructor
    static jobject get_field_constructor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "constructor", "comp_1590", "constructor", "f_291749_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.PersistentState$Type#constructor
    static void set_field_constructor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "constructor", "comp_1590", "constructor", "f_291749_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.PersistentState$Type#deserializer
    static jobject get_field_deserializer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "deserializer", "comp_1591", "deserializer", "f_291599_"), "Ljava/util/function/BiFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.PersistentState$Type#deserializer
    static void set_field_deserializer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "deserializer", "comp_1591", "deserializer", "f_291599_"), "Ljava/util/function/BiFunction;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.PersistentState$Type#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "type", "comp_1592", "type", "f_291120_"), "Lazw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.PersistentState$Type#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "type", "comp_1592", "type", "f_291120_"), "Lazw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__constructor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "constructor", "comp_1590", "constructor", "f_291749_"), "()Ljava/util/function/Supplier;");
    }

    static jobject _constructor(const jobject& obj) {
                
       const auto methodID = methodID__constructor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__deserializer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "deserializer", "comp_1591", "deserializer", "f_291599_"), "()Ljava/util/function/BiFunction;");
    }

    static jobject _deserializer(const jobject& obj) {
                
       const auto methodID = methodID__deserializer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "type", "comp_1592", "type", "f_291120_"), "()Lazw;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_PERSISTENTSTATE$TYPE_HPP