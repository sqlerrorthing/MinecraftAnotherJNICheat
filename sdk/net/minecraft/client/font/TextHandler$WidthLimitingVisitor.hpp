// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER$WIDTHLIMITINGVISITOR_HPP
#define NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER$WIDTHLIMITINGVISITOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.TextHandler$WidthLimitingVisitor
 * Remapped: fgz$e
 */
namespace TextHandler$WidthLimitingVisitor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgz$e", "net/minecraft/client/StringSplitter$WidthLimitedCharSink", "net/minecraft/class_5225$class_5230", "net/minecraft/client/font/TextHandler$WidthLimitingVisitor", "net/minecraft/src/C_3410_$C_3416_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.font.TextHandler$WidthLimitingVisitor#widthLeft
    static jfloat get_field_widthLeft(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "maxWidth", "field_24235", "widthLeft", "f_92504_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextHandler$WidthLimitingVisitor#widthLeft
    static void set_field_widthLeft(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "maxWidth", "field_24235", "widthLeft", "f_92504_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextHandler$WidthLimitingVisitor#length
    static jint get_field_length(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "position", "field_24236", "length", "f_92505_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextHandler$WidthLimitingVisitor#length
    static void set_field_length(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "position", "field_24236", "length", "f_92505_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_6411_"), "(ILxw;I)Z");
    }

    static jboolean accept(const jobject& obj, const jint& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID_accept();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getLength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPosition", "method_27513", "getLength", "m_92509_"), "()I");
    }

    static jint getLength(const jobject& obj) {
                
       const auto methodID = methodID_getLength();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_resetLength() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "resetPosition", "method_27514", "resetLength", "m_92514_"), "()V");
    }

    static void resetLength(const jobject& obj) {
                
       const auto methodID = methodID_resetLength();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_TEXTHANDLER$WIDTHLIMITINGVISITOR_HPP