// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_EVENT_VIBRATIONS$LISTENERDATA_HPP
#define NET_MINECRAFT_WORLD_EVENT_VIBRATIONS$LISTENERDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.event.Vibrations$ListenerData
 * Remapped: dyi$a
 */
namespace Vibrations$ListenerData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyi$a", "net/minecraft/world/level/gameevent/vibrations/VibrationSystem$Data", "net/minecraft/class_8514$class_8515", "net/minecraft/world/event/Vibrations$ListenerData", "net/minecraft/src/C_279518_$C_279523_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.event.Vibrations$ListenerData#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44640", "CODEC", "f_279637_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.event.Vibrations$ListenerData#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44640", "CODEC", "f_279637_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.event.Vibrations$ListenerData#LISTENER_NBT_KEY
    [[maybe_unused]] static jobject get_field_LISTENER_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NBT_TAG_KEY", "field_44641", "LISTENER_NBT_KEY", "f_279525_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.event.Vibrations$ListenerData#LISTENER_NBT_KEY
    [[maybe_unused]] static void set_field_LISTENER_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NBT_TAG_KEY", "field_44641", "LISTENER_NBT_KEY", "f_279525_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.world.event.Vibrations$ListenerData#vibration
    static jobject get_field_vibration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentVibration", "field_44642", "vibration", "f_279652_"), "Ldyg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.event.Vibrations$ListenerData#vibration
    static void set_field_vibration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentVibration", "field_44642", "vibration", "f_279652_"), "Ldyg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.Vibrations$ListenerData#delay
    static jint get_field_delay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "travelTimeInTicks", "field_44643", "delay", "f_279638_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.Vibrations$ListenerData#delay
    static void set_field_delay(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "travelTimeInTicks", "field_44643", "delay", "f_279638_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.event.Vibrations$ListenerData#vibrationSelector
    static jobject get_field_vibrationSelector(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "selectionStrategy", "field_44644", "vibrationSelector", "f_279593_"), "Ldyh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.event.Vibrations$ListenerData#vibrationSelector
    static void set_field_vibrationSelector(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "selectionStrategy", "field_44644", "vibrationSelector", "f_279593_"), "Ldyh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.event.Vibrations$ListenerData#spawnParticle
    static jboolean get_field_spawnParticle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "reloadVibrationParticle", "field_44645", "spawnParticle", "f_279613_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.event.Vibrations$ListenerData#spawnParticle
    static void set_field_spawnParticle(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "reloadVibrationParticle", "field_44645", "spawnParticle", "f_279613_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getSelector() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSelectionStrategy", "method_51387", "getSelector", "m_280457_"), "()Ldyh;");
    }

    static jobject getSelector(const jobject& obj) {
                
       const auto methodID = methodID_getSelector();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVibration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCurrentVibration", "method_51394", "getVibration", "m_280602_"), "()Ldyg;");
    }

    static jobject getVibration(const jobject& obj) {
                
       const auto methodID = methodID_getVibration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setVibration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setCurrentVibration", "method_51390", "setVibration", "m_280036_"), "(Ldyg;)V");
    }

    static void setVibration(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setVibration();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getTravelTimeInTicks", "method_51395", "getDelay", "m_280274_"), "()I");
    }

    static jint getDelay(const jobject& obj) {
                
       const auto methodID = methodID_getDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setTravelTimeInTicks", "method_51388", "setDelay", "m_280178_"), "(I)V");
    }

    static void setDelay(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setDelay();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tickDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "decrementTravelTime", "method_51396", "tickDelay", "m_280502_"), "()V");
    }

    static void tickDelay(const jobject& obj) {
                
       const auto methodID = methodID_tickDelay();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldSpawnParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "shouldReloadVibrationParticle", "method_51397", "shouldSpawnParticle", "m_280616_"), "()Z");
    }

    static jboolean shouldSpawnParticle(const jobject& obj) {
                
       const auto methodID = methodID_shouldSpawnParticle();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setSpawnParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setReloadVibrationParticle", "method_51393", "setSpawnParticle", "m_280671_"), "(Z)V");
    }

    static void setSpawnParticle(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setSpawnParticle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_EVENT_VIBRATIONS$LISTENERDATA_HPP