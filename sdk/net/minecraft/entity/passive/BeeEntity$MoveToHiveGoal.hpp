// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$MOVETOHIVEGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$MOVETOHIVEGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal
 * Remapped: cff$e
 */
namespace BeeEntity$MoveToHiveGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cff$e", "net/minecraft/world/entity/animal/Bee$BeeGoToHiveGoal", "net/minecraft/class_4466$class_4472", "net/minecraft/entity/passive/BeeEntity$MoveToHiveGoal", "net/minecraft/src/C_805_$C_811_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#field_30295
    [[maybe_unused]] static jint get_field_field_30295() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_TRAVELLING_TICKS", "field_30295", "field_30295", "f_148804_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#field_30295
    [[maybe_unused]] static void set_field_field_30295(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_TRAVELLING_TICKS", "field_30295", "field_30295", "f_148804_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#ticks
    static jint get_field_ticks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "travellingTicks", "field_21647", "ticks", "f_27980_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#ticks
    static void set_field_ticks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "travellingTicks", "field_21647", "ticks", "f_27980_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#field_30296
    [[maybe_unused]] static jint get_field_field_30296() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_BLACKLISTED_TARGETS", "field_30296", "field_30296", "f_148805_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#field_30296
    [[maybe_unused]] static void set_field_field_30296(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_BLACKLISTED_TARGETS", "field_30296", "field_30296", "f_148805_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#possibleHives
    static jobject get_field_possibleHives(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "blacklistedTargets", "field_21648", "possibleHives", "f_27981_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#possibleHives
    static void set_field_possibleHives(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "blacklistedTargets", "field_21648", "possibleHives", "f_27981_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lastPath", "field_21649", "path", "f_27982_"), "Leps;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lastPath", "field_21649", "path", "f_27982_"), "Leps;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#field_30297
    [[maybe_unused]] static jint get_field_field_30297() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "TICKS_BEFORE_HIVE_DROP", "field_30297", "field_30297", "f_148806_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#field_30297
    [[maybe_unused]] static void set_field_field_30297(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "TICKS_BEFORE_HIVE_DROP", "field_30297", "field_30297", "f_148806_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#ticksUntilLost
    static jint get_field_ticksUntilLost(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ticksStuck", "field_23133", "ticksUntilLost", "f_27983_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$MoveToHiveGoal#ticksUntilLost
    static void set_field_ticksUntilLost(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ticksStuck", "field_23133", "ticksUntilLost", "f_27983_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_canBeeStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "canBeeUse", "method_21814", "canBeeStart", "m_7989_"), "()Z");
    }

    static jboolean canBeeStart(const jobject& obj) {
                
       const auto methodID = methodID_canBeeStart();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBeeContinue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "canBeeContinueToUse", "method_21815", "canBeeContinue", "m_8011_"), "()Z");
    }

    static jboolean canBeeContinue(const jobject& obj) {
                
       const auto methodID = methodID_canBeeContinue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "start", "method_6269", "start", "m_8056_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "stop", "method_6270", "stop", "m_8041_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_startMovingToFar() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pathfindDirectlyTowards", "method_24006", "startMovingToFar", "m_27990_"), "(Ljd;)Z");
    }

    static jboolean startMovingToFar(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_startMovingToFar();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isPossibleHive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isTargetBlacklisted", "method_24007", "isPossibleHive", "m_27993_"), "(Ljd;)Z");
    }

    static jboolean isPossibleHive(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isPossibleHive();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addPossibleHive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "blacklistTarget", "method_24009", "addPossibleHive", "m_27998_"), "(Ljd;)V");
    }

    static void addPossibleHive(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addPossibleHive();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clearPossibleHives() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "clearBlacklist", "method_24011", "clearPossibleHives", "m_28006_"), "()V");
    }

    static void clearPossibleHives(const jobject& obj) {
                
       const auto methodID = methodID_clearPossibleHives();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_makeChosenHivePossibleHive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "dropAndBlacklistHive", "method_24012", "makeChosenHivePossibleHive", "m_28007_"), "()V");
    }

    static void makeChosenHivePossibleHive(const jobject& obj) {
                
       const auto methodID = methodID_makeChosenHivePossibleHive();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLost() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "dropHive", "method_23885", "setLost", "m_28008_"), "()V");
    }

    static void setLost(const jobject& obj) {
                
       const auto methodID = methodID_setLost();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isCloseEnough() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "hasReachedTarget", "method_24010", "isCloseEnough", "m_28001_"), "(Ljd;)Z");
    }

    static jboolean isCloseEnough(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isCloseEnough();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$MOVETOHIVEGOAL_HPP