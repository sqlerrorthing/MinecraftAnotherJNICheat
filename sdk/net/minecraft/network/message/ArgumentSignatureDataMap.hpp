// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_MESSAGE_ARGUMENTSIGNATUREDATAMAP_HPP
#define NET_MINECRAFT_NETWORK_MESSAGE_ARGUMENTSIGNATUREDATAMAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.message.ArgumentSignatureDataMap
 * Remapped: fa
 */
namespace ArgumentSignatureDataMap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fa", "net/minecraft/commands/arguments/ArgumentSignatures", "net/minecraft/class_7450", "net/minecraft/network/message/ArgumentSignatureDataMap", "net/minecraft/src/C_213322_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.message.ArgumentSignatureDataMap#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entries", "comp_912", "entries", "f_240908_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.ArgumentSignatureDataMap#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "entries", "comp_912", "entries", "f_240908_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.message.ArgumentSignatureDataMap#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_39807", "EMPTY", "f_240907_"), "Lfa;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.ArgumentSignatureDataMap#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_39807", "EMPTY", "f_240907_"), "Lfa;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.message.ArgumentSignatureDataMap#MAX_ARGUMENTS
    [[maybe_unused]] static jint get_field_MAX_ARGUMENTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_ARGUMENT_COUNT", "field_39418", "MAX_ARGUMENTS", "f_231046_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.message.ArgumentSignatureDataMap#MAX_ARGUMENTS
    [[maybe_unused]] static void set_field_MAX_ARGUMENTS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_ARGUMENT_COUNT", "field_39418", "MAX_ARGUMENTS", "f_231046_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.message.ArgumentSignatureDataMap#MAX_ARGUMENT_NAME_LENGTH
    [[maybe_unused]] static jint get_field_MAX_ARGUMENT_NAME_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_ARGUMENT_NAME_LENGTH", "field_39185", "MAX_ARGUMENT_NAME_LENGTH", "f_231047_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.message.ArgumentSignatureDataMap#MAX_ARGUMENT_NAME_LENGTH
    [[maybe_unused]] static void set_field_MAX_ARGUMENT_NAME_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MAX_ARGUMENT_NAME_LENGTH", "field_39185", "MAX_ARGUMENT_NAME_LENGTH", "f_231047_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_43749", "write", "m_231061_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sign() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "signCommand", "method_44797", "sign", "m_245158_"), "(Lxr;Lfa$b;)Lfa;");
    }

    static jobject sign(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_sign();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__entries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "entries", "comp_912", "entries", "f_240908_"), "()Ljava/util/List;");
    }

    static jobject _entries(const jobject& obj) {
                
       const auto methodID = methodID__entries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_MESSAGE_ARGUMENTSIGNATUREDATAMAP_HPP