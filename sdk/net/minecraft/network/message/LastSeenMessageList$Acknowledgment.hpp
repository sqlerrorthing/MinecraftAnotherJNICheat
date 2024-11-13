// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_MESSAGE_LASTSEENMESSAGELIST$ACKNOWLEDGMENT_HPP
#define NET_MINECRAFT_NETWORK_MESSAGE_LASTSEENMESSAGELIST$ACKNOWLEDGMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.message.LastSeenMessageList$Acknowledgment
 * Remapped: xg$b
 */
namespace LastSeenMessageList$Acknowledgment {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xg$b", "net/minecraft/network/chat/LastSeenMessages$Update", "net/minecraft/class_7635$class_7636", "net/minecraft/network/message/LastSeenMessageList$Acknowledgment", "net/minecraft/src/C_241590_$C_241589_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.message.LastSeenMessageList$Acknowledgment#offset
    static jint get_field_offset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "offset", "comp_1071", "offset", "f_243843_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.LastSeenMessageList$Acknowledgment#offset
    static void set_field_offset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "offset", "comp_1071", "offset", "f_243843_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.message.LastSeenMessageList$Acknowledgment#acknowledged
    static jobject get_field_acknowledged(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "acknowledged", "comp_1072", "acknowledged", "f_244446_"), "Ljava/util/BitSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.LastSeenMessageList$Acknowledgment#acknowledged
    static void set_field_acknowledged(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "acknowledged", "comp_1072", "acknowledged", "f_244446_"), "Ljava/util/BitSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_44983", "write", "m_242008_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__offset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "offset", "comp_1071", "offset", "f_243843_"), "()I");
    }

    static jint _offset(const jobject& obj) {
                
       const auto methodID = methodID__offset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__acknowledged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "acknowledged", "comp_1072", "acknowledged", "f_244446_"), "()Ljava/util/BitSet;");
    }

    static jobject _acknowledged(const jobject& obj) {
                
       const auto methodID = methodID__acknowledged();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_MESSAGE_LASTSEENMESSAGELIST$ACKNOWLEDGMENT_HPP