// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTTYPE$1_HPP
#define NET_MINECRAFT_NBT_NBTTYPE$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtType$1
 * Remapped: va$1
 */
namespace NbtType$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("va$1", "net/minecraft/nbt/TagType$1", "net/minecraft/class_4614$1", "net/minecraft/nbt/NbtType$1", "net/minecraft/src/C_4952_$C_4953_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createException() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "createException", "method_39878", "createException", "m_197591_"), "()Ljava/io/IOException;");
    }

    static jobject createException(const jobject& obj) {
                
       const auto methodID = methodID_createException();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_23264", "read", "m_7300_"), "(Ljava/io/DataInput;Luk;)Lud;");
    }

    static jobject read(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_doAccept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_39852", "doAccept", "m_196511_"), "(Ljava/io/DataInput;Luv;Luk;)Luv$b;");
    }

    static jobject doAccept(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_doAccept();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_skip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "skip", "method_39854", "skip", "m_196159_"), "(Ljava/io/DataInput;ILuk;)V");
    }

    static void skip(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_skip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__skip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "skip", "method_39851", "skip", "m_196189_"), "(Ljava/io/DataInput;Luk;)V");
    }

    static void _skip(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__skip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCrashReportName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_23259", "getCrashReportName", "m_5987_"), "()Ljava/lang/String;");
    }

    static jobject getCrashReportName(const jobject& obj) {
                
       const auto methodID = methodID_getCrashReportName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCommandFeedbackName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPrettyName", "method_23261", "getCommandFeedbackName", "m_5986_"), "()Ljava/lang/String;");
    }

    static jobject getCommandFeedbackName(const jobject& obj) {
                
       const auto methodID = methodID_getCommandFeedbackName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NBT_NBTTYPE$1_HPP