// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_UTIL_REALMSUTIL_HPP
#define NET_MINECRAFT_CLIENT_REALMS_UTIL_REALMSUTIL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.util.RealmsUtil
 * Remapped: ffd
 */
namespace RealmsUtil {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ffd", "com/mojang/realmsclient/util/RealmsUtil", "net/minecraft/class_4448", "net/minecraft/client/realms/util/RealmsUtil", "net/minecraft/src/C_3350_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.util.RealmsUtil#NOW_TEXT
    [[maybe_unused]] static jobject get_field_NOW_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RIGHT_NOW", "field_44910", "NOW_TEXT", "f_286936_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.RealmsUtil#NOW_TEXT
    [[maybe_unused]] static void set_field_NOW_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RIGHT_NOW", "field_44910", "NOW_TEXT", "f_286936_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.util.RealmsUtil#SECONDS_PER_MINUTE
    [[maybe_unused]] static jint get_field_SECONDS_PER_MINUTE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MINUTES", "field_32129", "SECONDS_PER_MINUTE", "f_167619_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.RealmsUtil#SECONDS_PER_MINUTE
    [[maybe_unused]] static void set_field_SECONDS_PER_MINUTE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MINUTES", "field_32129", "SECONDS_PER_MINUTE", "f_167619_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.util.RealmsUtil#SECONDS_PER_HOUR
    [[maybe_unused]] static jint get_field_SECONDS_PER_HOUR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HOURS", "field_32130", "SECONDS_PER_HOUR", "f_167620_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.RealmsUtil#SECONDS_PER_HOUR
    [[maybe_unused]] static void set_field_SECONDS_PER_HOUR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HOURS", "field_32130", "SECONDS_PER_HOUR", "f_167620_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.util.RealmsUtil#SECONDS_PER_DAY
    [[maybe_unused]] static jint get_field_SECONDS_PER_DAY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DAYS", "field_32131", "SECONDS_PER_DAY", "f_167621_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.RealmsUtil#SECONDS_PER_DAY
    [[maybe_unused]] static void set_field_SECONDS_PER_DAY(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DAYS", "field_32131", "SECONDS_PER_DAY", "f_167621_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_convertToAgePresentation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertToAgePresentation", "method_21567", "convertToAgePresentation", "m_287183_"), "(J)Lwz;");
    }

    static jobject convertToAgePresentation(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_convertToAgePresentation();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__convertToAgePresentation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "convertToAgePresentationFromInstant", "method_25282", "convertToAgePresentation", "m_287255_"), "(Ljava/util/Date;)Lwz;");
    }

    static jobject _convertToAgePresentation(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__convertToAgePresentation();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_drawPlayerHead() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "renderPlayerFace", "method_48972", "drawPlayerHead", "m_280319_"), "(Lfhz;IIILjava/util/UUID;)V");
    }

    static void drawPlayerHead(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_drawPlayerHead();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_UTIL_REALMSUTIL_HPP