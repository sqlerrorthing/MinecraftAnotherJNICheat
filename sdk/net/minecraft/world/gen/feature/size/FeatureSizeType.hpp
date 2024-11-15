// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_FEATURESIZETYPE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_FEATURESIZETYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.size.FeatureSizeType
 * Remapped: efk
 */
namespace FeatureSizeType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efk", "net/minecraft/world/level/levelgen/feature/featuresize/FeatureSizeType", "net/minecraft/class_5202", "net/minecraft/world/gen/feature/size/FeatureSizeType", "net/minecraft/src/C_2371_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.size.FeatureSizeType#TWO_LAYERS_FEATURE_SIZE
    [[maybe_unused]] static jobject get_field_TWO_LAYERS_FEATURE_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TWO_LAYERS_FEATURE_SIZE", "field_24147", "TWO_LAYERS_FEATURE_SIZE", "f_68296_"), "Lefk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.size.FeatureSizeType#TWO_LAYERS_FEATURE_SIZE
    [[maybe_unused]] static void set_field_TWO_LAYERS_FEATURE_SIZE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TWO_LAYERS_FEATURE_SIZE", "field_24147", "TWO_LAYERS_FEATURE_SIZE", "f_68296_"), "Lefk;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.feature.size.FeatureSizeType#THREE_LAYERS_FEATURE_SIZE
    [[maybe_unused]] static jobject get_field_THREE_LAYERS_FEATURE_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "THREE_LAYERS_FEATURE_SIZE", "field_24148", "THREE_LAYERS_FEATURE_SIZE", "f_68297_"), "Lefk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.size.FeatureSizeType#THREE_LAYERS_FEATURE_SIZE
    [[maybe_unused]] static void set_field_THREE_LAYERS_FEATURE_SIZE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "THREE_LAYERS_FEATURE_SIZE", "field_24148", "THREE_LAYERS_FEATURE_SIZE", "f_68297_"), "Lefk;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.size.FeatureSizeType#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "codec", "field_24923", "codec", "f_68298_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.size.FeatureSizeType#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "codec", "field_24923", "codec", "f_68298_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_27382", "register", "m_68303_"), "(Ljava/lang/String;Lcom/mojang/serialization/MapCodec;)Lefk;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_28825", "getCodec", "m_68302_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_FEATURESIZETYPE_HPP