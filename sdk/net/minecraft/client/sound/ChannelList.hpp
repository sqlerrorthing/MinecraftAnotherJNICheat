// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SOUND_CHANNELLIST_HPP
#define NET_MINECRAFT_CLIENT_SOUND_CHANNELLIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.sound.ChannelList
 * Remapped: guv
 */
namespace ChannelList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("guv", "net/minecraft/client/sounds/ChunkedSampleByteBuf", "net/minecraft/class_4229", "net/minecraft/client/sound/ChannelList", "net/minecraft/src/C_313424_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.sound.ChannelList#buffers
    static jobject get_field_buffers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "buffers", "field_18911", "buffers", "f_314624_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.ChannelList#buffers
    static void set_field_buffers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "buffers", "field_18911", "buffers", "f_314624_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.ChannelList#size
    static jint get_field_size(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "bufferSize", "field_18912", "size", "f_315988_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.ChannelList#size
    static void set_field_size(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "bufferSize", "field_18912", "size", "f_315988_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.ChannelList#currentBufferSize
    static jint get_field_currentBufferSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "byteCount", "field_18913", "currentBufferSize", "f_314867_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.ChannelList#currentBufferSize
    static void set_field_currentBufferSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "byteCount", "field_18913", "currentBufferSize", "f_314867_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.sound.ChannelList#buffer
    static jobject get_field_buffer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentBuffer", "field_18914", "buffer", "f_316518_"), "Ljava/nio/ByteBuffer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.sound.ChannelList#buffer
    static void set_field_buffer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "currentBuffer", "field_18914", "buffer", "f_316518_"), "Ljava/nio/ByteBuffer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "accept"), "(F)V");
    }

    static void accept(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBuffer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_19679", "getBuffer", "m_324173_"), "()Ljava/nio/ByteBuffer;");
    }

    static jobject getBuffer(const jobject& obj) {
                
       const auto methodID = methodID_getBuffer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCurrentBufferSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "size", "method_59756", "getCurrentBufferSize", "m_320382_"), "()I");
    }

    static jint getCurrentBufferSize(const jobject& obj) {
                
       const auto methodID = methodID_getCurrentBufferSize();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SOUND_CHANNELLIST_HPP