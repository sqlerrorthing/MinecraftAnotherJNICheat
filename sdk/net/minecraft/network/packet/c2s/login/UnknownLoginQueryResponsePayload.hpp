// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_LOGIN_UNKNOWNLOGINQUERYRESPONSEPAYLOAD_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_LOGIN_UNKNOWNLOGINQUERYRESPONSEPAYLOAD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.login.UnknownLoginQueryResponsePayload
 * Remapped: ajd
 */
namespace UnknownLoginQueryResponsePayload {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ajd", "net/minecraft/network/protocol/login/custom/DiscardedQueryAnswerPayload", "net/minecraft/class_8596", "net/minecraft/network/packet/c2s/login/UnknownLoginQueryResponsePayload", "net/minecraft/src/C_290115_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.c2s.login.UnknownLoginQueryResponsePayload#INSTANCE
    [[maybe_unused]] static jobject get_field_INSTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_44980", "INSTANCE", "f_290582_"), "Lajd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.login.UnknownLoginQueryResponsePayload#INSTANCE
    [[maybe_unused]] static void set_field_INSTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_44980", "INSTANCE", "f_290582_"), "Lajd;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_52295", "write", "m_295630_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_LOGIN_UNKNOWNLOGINQUERYRESPONSEPAYLOAD_HPP