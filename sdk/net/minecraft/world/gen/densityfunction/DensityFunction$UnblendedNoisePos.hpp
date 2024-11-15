// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTION$UNBLENDEDNOISEPOS_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTION$UNBLENDEDNOISEPOS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunction$UnblendedNoisePos
 * Remapped: dyr$e
 */
namespace DensityFunction$UnblendedNoisePos {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyr$e", "net/minecraft/world/level/levelgen/DensityFunction$SinglePointContext", "net/minecraft/class_6910$class_6914", "net/minecraft/world/gen/densityfunction/DensityFunction$UnblendedNoisePos", "net/minecraft/src/C_206962_$C_206966_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunction$UnblendedNoisePos#blockX
    static jint get_field_blockX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockX", "comp_371", "blockX", "f_208243_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunction$UnblendedNoisePos#blockX
    static void set_field_blockX(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "blockX", "comp_371", "blockX", "f_208243_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunction$UnblendedNoisePos#blockY
    static jint get_field_blockY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "blockY", "comp_372", "blockY", "f_208244_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunction$UnblendedNoisePos#blockY
    static void set_field_blockY(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "blockY", "comp_372", "blockY", "f_208244_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunction$UnblendedNoisePos#blockZ
    static jint get_field_blockZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockZ", "comp_373", "blockZ", "f_208245_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunction$UnblendedNoisePos#blockZ
    static void set_field_blockZ(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockZ", "comp_373", "blockZ", "f_208245_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID__blockX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blockX", "comp_371", "blockX", "m_207115_"), "()I");
    }

    static jint _blockX(const jobject& obj) {
                
       const auto methodID = methodID__blockX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__blockY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "blockY", "comp_372", "blockY", "m_207114_"), "()I");
    }

    static jint _blockY(const jobject& obj) {
                
       const auto methodID = methodID__blockY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__blockZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "blockZ", "comp_373", "blockZ", "m_207113_"), "()I");
    }

    static jint _blockZ(const jobject& obj) {
                
       const auto methodID = methodID__blockZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTION$UNBLENDEDNOISEPOS_HPP