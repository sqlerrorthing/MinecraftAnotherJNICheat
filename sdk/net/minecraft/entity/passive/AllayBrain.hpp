// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_ALLAYBRAIN_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_ALLAYBRAIN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.AllayBrain
 * Remapped: cgl
 */
namespace AllayBrain {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cgl", "net/minecraft/world/entity/animal/allay/AllayAi", "net/minecraft/class_7299", "net/minecraft/entity/passive/AllayBrain", "net/minecraft/src/C_213036_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#field_38406
    [[maybe_unused]] static jfloat get_field_field_38406() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SPEED_MULTIPLIER_WHEN_IDLING", "field_38406", "field_38406", "f_218396_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#field_38406
    [[maybe_unused]] static void set_field_field_38406(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SPEED_MULTIPLIER_WHEN_IDLING", "field_38406", "field_38406", "f_218396_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#field_38407
    [[maybe_unused]] static jfloat get_field_field_38407() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPEED_MULTIPLIER_WHEN_FOLLOWING_DEPOSIT_TARGET", "field_38407", "field_38407", "f_218397_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#field_38407
    [[maybe_unused]] static void set_field_field_38407(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SPEED_MULTIPLIER_WHEN_FOLLOWING_DEPOSIT_TARGET", "field_38407", "field_38407", "f_218397_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#WALK_TO_ITEM_SPEED
    [[maybe_unused]] static jfloat get_field_WALK_TO_ITEM_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPEED_MULTIPLIER_WHEN_RETRIEVING_ITEM", "field_38408", "WALK_TO_ITEM_SPEED", "f_218398_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#WALK_TO_ITEM_SPEED
    [[maybe_unused]] static void set_field_WALK_TO_ITEM_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SPEED_MULTIPLIER_WHEN_RETRIEVING_ITEM", "field_38408", "WALK_TO_ITEM_SPEED", "f_218398_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#FLEE_SPEED
    [[maybe_unused]] static jfloat get_field_FLEE_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SPEED_MULTIPLIER_WHEN_PANICKING", "field_39113", "FLEE_SPEED", "f_218399_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#FLEE_SPEED
    [[maybe_unused]] static void set_field_FLEE_SPEED(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SPEED_MULTIPLIER_WHEN_PANICKING", "field_39113", "FLEE_SPEED", "f_218399_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#field_38938
    [[maybe_unused]] static jint get_field_field_38938() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CLOSE_ENOUGH_TO_TARGET", "field_38938", "field_38938", "f_218400_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#field_38938
    [[maybe_unused]] static void set_field_field_38938(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CLOSE_ENOUGH_TO_TARGET", "field_38938", "field_38938", "f_218400_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#field_38939
    [[maybe_unused]] static jint get_field_field_38939() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TOO_FAR_FROM_TARGET", "field_38939", "field_38939", "f_218401_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#field_38939
    [[maybe_unused]] static void set_field_field_38939(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TOO_FAR_FROM_TARGET", "field_38939", "field_38939", "f_218401_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#field_38410
    [[maybe_unused]] static jint get_field_field_38410() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_LOOK_DISTANCE", "field_38410", "field_38410", "f_218402_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#field_38410
    [[maybe_unused]] static void set_field_field_38410(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_LOOK_DISTANCE", "field_38410", "field_38410", "f_218402_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#field_38411
    [[maybe_unused]] static jint get_field_field_38411() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MIN_WAIT_DURATION", "field_38411", "field_38411", "f_218403_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#field_38411
    [[maybe_unused]] static void set_field_field_38411(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MIN_WAIT_DURATION", "field_38411", "field_38411", "f_218403_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#field_38412
    [[maybe_unused]] static jint get_field_field_38412() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAX_WAIT_DURATION", "field_38412", "field_38412", "f_218404_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#field_38412
    [[maybe_unused]] static void set_field_field_38412(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAX_WAIT_DURATION", "field_38412", "field_38412", "f_218404_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#LIKED_NOTEBLOCK_COOLDOWN_TICKS_EXPIRY
    [[maybe_unused]] static jint get_field_LIKED_NOTEBLOCK_COOLDOWN_TICKS_EXPIRY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "TIME_TO_FORGET_NOTEBLOCK", "field_38413", "LIKED_NOTEBLOCK_COOLDOWN_TICKS_EXPIRY", "f_218405_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#LIKED_NOTEBLOCK_COOLDOWN_TICKS_EXPIRY
    [[maybe_unused]] static void set_field_LIKED_NOTEBLOCK_COOLDOWN_TICKS_EXPIRY(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "TIME_TO_FORGET_NOTEBLOCK", "field_38413", "LIKED_NOTEBLOCK_COOLDOWN_TICKS_EXPIRY", "f_218405_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#WALK_TO_ITEM_RADIUS
    [[maybe_unused]] static jint get_field_WALK_TO_ITEM_RADIUS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "DISTANCE_TO_WANTED_ITEM", "field_38940", "WALK_TO_ITEM_RADIUS", "f_218406_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#WALK_TO_ITEM_RADIUS
    [[maybe_unused]] static void set_field_WALK_TO_ITEM_RADIUS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "DISTANCE_TO_WANTED_ITEM", "field_38940", "WALK_TO_ITEM_RADIUS", "f_218406_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.AllayBrain#GIVE_INVENTORY_RUN_TIME
    [[maybe_unused]] static jint get_field_GIVE_INVENTORY_RUN_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "GIVE_ITEM_TIMEOUT_DURATION", "field_40130", "GIVE_INVENTORY_RUN_TIME", "f_244467_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.AllayBrain#GIVE_INVENTORY_RUN_TIME
    [[maybe_unused]] static void set_field_GIVE_INVENTORY_RUN_TIME(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "GIVE_ITEM_TIMEOUT_DURATION", "field_40130", "GIVE_INVENTORY_RUN_TIME", "f_244467_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeBrain", "method_42660", "create", "m_218419_"), "(Lbuq;)Lbuq;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addCoreActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "initCoreActivity", "method_42663", "addCoreActivities", "m_218425_"), "(Lbuq;)V");
    }

    static void addCoreActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addCoreActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_addIdleActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "initIdleActivity", "method_42666", "addIdleActivities", "m_218431_"), "(Lbuq;)V");
    }

    static void addIdleActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_addIdleActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateActivities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateActivity", "method_42661", "updateActivities", "m_218421_"), "(Lcgk;)V");
    }

    static void updateActivities(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateActivities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_rememberNoteBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "hearNoteblock", "method_42659", "rememberNoteBlock", "m_218416_"), "(Lbtn;Ljd;)V");
    }

    static void rememberNoteBlock(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_rememberNoteBlock();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLookTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getItemDepositPosition", "method_42657", "getLookTarget", "m_218423_"), "(Lbtn;)Ljava/util/Optional;");
    }

    static jobject getLookTarget(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLookTarget();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_hasNearestVisibleWantedItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "hasWantedItem", "method_49122", "hasNearestVisibleWantedItem", "m_271971_"), "(Lbtn;)Z");
    }

    static jboolean hasNearestVisibleWantedItem(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_hasNearestVisibleWantedItem();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shouldGoTowardsNoteBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldDepositItemsAtLikedNoteblock", "method_42658", "shouldGoTowardsNoteBlock", "m_218412_"), "(Lbtn;Lbuq;Ljl;)Z");
    }

    static jboolean shouldGoTowardsNoteBlock(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_shouldGoTowardsNoteBlock();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getLikedLookTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "getLikedPlayerPositionTracker", "method_42662", "getLikedLookTarget", "m_218429_"), "(Lbtn;)Ljava/util/Optional;");
    }

    static jobject getLikedLookTarget(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLikedLookTarget();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getLikedPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getLikedPlayer", "method_43093", "getLikedPlayer", "m_218410_"), "(Lbtn;)Ljava/util/Optional;");
    }

    static jobject getLikedPlayer(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLikedPlayer();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_ALLAYBRAIN_HPP