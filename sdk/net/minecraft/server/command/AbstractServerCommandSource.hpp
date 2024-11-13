// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_ABSTRACTSERVERCOMMANDSOURCE_HPP
#define NET_MINECRAFT_SERVER_COMMAND_ABSTRACTSERVERCOMMANDSOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.AbstractServerCommandSource
 * Remapped: ev
 */
namespace AbstractServerCommandSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ev", "net/minecraft/commands/ExecutionCommandSource", "net/minecraft/class_8839", "net/minecraft/server/command/AbstractServerCommandSource", "net/minecraft/src/C_301960_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_hasPermissionLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "hasPermission", "method_9259", "hasPermissionLevel", "m_6761_"), "(I)Z");
    }

    static jboolean hasPermissionLevel(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_hasPermissionLevel();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withReturnValueConsumer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "withCallback", "method_54307", "withReturnValueConsumer", "m_81334_"), "(Leq;)Lev;");
    }

    static jobject withReturnValueConsumer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withReturnValueConsumer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getReturnValueConsumer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "callback", "method_54881", "getReturnValueConsumer", "m_304794_"), "()Leq;");
    }

    static jobject getReturnValueConsumer(const jobject& obj) {
                
       const auto methodID = methodID_getReturnValueConsumer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_withDummyReturnValueConsumer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "clearCallbacks", "method_54311", "withDummyReturnValueConsumer", "m_305986_"), "()Lev;");
    }

    static jobject withDummyReturnValueConsumer(const jobject& obj) {
                
       const auto methodID = methodID_withDummyReturnValueConsumer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDispatcher() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "dispatcher", "method_54310", "getDispatcher", "m_305649_"), "()Lcom/mojang/brigadier/CommandDispatcher;");
    }

    static jobject getDispatcher(const jobject& obj) {
                
       const auto methodID = methodID_getDispatcher();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_handleException() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleError", "method_54491", "handleException", "m_305988_"), "(Lcom/mojang/brigadier/exceptions/CommandExceptionType;Lcom/mojang/brigadier/Message;ZLhv;)V");
    }

    static void handleException(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_handleException();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_isSilent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "isSilent", "method_54882", "isSilent", "m_306225_"), "()Z");
    }

    static jboolean isSilent(const jobject& obj) {
                
       const auto methodID = methodID_isSilent();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__handleException() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleError", "method_54495", "handleException", "m_305442_"), "(Lcom/mojang/brigadier/exceptions/CommandSyntaxException;ZLhv;)V");
    }

    static void _handleException(const jobject& obj, const jobject& arg0, const jboolean& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__handleException();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_asResultConsumer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b_", "resultConsumer", "method_54317", "asResultConsumer", "m_304809_"), "()Lcom/mojang/brigadier/ResultConsumer;");
    }

    static jobject asResultConsumer() {
       const auto clazz = self();
       const auto methodID = methodID_asResultConsumer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_ABSTRACTSERVERCOMMANDSOURCE_HPP