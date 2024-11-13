// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_FEATURESIZE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_FEATURESIZE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.size.FeatureSize
 * Remapped: efj
 */
namespace FeatureSize {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efj", "net/minecraft/world/level/levelgen/feature/featuresize/FeatureSize", "net/minecraft/class_5201", "net/minecraft/world/gen/feature/size/FeatureSize", "net/minecraft/src/C_2370_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.size.FeatureSize#TYPE_CODEC
    [[maybe_unused]] static jobject get_field_TYPE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24922", "TYPE_CODEC", "f_68281_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.size.FeatureSize#TYPE_CODEC
    [[maybe_unused]] static void set_field_TYPE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24922", "TYPE_CODEC", "f_68281_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.feature.size.FeatureSize#field_31522
    [[maybe_unused]] static jint get_field_field_31522() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_WIDTH", "field_31522", "field_31522", "f_161325_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.feature.size.FeatureSize#field_31522
    [[maybe_unused]] static void set_field_field_31522(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_WIDTH", "field_31522", "field_31522", "f_161325_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.feature.size.FeatureSize#minClippedHeight
    static jobject get_field_minClippedHeight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "minClippedHeight", "field_24146", "minClippedHeight", "f_68282_"), "Ljava/util/OptionalInt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.feature.size.FeatureSize#minClippedHeight
    static void set_field_minClippedHeight(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "minClippedHeight", "field_24146", "minClippedHeight", "f_68282_"), "Ljava/util/OptionalInt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "minClippedHeightCodec", "method_28820", "createCodec", "m_68286_"), "()Lcom/mojang/serialization/codecs/RecordCodecBuilder;");
    }

    static jobject createCodec() {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "type", "method_28824", "getType", "m_7612_"), "()Lefk;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRadius() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSizeAtHeight", "method_27378", "getRadius", "m_6133_"), "(II)I");
    }

    static jint getRadius(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getRadius();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMinClippedHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "minClippedHeight", "method_27377", "getMinClippedHeight", "m_68295_"), "()Ljava/util/OptionalInt;");
    }

    static jobject getMinClippedHeight(const jobject& obj) {
                
       const auto methodID = methodID_getMinClippedHeight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_FEATURESIZE_HPP