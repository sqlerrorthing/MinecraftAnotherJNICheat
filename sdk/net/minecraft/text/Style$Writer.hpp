// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_STYLE$WRITER_HPP
#define NET_MINECRAFT_TEXT_STYLE$WRITER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.Style$Writer
 * Remapped: xw$a
 */
namespace Style$Writer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xw$a", "net/minecraft/network/chat/Style$1Collector", "net/minecraft/class_2583$class_7418", "net/minecraft/text/Style$Writer", "net/minecraft/src/C_5020_$C_213511_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.text.Style$Writer#shouldAppendComma
    static jboolean get_field_shouldAppendComma(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isNotFirst", "field_39012", "shouldAppendComma", "f_237284_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.text.Style$Writer#shouldAppendComma
    static void set_field_shouldAppendComma(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isNotFirst", "field_39012", "shouldAppendComma", "f_237284_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_appendComma() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "prependSeparator", "method_43478", "appendComma", "m_237288_"), "()V");
    }

    static void appendComma(const jobject& obj) {
                
       const auto methodID = methodID_appendComma();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_append() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addFlagString", "method_43479", "append", "m_237289_"), "(Ljava/lang/String;Ljava/lang/Boolean;)V");
    }

    static void append(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_append();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__append() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addValueString", "method_43480", "append", "m_237292_"), "(Ljava/lang/String;Ljava/lang/Object;)V");
    }

    static void _append(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__append();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_TEXT_STYLE$WRITER_HPP