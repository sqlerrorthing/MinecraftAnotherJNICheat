// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_HANDLER_PACKETBUNDLER_HPP
#define NET_MINECRAFT_NETWORK_HANDLER_PACKETBUNDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.handler.PacketBundler
 * Remapped: wb
 */
namespace PacketBundler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wb", "net/minecraft/network/PacketBundlePacker", "net/minecraft/class_8035", "net/minecraft/network/handler/PacketBundler", "net/minecraft/src/C_263642_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.handler.PacketBundler#handler
    static jobject get_field_handler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "bundlerInfo", "field_48534", "handler", "f_315593_"), "Lzf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.handler.PacketBundler#handler
    static void set_field_handler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "bundlerInfo", "field_48534", "handler", "f_315593_"), "Lzf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.handler.PacketBundler#currentBundler
    static jobject get_field_currentBundler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "currentBundler", "field_41869", "currentBundler", "f_263847_"), "Lzf$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.handler.PacketBundler#currentBundler
    static void set_field_currentBundler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "currentBundler", "field_41869", "currentBundler", "f_263847_"), "Lzf$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decode", "method_48318", "decode", "decode"), "(Lio/netty/channel/ChannelHandlerContext;Lzg;Ljava/util/List;)V");
    }

    static void decode(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_decode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_ensureNotTransitioning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "verifyNonTerminalPacket", "method_56346", "ensureNotTransitioning", "m_320906_"), "(Lzg;)V");
    }

    static void ensureNotTransitioning(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_ensureNotTransitioning();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_HANDLER_PACKETBUNDLER_HPP