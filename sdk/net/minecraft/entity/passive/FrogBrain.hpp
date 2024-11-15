// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_FROGBRAIN_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_FROGBRAIN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.FrogBrain
 * Remapped: cgz
 */
namespace FrogBrain {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgz", "net/minecraft/world/entity/animal/frog/FrogAi", "net/minecraft/class_7107", "net/minecraft/entity/passive/FrogBrain", "net/minecraft/src/C_213042_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#FLEE_SPEED
    [[maybe_unused]] static jfloat get_field_FLEE_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SPEED_MULTIPLIER_WHEN_PANICKING", "field_37469", "FLEE_SPEED", "f_218560_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#FLEE_SPEED
    [[maybe_unused]] static void set_field_FLEE_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SPEED_MULTIPLIER_WHEN_PANICKING", "field_37469", "FLEE_SPEED", "f_218560_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#field_37471
    [[maybe_unused]] static jfloat get_field_field_37471() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPEED_MULTIPLIER_WHEN_IDLING", "field_37471", "field_37471", "f_218562_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#field_37471
    [[maybe_unused]] static void set_field_field_37471(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPEED_MULTIPLIER_WHEN_IDLING", "field_37471", "field_37471", "f_218562_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#field_37472
    [[maybe_unused]] static jfloat get_field_field_37472() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPEED_MULTIPLIER_ON_LAND", "field_37472", "field_37472", "f_218563_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#field_37472
    [[maybe_unused]] static void set_field_field_37472(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPEED_MULTIPLIER_ON_LAND", "field_37472", "field_37472", "f_218563_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#field_37473
    [[maybe_unused]] static jfloat get_field_field_37473() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SPEED_MULTIPLIER_IN_WATER", "field_37473", "field_37473", "f_218564_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#field_37473
    [[maybe_unused]] static void set_field_field_37473(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SPEED_MULTIPLIER_IN_WATER", "field_37473", "field_37473", "f_218564_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#longJumpCooldownRange
    [[maybe_unused]] static jobject get_field_longJumpCooldownRange() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TIME_BETWEEN_LONG_JUMPS", "field_37474", "longJumpCooldownRange", "f_218565_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#longJumpCooldownRange
    [[maybe_unused]] static void set_field_longJumpCooldownRange(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TIME_BETWEEN_LONG_JUMPS", "field_37474", "longJumpCooldownRange", "f_218565_"), "Lbqc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#field_37475
    [[maybe_unused]] static jint get_field_field_37475() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_LONG_JUMP_HEIGHT", "field_37475", "field_37475", "f_218566_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#field_37475
    [[maybe_unused]] static void set_field_field_37475(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_LONG_JUMP_HEIGHT", "field_37475", "field_37475", "f_218566_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#field_37476
    [[maybe_unused]] static jint get_field_field_37476() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_LONG_JUMP_WIDTH", "field_37476", "field_37476", "f_218567_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#field_37476
    [[maybe_unused]] static void set_field_field_37476(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_LONG_JUMP_WIDTH", "field_37476", "field_37476", "f_218567_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#field_49092
    [[maybe_unused]] static jfloat get_field_field_49092() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MAX_JUMP_VELOCITY_MULTIPLIER", "field_49092", "field_49092", "f_314634_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#field_49092
    [[maybe_unused]] static void set_field_field_49092(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MAX_JUMP_VELOCITY_MULTIPLIER", "field_49092", "field_49092", "f_314634_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.FrogBrain#TEMPT_SPEED
    [[maybe_unused]] static jfloat get_field_TEMPT_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SPEED_MULTIPLIER_WHEN_TEMPTED", "field_37478", "TEMPT_SPEED", "f_218569_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.FrogBrain#TEMPT_SPEED
    [[maybe_unused]] static void set_field_TEMPT_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SPEED_MULTIPLIER_WHEN_TEMPTED", "field_37478", "TEMPT_SPEED", "f_218569_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    static jmethodID methodID_coolDownLongJump() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "initMemories", "method_41369", "coolDownLongJump", "m_218579_"), "(Lcgy;Layw;)V");
    }

    static void coolDownLongJump(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_coolDownLongJump();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeBrain", "method_41368", "create", "m_218575_"), "(Lbuq;)Lbuq;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addCoreActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "initCoreActivity", "method_41372", "addCoreActivities", "m_218586_"), "(Lbuq;)V");
    }

    static void addCoreActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addCoreActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addIdleActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "initIdleActivity", "method_41374", "addIdleActivities", "m_218590_"), "(Lbuq;)V");
    }

    static void addIdleActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addIdleActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addSwimActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "initSwimActivity", "method_41376", "addSwimActivities", "m_218594_"), "(Lbuq;)V");
    }

    static void addSwimActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addSwimActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addLaySpawnActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "initLaySpawnActivity", "method_41378", "addLaySpawnActivities", "m_218598_"), "(Lbuq;)V");
    }

    static void addLaySpawnActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addLaySpawnActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addLongJumpActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "initJumpActivity", "method_41380", "addLongJumpActivities", "m_218602_"), "(Lbuq;)V");
    }

    static void addLongJumpActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addLongJumpActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addTongueActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "initTongueActivity", "method_41382", "addTongueActivities", "m_218606_"), "(Lbuq;)V");
    }

    static void addTongueActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addTongueActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shouldJumpTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isAcceptableLandingSpot", "method_45373", "shouldJumpTo", "m_246199_"), "(Lbtp;Ljd;)Z");
    }

    static jboolean shouldJumpTo(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_shouldJumpTo();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isNotBreeding() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "canAttack", "method_41375", "isNotBreeding", "m_218588_"), "(Lcgy;)Z");
    }

    static jboolean isNotBreeding(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isNotBreeding();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateActivity", "method_41373", "updateActivities", "m_218577_"), "(Lcgy;)V");
    }

    static void updateActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getTemptItemPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getTemptations", "method_41366", "getTemptItemPredicate", "m_218572_"), "()Ljava/util/function/Predicate;");
    }

    static jobject getTemptItemPredicate() {
       const auto clazz = self();
       const auto methodID = methodID_getTemptItemPredicate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_FROGBRAIN_HPP