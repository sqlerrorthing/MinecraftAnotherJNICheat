// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ARMORMATERIALS_HPP
#define NET_MINECRAFT_ITEM_ARMORMATERIALS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.ArmorMaterials
 * Remapped: csh
 */
namespace ArmorMaterials {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("csh", "net/minecraft/world/item/ArmorMaterials", "net/minecraft/class_1740", "net/minecraft/item/ArmorMaterials", "net/minecraft/src/C_1318_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.item.ArmorMaterials#LEATHER
    [[maybe_unused]] static jobject get_field_LEATHER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LEATHER", "field_7897", "LEATHER", "f_40453_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ArmorMaterials#LEATHER
    [[maybe_unused]] static void set_field_LEATHER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LEATHER", "field_7897", "LEATHER", "f_40453_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.ArmorMaterials#CHAIN
    [[maybe_unused]] static jobject get_field_CHAIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHAIN", "field_7887", "CHAIN", "f_40454_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ArmorMaterials#CHAIN
    [[maybe_unused]] static void set_field_CHAIN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CHAIN", "field_7887", "CHAIN", "f_40454_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.ArmorMaterials#IRON
    [[maybe_unused]] static jobject get_field_IRON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "IRON", "field_7892", "IRON", "f_40455_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ArmorMaterials#IRON
    [[maybe_unused]] static void set_field_IRON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "IRON", "field_7892", "IRON", "f_40455_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.ArmorMaterials#GOLD
    [[maybe_unused]] static jobject get_field_GOLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GOLD", "field_7895", "GOLD", "f_40456_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ArmorMaterials#GOLD
    [[maybe_unused]] static void set_field_GOLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "GOLD", "field_7895", "GOLD", "f_40456_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.ArmorMaterials#DIAMOND
    [[maybe_unused]] static jobject get_field_DIAMOND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DIAMOND", "field_7889", "DIAMOND", "f_40457_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ArmorMaterials#DIAMOND
    [[maybe_unused]] static void set_field_DIAMOND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DIAMOND", "field_7889", "DIAMOND", "f_40457_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.ArmorMaterials#TURTLE
    [[maybe_unused]] static jobject get_field_TURTLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TURTLE", "field_7890", "TURTLE", "f_40458_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ArmorMaterials#TURTLE
    [[maybe_unused]] static void set_field_TURTLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TURTLE", "field_7890", "TURTLE", "f_40458_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.ArmorMaterials#NETHERITE
    [[maybe_unused]] static jobject get_field_NETHERITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "NETHERITE", "field_21977", "NETHERITE", "f_40459_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ArmorMaterials#NETHERITE
    [[maybe_unused]] static void set_field_NETHERITE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "NETHERITE", "field_21977", "NETHERITE", "f_40459_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.ArmorMaterials#ARMADILLO
    [[maybe_unused]] static jobject get_field_ARMADILLO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ARMADILLO", "field_48846", "ARMADILLO", "f_315454_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ArmorMaterials#ARMADILLO
    [[maybe_unused]] static void set_field_ARMADILLO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ARMADILLO", "field_48846", "ARMADILLO", "f_315454_"), "Ljm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getDefault() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_56697", "getDefault", "m_324135_"), "(Ljz;)Ljm;");
    }

    static jobject getDefault(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getDefault();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_56698", "register", "m_320538_"), "(Ljava/lang/String;Ljava/util/EnumMap;ILjm;FFLjava/util/function/Supplier;)Ljm;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID__register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_56699", "register", "m_321583_"), "(Ljava/lang/String;Ljava/util/EnumMap;ILjm;FFLjava/util/function/Supplier;Ljava/util/List;)Ljm;");
    }

    static jobject _register(const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jobject& arg6, const jobject& arg7) {
       const auto clazz = self();
       const auto methodID = methodID__register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ARMORMATERIALS_HPP