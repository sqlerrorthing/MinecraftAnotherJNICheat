// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BIOME_GRASSCOLORS_HPP
#define NET_MINECRAFT_WORLD_BIOME_GRASSCOLORS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.biome.GrassColors
 * Remapped: dcu
 */
namespace GrassColors {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcu", "net/minecraft/world/level/GrassColor", "net/minecraft/class_1933", "net/minecraft/world/biome/GrassColors", "net/minecraft/src/C_1594_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.biome.GrassColors#colorMap
    [[maybe_unused]] static jint get_field_colorMap() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "pixels", "field_9214", "colorMap", "f_46413_"), "[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.biome.GrassColors#colorMap
    [[maybe_unused]] static void set_field_colorMap(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "pixels", "field_9214", "colorMap", "f_46413_"), "[I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_setColorMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "init", "method_8376", "setColorMap", "m_46418_"), "([I)V");
    }

    static void setColorMap(const jarray& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_setColorMap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_8377", "getColor", "m_46415_"), "(DD)I");
    }

    static jint getColor(const jdouble& arg0, const jdouble& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getDefaultColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDefaultColor", "method_49724", "getDefaultColor", "m_276205_"), "()I");
    }

    static jint getDefaultColor() {
       const auto clazz = self();
       const auto methodID = methodID_getDefaultColor();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BIOME_GRASSCOLORS_HPP