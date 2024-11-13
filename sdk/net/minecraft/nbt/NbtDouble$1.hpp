// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTDOUBLE$1_HPP
#define NET_MINECRAFT_NBT_NBTDOUBLE$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtDouble$1
 * Remapped: uc$1
 */
namespace NbtDouble$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("uc$1", "net/minecraft/nbt/DoubleTag$1", "net/minecraft/class_2489$1", "net/minecraft/nbt/NbtDouble$1", "net/minecraft/src/C_4919_$C_4920_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_23242", "read", "m_7300_"), "(Ljava/io/DataInput;Luk;)Luc;");
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
    
    static jmethodID methodID_readDouble() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "readAccounted", "method_53890", "readDouble", "m_301665_"), "(Ljava/io/DataInput;Luk;)D");
    }

    static jdouble readDouble(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_readDouble();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSizeInBytes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "size", "method_39853", "getSizeInBytes", "m_196292_"), "()I");
    }

    static jint getSizeInBytes(const jobject& obj) {
                
       const auto methodID = methodID_getSizeInBytes();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
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
    
    static jmethodID methodID_isImmutable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isValue", "method_23263", "isImmutable", "m_7064_"), "()Z");
    }

    static jboolean isImmutable(const jobject& obj) {
                
       const auto methodID = methodID_isImmutable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NBT_NBTDOUBLE$1_HPP