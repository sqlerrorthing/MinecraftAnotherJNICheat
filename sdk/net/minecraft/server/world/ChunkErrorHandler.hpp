// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLD_CHUNKERRORHANDLER_HPP
#define NET_MINECRAFT_SERVER_WORLD_CHUNKERRORHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.world.ChunkErrorHandler
 * Remapped: dwg
 */
namespace ChunkErrorHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dwg", "net/minecraft/world/level/chunk/storage/ChunkIOErrorReporter", "net/minecraft/class_9820", "net/minecraft/server/world/ChunkErrorHandler", "net/minecraft/src/C_336473_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onChunkLoadFailure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reportChunkLoadFailure", "method_57821", "onChunkLoadFailure", "m_293783_"), "(Ljava/lang/Throwable;Ldws;Ldcd;)V");
    }

    static void onChunkLoadFailure(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onChunkLoadFailure();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onChunkSaveFailure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "reportChunkSaveFailure", "method_57822", "onChunkSaveFailure", "m_322794_"), "(Ljava/lang/Throwable;Ldws;Ldcd;)V");
    }

    static void onChunkSaveFailure(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onChunkSaveFailure();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createMisplacementException() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createMisplacedChunkReport", "method_60997", "createMisplacementException", "m_339714_"), "(Ldcd;Ldcd;)Lz;");
    }

    static jobject createMisplacementException(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createMisplacementException();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onChunkMisplacement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reportMisplacedChunk", "method_60998", "onChunkMisplacement", "m_340573_"), "(Ldcd;Ldcd;Ldws;)V");
    }

    static void onChunkMisplacement(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onChunkMisplacement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLD_CHUNKERRORHANDLER_HPP