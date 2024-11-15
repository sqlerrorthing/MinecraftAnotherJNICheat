// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BOSS_SERVERBOSSBAR_HPP
#define NET_MINECRAFT_ENTITY_BOSS_SERVERBOSSBAR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.boss.ServerBossBar
 * Remapped: aqr
 */
namespace ServerBossBar {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqr", "net/minecraft/server/level/ServerBossEvent", "net/minecraft/class_3213", "net/minecraft/entity/boss/ServerBossBar", "net/minecraft/src/C_7_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.boss.ServerBossBar#players
    static jobject get_field_players(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "players", "field_13913", "players", "f_8296_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.ServerBossBar#players
    static void set_field_players(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "players", "field_13913", "players", "f_8296_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.ServerBossBar#unmodifiablePlayers
    static jobject get_field_unmodifiablePlayers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "unmodifiablePlayers", "field_13914", "unmodifiablePlayers", "f_8297_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.ServerBossBar#unmodifiablePlayers
    static void set_field_unmodifiablePlayers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "unmodifiablePlayers", "field_13914", "unmodifiablePlayers", "f_8297_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.boss.ServerBossBar#visible
    static jboolean get_field_visible(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "visible", "field_13912", "visible", "f_8298_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.boss.ServerBossBar#visible
    static void set_field_visible(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "visible", "field_13912", "visible", "f_8298_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_setPercent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setProgress", "method_5408", "setPercent", "m_142711_"), "(F)V");
    }

    static void setPercent(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setPercent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setColor", "method_5416", "setColor", "m_6451_"), "(Lbqh$a;)V");
    }

    static void setColor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setColor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setStyle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setOverlay", "method_5409", "setStyle", "m_5648_"), "(Lbqh$b;)V");
    }

    static void setStyle(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setStyle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setDarkenSky() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setDarkenScreen", "method_5406", "setDarkenSky", "m_7003_"), "(Z)Lbqh;");
    }

    static jobject setDarkenSky(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setDarkenSky();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setDragonMusic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setPlayBossMusic", "method_5410", "setDragonMusic", "m_7005_"), "(Z)Lbqh;");
    }

    static jobject setDragonMusic(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setDragonMusic();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setThickenFog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setCreateWorldFog", "method_5411", "setThickenFog", "m_7006_"), "(Z)Lbqh;");
    }

    static jobject setThickenFog(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setThickenFog();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setName", "method_5413", "setName", "m_6456_"), "(Lwz;)V");
    }

    static void setName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setName();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sendPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "broadcast", "method_14090", "sendPacket", "m_143224_"), "(Ljava/util/function/Function;)V");
    }

    static void sendPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sendPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addPlayer", "method_14088", "addPlayer", "m_6543_"), "(Laqv;)V");
    }

    static void addPlayer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addPlayer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_removePlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removePlayer", "method_14089", "removePlayer", "m_6539_"), "(Laqv;)V");
    }

    static void removePlayer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removePlayer();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clearPlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removeAllPlayers", "method_14094", "clearPlayers", "m_7706_"), "()V");
    }

    static void clearPlayers(const jobject& obj) {
                
       const auto methodID = methodID_clearPlayers();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isVisible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isVisible", "method_14093", "isVisible", "m_8323_"), "()Z");
    }

    static jboolean isVisible(const jobject& obj) {
                
       const auto methodID = methodID_isVisible();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setVisible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "setVisible", "method_14091", "setVisible", "m_8321_"), "(Z)V");
    }

    static void setVisible(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setVisible();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getPlayers", "method_14092", "getPlayers", "m_8324_"), "()Ljava/util/Collection;");
    }

    static jobject getPlayers(const jobject& obj) {
                
       const auto methodID = methodID_getPlayers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BOSS_SERVERBOSSBAR_HPP