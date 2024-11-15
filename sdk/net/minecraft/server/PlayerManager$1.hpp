// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_PLAYERMANAGER$1_HPP
#define NET_MINECRAFT_SERVER_PLAYERMANAGER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.PlayerManager$1
 * Remapped: aur$1
 */
namespace PlayerManager$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aur$1", "net/minecraft/server/players/PlayerList$1", "net/minecraft/class_3324$1", "net/minecraft/server/PlayerManager$1", "net/minecraft/src/C_102_$C_103_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onSizeChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onBorderSizeSet", "method_11934", "onSizeChange", "m_6312_"), "(Ldut;D)V");
    }

    static void onSizeChange(const jobject& obj, const jobject& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_onSizeChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onInterpolateSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onBorderSizeLerping", "method_11931", "onInterpolateSize", "m_6689_"), "(Ldut;DDJ)V");
    }

    static void onInterpolateSize(const jobject& obj, const jobject& arg0, const jdouble& arg1, const jdouble& arg2, const jlong& arg3) {
                
       const auto methodID = methodID_onInterpolateSize();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onCenterChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onBorderCenterSet", "method_11930", "onCenterChanged", "m_7721_"), "(Ldut;DD)V");
    }

    static void onCenterChanged(const jobject& obj, const jobject& arg0, const jdouble& arg1, const jdouble& arg2) {
                
       const auto methodID = methodID_onCenterChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onWarningTimeChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onBorderSetWarningTime", "method_11932", "onWarningTimeChanged", "m_5904_"), "(Ldut;I)V");
    }

    static void onWarningTimeChanged(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_onWarningTimeChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onWarningBlocksChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onBorderSetWarningBlocks", "method_11933", "onWarningBlocksChanged", "m_5903_"), "(Ldut;I)V");
    }

    static void onWarningBlocksChanged(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_onWarningBlocksChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onDamagePerBlockChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onBorderSetDamagePerBlock", "method_11929", "onDamagePerBlockChanged", "m_6315_"), "(Ldut;D)V");
    }

    static void onDamagePerBlockChanged(const jobject& obj, const jobject& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_onDamagePerBlockChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onSafeZoneChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "onBorderSetDamageSafeZOne", "method_11935", "onSafeZoneChanged", "m_6313_"), "(Ldut;D)V");
    }

    static void onSafeZoneChanged(const jobject& obj, const jobject& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_onSafeZoneChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_PLAYERMANAGER$1_HPP