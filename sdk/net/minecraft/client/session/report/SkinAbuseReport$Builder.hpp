// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_REPORT_SKINABUSEREPORT$BUILDER_HPP
#define NET_MINECRAFT_CLIENT_SESSION_REPORT_SKINABUSEREPORT$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.report.SkinAbuseReport$Builder
 * Remapped: gap$a
 */
namespace SkinAbuseReport$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gap$a", "net/minecraft/client/multiplayer/chat/report/SkinReport$Builder", "net/minecraft/class_8777$class_8778", "net/minecraft/client/session/report/SkinAbuseReport$Builder", "net/minecraft/src/C_290059_$C_290096_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_hasEnoughInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasContent", "method_53602", "hasEnoughInfo", "m_293281_"), "()Z");
    }

    static jboolean hasEnoughInfo(const jobject& obj) {
                
       const auto methodID = methodID_hasEnoughInfo();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "checkBuildable", "method_53605", "validate", "m_293936_"), "()Lgak$b;");
    }

    static jobject validate(const jobject& obj) {
                
       const auto methodID = methodID_validate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_53600", "build", "m_292692_"), "(Lgao;)Lcom/mojang/datafixers/util/Either;");
    }

    static jobject build(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_REPORT_SKINABUSEREPORT$BUILDER_HPP