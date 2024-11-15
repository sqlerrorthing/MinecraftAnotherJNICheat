// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_HEIGHTPROVIDER_BIASEDTOBOTTOMHEIGHTPROVIDER_HPP
#define NET_MINECRAFT_WORLD_GEN_HEIGHTPROVIDER_BIASEDTOBOTTOMHEIGHTPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider
 * Remapped: ehv
 */
namespace BiasedToBottomHeightProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ehv", "net/minecraft/world/level/levelgen/heightproviders/BiasedToBottomHeight", "net/minecraft/class_6120", "net/minecraft/world/gen/heightprovider/BiasedToBottomHeightProvider", "net/minecraft/src/C_141402_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#BIASED_TO_BOTTOM_CODEC
    [[maybe_unused]] static jobject get_field_BIASED_TO_BOTTOM_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_31531", "BIASED_TO_BOTTOM_CODEC", "f_161918_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#BIASED_TO_BOTTOM_CODEC
    [[maybe_unused]] static void set_field_BIASED_TO_BOTTOM_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_31531", "BIASED_TO_BOTTOM_CODEC", "f_161918_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_31532", "LOGGER", "f_161919_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_31532", "LOGGER", "f_161919_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#minOffset
    static jobject get_field_minOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minInclusive", "field_31533", "minOffset", "f_161920_"), "Ldzs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#minOffset
    static void set_field_minOffset(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "minInclusive", "field_31533", "minOffset", "f_161920_"), "Ldzs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#maxOffset
    static jobject get_field_maxOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxInclusive", "field_31534", "maxOffset", "f_161921_"), "Ldzs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#maxOffset
    static void set_field_maxOffset(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxInclusive", "field_31534", "maxOffset", "f_161921_"), "Ldzs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#inner
    static jint get_field_inner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "inner", "field_31535", "inner", "f_161922_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.heightprovider.BiasedToBottomHeightProvider#inner
    static void set_field_inner(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "inner", "field_31535", "inner", "f_161922_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_35377", "create", "m_161931_"), "(Ldzs;Ldzs;I)Lehv;");
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

#endif // NET_MINECRAFT_WORLD_GEN_HEIGHTPROVIDER_BIASEDTOBOTTOMHEIGHTPROVIDER_HPP