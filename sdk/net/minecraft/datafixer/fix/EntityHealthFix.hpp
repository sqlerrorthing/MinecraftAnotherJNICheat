// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ENTITYHEALTHFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ENTITYHEALTHFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.EntityHealthFix
 * Remapped: bcr
 */
namespace EntityHealthFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bcr", "net/minecraft/util/datafix/fixes/EntityHealthFix", "net/minecraft/class_3600", "net/minecraft/datafixer/fix/EntityHealthFix", "net/minecraft/src/C_263_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityHealthFix#ENTITIES
    [[maybe_unused]] static jobject get_field_ENTITIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTITIES", "field_15894", "ENTITIES", "f_15431_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityHealthFix#ENTITIES
    [[maybe_unused]] static void set_field_ENTITIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ENTITIES", "field_15894", "ENTITIES", "f_15431_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_fixHealth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fixTag", "method_15704", "fixHealth", "m_15438_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixHealth(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fixHealth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ENTITYHEALTHFIX_HPP