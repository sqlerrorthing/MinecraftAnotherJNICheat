// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_DECORATION$PARAMETER$SELECTOR_HPP
#define NET_MINECRAFT_TEXT_DECORATION$PARAMETER$SELECTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.Decoration$Parameter$Selector
 * Remapped: ww$a$a
 */
namespace Decoration$Parameter$Selector {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ww$a$a", "net/minecraft/network/chat/ChatTypeDecoration$Parameter$Selector", "net/minecraft/class_7463$class_7464$class_7465", "net/minecraft/text/Decoration$Parameter$Selector", "net/minecraft/src/C_238473_$C_238504_$C_238490_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_select() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("select", "select", "select", "select", "m_239619_"), "(Lwz;Lwv$a;)Lwz;");
    }

    static jobject select(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_select();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_TEXT_DECORATION$PARAMETER$SELECTOR_HPP