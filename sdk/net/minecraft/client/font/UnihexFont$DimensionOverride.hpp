// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$DIMENSIONOVERRIDE_HPP
#define NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$DIMENSIONOVERRIDE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.UnihexFont$DimensionOverride
 * Remapped: fls$g
 */
namespace UnihexFont$DimensionOverride {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fls$g", "net/minecraft/client/gui/font/providers/UnihexProvider$OverrideRange", "net/minecraft/class_391$class_8545", "net/minecraft/client/font/UnihexFont$DimensionOverride", "net/minecraft/src/C_283731_$C_283717_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.font.UnihexFont$DimensionOverride#from
    static jint get_field_from(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "from", "comp_1513", "from", "f_283797_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.UnihexFont$DimensionOverride#from
    static void set_field_from(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "from", "comp_1513", "from", "f_283797_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.font.UnihexFont$DimensionOverride#to
    static jint get_field_to(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "to", "comp_1514", "to", "f_283851_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.UnihexFont$DimensionOverride#to
    static void set_field_to(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "to", "comp_1514", "to", "f_283851_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.font.UnihexFont$DimensionOverride#dimensions
    static jobject get_field_dimensions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "dimensions", "comp_1515", "dimensions", "f_283891_"), "Lfls$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.UnihexFont$DimensionOverride#dimensions
    static void set_field_dimensions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "dimensions", "comp_1515", "dimensions", "f_283891_"), "Lfls$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.UnihexFont$DimensionOverride#NON_VALIDATED_CODEC
    [[maybe_unused]] static jobject get_field_NON_VALIDATED_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "RAW_CODEC", "field_44777", "NON_VALIDATED_CODEC", "f_283834_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.UnihexFont$DimensionOverride#NON_VALIDATED_CODEC
    [[maybe_unused]] static void set_field_NON_VALIDATED_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "RAW_CODEC", "field_44777", "NON_VALIDATED_CODEC", "f_283834_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.UnihexFont$DimensionOverride#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44776", "CODEC", "f_283923_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.UnihexFont$DimensionOverride#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44776", "CODEC", "f_283923_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__from() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "from", "comp_1513", "from", "f_283797_"), "()I");
    }

    static jint _from(const jobject& obj) {
                
       const auto methodID = methodID__from();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__to() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "to", "comp_1514", "to", "f_283851_"), "()I");
    }

    static jint _to(const jobject& obj) {
                
       const auto methodID = methodID__to();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__dimensions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "dimensions", "comp_1515", "dimensions", "f_283891_"), "()Lfls$c;");
    }

    static jobject _dimensions(const jobject& obj) {
                
       const auto methodID = methodID__dimensions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_UNIHEXFONT$DIMENSIONOVERRIDE_HPP