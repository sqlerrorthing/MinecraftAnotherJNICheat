// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_ENDCONFIGUREDFEATURES_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_ENDCONFIGUREDFEATURES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.EndConfiguredFeatures
 * Remapped: rq
 */
namespace EndConfiguredFeatures {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("rq", "net/minecraft/data/worldgen/features/EndFeatures", "net/minecraft/class_6802", "net/minecraft/world/gen/feature/EndConfiguredFeatures", "net/minecraft/src/C_183087_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_PLATFORM
    [[maybe_unused]] static jobject get_field_END_PLATFORM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "END_PLATFORM", "field_52309", "END_PLATFORM", "f_337057_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_PLATFORM
    [[maybe_unused]] static void set_field_END_PLATFORM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "END_PLATFORM", "field_52309", "END_PLATFORM", "f_337057_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_SPIKE
    [[maybe_unused]] static jobject get_field_END_SPIKE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "END_SPIKE", "field_35795", "END_SPIKE", "f_194982_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_SPIKE
    [[maybe_unused]] static void set_field_END_SPIKE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "END_SPIKE", "field_35795", "END_SPIKE", "f_194982_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_GATEWAY_RETURN
    [[maybe_unused]] static jobject get_field_END_GATEWAY_RETURN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "END_GATEWAY_RETURN", "field_35796", "END_GATEWAY_RETURN", "f_194983_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_GATEWAY_RETURN
    [[maybe_unused]] static void set_field_END_GATEWAY_RETURN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "END_GATEWAY_RETURN", "field_35796", "END_GATEWAY_RETURN", "f_194983_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_GATEWAY_DELAYED
    [[maybe_unused]] static jobject get_field_END_GATEWAY_DELAYED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "END_GATEWAY_DELAYED", "field_35797", "END_GATEWAY_DELAYED", "f_194984_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_GATEWAY_DELAYED
    [[maybe_unused]] static void set_field_END_GATEWAY_DELAYED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "END_GATEWAY_DELAYED", "field_35797", "END_GATEWAY_DELAYED", "f_194984_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#CHORUS_PLANT
    [[maybe_unused]] static jobject get_field_CHORUS_PLANT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CHORUS_PLANT", "field_35798", "CHORUS_PLANT", "f_194985_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#CHORUS_PLANT
    [[maybe_unused]] static void set_field_CHORUS_PLANT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CHORUS_PLANT", "field_35798", "CHORUS_PLANT", "f_194985_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_ISLAND
    [[maybe_unused]] static jobject get_field_END_ISLAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "END_ISLAND", "field_35799", "END_ISLAND", "f_194986_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.EndConfiguredFeatures#END_ISLAND
    [[maybe_unused]] static void set_field_END_ISLAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "END_ISLAND", "field_35799", "END_ISLAND", "f_194986_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_46851", "bootstrap", "m_255085_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_ENDCONFIGUREDFEATURES_HPP