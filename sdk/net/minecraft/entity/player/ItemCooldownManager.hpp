// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PLAYER_ITEMCOOLDOWNMANAGER_HPP
#define NET_MINECRAFT_ENTITY_PLAYER_ITEMCOOLDOWNMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.player.ItemCooldownManager
 * Remapped: cum
 */
namespace ItemCooldownManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cum", "net/minecraft/world/item/ItemCooldowns", "net/minecraft/class_1796", "net/minecraft/entity/player/ItemCooldownManager", "net/minecraft/src/C_1384_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.player.ItemCooldownManager#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cooldowns", "field_8024", "entries", "f_41515_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.ItemCooldownManager#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cooldowns", "field_8024", "entries", "f_41515_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.ItemCooldownManager#tick
    static jint get_field_tick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tickCount", "field_8025", "tick", "f_41516_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.ItemCooldownManager#tick
    static void set_field_tick(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tickCount", "field_8025", "tick", "f_41516_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_isCoolingDown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isOnCooldown", "method_7904", "isCoolingDown", "m_41519_"), "(Lcul;)Z");
    }

    static jboolean isCoolingDown(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isCoolingDown();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCooldownProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCooldownPercent", "method_7905", "getCooldownProgress", "m_41521_"), "(Lcul;F)F");
    }

    static jfloat getCooldownProgress(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_getCooldownProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_7903", "update", "m_41518_"), "()V");
    }

    static void update(const jobject& obj) {
                
       const auto methodID = methodID_update();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addCooldown", "method_7906", "set", "m_41524_"), "(Lcul;I)V");
    }

    static void set(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removeCooldown", "method_7900", "remove", "m_41527_"), "(Lcul;)V");
    }

    static void remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onCooldownUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onCooldownStarted", "method_7902", "onCooldownUpdate", "m_6899_"), "(Lcul;I)V");
    }

    static void onCooldownUpdate(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_onCooldownUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__onCooldownUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "onCooldownEnded", "method_7901", "onCooldownUpdate", "m_7432_"), "(Lcul;)V");
    }

    static void _onCooldownUpdate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__onCooldownUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PLAYER_ITEMCOOLDOWNMANAGER_HPP