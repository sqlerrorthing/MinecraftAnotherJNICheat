// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_SCULKSHRIEKERWARNINGMANAGER_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_SCULKSHRIEKERWARNINGMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.SculkShriekerWarningManager
 * Remapped: cmd
 */
namespace SculkShriekerWarningManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cmd", "net/minecraft/world/entity/monster/warden/WardenSpawnTracker", "net/minecraft/class_7262", "net/minecraft/block/entity/SculkShriekerWarningManager", "net/minecraft/src/C_213067_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.entity.SculkShriekerWarningManager#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38183", "CODEC", "f_219557_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.SculkShriekerWarningManager#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_38183", "CODEC", "f_219557_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.SculkShriekerWarningManager#MAX_WARNING_LEVEL
    [[maybe_unused]] static jint get_field_MAX_WARNING_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_WARNING_LEVEL", "field_38184", "MAX_WARNING_LEVEL", "f_219558_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.SculkShriekerWarningManager#MAX_WARNING_LEVEL
    [[maybe_unused]] static void set_field_MAX_WARNING_LEVEL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_WARNING_LEVEL", "field_38184", "MAX_WARNING_LEVEL", "f_219558_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#WARN_RANGE
    [[maybe_unused]] static jdouble get_field_WARN_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PLAYER_SEARCH_RADIUS", "field_38738", "WARN_RANGE", "f_219559_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#WARN_RANGE
    [[maybe_unused]] static void set_field_WARN_RANGE(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PLAYER_SEARCH_RADIUS", "field_38738", "WARN_RANGE", "f_219559_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#WARN_WARDEN_RANGE
    [[maybe_unused]] static jint get_field_WARN_WARDEN_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WARNING_CHECK_DIAMETER", "field_38186", "WARN_WARDEN_RANGE", "f_219560_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#WARN_WARDEN_RANGE
    [[maybe_unused]] static void set_field_WARN_WARDEN_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WARNING_CHECK_DIAMETER", "field_38186", "WARN_WARDEN_RANGE", "f_219560_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#WARN_DECREASE_COOLDOWN
    [[maybe_unused]] static jint get_field_WARN_DECREASE_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DECREASE_WARNING_LEVEL_EVERY_INTERVAL", "field_38187", "WARN_DECREASE_COOLDOWN", "f_219561_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#WARN_DECREASE_COOLDOWN
    [[maybe_unused]] static void set_field_WARN_DECREASE_COOLDOWN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DECREASE_WARNING_LEVEL_EVERY_INTERVAL", "field_38187", "WARN_DECREASE_COOLDOWN", "f_219561_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#WARN_INCREASE_COOLDOWN
    [[maybe_unused]] static jint get_field_WARN_INCREASE_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "WARNING_LEVEL_INCREASE_COOLDOWN", "field_38188", "WARN_INCREASE_COOLDOWN", "f_219562_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#WARN_INCREASE_COOLDOWN
    [[maybe_unused]] static void set_field_WARN_INCREASE_COOLDOWN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "WARNING_LEVEL_INCREASE_COOLDOWN", "field_38188", "WARN_INCREASE_COOLDOWN", "f_219562_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkShriekerWarningManager#ticksSinceLastWarning
    static jint get_field_ticksSinceLastWarning(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "ticksSinceLastWarning", "field_38194", "ticksSinceLastWarning", "f_219563_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#ticksSinceLastWarning
    static void set_field_ticksSinceLastWarning(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "ticksSinceLastWarning", "field_38194", "ticksSinceLastWarning", "f_219563_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkShriekerWarningManager#warningLevel
    static jint get_field_warningLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "warningLevel", "field_38195", "warningLevel", "f_219564_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#warningLevel
    static void set_field_warningLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "warningLevel", "field_38195", "warningLevel", "f_219564_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkShriekerWarningManager#cooldownTicks
    static jint get_field_cooldownTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "cooldownTicks", "field_38196", "cooldownTicks", "f_219565_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkShriekerWarningManager#cooldownTicks
    static void set_field_cooldownTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "cooldownTicks", "field_38196", "cooldownTicks", "f_219565_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_42247", "tick", "m_219571_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_reset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "reset", "method_42258", "reset", "m_219593_"), "()V");
    }

    static void reset(const jobject& obj) {
                
       const auto methodID = methodID_reset();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_warnNearbyPlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "tryWarn", "method_42250", "warnNearbyPlayers", "m_219577_"), "(Laqu;Ljd;Laqv;)Ljava/util/OptionalInt;");
    }

    static jobject warnNearbyPlayers(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_warnNearbyPlayers();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isInCooldown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onCooldown", "method_44003", "isInCooldown", "m_219602_"), "()Z");
    }

    static jboolean isInCooldown(const jobject& obj) {
                
       const auto methodID = methodID_isInCooldown();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isWardenNearby() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "hasNearbyWarden", "method_42259", "isWardenNearby", "m_219574_"), "(Laqu;Ljd;)Z");
    }

    static jboolean isWardenNearby(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isWardenNearby();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getPlayersInRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getNearbyPlayers", "method_42265", "getPlayersInRange", "m_219594_"), "(Laqu;Ljd;)Ljava/util/List;");
    }

    static jobject getPlayersInRange(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getPlayersInRange();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_increaseWarningLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "increaseWarningLevel", "method_42261", "increaseWarningLevel", "m_219605_"), "()V");
    }

    static void increaseWarningLevel(const jobject& obj) {
                
       const auto methodID = methodID_increaseWarningLevel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_decreaseWarningLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "decreaseWarningLevel", "method_42264", "decreaseWarningLevel", "m_219608_"), "()V");
    }

    static void decreaseWarningLevel(const jobject& obj) {
                
       const auto methodID = methodID_decreaseWarningLevel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setWarningLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setWarningLevel", "method_42248", "setWarningLevel", "m_219572_"), "(I)V");
    }

    static void setWarningLevel(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setWarningLevel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getWarningLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getWarningLevel", "method_42267", "getWarningLevel", "m_219599_"), "()I");
    }

    static jint getWarningLevel(const jobject& obj) {
                
       const auto methodID = methodID_getWarningLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copyData", "method_42252", "copy", "m_219583_"), "(Lcmd;)V");
    }

    static void copy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copy();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_SCULKSHRIEKERWARNINGMANAGER_HPP