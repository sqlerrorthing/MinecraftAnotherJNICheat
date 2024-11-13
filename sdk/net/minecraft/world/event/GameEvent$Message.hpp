// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_EVENT_GAMEEVENT$MESSAGE_HPP
#define NET_MINECRAFT_WORLD_EVENT_GAMEEVENT$MESSAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.event.GameEvent$Message
 * Remapped: dxz$b
 */
namespace GameEvent$Message {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dxz$b", "net/minecraft/world/level/gameevent/GameEvent$ListenerInfo", "net/minecraft/class_5712$class_7447", "net/minecraft/world/event/GameEvent$Message", "net/minecraft/src/C_141307_$C_243636_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.event.GameEvent$Message#event
    static jobject get_field_event(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "gameEvent", "field_39177", "event", "f_244497_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.GameEvent$Message#event
    static void set_field_event(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "gameEvent", "field_39177", "event", "f_244497_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.GameEvent$Message#emitterPos
    static jobject get_field_emitterPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "source", "field_39178", "emitterPos", "f_244423_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.GameEvent$Message#emitterPos
    static void set_field_emitterPos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "source", "field_39178", "emitterPos", "f_244423_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.GameEvent$Message#emitter
    static jobject get_field_emitter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "context", "field_39179", "emitter", "f_244470_"), "Ldxz$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.GameEvent$Message#emitter
    static void set_field_emitter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "context", "field_39179", "emitter", "f_244470_"), "Ldxz$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.GameEvent$Message#listener
    static jobject get_field_listener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "recipient", "field_39180", "listener", "f_244568_"), "Ldyb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.GameEvent$Message#listener
    static void set_field_listener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "recipient", "field_39180", "listener", "f_244568_"), "Ldyb;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.GameEvent$Message#distanceTraveled
    static jdouble get_field_distanceTraveled(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "distanceToRecipient", "field_39181", "distanceTraveled", "f_243994_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.GameEvent$Message#distanceTraveled
    static void set_field_distanceTraveled(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "distanceToRecipient", "field_39181", "distanceTraveled", "f_243994_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_compareTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compareTo", "method_43725", "compareTo", "compareTo"), "(Ldxz$b;)I");
    }

    static jint compareTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_compareTo();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gameEvent", "method_43724", "getEvent", "m_247303_"), "()Ljm;");
    }

    static jobject getEvent(const jobject& obj) {
                
       const auto methodID = methodID_getEvent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEmitterPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "source", "method_43726", "getEmitterPos", "m_247585_"), "()Lexc;");
    }

    static jobject getEmitterPos(const jobject& obj) {
                
       const auto methodID = methodID_getEmitterPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEmitter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "context", "method_43727", "getEmitter", "m_246300_"), "()Ldxz$a;");
    }

    static jobject getEmitter(const jobject& obj) {
                
       const auto methodID = methodID_getEmitter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getListener() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "recipient", "method_43728", "getListener", "m_247093_"), "()Ldyb;");
    }

    static jobject getListener(const jobject& obj) {
                
       const auto methodID = methodID_getListener();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_EVENT_GAMEEVENT$MESSAGE_HPP