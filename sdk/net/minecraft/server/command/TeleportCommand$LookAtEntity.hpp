// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_TELEPORTCOMMAND$LOOKATENTITY_HPP
#define NET_MINECRAFT_SERVER_COMMAND_TELEPORTCOMMAND$LOOKATENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.TeleportCommand$LookAtEntity
 * Remapped: aou$b
 */
namespace TeleportCommand$LookAtEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aou$b", "net/minecraft/server/commands/TeleportCommand$LookAtEntity", "net/minecraft/class_3143$class_9251", "net/minecraft/server/command/TeleportCommand$LookAtEntity", "net/minecraft/src/C_5384_$C_313675_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.command.TeleportCommand$LookAtEntity#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entity", "comp_2357", "entity", "f_315157_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeleportCommand$LookAtEntity#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entity", "comp_2357", "entity", "f_315157_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.TeleportCommand$LookAtEntity#anchor
    static jobject get_field_anchor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "anchor", "comp_2358", "anchor", "f_314555_"), "Lff$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TeleportCommand$LookAtEntity#anchor
    static void set_field_anchor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "anchor", "comp_2358", "anchor", "f_314555_"), "Lff$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_look() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("perform", "perform", "method_13772", "look", "m_139060_"), "(Let;Lbsr;)V");
    }

    static void look(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_look();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__entity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "entity", "comp_2357", "entity", "f_315157_"), "()Lbsr;");
    }

    static jobject _entity(const jobject& obj) {
                
       const auto methodID = methodID__entity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__anchor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "anchor", "comp_2358", "anchor", "f_314555_"), "()Lff$a;");
    }

    static jobject _anchor(const jobject& obj) {
                
       const auto methodID = methodID__anchor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_TELEPORTCOMMAND$LOOKATENTITY_HPP