// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_REALMSAVAILABILITY$INFO_HPP
#define NET_MINECRAFT_CLIENT_REALMS_REALMSAVAILABILITY$INFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.RealmsAvailability$Info
 * Remapped: fbs$a
 */
namespace RealmsAvailability$Info {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fbs$a", "com/mojang/realmsclient/RealmsAvailability$Result", "net/minecraft/class_8647$class_8648", "net/minecraft/client/realms/RealmsAvailability$Info", "net/minecraft/src/C_290283_$C_290077_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.RealmsAvailability$Info#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "comp_1593", "type", "f_291799_"), "Lfbs$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.RealmsAvailability$Info#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "comp_1593", "type", "f_291799_"), "Lfbs$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.RealmsAvailability$Info#exception
    static jobject get_field_exception(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "exception", "comp_1594", "exception", "f_291734_"), "Lfdj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.RealmsAvailability$Info#exception
    static void set_field_exception(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "exception", "comp_1594", "exception", "f_291734_"), "Lfdj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createScreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createErrorScreen", "method_52628", "createScreen", "m_294247_"), "(Lfod;)Lfod;");
    }

    static jobject createScreen(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createScreen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "comp_1593", "type", "f_291799_"), "()Lfbs$b;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__exception() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "exception", "comp_1594", "exception", "f_291734_"), "()Lfdj;");
    }

    static jobject _exception(const jobject& obj) {
                
       const auto methodID = methodID__exception();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_REALMSAVAILABILITY$INFO_HPP