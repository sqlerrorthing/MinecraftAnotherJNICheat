// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREMANAGER$BUILDER_HPP
#define NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREMANAGER$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.featuretoggle.FeatureManager$Builder
 * Remapped: cpk$a
 */
namespace FeatureManager$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpk$a", "net/minecraft/world/flag/FeatureFlagRegistry$Builder", "net/minecraft/class_7697$class_7698", "net/minecraft/resource/featuretoggle/FeatureManager$Builder", "net/minecraft/src/C_243438_$C_243492_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.resource.featuretoggle.FeatureManager$Builder#universe
    static jobject get_field_universe(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "universe", "field_40169", "universe", "f_243698_"), "Lcpm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.featuretoggle.FeatureManager$Builder#universe
    static void set_field_universe(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "universe", "field_40169", "universe", "f_243698_"), "Lcpm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.featuretoggle.FeatureManager$Builder#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "field_40170", "id", "f_244365_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.featuretoggle.FeatureManager$Builder#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "field_40170", "id", "f_244365_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.featuretoggle.FeatureManager$Builder#featureFlags
    static jobject get_field_featureFlags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "flags", "field_40171", "featureFlags", "f_244349_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.featuretoggle.FeatureManager$Builder#featureFlags
    static void set_field_featureFlags(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "flags", "field_40171", "featureFlags", "f_244349_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addVanillaFlag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createVanilla", "method_45396", "addVanillaFlag", "m_246015_"), "(Ljava/lang/String;)Lcpj;");
    }

    static jobject addVanillaFlag(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addVanillaFlag();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addFlag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_45395", "addFlag", "m_247497_"), "(Lakr;)Lcpj;");
    }

    static jobject addFlag(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addFlag();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_45394", "build", "m_245707_"), "()Lcpk;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREMANAGER$BUILDER_HPP