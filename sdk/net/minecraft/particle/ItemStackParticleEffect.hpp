// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PARTICLE_ITEMSTACKPARTICLEEFFECT_HPP
#define NET_MINECRAFT_PARTICLE_ITEMSTACKPARTICLEEFFECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.particle.ItemStackParticleEffect
 * Remapped: li
 */
namespace ItemStackParticleEffect {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("li", "net/minecraft/core/particles/ItemParticleOption", "net/minecraft/class_2392", "net/minecraft/particle/ItemStackParticleEffect", "net/minecraft/src/C_4754_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.particle.ItemStackParticleEffect#ITEM_STACK_CODEC
    [[maybe_unused]] static jobject get_field_ITEM_STACK_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ITEM_CODEC", "field_51464", "ITEM_STACK_CODEC", "f_314946_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.particle.ItemStackParticleEffect#ITEM_STACK_CODEC
    [[maybe_unused]] static void set_field_ITEM_STACK_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ITEM_CODEC", "field_51464", "ITEM_STACK_CODEC", "f_314946_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.particle.ItemStackParticleEffect#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "field_11193", "type", "f_123701_"), "Lll;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.particle.ItemStackParticleEffect#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "field_11193", "type", "f_123701_"), "Lll;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.particle.ItemStackParticleEffect#stack
    static jobject get_field_stack(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "itemStack", "field_11192", "stack", "f_123702_"), "Lcuq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.particle.ItemStackParticleEffect#stack
    static void set_field_stack(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "itemStack", "field_11192", "stack", "f_123702_"), "Lcuq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_29136", "createCodec", "m_123710_"), "(Lll;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createPacketCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "streamCodec", "method_56178", "createPacketCodec", "m_322965_"), "(Lll;)Lyx;");
    }

    static jobject createPacketCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createPacketCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_10295", "getType", "m_6012_"), "()Lll;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getItemStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getItem", "method_10289", "getItemStack", "m_123718_"), "()Lcuq;");
    }

    static jobject getItemStack(const jobject& obj) {
                
       const auto methodID = methodID_getItemStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PARTICLE_ITEMSTACKPARTICLEEFFECT_HPP