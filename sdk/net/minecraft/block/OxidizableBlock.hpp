// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_OXIDIZABLEBLOCK_HPP
#define NET_MINECRAFT_BLOCK_OXIDIZABLEBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.OxidizableBlock
 * Remapped: dph
 */
namespace OxidizableBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dph", "net/minecraft/world/level/block/WeatheringCopperFullBlock", "net/minecraft/class_5812", "net/minecraft/block/OxidizableBlock", "net/minecraft/src/C_141237_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.OxidizableBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_46495", "CODEC", "f_303224_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.OxidizableBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_46495", "CODEC", "f_303224_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.OxidizableBlock#oxidationLevel
    static jobject get_field_oxidationLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "weatherState", "field_28709", "oxidationLevel", "f_154923_"), "Ldpe$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.OxidizableBlock#oxidationLevel
    static void set_field_oxidationLevel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "weatherState", "field_28709", "oxidationLevel", "f_154923_"), "Ldpe$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_randomTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "randomTick", "method_9514", "randomTick", "m_213898_"), "(Ldtc;Laqu;Ljd;Layw;)V");
    }

    static void randomTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_randomTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_hasRandomTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d_", "isRandomlyTicking", "method_9542", "hasRandomTicks", "m_51695_"), "(Ldtc;)Z");
    }

    static jboolean hasRandomTicks(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasRandomTicks();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDegradationLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getAge", "method_33632", "getDegradationLevel", "m_142297_"), "()Ldpe$a;");
    }

    static jobject getDegradationLevel(const jobject& obj) {
                
       const auto methodID = methodID_getDegradationLevel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_OXIDIZABLEBLOCK_HPP