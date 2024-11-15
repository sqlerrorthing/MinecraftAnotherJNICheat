// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_MESSAGE_MESSAGESIGNATUREDATA$INDEXED_HPP
#define NET_MINECRAFT_NETWORK_MESSAGE_MESSAGESIGNATUREDATA$INDEXED_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.message.MessageSignatureData$Indexed
 * Remapped: xl$a
 */
namespace MessageSignatureData$Indexed {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xl$a", "net/minecraft/network/chat/MessageSignature$Packed", "net/minecraft/class_7469$class_7819", "net/minecraft/network/message/MessageSignatureData$Indexed", "net/minecraft/src/C_213508_$C_243651_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.message.MessageSignatureData$Indexed#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_1079", "id", "f_244111_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.MessageSignatureData$Indexed#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_1079", "id", "f_244111_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.message.MessageSignatureData$Indexed#fullSignature
    static jobject get_field_fullSignature(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fullSignature", "comp_1080", "fullSignature", "f_244020_"), "Lxl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.message.MessageSignatureData$Indexed#fullSignature
    static void set_field_fullSignature(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fullSignature", "comp_1080", "fullSignature", "f_244020_"), "Lxl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.message.MessageSignatureData$Indexed#MISSING_ID
    [[maybe_unused]] static jint get_field_MISSING_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FULL_SIGNATURE", "field_40684", "MISSING_ID", "f_244178_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.message.MessageSignatureData$Indexed#MISSING_ID
    [[maybe_unused]] static void set_field_MISSING_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FULL_SIGNATURE", "field_40684", "MISSING_ID", "f_244178_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_fromBuf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_46278", "fromBuf", "m_246521_"), "(Lvw;)Lxl$a;");
    }

    static jobject fromBuf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromBuf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_46279", "write", "m_246314_"), "(Lvw;Lxl$a;)V");
    }

    static void write(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSignature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unpack", "method_46280", "getSignature", "m_253223_"), "(Lxm;)Ljava/util/Optional;");
    }

    static jobject getSignature(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSignature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_1079", "id", "f_244111_"), "()I");
    }

    static jint _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__fullSignature() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fullSignature", "comp_1080", "fullSignature", "f_244020_"), "()Lxl;");
    }

    static jobject _fullSignature(const jobject& obj) {
                
       const auto methodID = methodID__fullSignature();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_MESSAGE_MESSAGESIGNATUREDATA$INDEXED_HPP