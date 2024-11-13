// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_REMOVEFEATURETOGGLESFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_REMOVEFEATURETOGGLESFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.RemoveFeatureTogglesFix
 * Remapped: bds
 */
namespace RemoveFeatureTogglesFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bds", "net/minecraft/util/datafix/fixes/FeatureFlagRemoveFix", "net/minecraft/class_8223", "net/minecraft/datafixer/fix/RemoveFeatureTogglesFix", "net/minecraft/src/C_276395_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.RemoveFeatureTogglesFix#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_43176", "name", "f_276637_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.RemoveFeatureTogglesFix#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "name", "field_43176", "name", "f_276637_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.RemoveFeatureTogglesFix#featureToggleIds
    static jobject get_field_featureToggleIds(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "flagsToRemove", "field_43177", "featureToggleIds", "f_276634_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.RemoveFeatureTogglesFix#featureToggleIds
    static void set_field_featureToggleIds(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "flagsToRemove", "field_43177", "featureToggleIds", "f_276634_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeFeatureToggles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fixTag", "method_49767", "removeFeatureToggles", "m_276796_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject removeFeatureToggles(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeFeatureToggles();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_REMOVEFEATURETOGGLESFIX_HPP