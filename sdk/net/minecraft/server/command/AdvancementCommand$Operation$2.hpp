// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND$OPERATION$2_HPP
#define NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND$OPERATION$2_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.AdvancementCommand$Operation$2
 * Remapped: aly$a$2
 */
namespace AdvancementCommand$Operation$2 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aly$a$2", "net/minecraft/server/commands/AdvancementCommands$Action$2", "net/minecraft/class_3008$class_3009$2", "net/minecraft/server/command/AdvancementCommand$Operation$2", "net/minecraft/src/C_5291_$C_5293_$C_5295_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_processEach() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "perform", "method_13002", "processEach", "m_5753_"), "(Laqv;Lag;)Z");
    }

    static jboolean processEach(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_processEach();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_processEachCriterion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "performCriterion", "method_13000", "processEachCriterion", "m_6070_"), "(Laqv;Lag;Ljava/lang/String;)Z");
    }

    static jboolean processEachCriterion(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_processEachCriterion();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND$OPERATION$2_HPP