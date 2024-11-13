// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_HANDLER_PACKETINFLATER_HPP
#define NET_MINECRAFT_NETWORK_HANDLER_PACKETINFLATER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.handler.PacketInflater
 * Remapped: vr
 */
namespace PacketInflater {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("vr", "net/minecraft/network/CompressionDecoder", "net/minecraft/class_2532", "net/minecraft/network/handler/PacketInflater", "net/minecraft/src/C_4959_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.handler.PacketInflater#field_34057
    [[maybe_unused]] static jint get_field_field_34057() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAXIMUM_COMPRESSED_LENGTH", "field_34057", "field_34057", "f_182671_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.handler.PacketInflater#field_34057
    [[maybe_unused]] static void set_field_field_34057(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAXIMUM_COMPRESSED_LENGTH", "field_34057", "field_34057", "f_182671_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.handler.PacketInflater#MAXIMUM_PACKET_SIZE
    [[maybe_unused]] static jint get_field_MAXIMUM_PACKET_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAXIMUM_UNCOMPRESSED_LENGTH", "field_33279", "MAXIMUM_PACKET_SIZE", "f_182672_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.handler.PacketInflater#MAXIMUM_PACKET_SIZE
    [[maybe_unused]] static void set_field_MAXIMUM_PACKET_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAXIMUM_UNCOMPRESSED_LENGTH", "field_33279", "MAXIMUM_PACKET_SIZE", "f_182672_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.handler.PacketInflater#inflater
    static jobject get_field_inflater(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "inflater", "field_11622", "inflater", "f_129434_"), "Ljava/util/zip/Inflater;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.handler.PacketInflater#inflater
    static void set_field_inflater(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "inflater", "field_11622", "inflater", "f_129434_"), "Ljava/util/zip/Inflater;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.handler.PacketInflater#compressionThreshold
    static jint get_field_compressionThreshold(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "threshold", "field_11623", "compressionThreshold", "f_129435_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.handler.PacketInflater#compressionThreshold
    static void set_field_compressionThreshold(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "threshold", "field_11623", "compressionThreshold", "f_129435_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.handler.PacketInflater#rejectsBadPackets
    static jboolean get_field_rejectsBadPackets(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "validateDecompressed", "field_34058", "rejectsBadPackets", "f_182673_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.handler.PacketInflater#rejectsBadPackets
    static void set_field_rejectsBadPackets(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "validateDecompressed", "field_34058", "rejectsBadPackets", "f_182673_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("decode", "decode", "decode", "decode", "decode"), "(Lio/netty/channel/ChannelHandlerContext;Lio/netty/buffer/ByteBuf;Ljava/util/List;)V");
    }

    static void decode(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_decode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setInputBuf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupInflaterInput", "method_52896", "setInputBuf", "m_294270_"), "(Lio/netty/buffer/ByteBuf;)V");
    }

    static void setInputBuf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setInputBuf();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_inflate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "inflate", "method_52897", "inflate", "m_294551_"), "(Lio/netty/channel/ChannelHandlerContext;I)Lio/netty/buffer/ByteBuf;");
    }

    static jobject inflate(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_inflate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setCompressionThreshold() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setThreshold", "method_10739", "setCompressionThreshold", "m_182677_"), "(IZ)V");
    }

    static void setCompressionThreshold(const jobject& obj, const jint& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setCompressionThreshold();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_HANDLER_PACKETINFLATER_HPP