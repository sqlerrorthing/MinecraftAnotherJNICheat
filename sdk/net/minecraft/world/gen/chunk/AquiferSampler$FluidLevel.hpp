// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER$FLUIDLEVEL_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER$FLUIDLEVEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.AquiferSampler$FluidLevel
 * Remapped: dyk$b
 */
namespace AquiferSampler$FluidLevel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyk$b", "net/minecraft/world/level/levelgen/Aquifer$FluidStatus", "net/minecraft/class_6350$class_6351", "net/minecraft/world/gen/chunk/AquiferSampler$FluidLevel", "net/minecraft/src/C_141319_$C_182887_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.world.gen.chunk.AquiferSampler$FluidLevel#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fluidLevel", "field_33576", "y", "f_188400_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.chunk.AquiferSampler$FluidLevel#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fluidLevel", "field_33576", "y", "f_188400_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.gen.chunk.AquiferSampler$FluidLevel#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "fluidType", "field_33577", "state", "f_188401_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.chunk.AquiferSampler$FluidLevel#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "fluidType", "field_33577", "state", "f_188401_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "at", "method_38318", "getBlockState", "m_188405_"), "(I)Ldtc;");
    }

    static jobject getBlockState(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_AQUIFERSAMPLER$FLUIDLEVEL_HPP