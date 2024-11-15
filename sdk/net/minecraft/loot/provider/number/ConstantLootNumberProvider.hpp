// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_PROVIDER_NUMBER_CONSTANTLOOTNUMBERPROVIDER_HPP
#define NET_MINECRAFT_LOOT_PROVIDER_NUMBER_CONSTANTLOOTNUMBERPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.provider.number.ConstantLootNumberProvider
 * Remapped: evv
 */
namespace ConstantLootNumberProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("evv", "net/minecraft/world/level/storage/loot/providers/number/ConstantValue", "net/minecraft/class_44", "net/minecraft/loot/provider/number/ConstantLootNumberProvider", "net/minecraft/src/C_141497_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.provider.number.ConstantLootNumberProvider#value
    static jfloat get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "comp_1895", "value", "f_165688_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.provider.number.ConstantLootNumberProvider#value
    static void set_field_value(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "comp_1895", "value", "f_165688_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.provider.number.ConstantLootNumberProvider#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45886", "CODEC", "f_290475_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.provider.number.ConstantLootNumberProvider#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45886", "CODEC", "f_290475_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.provider.number.ConstantLootNumberProvider#INLINE_CODEC
    [[maybe_unused]] static jobject get_field_INLINE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INLINE_CODEC", "field_45887", "INLINE_CODEC", "f_291634_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.provider.number.ConstantLootNumberProvider#INLINE_CODEC
    [[maybe_unused]] static void set_field_INLINE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "INLINE_CODEC", "field_45887", "INLINE_CODEC", "f_291634_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getType", "method_365", "getType", "m_142587_"), "()Levx;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_nextFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getFloat", "method_32454", "nextFloat", "m_142688_"), "(Lerr;)F");
    }

    static jfloat nextFloat(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_nextFloat();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "exactly", "method_32448", "create", "m_165692_"), "(F)Levv;");
    }

    static jobject create(const jfloat& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "value", "comp_1895", "value", "f_165688_"), "()F");
    }

    static jfloat _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_PROVIDER_NUMBER_CONSTANTLOOTNUMBERPROVIDER_HPP