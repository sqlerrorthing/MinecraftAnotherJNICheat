// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ATTRIBUTEIDFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ATTRIBUTEIDFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.AttributeIdFix
 * Remapped: baj
 */
namespace AttributeIdFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("baj", "net/minecraft/util/datafix/fixes/AttributeModifierIdFix", "net/minecraft/class_9785", "net/minecraft/datafixer/fix/AttributeIdFix", "net/minecraft/src/C_336512_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.AttributeIdFix#UUID_TO_ID
    [[maybe_unused]] static jobject get_field_UUID_TO_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ID_MAP", "field_51992", "UUID_TO_ID", "f_336665_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.AttributeIdFix#UUID_TO_ID
    [[maybe_unused]] static void set_field_UUID_TO_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ID_MAP", "field_51992", "UUID_TO_ID", "f_336665_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.AttributeIdFix#NAME_TO_ID
    [[maybe_unused]] static jobject get_field_NAME_TO_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NAME_MAP", "field_51993", "NAME_TO_ID", "f_337679_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.AttributeIdFix#NAME_TO_ID
    [[maybe_unused]] static void set_field_NAME_TO_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NAME_MAP", "field_51993", "NAME_TO_ID", "f_337679_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_method_60683() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixModifiersTypeWrapper", "method_60683", "method_60683", "m_338362_"), "(Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
    }

    static jobject method_60683(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_method_60683();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixModifiers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fixModifiers", "method_60687", "fixModifiers", "m_340081_"), "(Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
    }

    static jobject fixModifiers(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixModifiers();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_renameOtherFields() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertModifierForEntity", "method_60680", "renameOtherFields", "m_339212_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject renameOtherFields(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_renameOtherFields();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixItemStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fixItemStackComponents", "method_60686", "fixItemStack", "m_339689_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixItemStack(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixItemStack();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixAttribute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "fixAttribute", "method_60688", "fixAttribute", "m_339729_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixAttribute(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixAttribute();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixEntity", "method_60679", "fixEntity", "m_340343_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject fixEntity(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixEntity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getUuidFromIntArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "uuidFromIntArray", "method_60684", "getUuidFromIntArray", "m_340572_"), "([I)Ljava/util/UUID;");
    }

    static jobject getUuidFromIntArray(const jarray& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getUuidFromIntArray();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ATTRIBUTEIDFIX_HPP