// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_THREELAYERSFEATURESIZE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_THREELAYERSFEATURESIZE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize
 * Remapped: efl
 */
namespace ThreeLayersFeatureSize {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efl", "net/minecraft/world/level/levelgen/feature/featuresize/ThreeLayersFeatureSize", "net/minecraft/class_5203", "net/minecraft/world/gen/feature/size/ThreeLayersFeatureSize", "net/minecraft/src/C_2372_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_24924", "CODEC", "f_68306_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_24924", "CODEC", "f_68306_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#limit
    static jint get_field_limit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "limit", "field_24150", "limit", "f_68307_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#limit
    static void set_field_limit(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "limit", "field_24150", "limit", "f_68307_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#upperLimit
    static jint get_field_upperLimit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "upperLimit", "field_24151", "upperLimit", "f_68308_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#upperLimit
    static void set_field_upperLimit(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "upperLimit", "field_24151", "upperLimit", "f_68308_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#lowerSize
    static jint get_field_lowerSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lowerSize", "field_24152", "lowerSize", "f_68309_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#lowerSize
    static void set_field_lowerSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lowerSize", "field_24152", "lowerSize", "f_68309_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#middleSize
    static jint get_field_middleSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "middleSize", "field_24153", "middleSize", "f_68310_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#middleSize
    static void set_field_middleSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "middleSize", "field_24153", "middleSize", "f_68310_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#upperSize
    static jint get_field_upperSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "upperSize", "field_24154", "upperSize", "f_68311_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.size.ThreeLayersFeatureSize#upperSize
    static void set_field_upperSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "upperSize", "field_24154", "upperSize", "f_68311_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
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
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_SIZE_THREELAYERSFEATURESIZE_HPP