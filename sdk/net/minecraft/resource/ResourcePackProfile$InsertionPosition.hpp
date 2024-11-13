// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_RESOURCEPACKPROFILE$INSERTIONPOSITION_HPP
#define NET_MINECRAFT_RESOURCE_RESOURCEPACKPROFILE$INSERTIONPOSITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.ResourcePackProfile$InsertionPosition
 * Remapped: atm$b
 */
namespace ResourcePackProfile$InsertionPosition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("atm$b", "net/minecraft/server/packs/repository/Pack$Position", "net/minecraft/class_3288$class_3289", "net/minecraft/resource/ResourcePackProfile$InsertionPosition", "net/minecraft/src/C_58_$C_60_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.resource.ResourcePackProfile$InsertionPosition#TOP
    [[maybe_unused]] static jobject get_field_TOP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TOP", "field_14280", "TOP", "TOP"), "Latm$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.ResourcePackProfile$InsertionPosition#TOP
    [[maybe_unused]] static void set_field_TOP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TOP", "field_14280", "TOP", "TOP"), "Latm$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.ResourcePackProfile$InsertionPosition#BOTTOM
    [[maybe_unused]] static jobject get_field_BOTTOM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOTTOM", "field_14281", "BOTTOM", "BOTTOM"), "Latm$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.ResourcePackProfile$InsertionPosition#BOTTOM
    [[maybe_unused]] static void set_field_BOTTOM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BOTTOM", "field_14281", "BOTTOM", "BOTTOM"), "Latm$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Latm$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Latm$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_insert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "insert", "method_14468", "insert", "m_10470_"), "(Ljava/util/List;Ljava/lang/Object;Ljava/util/function/Function;Z)I");
    }

    static jint insert(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_insert();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_inverse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "opposite", "method_14467", "inverse", "m_10469_"), "()Latm$b;");
    }

    static jobject inverse(const jobject& obj) {
                
       const auto methodID = methodID_inverse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_RESOURCEPACKPROFILE$INSERTIONPOSITION_HPP