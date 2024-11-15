// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREFLAG_HPP
#define NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREFLAG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.featuretoggle.FeatureFlag
 * Remapped: cpj
 */
namespace FeatureFlag {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpj", "net/minecraft/world/flag/FeatureFlag", "net/minecraft/class_7696", "net/minecraft/resource/featuretoggle/FeatureFlag", "net/minecraft/src/C_243544_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.resource.featuretoggle.FeatureFlag#universe
    static jobject get_field_universe(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "universe", "field_40163", "universe", "f_243952_"), "Lcpm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.resource.featuretoggle.FeatureFlag#universe
    static void set_field_universe(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "universe", "field_40163", "universe", "f_243952_"), "Lcpm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.resource.featuretoggle.FeatureFlag#mask
    static jlong get_field_mask(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mask", "field_40164", "mask", "f_244012_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.resource.featuretoggle.FeatureFlag#mask
    static void set_field_mask(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mask", "field_40164", "mask", "f_244012_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATUREFLAG_HPP