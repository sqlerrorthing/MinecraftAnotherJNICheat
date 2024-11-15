// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_PRESSUREPLATEBLOCK_HPP
#define NET_MINECRAFT_BLOCK_PRESSUREPLATEBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.PressurePlateBlock
 * Remapped: dlw
 */
namespace PressurePlateBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dlw", "net/minecraft/world/level/block/PressurePlateBlock", "net/minecraft/class_2440", "net/minecraft/block/PressurePlateBlock", "net/minecraft/src/C_1859_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.PressurePlateBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_46418", "CODEC", "f_303130_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.PressurePlateBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_46418", "CODEC", "f_303130_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.PressurePlateBlock#POWERED
    [[maybe_unused]] static jobject get_field_POWERED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POWERED", "field_11358", "POWERED", "f_55249_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.PressurePlateBlock#POWERED
    [[maybe_unused]] static void set_field_POWERED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POWERED", "field_11358", "POWERED", "f_55249_"), "Ldtt;");
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
    
    static jmethodID methodID_getRedstoneOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getSignalForState", "method_9435", "getRedstoneOutput", "m_6016_"), "(Ldtc;)I");
    }

    static jint getRedstoneOutput(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRedstoneOutput();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setRedstoneOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSignalForState", "method_9432", "setRedstoneOutput", "m_7422_"), "(Ldtc;I)Ldtc;");
    }

    static jobject setRedstoneOutput(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_setRedstoneOutput();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getRedstoneOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSignalStrength", "method_9434", "getRedstoneOutput", "m_6693_"), "(Ldcw;Ljd;)I");
    }

    static jint _getRedstoneOutput(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__getRedstoneOutput();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBlockStateDefinition", "method_9515", "appendProperties", "m_7926_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_PRESSUREPLATEBLOCK_HPP