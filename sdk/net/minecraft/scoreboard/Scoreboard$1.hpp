// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCOREBOARD_SCOREBOARD$1_HPP
#define NET_MINECRAFT_SCOREBOARD_SCOREBOARD$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.scoreboard.Scoreboard$1
 * Remapped: eyg$1
 */
namespace Scoreboard$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eyg$1", "net/minecraft/world/scores/Scoreboard$1", "net/minecraft/class_269$1", "net/minecraft/scoreboard/Scoreboard$1", "net/minecraft/src/C_3076_$C_302158_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getScore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_55409", "getScore", "m_306505_"), "()I");
    }

    static jint getScore(const jobject& obj) {
                
       const auto methodID = methodID_getScore();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setScore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_55410", "setScore", "m_305183_"), "(I)V");
    }

    static void setScore(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setScore();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDisplayText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "display", "method_55419", "getDisplayText", "m_305613_"), "()Lwz;");
    }

    static jobject getDisplayText(const jobject& obj) {
                
       const auto methodID = methodID_getDisplayText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setDisplayText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "display", "method_55411", "setDisplayText", "m_306789_"), "(Lwz;)V");
    }

    static void setDisplayText(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setDisplayText();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setNumberFormat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "numberFormatOverride", "method_55412", "setNumberFormat", "m_304839_"), "(Lyp;)V");
    }

    static void setNumberFormat(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setNumberFormat();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isLocked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "locked", "method_55416", "isLocked", "m_304717_"), "()Z");
    }

    static jboolean isLocked(const jobject& obj) {
                
       const auto methodID = methodID_isLocked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_unlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "unlock", "method_55417", "unlock", "m_305539_"), "()V");
    }

    static void unlock(const jobject& obj) {
                
       const auto methodID = methodID_unlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_lock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "lock", "method_55418", "lock", "m_305263_"), "()V");
    }

    static void lock(const jobject& obj) {
                
       const auto methodID = methodID_lock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLocked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLocked", "method_55433", "setLocked", "m_305235_"), "(Z)V");
    }

    static void setLocked(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setLocked();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "sendScoreToPlayers", "method_55434", "update", "m_304734_"), "()V");
    }

    static void update(const jobject& obj) {
                
       const auto methodID = methodID_update();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCOREBOARD_SCOREBOARD$1_HPP