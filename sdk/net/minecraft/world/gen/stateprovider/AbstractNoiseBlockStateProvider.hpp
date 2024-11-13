// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_STATEPROVIDER_ABSTRACTNOISEBLOCKSTATEPROVIDER_HPP
#define NET_MINECRAFT_WORLD_GEN_STATEPROVIDER_ABSTRACTNOISEBLOCKSTATEPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider
 * Remapped: egm
 */
namespace AbstractNoiseBlockStateProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("egm", "net/minecraft/world/level/levelgen/feature/stateproviders/NoiseBasedStateProvider", "net/minecraft/class_6579", "net/minecraft/world/gen/stateprovider/AbstractNoiseBlockStateProvider", "net/minecraft/src/C_182996_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider#seed
    static jlong get_field_seed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "seed", "field_34707", "seed", "f_191417_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider#seed
    static void set_field_seed(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "seed", "field_34707", "seed", "f_191417_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider#noiseParameters
    static jobject get_field_noiseParameters(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "parameters", "field_34708", "noiseParameters", "f_191418_"), "Leoh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider#noiseParameters
    static void set_field_noiseParameters(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "parameters", "field_34708", "noiseParameters", "f_191418_"), "Leoh$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider#scale
    static jfloat get_field_scale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "scale", "field_34709", "scale", "f_191419_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider#scale
    static void set_field_scale(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "scale", "field_34709", "scale", "f_191419_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider#noiseSampler
    static jobject get_field_noiseSampler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "noise", "field_34710", "noiseSampler", "f_191420_"), "Leoh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.stateprovider.AbstractNoiseBlockStateProvider#noiseSampler
    static void set_field_noiseSampler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "noise", "field_34710", "noiseSampler", "f_191420_"), "Leoh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_fillCodecFields() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "noiseCodec", "method_38439", "fillCodecFields", "m_191425_"), "(Lcom/mojang/serialization/codecs/RecordCodecBuilder$Instance;)Lcom/mojang/datafixers/Products$P3;");
    }

    static jobject fillCodecFields(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fillCodecFields();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getNoiseValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNoiseValue", "method_38441", "getNoiseValue", "m_191429_"), "(Ljd;D)D");
    }

    static jdouble getNoiseValue(const jobject& obj, const jobject& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_getNoiseValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_STATEPROVIDER_ABSTRACTNOISEBLOCKSTATEPROVIDER_HPP