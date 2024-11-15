// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCOREBOARD_NUMBER_FIXEDNUMBERFORMAT_HPP
#define NET_MINECRAFT_SCOREBOARD_NUMBER_FIXEDNUMBERFORMAT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.scoreboard.number.FixedNumberFormat
 * Remapped: yo
 */
namespace FixedNumberFormat {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yo", "net/minecraft/network/chat/numbers/FixedFormat", "net/minecraft/class_9021", "net/minecraft/scoreboard/number/FixedNumberFormat", "net/minecraft/src/C_302092_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.scoreboard.number.FixedNumberFormat#TYPE
    [[maybe_unused]] static jobject get_field_TYPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_47560", "TYPE", "f_302513_"), "Lyq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.scoreboard.number.FixedNumberFormat#TYPE
    [[maybe_unused]] static void set_field_TYPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_47560", "TYPE", "f_302513_"), "Lyq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.scoreboard.number.FixedNumberFormat#text
    static jobject get_field_text(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "field_47561", "text", "f_303777_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.scoreboard.number.FixedNumberFormat#text
    static void set_field_text(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "field_47561", "text", "f_303777_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_format() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "format", "method_55457", "format", "m_305266_"), "(I)Lxn;");
    }

    static jobject format(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_format();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_55456", "getType", "m_307395_"), "()Lyq;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCOREBOARD_NUMBER_FIXEDNUMBERFORMAT_HPP