// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_PLAINTEXTCONTENT$1_HPP
#define NET_MINECRAFT_TEXT_PLAINTEXTCONTENT$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.PlainTextContent$1
 * Remapped: yg$1
 */
namespace PlainTextContent$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("yg$1", "net/minecraft/network/chat/contents/PlainTextContents$1", "net/minecraft/class_8828$1", "net/minecraft/text/PlainTextContent$1", "net/minecraft/src/C_301906_$C_302014_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_string() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "text", "comp_737", "string", "m_305315_"), "()Ljava/lang/String;");
    }

    static jobject string(const jobject& obj) {
                
       const auto methodID = methodID_string();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_TEXT_PLAINTEXTCONTENT$1_HPP