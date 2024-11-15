// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLDGENERATIONPROGRESSLISTENER_HPP
#define NET_MINECRAFT_SERVER_WORLDGENERATIONPROGRESSLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.WorldGenerationProgressListener
 * Remapped: ard
 */
namespace WorldGenerationProgressListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ard", "net/minecraft/server/level/progress/ChunkProgressListener", "net/minecraft/class_3949", "net/minecraft/server/WorldGenerationProgressListener", "net/minecraft/src/C_21_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateSpawnPos", "method_17669", "start", "m_7647_"), "(Ldcd;)V");
    }

    static void start(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setChunkStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onStatusChange", "method_17670", "setChunkStatus", "m_5511_"), "(Ldcd;Ldvz;)V");
    }

    static void setChunkStatus(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setChunkStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "start", "method_17675", "start", "m_9662_"), "()V");
    }

    static void _start(const jobject& obj) {
                
       const auto methodID = methodID__start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stop", "method_17671", "stop", "m_7646_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStartRegionSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateDiameter", "method_56041", "getStartRegionSize", "m_320498_"), "(I)I");
    }

    static jint getStartRegionSize(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getStartRegionSize();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLDGENERATIONPROGRESSLISTENER_HPP