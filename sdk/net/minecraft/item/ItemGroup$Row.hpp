// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ITEMGROUP$ROW_HPP
#define NET_MINECRAFT_ITEM_ITEMGROUP$ROW_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.ItemGroup$Row
 * Remapped: cta$f
 */
namespace ItemGroup$Row {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cta$f", "net/minecraft/world/item/CreativeModeTab$Row", "net/minecraft/class_1761$class_7915", "net/minecraft/item/ItemGroup$Row", "net/minecraft/src/C_1336_$C_256677_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.item.ItemGroup$Row#TOP
    [[maybe_unused]] static jobject get_field_TOP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TOP", "field_41049", "TOP", "TOP"), "Lcta$f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ItemGroup$Row#TOP
    [[maybe_unused]] static void set_field_TOP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TOP", "field_41049", "TOP", "TOP"), "Lcta$f;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.ItemGroup$Row#BOTTOM
    [[maybe_unused]] static jobject get_field_BOTTOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOTTOM", "field_41050", "BOTTOM", "BOTTOM"), "Lcta$f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.ItemGroup$Row#BOTTOM
    [[maybe_unused]] static void set_field_BOTTOM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOTTOM", "field_41050", "BOTTOM", "BOTTOM"), "Lcta$f;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcta$f;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcta$f;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ITEMGROUP$ROW_HPP