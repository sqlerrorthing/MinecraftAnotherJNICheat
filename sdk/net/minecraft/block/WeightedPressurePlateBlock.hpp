// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_WEIGHTEDPRESSUREPLATEBLOCK_HPP
#define NET_MINECRAFT_BLOCK_WEIGHTEDPRESSUREPLATEBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.WeightedPressurePlateBlock
 * Remapped: dpp
 */
namespace WeightedPressurePlateBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dpp", "net/minecraft/world/level/block/WeightedPressurePlateBlock", "net/minecraft/class_2557", "net/minecraft/block/WeightedPressurePlateBlock", "net/minecraft/src/C_1965_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.WeightedPressurePlateBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_46501", "CODEC", "f_302690_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WeightedPressurePlateBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_46501", "CODEC", "f_302690_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.WeightedPressurePlateBlock#POWER
    [[maybe_unused]] static jobject get_field_POWER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POWER", "field_11739", "POWER", "f_58198_"), "Lduc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.WeightedPressurePlateBlock#POWER
    [[maybe_unused]] static void set_field_POWER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POWER", "field_11739", "POWER", "f_58198_"), "Lduc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.WeightedPressurePlateBlock#weight
    static jint get_field_weight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "maxWeight", "field_11738", "weight", "f_58199_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.WeightedPressurePlateBlock#weight
    static void set_field_weight(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "maxWeight", "field_11738", "weight", "f_58199_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSignalStrength", "method_9434", "getRedstoneOutput", "m_6693_"), "(Ldcw;Ljd;)I");
    }

    static jint getRedstoneOutput(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getRedstoneOutput();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getRedstoneOutput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getSignalForState", "method_9435", "getRedstoneOutput", "m_6016_"), "(Ldtc;)I");
    }

    static jint _getRedstoneOutput(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getRedstoneOutput();
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
    
    static jmethodID methodID_getTickRate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPressedTime", "method_9563", "getTickRate", "m_7342_"), "()I");
    }

    static jint getTickRate(const jobject& obj) {
                
       const auto methodID = methodID_getTickRate();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
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

#endif // NET_MINECRAFT_BLOCK_WEIGHTEDPRESSUREPLATEBLOCK_HPP