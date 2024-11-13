// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND$OPERATION_HPP
#define NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND$OPERATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.AdvancementCommand$Operation
 * Remapped: aly$a
 */
namespace AdvancementCommand$Operation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aly$a", "net/minecraft/server/commands/AdvancementCommands$Action", "net/minecraft/class_3008$class_3009", "net/minecraft/server/command/AdvancementCommand$Operation", "net/minecraft/src/C_5291_$C_5293_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.server.command.AdvancementCommand$Operation#GRANT
    [[maybe_unused]] static jobject get_field_GRANT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GRANT", "field_13457", "GRANT", "GRANT"), "Laly$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.AdvancementCommand$Operation#GRANT
    [[maybe_unused]] static void set_field_GRANT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GRANT", "field_13457", "GRANT", "GRANT"), "Laly$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.command.AdvancementCommand$Operation#REVOKE
    [[maybe_unused]] static jobject get_field_REVOKE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REVOKE", "field_13456", "REVOKE", "REVOKE"), "Laly$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.command.AdvancementCommand$Operation#REVOKE
    [[maybe_unused]] static void set_field_REVOKE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "REVOKE", "field_13456", "REVOKE", "REVOKE"), "Laly$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.AdvancementCommand$Operation#commandPrefix
    static jobject get_field_commandPrefix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "key", "field_13454", "commandPrefix", "f_136366_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.AdvancementCommand$Operation#commandPrefix
    static void set_field_commandPrefix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "key", "field_13454", "commandPrefix", "f_136366_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Laly$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Laly$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_processAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "perform", "method_12999", "processAll", "m_136379_"), "(Laqv;Ljava/lang/Iterable;)I");
    }

    static jint processAll(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_processAll();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
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
    
    static jmethodID methodID_getCommandPrefix() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getKey", "method_13001", "getCommandPrefix", "m_136378_"), "()Ljava/lang/String;");
    }

    static jobject getCommandPrefix(const jobject& obj) {
                
       const auto methodID = methodID_getCommandPrefix();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_ADVANCEMENTCOMMAND$OPERATION_HPP