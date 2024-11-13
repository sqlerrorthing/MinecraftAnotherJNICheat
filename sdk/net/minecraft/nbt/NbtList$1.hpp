// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTLIST$1_HPP
#define NET_MINECRAFT_NBT_NBTLIST$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtList$1
 * Remapped: uh$1
 */
namespace NbtList$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("uh$1", "net/minecraft/nbt/ListTag$1", "net/minecraft/class_2499$1", "net/minecraft/nbt/NbtList$1", "net/minecraft/src/C_4930_$C_4931_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_23249", "read", "m_7300_"), "(Ljava/io/DataInput;Luk;)Luh;");
    }

    static jobject read(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_readList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "loadList", "method_53895", "readList", "m_301667_"), "(Ljava/io/DataInput;Luk;)Luh;");
    }

    static jobject readList(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_readList();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_doAccept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "parse", "method_39852", "doAccept", "m_196511_"), "(Ljava/io/DataInput;Luv;Luk;)Luv$b;");
    }

    static jobject doAccept(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_doAccept();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_scanList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "parseList", "method_53894", "scanList", "m_301655_"), "(Ljava/io/DataInput;Luv;Luk;)Luv$b;");
    }

    static jobject scanList(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_scanList();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_skip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "skip", "method_39851", "skip", "m_196189_"), "(Ljava/io/DataInput;Luk;)V");
    }

    static void skip(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_skip();
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

#endif // NET_MINECRAFT_NBT_NBTLIST$1_HPP