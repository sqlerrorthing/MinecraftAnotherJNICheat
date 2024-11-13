// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGGOALSELECTORCUSTOMPAYLOAD$GOAL_HPP
#define NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGGOALSELECTORCUSTOMPAYLOAD$GOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.s2c.custom.DebugGoalSelectorCustomPayload$Goal
 * Remapped: aap$a
 */
namespace DebugGoalSelectorCustomPayload$Goal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aap$a", "net/minecraft/network/protocol/common/custom/GoalDebugPayload$DebugGoal", "net/minecraft/class_8716$class_8717", "net/minecraft/network/packet/s2c/custom/DebugGoalSelectorCustomPayload$Goal", "net/minecraft/src/C_290256_$C_290107_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugGoalSelectorCustomPayload$Goal#priority
    static jint get_field_priority(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "priority", "comp_1690", "priority", "f_290772_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugGoalSelectorCustomPayload$Goal#priority
    static void set_field_priority(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "priority", "comp_1690", "priority", "f_290772_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugGoalSelectorCustomPayload$Goal#isRunning
    static jboolean get_field_isRunning(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isRunning", "comp_1691", "isRunning", "f_291374_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugGoalSelectorCustomPayload$Goal#isRunning
    static void set_field_isRunning(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isRunning", "comp_1691", "isRunning", "f_291374_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.s2c.custom.DebugGoalSelectorCustomPayload$Goal#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "comp_1692", "name", "f_291740_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.s2c.custom.DebugGoalSelectorCustomPayload$Goal#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "comp_1692", "name", "f_291740_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_53035", "write", "m_293438_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__priority() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "priority", "comp_1690", "priority", "f_290772_"), "()I");
    }

    static jint _priority(const jobject& obj) {
                
       const auto methodID = methodID__priority();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__isRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isRunning", "comp_1691", "isRunning", "f_291374_"), "()Z");
    }

    static jboolean _isRunning(const jobject& obj) {
                
       const auto methodID = methodID__isRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__name() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "name", "comp_1692", "name", "f_291740_"), "()Ljava/lang/String;");
    }

    static jobject _name(const jobject& obj) {
                
       const auto methodID = methodID__name();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_S2C_CUSTOM_DEBUGGOALSELECTORCUSTOMPAYLOAD$GOAL_HPP