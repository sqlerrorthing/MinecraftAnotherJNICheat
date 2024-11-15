// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_EVENT_LISTENER_VIBRATION_HPP
#define NET_MINECRAFT_WORLD_EVENT_LISTENER_VIBRATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.event.listener.Vibration
 * Remapped: dyg
 */
namespace Vibration {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyg", "net/minecraft/world/level/gameevent/vibrations/VibrationInfo", "net/minecraft/class_7269", "net/minecraft/world/event/listener/Vibration", "net/minecraft/src/C_243405_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.event.listener.Vibration#gameEvent
    static jobject get_field_gameEvent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "gameEvent", "comp_657", "gameEvent", "f_243709_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.listener.Vibration#gameEvent
    static void set_field_gameEvent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "gameEvent", "comp_657", "gameEvent", "f_243709_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.listener.Vibration#distance
    static jfloat get_field_distance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "distance", "comp_658", "distance", "f_243776_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.listener.Vibration#distance
    static void set_field_distance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "distance", "comp_658", "distance", "f_243776_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.listener.Vibration#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pos", "comp_659", "pos", "f_243906_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.listener.Vibration#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pos", "comp_659", "pos", "f_243906_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.listener.Vibration#uuid
    static jobject get_field_uuid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "uuid", "comp_660", "uuid", "f_243797_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.listener.Vibration#uuid
    static void set_field_uuid(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "uuid", "comp_660", "uuid", "f_243797_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.listener.Vibration#projectileOwnerUuid
    static jobject get_field_projectileOwnerUuid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "projectileOwnerUuid", "comp_681", "projectileOwnerUuid", "f_243913_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.listener.Vibration#projectileOwnerUuid
    static void set_field_projectileOwnerUuid(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "projectileOwnerUuid", "comp_681", "projectileOwnerUuid", "f_243913_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.listener.Vibration#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "entity", "comp_661", "entity", "f_244048_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.listener.Vibration#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "entity", "comp_661", "entity", "f_244048_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.world.event.listener.Vibration#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38245", "CODEC", "f_244481_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.event.listener.Vibration#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38245", "CODEC", "f_244481_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getOwnerUuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getProjectileOwner", "method_42684", "getOwnerUuid", "m_247625_"), "(Lbsr;)Ljava/util/UUID;");
    }

    static jobject getOwnerUuid(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getOwnerUuid();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getEntity", "method_42348", "getEntity", "m_246794_"), "(Laqu;)Ljava/util/Optional;");
    }

    static jobject getEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getProjectileOwner", "method_42687", "getOwner", "m_247126_"), "(Laqu;)Ljava/util/Optional;");
    }

    static jobject getOwner(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOwner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__gameEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gameEvent", "comp_657", "gameEvent", "f_243709_"), "()Ljm;");
    }

    static jobject _gameEvent(const jobject& obj) {
                
       const auto methodID = methodID__gameEvent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__distance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "distance", "comp_658", "distance", "f_243776_"), "()F");
    }

    static jfloat _distance(const jobject& obj) {
                
       const auto methodID = methodID__distance();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__pos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "pos", "comp_659", "pos", "f_243906_"), "()Lexc;");
    }

    static jobject _pos(const jobject& obj) {
                
       const auto methodID = methodID__pos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__uuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "uuid", "comp_660", "uuid", "f_243797_"), "()Ljava/util/UUID;");
    }

    static jobject _uuid(const jobject& obj) {
                
       const auto methodID = methodID__uuid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__projectileOwnerUuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "projectileOwnerUuid", "comp_681", "projectileOwnerUuid", "f_243913_"), "()Ljava/util/UUID;");
    }

    static jobject _projectileOwnerUuid(const jobject& obj) {
                
       const auto methodID = methodID__projectileOwnerUuid();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "entity", "comp_661", "entity", "f_244048_"), "()Lbsr;");
    }

    static jobject _entity(const jobject& obj) {
                
       const auto methodID = methodID__entity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_EVENT_LISTENER_VIBRATION_HPP