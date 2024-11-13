// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_FUNCTION_VALUELISTS$OUTOFBOUNDSHANDLING_HPP
#define NET_MINECRAFT_UTIL_FUNCTION_VALUELISTS$OUTOFBOUNDSHANDLING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.function.ValueLists$OutOfBoundsHandling
 * Remapped: axe$a
 */
namespace ValueLists$OutOfBoundsHandling {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axe$a", "net/minecraft/util/ByIdMap$OutOfBoundsStrategy", "net/minecraft/class_7995$class_7996", "net/minecraft/util/function/ValueLists$OutOfBoundsHandling", "net/minecraft/src/C_262716_$C_262714_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.function.ValueLists$OutOfBoundsHandling#ZERO
    [[maybe_unused]] static jobject get_field_ZERO() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ZERO", "field_41664", "ZERO", "ZERO"), "Laxe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.function.ValueLists$OutOfBoundsHandling#ZERO
    [[maybe_unused]] static void set_field_ZERO(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ZERO", "field_41664", "ZERO", "ZERO"), "Laxe$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.function.ValueLists$OutOfBoundsHandling#WRAP
    [[maybe_unused]] static jobject get_field_WRAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WRAP", "field_41665", "WRAP", "WRAP"), "Laxe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.function.ValueLists$OutOfBoundsHandling#WRAP
    [[maybe_unused]] static void set_field_WRAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WRAP", "field_41665", "WRAP", "WRAP"), "Laxe$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.function.ValueLists$OutOfBoundsHandling#CLAMP
    [[maybe_unused]] static jobject get_field_CLAMP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CLAMP", "field_41666", "CLAMP", "CLAMP"), "Laxe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.function.ValueLists$OutOfBoundsHandling#CLAMP
    [[maybe_unused]] static void set_field_CLAMP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CLAMP", "field_41666", "CLAMP", "CLAMP"), "Laxe$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Laxe$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Laxe$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_FUNCTION_VALUELISTS$OUTOFBOUNDSHANDLING_HPP