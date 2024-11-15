// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$POLLINATEGOAL_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$POLLINATEGOAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.BeeEntity$PollinateGoal
 * Remapped: cff$k
 */
namespace BeeEntity$PollinateGoal {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cff$k", "net/minecraft/world/entity/animal/Bee$BeePollinateGoal", "net/minecraft/class_4466$class_4478", "net/minecraft/entity/passive/BeeEntity$PollinateGoal", "net/minecraft/src/C_805_$C_817_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30300
    [[maybe_unused]] static jint get_field_field_30300() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MIN_POLLINATION_TICKS", "field_30300", "field_30300", "f_148812_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30300
    [[maybe_unused]] static void set_field_field_30300(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MIN_POLLINATION_TICKS", "field_30300", "field_30300", "f_148812_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30301
    [[maybe_unused]] static jint get_field_field_30301() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MIN_FIND_FLOWER_RETRY_COOLDOWN", "field_30301", "field_30301", "f_148813_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30301
    [[maybe_unused]] static void set_field_field_30301(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "MIN_FIND_FLOWER_RETRY_COOLDOWN", "field_30301", "field_30301", "f_148813_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30302
    [[maybe_unused]] static jint get_field_field_30302() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_FIND_FLOWER_RETRY_COOLDOWN", "field_30302", "field_30302", "f_148814_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30302
    [[maybe_unused]] static void set_field_field_30302(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_FIND_FLOWER_RETRY_COOLDOWN", "field_30302", "field_30302", "f_148814_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#flowerPredicate
    static jobject get_field_flowerPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "VALID_POLLINATION_BLOCKS", "field_20617", "flowerPredicate", "f_28063_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#flowerPredicate
    static void set_field_flowerPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "VALID_POLLINATION_BLOCKS", "field_20617", "flowerPredicate", "f_28063_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30303
    [[maybe_unused]] static jdouble get_field_field_30303() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ARRIVAL_THRESHOLD", "field_30303", "field_30303", "f_148815_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30303
    [[maybe_unused]] static void set_field_field_30303(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "ARRIVAL_THRESHOLD", "field_30303", "field_30303", "f_148815_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30304
    [[maybe_unused]] static jint get_field_field_30304() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "POSITION_CHANGE_CHANCE", "field_30304", "field_30304", "f_148816_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30304
    [[maybe_unused]] static void set_field_field_30304(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "POSITION_CHANGE_CHANCE", "field_30304", "field_30304", "f_148816_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30305
    [[maybe_unused]] static jfloat get_field_field_30305() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SPEED_MODIFIER", "field_30305", "field_30305", "f_148817_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30305
    [[maybe_unused]] static void set_field_field_30305(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SPEED_MODIFIER", "field_30305", "field_30305", "f_148817_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30306
    [[maybe_unused]] static jfloat get_field_field_30306() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "HOVER_HEIGHT_WITHIN_FLOWER", "field_30306", "field_30306", "f_148818_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30306
    [[maybe_unused]] static void set_field_field_30306(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "HOVER_HEIGHT_WITHIN_FLOWER", "field_30306", "field_30306", "f_148818_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30307
    [[maybe_unused]] static jfloat get_field_field_30307() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "HOVER_POS_OFFSET", "field_30307", "field_30307", "f_148819_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30307
    [[maybe_unused]] static void set_field_field_30307(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "HOVER_POS_OFFSET", "field_30307", "field_30307", "f_148819_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#pollinationTicks
    static jint get_field_pollinationTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "successfulPollinatingTicks", "field_20378", "pollinationTicks", "f_28064_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#pollinationTicks
    static void set_field_pollinationTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "successfulPollinatingTicks", "field_20378", "pollinationTicks", "f_28064_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#lastPollinationTick
    static jint get_field_lastPollinationTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "lastSoundPlayedTick", "field_20379", "lastPollinationTick", "f_28065_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#lastPollinationTick
    static void set_field_lastPollinationTick(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "lastSoundPlayedTick", "field_20379", "lastPollinationTick", "f_28065_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#running
    static jboolean get_field_running(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "pollinating", "field_21080", "running", "f_28066_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#running
    static void set_field_running(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "pollinating", "field_21080", "running", "f_28066_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#nextTarget
    static jobject get_field_nextTarget(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "hoverPos", "field_21511", "nextTarget", "f_28067_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#nextTarget
    static void set_field_nextTarget(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "hoverPos", "field_21511", "nextTarget", "f_28067_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#ticks
    static jint get_field_ticks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "pollinatingTicks", "field_21651", "ticks", "f_28068_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#ticks
    static void set_field_ticks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "pollinatingTicks", "field_21651", "ticks", "f_28068_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30308
    [[maybe_unused]] static jint get_field_field_30308() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "MAX_POLLINATING_TICKS", "field_30308", "field_30308", "f_148820_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.BeeEntity$PollinateGoal#field_30308
    [[maybe_unused]] static void set_field_field_30308(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "MAX_POLLINATING_TICKS", "field_30308", "field_30308", "f_148820_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
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
    
    static jmethodID methodID_completedPollination() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "hasPollinatedLongEnough", "method_21820", "completedPollination", "m_28085_"), "()Z");
    }

    static jboolean completedPollination(const jobject& obj) {
                
       const auto methodID = methodID_completedPollination();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isRunning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "isPollinating", "method_23346", "isRunning", "m_28086_"), "()Z");
    }

    static jboolean isRunning(const jobject& obj) {
                
       const auto methodID = methodID_isRunning();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_cancel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "stopPollinating", "method_23748", "cancel", "m_28087_"), "()V");
    }

    static void cancel(const jobject& obj) {
                
       const auto methodID = methodID_cancel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
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
    
    static jmethodID methodID_shouldRunEveryTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("V_", "requiresUpdateEveryTick", "method_38846", "shouldRunEveryTick", "m_183429_"), "()Z");
    }

    static jboolean shouldRunEveryTick(const jobject& obj) {
                
       const auto methodID = methodID_shouldRunEveryTick();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_6268", "tick", "m_8037_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_moveToNextTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "setWantedPos", "method_23749", "moveToNextTarget", "m_28088_"), "()V");
    }

    static void moveToNextTarget(const jobject& obj) {
                
       const auto methodID = methodID_moveToNextTarget();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRandomOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getOffset", "method_23750", "getRandomOffset", "m_28089_"), "()F");
    }

    static jfloat getRandomOffset(const jobject& obj) {
                
       const auto methodID = methodID_getRandomOffset();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFlower() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "findNearbyFlower", "method_21821", "getFlower", "m_28090_"), "()Ljava/util/Optional;");
    }

    static jobject getFlower(const jobject& obj) {
                
       const auto methodID = methodID_getFlower();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_findFlower() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findNearestBlock", "method_22326", "findFlower", "m_28075_"), "(Ljava/util/function/Predicate;D)Ljava/util/Optional;");
    }

    static jobject findFlower(const jobject& obj, const jobject& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID_findFlower();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_BEEENTITY$POLLINATEGOAL_HPP