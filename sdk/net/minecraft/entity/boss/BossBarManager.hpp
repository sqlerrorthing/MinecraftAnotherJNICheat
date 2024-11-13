// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_BOSSBARMANAGER_HPP
#define NET_MINECRAFT_ENTITY_BOSS_BOSSBARMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.BossBarManager
 * Remapped: alt
 */
namespace BossBarManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alt", "net/minecraft/server/bossevents/CustomBossEvents", "net/minecraft/class_3004", "net/minecraft/entity/boss/BossBarManager", "net/minecraft/src/C_5290_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.boss.BossBarManager#commandBossBars
    static jobject get_field_commandBossBars(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "events", "field_13447", "commandBossBars", "f_136290_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.BossBarManager#commandBossBars
    static void set_field_commandBossBars(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "events", "field_13447", "commandBossBars", "f_136290_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_12971", "get", "m_136297_"), "(Lakr;)Lals;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_12970", "add", "m_136299_"), "(Lakr;Lwz;)Lals;");
    }

    static jobject add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "remove", "method_12973", "remove", "m_136302_"), "(Lals;)V");
    }

    static void remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getIds", "method_12968", "getIds", "m_136292_"), "()Ljava/util/Collection;");
    }

    static jobject getIds(const jobject& obj) {
                
       const auto methodID = methodID_getIds();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getEvents", "method_12969", "getAll", "m_136304_"), "()Ljava/util/Collection;");
    }

    static jobject getAll(const jobject& obj) {
                
       const auto methodID = methodID_getAll();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_toNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_12974", "toNbt", "m_136307_"), "(Ljo$a;)Lub;");
    }

    static jobject toNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_12972", "readNbt", "m_136295_"), "(Lub;Ljo$a;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onPlayerConnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onPlayerConnect", "method_12975", "onPlayerConnect", "m_136293_"), "(Laqv;)V");
    }

    static void onPlayerConnect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerConnect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onPlayerDisconnect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onPlayerDisconnect", "method_12976", "onPlayerDisconnect", "m_136305_"), "(Laqv;)V");
    }

    static void onPlayerDisconnect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onPlayerDisconnect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_BOSSBARMANAGER_HPP