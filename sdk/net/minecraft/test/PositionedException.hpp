// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEST_POSITIONEDEXCEPTION_HPP
#define NET_MINECRAFT_TEST_POSITIONEDEXCEPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.test.PositionedException
 * Remapped: sq
 */
namespace PositionedException {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("sq", "net/minecraft/gametest/framework/GameTestAssertPosException", "net/minecraft/class_4513", "net/minecraft/test/PositionedException", "net/minecraft/src/C_4882_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.test.PositionedException#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "absolutePos", "field_20541", "pos", "f_127493_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.PositionedException#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "absolutePos", "field_20541", "pos", "f_127493_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.PositionedException#relativePos
    static jobject get_field_relativePos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "relativePos", "field_20542", "relativePos", "f_127494_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.PositionedException#relativePos
    static void set_field_relativePos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "relativePos", "field_20542", "relativePos", "f_127494_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.PositionedException#tick
    static jlong get_field_tick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tick", "field_21449", "tick", "f_127495_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.PositionedException#tick
    static void set_field_tick(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tick", "field_21449", "tick", "f_127495_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_getMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getMessage", "getMessage", "", "", "getMessage"), "()Ljava/lang/String;");
    }

    static jobject getMessage(const jobject& obj) {
                
       const auto methodID = methodID_getMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDebugMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMessageToShowAtBlock", "method_22150", "getDebugMessage", "m_127496_"), "()Ljava/lang/String;");
    }

    static jobject getDebugMessage(const jobject& obj) {
                
       const auto methodID = methodID_getDebugMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRelativePos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRelativePos", "method_35940", "getRelativePos", "m_177055_"), "()Ljd;");
    }

    static jobject getRelativePos(const jobject& obj) {
                
       const auto methodID = methodID_getRelativePos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getAbsolutePos", "method_22151", "getPos", "m_127497_"), "()Ljd;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_TEST_POSITIONEDEXCEPTION_HPP