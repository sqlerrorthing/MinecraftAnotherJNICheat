// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$BEARDIFYING_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$BEARDIFYING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Beardifying
 * Remapped: dys$c
 */
namespace DensityFunctionTypes$Beardifying {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dys$c", "net/minecraft/world/level/levelgen/DensityFunctions$BeardifierOrMarker", "net/minecraft/class_6916$class_7050", "net/minecraft/world/gen/densityfunction/DensityFunctionTypes$Beardifying", "net/minecraft/src/C_206968_$C_206975_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Beardifying#CODEC_HOLDER
    [[maybe_unused]] static jobject get_field_CODEC_HOLDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_37078", "CODEC_HOLDER", "f_208524_"), "Layh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$Beardifying#CODEC_HOLDER
    [[maybe_unused]] static void set_field_CODEC_HOLDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_37078", "CODEC_HOLDER", "f_208524_"), "Layh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getCodecHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "codec", "method_41062", "getCodecHolder", "m_214023_"), "()Layh;");
    }

    static jobject getCodecHolder(const jobject& obj) {
                
       const auto methodID = methodID_getCodecHolder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$BEARDIFYING_HPP