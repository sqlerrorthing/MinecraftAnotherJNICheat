// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_CAVESURFACE$BOUNDED_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_CAVESURFACE$BOUNDED_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.util.CaveSurface$Bounded
 * Remapped: dyo$b
 */
namespace CaveSurface$Bounded {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyo$b", "net/minecraft/world/level/levelgen/Column$Range", "net/minecraft/class_5721$class_5723", "net/minecraft/world/gen/feature/util/CaveSurface$Bounded", "net/minecraft/src/C_141327_$C_141329_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.feature.util.CaveSurface$Bounded#floor
    static jint get_field_floor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "floor", "field_28198", "floor", "f_158204_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.CaveSurface$Bounded#floor
    static void set_field_floor(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "floor", "field_28198", "floor", "f_158204_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.util.CaveSurface$Bounded#ceiling
    static jint get_field_ceiling(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ceiling", "field_28199", "ceiling", "f_158205_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.util.CaveSurface$Bounded#ceiling
    static void set_field_ceiling(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ceiling", "field_28199", "ceiling", "f_158205_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getCeilingHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCeiling", "method_32985", "getCeilingHeight", "m_142011_"), "()Ljava/util/OptionalInt;");
    }

    static jobject getCeilingHeight(const jobject& obj) {
                
       const auto methodID = methodID_getCeilingHeight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFloorHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getFloor", "method_32987", "getFloorHeight", "m_142009_"), "()Ljava/util/OptionalInt;");
    }

    static jobject getFloorHeight(const jobject& obj) {
                
       const auto methodID = methodID_getFloorHeight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOptionalHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getHeight", "method_33385", "getOptionalHeight", "m_142030_"), "()Ljava/util/OptionalInt;");
    }

    static jobject getOptionalHeight(const jobject& obj) {
                
       const auto methodID = methodID_getOptionalHeight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCeiling() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "ceiling", "method_32990", "getCeiling", "m_158212_"), "()I");
    }

    static jint getCeiling(const jobject& obj) {
                
       const auto methodID = methodID_getCeiling();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFloor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "floor", "method_32991", "getFloor", "m_158213_"), "()I");
    }

    static jint getFloor(const jobject& obj) {
                
       const auto methodID = methodID_getFloor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "height", "method_32992", "getHeight", "m_158214_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_UTIL_CAVESURFACE$BOUNDED_HPP