// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_TASK_RESETTINGNORMALWORLDTASK_HPP
#define NET_MINECRAFT_CLIENT_REALMS_TASK_RESETTINGNORMALWORLDTASK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.task.ResettingNormalWorldTask
 * Remapped: ffq
 */
namespace ResettingNormalWorldTask {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ffq", "com/mojang/realmsclient/util/task/ResettingGeneratedWorldTask", "net/minecraft/class_5673", "net/minecraft/client/realms/task/ResettingNormalWorldTask", "net/minecraft/src/C_141569_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.task.ResettingNormalWorldTask#info
    static jobject get_field_info(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "generationInfo", "field_27951", "info", "f_167657_"), "Lffg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.task.ResettingNormalWorldTask#info
    static void set_field_info(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "generationInfo", "field_27951", "info", "f_167657_"), "Lffg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_resetWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sendResetRequest", "method_32517", "resetWorld", "m_142381_"), "(Lfby;J)V");
    }

    static void resetWorld(const jobject& obj, const jobject& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_resetWorld();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_TASK_RESETTINGNORMALWORLDTASK_HPP