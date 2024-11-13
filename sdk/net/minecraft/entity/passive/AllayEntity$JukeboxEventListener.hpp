// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_ALLAYENTITY$JUKEBOXEVENTLISTENER_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_ALLAYENTITY$JUKEBOXEVENTLISTENER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.AllayEntity$JukeboxEventListener
 * Remapped: cgk$a
 */
namespace AllayEntity$JukeboxEventListener {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgk$a", "net/minecraft/world/entity/animal/allay/Allay$JukeboxListener", "net/minecraft/class_7298$class_7525", "net/minecraft/entity/passive/AllayEntity$JukeboxEventListener", "net/minecraft/src/C_213035_$C_238451_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.passive.AllayEntity$JukeboxEventListener#positionSource
    static jobject get_field_positionSource(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "listenerSource", "field_39478", "positionSource", "f_238537_"), "Ldyd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayEntity$JukeboxEventListener#positionSource
    static void set_field_positionSource(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "listenerSource", "field_39478", "positionSource", "f_238537_"), "Ldyd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.AllayEntity$JukeboxEventListener#range
    static jint get_field_range(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "listenerRadius", "field_39479", "range", "f_238604_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayEntity$JukeboxEventListener#range
    static void set_field_range(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "listenerRadius", "field_39479", "range", "f_238604_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getPositionSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getListenerSource", "method_32946", "getPositionSource", "m_142460_"), "()Ldyd;");
    }

    static jobject getPositionSource(const jobject& obj) {
                
       const auto methodID = methodID_getPositionSource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getListenerRadius", "method_32948", "getRange", "m_142078_"), "()I");
    }

    static jint getRange(const jobject& obj) {
                
       const auto methodID = methodID_getRange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_listen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handleGameEvent", "method_32947", "listen", "m_214068_"), "(Laqu;Ljm;Ldxz$a;Lexc;)Z");
    }

    static jboolean listen(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_listen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_ALLAYENTITY$JUKEBOXEVENTLISTENER_HPP