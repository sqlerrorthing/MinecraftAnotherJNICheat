// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ENTITYCODSALMONFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ENTITYCODSALMONFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.EntityCodSalmonFix
 * Remapped: bcm
 */
namespace EntityCodSalmonFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bcm", "net/minecraft/util/datafix/fixes/EntityCodSalmonFix", "net/minecraft/class_3596", "net/minecraft/datafixer/fix/EntityCodSalmonFix", "net/minecraft/src/C_259_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.datafixer.fix.EntityCodSalmonFix#ENTITIES
    [[maybe_unused]] static jobject get_field_ENTITIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RENAMED_IDS", "field_15892", "ENTITIES", "f_15389_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.datafixer.fix.EntityCodSalmonFix#ENTITIES
    [[maybe_unused]] static void set_field_ENTITIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RENAMED_IDS", "field_15892", "ENTITIES", "f_15389_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.datafixer.fix.EntityCodSalmonFix#SPAWN_EGGS
    [[maybe_unused]] static jobject get_field_SPAWN_EGGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RENAMED_EGG_IDS", "field_15893", "SPAWN_EGGS", "f_15390_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.datafixer.fix.EntityCodSalmonFix#SPAWN_EGGS
    [[maybe_unused]] static void set_field_SPAWN_EGGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RENAMED_EGG_IDS", "field_15893", "SPAWN_EGGS", "f_15390_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_rename() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rename", "method_5163", "rename", "m_7476_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject rename(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_rename();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ENTITYCODSALMONFIX_HPP