// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_CAULDRONBLOCK_HPP
#define NET_MINECRAFT_BLOCK_CAULDRONBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.CauldronBlock
 * Remapped: dgt
 */
namespace CauldronBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dgt", "net/minecraft/world/level/block/CauldronBlock", "net/minecraft/class_5546", "net/minecraft/block/CauldronBlock", "net/minecraft/src/C_1725_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.CauldronBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_46305", "CODEC", "f_303385_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CauldronBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_46305", "CODEC", "f_303385_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.CauldronBlock#FILL_WITH_RAIN_CHANCE
    [[maybe_unused]] static jfloat get_field_FILL_WITH_RAIN_CHANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "RAIN_FILL_CHANCE", "field_34027", "FILL_WITH_RAIN_CHANCE", "f_182448_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.CauldronBlock#FILL_WITH_RAIN_CHANCE
    [[maybe_unused]] static void set_field_FILL_WITH_RAIN_CHANCE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "RAIN_FILL_CHANCE", "field_34027", "FILL_WITH_RAIN_CHANCE", "f_182448_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.CauldronBlock#FILL_WITH_SNOW_CHANCE
    [[maybe_unused]] static jfloat get_field_FILL_WITH_SNOW_CHANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POWDER_SNOW_FILL_CHANCE", "field_34028", "FILL_WITH_SNOW_CHANCE", "f_182449_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.CauldronBlock#FILL_WITH_SNOW_CHANCE
    [[maybe_unused]] static void set_field_FILL_WITH_SNOW_CHANCE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "POWDER_SNOW_FILL_CHANCE", "field_34028", "FILL_WITH_SNOW_CHANCE", "f_182449_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isFull() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isFull", "method_32766", "isFull", "m_142596_"), "(Ldtc;)Z");
    }

    static jboolean isFull(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isFull();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canFillWithPrecipitation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldHandlePrecipitation", "method_31636", "canFillWithPrecipitation", "m_182450_"), "(Ldcw;Lddw$c;)Z");
    }

    static jboolean canFillWithPrecipitation(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_canFillWithPrecipitation();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_precipitationTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handlePrecipitation", "method_9504", "precipitationTick", "m_141997_"), "(Ldtc;Ldcw;Ljd;Lddw$c;)V");
    }

    static void precipitationTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_precipitationTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canBeFilledByDripstone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canReceiveStalactiteDrip", "method_32765", "canBeFilledByDripstone", "m_142087_"), "(Lepd;)Z");
    }

    static jboolean canBeFilledByDripstone(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canBeFilledByDripstone();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fillFromDripstone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "receiveStalactiteDrip", "method_32764", "fillFromDripstone", "m_142310_"), "(Ldtc;Ldcw;Ljd;Lepd;)V");
    }

    static void fillFromDripstone(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_fillFromDripstone();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_CAULDRONBLOCK_HPP