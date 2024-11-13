// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_TEXTIFIEDEXCEPTION_HPP
#define NET_MINECRAFT_UTIL_TEXTIFIEDEXCEPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.TextifiedException
 * Remapped: xz
 */
namespace TextifiedException {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xz", "net/minecraft/network/chat/ThrowingComponent", "net/minecraft/class_7437", "net/minecraft/util/TextifiedException", "net/minecraft/src/C_213512_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.TextifiedException#messageText
    static jobject get_field_messageText(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "component", "field_39084", "messageText", "f_237302_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.TextifiedException#messageText
    static void set_field_messageText(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "component", "field_39084", "messageText", "f_237302_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getMessageText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getComponent", "method_43626", "getMessageText", "m_237308_"), "()Lwz;");
    }

    static jobject getMessageText(const jobject& obj) {
                
       const auto methodID = methodID_getMessageText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_TEXTIFIEDEXCEPTION_HPP