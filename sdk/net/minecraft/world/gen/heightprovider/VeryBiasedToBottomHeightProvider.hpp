// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_HEIGHTPROVIDER_VERYBIASEDTOBOTTOMHEIGHTPROVIDER_HPP
#define NET_MINECRAFT_WORLD_GEN_HEIGHTPROVIDER_VERYBIASEDTOBOTTOMHEIGHTPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider
 * Remapped: eib
 */
namespace VeryBiasedToBottomHeightProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eib", "net/minecraft/world/level/levelgen/heightproviders/VeryBiasedToBottomHeight", "net/minecraft/class_6343", "net/minecraft/world/gen/heightprovider/VeryBiasedToBottomHeightProvider", "net/minecraft/src/C_141408_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_33527", "CODEC", "f_162045_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_33527", "CODEC", "f_162045_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_33528", "LOGGER", "f_162046_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_33528", "LOGGER", "f_162046_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#minOffset
    static jobject get_field_minOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minInclusive", "field_33529", "minOffset", "f_162047_"), "Ldzs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#minOffset
    static void set_field_minOffset(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minInclusive", "field_33529", "minOffset", "f_162047_"), "Ldzs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#maxOffset
    static jobject get_field_maxOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxInclusive", "field_33530", "maxOffset", "f_162048_"), "Ldzs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#maxOffset
    static void set_field_maxOffset(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxInclusive", "field_33530", "maxOffset", "f_162048_"), "Ldzs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#inner
    static jint get_field_inner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "inner", "field_33531", "inner", "f_162049_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.heightprovider.VeryBiasedToBottomHeightProvider#inner
    static void set_field_inner(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "inner", "field_33531", "inner", "f_162049_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_36313", "create", "m_162058_"), "(Ldzs;Ldzs;I)Leib;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sample", "method_35391", "get", "m_213859_"), "(Layw;Ldzv;)I");
    }

    static jint get(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_35388", "getType", "m_142002_"), "()Lehy;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_HEIGHTPROVIDER_VERYBIASEDTOBOTTOMHEIGHTPROVIDER_HPP