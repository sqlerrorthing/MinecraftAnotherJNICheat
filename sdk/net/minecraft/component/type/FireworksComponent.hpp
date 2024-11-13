// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_TYPE_FIREWORKSCOMPONENT_HPP
#define NET_MINECRAFT_COMPONENT_TYPE_FIREWORKSCOMPONENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.type.FireworksComponent
 * Remapped: cxm
 */
namespace FireworksComponent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cxm", "net/minecraft/world/item/component/Fireworks", "net/minecraft/class_9284", "net/minecraft/component/type/FireworksComponent", "net/minecraft/src/C_313625_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.component.type.FireworksComponent#flightDuration
    static jint get_field_flightDuration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "flightDuration", "comp_2391", "flightDuration", "f_317050_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.FireworksComponent#flightDuration
    static void set_field_flightDuration(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "flightDuration", "comp_2391", "flightDuration", "f_317050_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.FireworksComponent#explosions
    static jobject get_field_explosions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "explosions", "comp_2392", "explosions", "f_314926_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.FireworksComponent#explosions
    static void set_field_explosions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "explosions", "comp_2392", "explosions", "f_314926_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.FireworksComponent#MAX_EXPLOSIONS
    [[maybe_unused]] static jint get_field_MAX_EXPLOSIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_EXPLOSIONS", "field_49325", "MAX_EXPLOSIONS", "f_317122_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.FireworksComponent#MAX_EXPLOSIONS
    [[maybe_unused]] static void set_field_MAX_EXPLOSIONS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_EXPLOSIONS", "field_49325", "MAX_EXPLOSIONS", "f_317122_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.FireworksComponent#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_49323", "CODEC", "f_316251_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.FireworksComponent#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_49323", "CODEC", "f_316251_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.FireworksComponent#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_49324", "PACKET_CODEC", "f_314560_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.FireworksComponent#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_49324", "PACKET_CODEC", "f_314560_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_appendTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addToTooltip", "method_57409", "appendTooltip", "m_319025_"), "(Lcul$b;Ljava/util/function/Consumer;Lcwm;)V");
    }

    static void appendTooltip(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_appendTooltip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__flightDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "flightDuration", "comp_2391", "flightDuration", "f_317050_"), "()I");
    }

    static jint _flightDuration(const jobject& obj) {
                
       const auto methodID = methodID__flightDuration();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__explosions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "explosions", "comp_2392", "explosions", "f_314926_"), "()Ljava/util/List;");
    }

    static jobject _explosions(const jobject& obj) {
                
       const auto methodID = methodID__explosions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_TYPE_FIREWORKSCOMPONENT_HPP