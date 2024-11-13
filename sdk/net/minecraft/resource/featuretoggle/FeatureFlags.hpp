// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREFLAGS_HPP
#define NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREFLAGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.featuretoggle.FeatureFlags
 * Remapped: cpn
 */
namespace FeatureFlags {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpn", "net/minecraft/world/flag/FeatureFlags", "net/minecraft/class_7701", "net/minecraft/resource/featuretoggle/FeatureFlags", "net/minecraft/src/C_243533_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#VANILLA
    [[maybe_unused]] static jobject get_field_VANILLA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VANILLA", "field_40177", "VANILLA", "f_244571_"), "Lcpj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#VANILLA
    [[maybe_unused]] static void set_field_VANILLA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VANILLA", "field_40177", "VANILLA", "f_244571_"), "Lcpj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#BUNDLE
    [[maybe_unused]] static jobject get_field_BUNDLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BUNDLE", "field_40178", "BUNDLE", "f_244112_"), "Lcpj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#BUNDLE
    [[maybe_unused]] static void set_field_BUNDLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BUNDLE", "field_40178", "BUNDLE", "f_244112_"), "Lcpj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#TRADE_REBALANCE
    [[maybe_unused]] static jobject get_field_TRADE_REBALANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TRADE_REBALANCE", "field_45142", "TRADE_REBALANCE", "f_291580_"), "Lcpj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#TRADE_REBALANCE
    [[maybe_unused]] static void set_field_TRADE_REBALANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "TRADE_REBALANCE", "field_45142", "TRADE_REBALANCE", "f_291580_"), "Lcpj;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#FEATURE_MANAGER
    [[maybe_unused]] static jobject get_field_FEATURE_MANAGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "REGISTRY", "field_40180", "FEATURE_MANAGER", "f_244280_"), "Lcpk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#FEATURE_MANAGER
    [[maybe_unused]] static void set_field_FEATURE_MANAGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "REGISTRY", "field_40180", "FEATURE_MANAGER", "f_244280_"), "Lcpk;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_40181", "CODEC", "f_244298_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_40181", "CODEC", "f_244298_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#VANILLA_FEATURES
    [[maybe_unused]] static jobject get_field_VANILLA_FEATURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "VANILLA_SET", "field_40182", "VANILLA_FEATURES", "f_244377_"), "Lcpl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#VANILLA_FEATURES
    [[maybe_unused]] static void set_field_VANILLA_FEATURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "VANILLA_SET", "field_40182", "VANILLA_FEATURES", "f_244377_"), "Lcpl;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#DEFAULT_ENABLED_FEATURES
    [[maybe_unused]] static jobject get_field_DEFAULT_ENABLED_FEATURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DEFAULT_FLAGS", "field_40183", "DEFAULT_ENABLED_FEATURES", "f_244332_"), "Lcpl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.featuretoggle.FeatureFlags#DEFAULT_ENABLED_FEATURES
    [[maybe_unused]] static void set_field_DEFAULT_ENABLED_FEATURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DEFAULT_FLAGS", "field_40183", "DEFAULT_ENABLED_FEATURES", "f_244332_"), "Lcpl;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_printMissingFlags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "printMissingFlags", "method_45407", "printMissingFlags", "m_245229_"), "(Lcpl;Lcpl;)Ljava/lang/String;");
    }

    static jobject printMissingFlags(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_printMissingFlags();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__printMissingFlags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "printMissingFlags", "method_45405", "printMissingFlags", "m_247250_"), "(Lcpk;Lcpl;Lcpl;)Ljava/lang/String;");
    }

    static jobject _printMissingFlags(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__printMissingFlags();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isNotVanilla() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isExperimental", "method_45406", "isNotVanilla", "m_246811_"), "(Lcpl;)Z");
    }

    static jboolean isNotVanilla(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isNotVanilla();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREFLAGS_HPP