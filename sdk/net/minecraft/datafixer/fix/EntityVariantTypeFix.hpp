// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ENTITYVARIANTTYPEFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ENTITYVARIANTTYPEFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.EntityVariantTypeFix
 * Remapped: bdn
 */
namespace EntityVariantTypeFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bdn", "net/minecraft/util/datafix/fixes/EntityVariantFix", "net/minecraft/class_7371", "net/minecraft/datafixer/fix/EntityVariantTypeFix", "net/minecraft/src/C_212991_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.EntityVariantTypeFix#variantKey
    static jobject get_field_variantKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fieldName", "field_38705", "variantKey", "f_216620_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityVariantTypeFix#variantKey
    static void set_field_variantKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fieldName", "field_38705", "variantKey", "f_216620_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.EntityVariantTypeFix#variantIntToId
    static jobject get_field_variantIntToId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "idConversions", "field_38706", "variantIntToId", "f_216621_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityVariantTypeFix#variantIntToId
    static void set_field_variantIntToId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "idConversions", "field_38706", "variantIntToId", "f_216621_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_updateEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateAndRename", "method_43072", "updateEntity", "m_216636_"), "(Lcom/mojang/serialization/Dynamic;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Function;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateEntity(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_updateEntity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_transform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_5105", "transform", "m_7504_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject transform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ENTITYVARIANTTYPEFIX_HPP