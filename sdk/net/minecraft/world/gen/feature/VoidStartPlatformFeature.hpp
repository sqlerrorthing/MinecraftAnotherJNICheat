// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_VOIDSTARTPLATFORMFEATURE_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_VOIDSTARTPLATFORMFEATURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.VoidStartPlatformFeature
 * Remapped: edv
 */
namespace VoidStartPlatformFeature {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("edv", "net/minecraft/world/level/levelgen/feature/VoidStartPlatformFeature", "net/minecraft/class_3217", "net/minecraft/world/gen/feature/VoidStartPlatformFeature", "net/minecraft/src/C_2313_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.gen.feature.VoidStartPlatformFeature#START_BLOCK
    [[maybe_unused]] static jobject get_field_START_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PLATFORM_OFFSET", "field_19241", "START_BLOCK", "f_160629_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.VoidStartPlatformFeature#START_BLOCK
    [[maybe_unused]] static void set_field_START_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PLATFORM_OFFSET", "field_19241", "START_BLOCK", "f_160629_"), "Ljd;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.feature.VoidStartPlatformFeature#START_CHUNK
    [[maybe_unused]] static jobject get_field_START_CHUNK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PLATFORM_ORIGIN_CHUNK", "field_19242", "START_CHUNK", "f_67351_"), "Ldcd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.VoidStartPlatformFeature#START_CHUNK
    [[maybe_unused]] static void set_field_START_CHUNK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PLATFORM_ORIGIN_CHUNK", "field_19242", "START_CHUNK", "f_67351_"), "Ldcd;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.feature.VoidStartPlatformFeature#MAX_RADIUS
    [[maybe_unused]] static jint get_field_MAX_RADIUS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PLATFORM_RADIUS", "field_31520", "MAX_RADIUS", "f_160630_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.VoidStartPlatformFeature#MAX_RADIUS
    [[maybe_unused]] static void set_field_MAX_RADIUS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PLATFORM_RADIUS", "field_31520", "MAX_RADIUS", "f_160630_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.feature.VoidStartPlatformFeature#field_31521
    [[maybe_unused]] static jint get_field_field_31521() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PLATFORM_RADIUS_CHUNKS", "field_31521", "field_31521", "f_160631_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.VoidStartPlatformFeature#field_31521
    [[maybe_unused]] static void set_field_field_31521(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PLATFORM_RADIUS_CHUNKS", "field_31521", "field_31521", "f_160631_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "checkerboardDistance", "method_20403", "getDistance", "m_67355_"), "(IIII)I");
    }

    static jint getDistance(const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getDistance();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "place", "method_13151", "generate", "m_142674_"), "(Lecg;)Z");
    }

    static jboolean generate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_VOIDSTARTPLATFORMFEATURE_HPP