// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_TWISTINGVINESBLOCK_HPP
#define NET_MINECRAFT_BLOCK_TWISTINGVINESBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.TwistingVinesBlock
 * Remapped: dos
 */
namespace TwistingVinesBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dos", "net/minecraft/world/level/block/TwistingVinesBlock", "net/minecraft/class_4777", "net/minecraft/block/TwistingVinesBlock", "net/minecraft/src/C_141233_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.TwistingVinesBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_46483", "CODEC", "f_303175_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.TwistingVinesBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_46483", "CODEC", "f_303175_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.TwistingVinesBlock#SHAPE
    [[maybe_unused]] static jobject get_field_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SHAPE", "field_22172", "SHAPE", "f_154861_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.TwistingVinesBlock#SHAPE
    [[maybe_unused]] static void set_field_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SHAPE", "field_22172", "SHAPE", "f_154861_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGrowthLength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlocksToGrowWhenBonemealed", "method_26376", "getGrowthLength", "m_213627_"), "(Layw;)I");
    }

    static jint getGrowthLength(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getGrowthLength();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPlant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBodyBlock", "method_24946", "getPlant", "m_7777_"), "()Ldfy;");
    }

    static jobject getPlant(const jobject& obj) {
                
       const auto methodID = methodID_getPlant();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_chooseStemState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "canGrowInto", "method_24949", "chooseStemState", "m_5971_"), "(Ldtc;)Z");
    }

    static jboolean chooseStemState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_chooseStemState();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_TWISTINGVINESBLOCK_HPP