// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_HANDLER_PACKETBUNDLEHANDLER_HPP
#define NET_MINECRAFT_NETWORK_HANDLER_PACKETBUNDLEHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.handler.PacketBundleHandler
 * Remapped: zf
 */
namespace PacketBundleHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("zf", "net/minecraft/network/protocol/BundlerInfo", "net/minecraft/class_8039", "net/minecraft/network/handler/PacketBundleHandler", "net/minecraft/src/C_263639_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.handler.PacketBundleHandler#MAX_PACKETS
    [[maybe_unused]] static jint get_field_MAX_PACKETS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BUNDLE_SIZE_LIMIT", "field_41878", "MAX_PACKETS", "f_263688_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.handler.PacketBundleHandler#MAX_PACKETS
    [[maybe_unused]] static void set_field_MAX_PACKETS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BUNDLE_SIZE_LIMIT", "field_41878", "MAX_PACKETS", "f_263688_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createForPacket", "method_48325", "create", "m_264118_"), "(Lzi;Ljava/util/function/Function;Lzd;)Lzf;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_forEachPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unbundlePacket", "method_48327", "forEachPacket", "m_264360_"), "(Lzg;Ljava/util/function/Consumer;)V");
    }

    static void forEachPacket(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_forEachPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createBundler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "startPacketBundling", "method_48326", "createBundler", "m_264150_"), "(Lzg;)Lzf$a;");
    }

    static jobject createBundler(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createBundler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_HANDLER_PACKETBUNDLEHANDLER_HPP