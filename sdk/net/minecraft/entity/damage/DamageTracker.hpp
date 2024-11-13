// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DAMAGE_DAMAGETRACKER_HPP
#define NET_MINECRAFT_ENTITY_DAMAGE_DAMAGETRACKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.damage.DamageTracker
 * Remapped: brh
 */
namespace DamageTracker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("brh", "net/minecraft/world/damagesource/CombatTracker", "net/minecraft/class_1283", "net/minecraft/entity/damage/DamageTracker", "net/minecraft/src/C_488_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.damage.DamageTracker#DAMAGE_COOLDOWN
    [[maybe_unused]] static jint get_field_DAMAGE_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RESET_DAMAGE_STATUS_TIME", "field_29967", "DAMAGE_COOLDOWN", "f_146694_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.damage.DamageTracker#DAMAGE_COOLDOWN
    [[maybe_unused]] static void set_field_DAMAGE_COOLDOWN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RESET_DAMAGE_STATUS_TIME", "field_29967", "DAMAGE_COOLDOWN", "f_146694_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.damage.DamageTracker#ATTACK_DAMAGE_COOLDOWN
    [[maybe_unused]] static jint get_field_ATTACK_DAMAGE_COOLDOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RESET_COMBAT_STATUS_TIME", "field_29968", "ATTACK_DAMAGE_COOLDOWN", "f_146695_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.damage.DamageTracker#ATTACK_DAMAGE_COOLDOWN
    [[maybe_unused]] static void set_field_ATTACK_DAMAGE_COOLDOWN(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RESET_COMBAT_STATUS_TIME", "field_29968", "ATTACK_DAMAGE_COOLDOWN", "f_146695_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.damage.DamageTracker#INTENTIONAL_GAME_DESIGN_ISSUE_LINK_STYLE
    [[maybe_unused]] static jobject get_field_INTENTIONAL_GAME_DESIGN_ISSUE_LINK_STYLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "INTENTIONAL_GAME_DESIGN_STYLE", "field_42274", "INTENTIONAL_GAME_DESIGN_ISSUE_LINK_STYLE", "f_268553_"), "Lxw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.damage.DamageTracker#INTENTIONAL_GAME_DESIGN_ISSUE_LINK_STYLE
    [[maybe_unused]] static void set_field_INTENTIONAL_GAME_DESIGN_ISSUE_LINK_STYLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "INTENTIONAL_GAME_DESIGN_STYLE", "field_42274", "INTENTIONAL_GAME_DESIGN_ISSUE_LINK_STYLE", "f_268553_"), "Lxw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.damage.DamageTracker#recentDamage
    static jobject get_field_recentDamage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entries", "field_5870", "recentDamage", "f_19276_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.damage.DamageTracker#recentDamage
    static void set_field_recentDamage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entries", "field_5870", "recentDamage", "f_19276_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.damage.DamageTracker#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "mob", "field_5877", "entity", "f_19277_"), "Lbtn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.damage.DamageTracker#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "mob", "field_5877", "entity", "f_19277_"), "Lbtn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.damage.DamageTracker#ageOnLastDamage
    static jint get_field_ageOnLastDamage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastDamageTime", "field_5876", "ageOnLastDamage", "f_19278_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.damage.DamageTracker#ageOnLastDamage
    static void set_field_ageOnLastDamage(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastDamageTime", "field_5876", "ageOnLastDamage", "f_19278_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.damage.DamageTracker#ageOnLastAttacked
    static jint get_field_ageOnLastAttacked(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "combatStartTime", "field_5875", "ageOnLastAttacked", "f_19279_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.damage.DamageTracker#ageOnLastAttacked
    static void set_field_ageOnLastAttacked(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "combatStartTime", "field_5875", "ageOnLastAttacked", "f_19279_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.damage.DamageTracker#ageOnLastUpdate
    static jint get_field_ageOnLastUpdate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "combatEndTime", "field_5873", "ageOnLastUpdate", "f_19280_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.damage.DamageTracker#ageOnLastUpdate
    static void set_field_ageOnLastUpdate(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "combatEndTime", "field_5873", "ageOnLastUpdate", "f_19280_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.damage.DamageTracker#recentlyAttacked
    static jboolean get_field_recentlyAttacked(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "inCombat", "field_5874", "recentlyAttacked", "f_19281_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.damage.DamageTracker#recentlyAttacked
    static void set_field_recentlyAttacked(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "inCombat", "field_5874", "recentlyAttacked", "f_19281_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.damage.DamageTracker#hasDamage
    static jboolean get_field_hasDamage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "takingDamage", "field_5872", "hasDamage", "f_19282_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.damage.DamageTracker#hasDamage
    static void set_field_hasDamage(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "takingDamage", "field_5872", "hasDamage", "f_19282_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_onDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recordDamage", "method_5547", "onDamage", "m_289194_"), "(Lbrk;F)V");
    }

    static void onDamage(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_onDamage();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isAttackerLiving() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldEnterCombat", "method_52191", "isAttackerLiving", "m_289225_"), "(Lbrk;)Z");
    }

    static jboolean isAttackerLiving(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isAttackerLiving();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getAttackedFallDeathMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMessageForAssistedFall", "method_52193", "getAttackedFallDeathMessage", "m_289206_"), "(Lbsr;Lwz;Ljava/lang/String;Ljava/lang/String;)Lwz;");
    }

    static jobject getAttackedFallDeathMessage(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getAttackedFallDeathMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getFallDeathMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFallMessage", "method_52190", "getFallDeathMessage", "m_289215_"), "(Lbrf;Lbsr;)Lwz;");
    }

    static jobject getFallDeathMessage(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getFallDeathMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getDisplayName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDisplayName", "method_52192", "getDisplayName", "m_289212_"), "(Lbsr;)Lwz;");
    }

    static jobject getDisplayName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getDisplayName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getDeathMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDeathMessage", "method_5548", "getDeathMessage", "m_19293_"), "()Lwz;");
    }

    static jobject getDeathMessage(const jobject& obj) {
                
       const auto methodID = methodID_getDeathMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBiggestFall() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getMostSignificantFall", "method_5544", "getBiggestFall", "m_19298_"), "()Lbrf;");
    }

    static jobject getBiggestFall(const jobject& obj) {
                
       const auto methodID = methodID_getBiggestFall();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTimeSinceLastAttack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCombatDuration", "method_5546", "getTimeSinceLastAttack", "m_19295_"), "()I");
    }

    static jint getTimeSinceLastAttack(const jobject& obj) {
                
       const auto methodID = methodID_getTimeSinceLastAttack();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "recheckStatus", "method_5539", "update", "m_19296_"), "()V");
    }

    static void update(const jobject& obj) {
                
       const auto methodID = methodID_update();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DAMAGE_DAMAGETRACKER_HPP