// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PROJECTILE_FISHINGBOBBERENTITY_HPP
#define NET_MINECRAFT_ENTITY_PROJECTILE_FISHINGBOBBERENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.projectile.FishingBobberEntity
 * Remapped: cnl
 */
namespace FishingBobberEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cnl", "net/minecraft/world/entity/projectile/FishingHook", "net/minecraft/class_1536", "net/minecraft/entity/projectile/FishingBobberEntity", "net/minecraft/src/C_1160_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.projectile.FishingBobberEntity#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_36336", "LOGGER", "f_201977_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_36336", "LOGGER", "f_201977_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#velocityRandom
    static jobject get_field_velocityRandom(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "syncronizedRandom", "field_23231", "velocityRandom", "f_37098_"), "Layw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#velocityRandom
    static void set_field_velocityRandom(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "syncronizedRandom", "field_23231", "velocityRandom", "f_37098_"), "Layw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#caughtFish
    static jboolean get_field_caughtFish(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "biting", "field_23232", "caughtFish", "f_37099_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#caughtFish
    static void set_field_caughtFish(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "biting", "field_23232", "caughtFish", "f_37099_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#outOfOpenWaterTicks
    static jint get_field_outOfOpenWaterTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "outOfWaterTime", "field_23233", "outOfOpenWaterTicks", "f_37100_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#outOfOpenWaterTicks
    static void set_field_outOfOpenWaterTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "outOfWaterTime", "field_23233", "outOfOpenWaterTicks", "f_37100_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.projectile.FishingBobberEntity#field_30665
    [[maybe_unused]] static jint get_field_field_30665() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_OUT_OF_WATER_TIME", "field_30665", "field_30665", "f_150136_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#field_30665
    [[maybe_unused]] static void set_field_field_30665(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_OUT_OF_WATER_TIME", "field_30665", "field_30665", "f_150136_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.projectile.FishingBobberEntity#HOOK_ENTITY_ID
    [[maybe_unused]] static jobject get_field_HOOK_ENTITY_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DATA_HOOKED_ENTITY", "field_7170", "HOOK_ENTITY_ID", "f_37101_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#HOOK_ENTITY_ID
    [[maybe_unused]] static void set_field_HOOK_ENTITY_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "DATA_HOOKED_ENTITY", "field_7170", "HOOK_ENTITY_ID", "f_37101_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.projectile.FishingBobberEntity#CAUGHT_FISH
    [[maybe_unused]] static jobject get_field_CAUGHT_FISH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DATA_BITING", "field_23234", "CAUGHT_FISH", "f_37102_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#CAUGHT_FISH
    [[maybe_unused]] static void set_field_CAUGHT_FISH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DATA_BITING", "field_23234", "CAUGHT_FISH", "f_37102_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#removalTimer
    static jint get_field_removalTimer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "life", "field_7167", "removalTimer", "f_37103_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#removalTimer
    static void set_field_removalTimer(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "life", "field_7167", "removalTimer", "f_37103_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#hookCountdown
    static jint get_field_hookCountdown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "nibble", "field_7173", "hookCountdown", "f_37089_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#hookCountdown
    static void set_field_hookCountdown(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "nibble", "field_7173", "hookCountdown", "f_37089_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#waitCountdown
    static jint get_field_waitCountdown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "timeUntilLured", "field_7174", "waitCountdown", "f_37090_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#waitCountdown
    static void set_field_waitCountdown(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "timeUntilLured", "field_7174", "waitCountdown", "f_37090_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#fishTravelCountdown
    static jint get_field_fishTravelCountdown(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "timeUntilHooked", "field_7172", "fishTravelCountdown", "f_37091_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#fishTravelCountdown
    static void set_field_fishTravelCountdown(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "timeUntilHooked", "field_7172", "fishTravelCountdown", "f_37091_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#fishAngle
    static jfloat get_field_fishAngle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "fishAngle", "field_7169", "fishAngle", "f_37092_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#fishAngle
    static void set_field_fishAngle(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "fishAngle", "field_7169", "fishAngle", "f_37092_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#inOpenWater
    static jboolean get_field_inOpenWater(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "openWater", "field_23134", "inOpenWater", "f_37093_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#inOpenWater
    static void set_field_inOpenWater(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "openWater", "field_23134", "inOpenWater", "f_37093_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#hookedEntity
    static jobject get_field_hookedEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "hookedIn", "field_7165", "hookedEntity", "f_37094_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#hookedEntity
    static void set_field_hookedEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "hookedIn", "field_7165", "hookedEntity", "f_37094_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "currentState", "field_7175", "state", "f_37095_"), "Lcnl$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "currentState", "field_7175", "state", "f_37095_"), "Lcnl$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#luckBonus
    static jint get_field_luckBonus(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "luck", "field_7171", "luckBonus", "f_37096_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#luckBonus
    static void set_field_luckBonus(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "luck", "field_7171", "luckBonus", "f_37096_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.FishingBobberEntity#waitTimeReductionTicks
    static jint get_field_waitTimeReductionTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "lureSpeed", "field_7168", "waitTimeReductionTicks", "f_37097_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.FishingBobberEntity#waitTimeReductionTicks
    static void set_field_waitTimeReductionTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "lureSpeed", "field_7168", "waitTimeReductionTicks", "f_37097_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onTrackedDataSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onSyncedDataUpdated", "method_5674", "onTrackedDataSet", "m_7350_"), "(Lajw;)V");
    }

    static void onTrackedDataSet(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onTrackedDataSet();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldRender() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldRenderAtSqrDistance", "method_5640", "shouldRender", "m_6783_"), "(D)Z");
    }

    static jboolean shouldRender(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_shouldRender();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateTrackedPositionAndAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lerpTo", "method_5759", "updateTrackedPositionAndAngles", "m_6453_"), "(DDDFFI)V");
    }

    static void updateTrackedPositionAndAngles(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jfloat& arg3, const jfloat& arg4, const jint& arg5) {
                
       const auto methodID = methodID_updateTrackedPositionAndAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeIfInvalid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldStopFishing", "method_6959", "removeIfInvalid", "m_37136_"), "(Lcmx;)Z");
    }

    static jboolean removeIfInvalid(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeIfInvalid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_checkForCollision() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "checkCollision", "method_6958", "checkForCollision", "m_37171_"), "()V");
    }

    static void checkForCollision(const jobject& obj) {
                
       const auto methodID = methodID_checkForCollision();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_canHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canHitEntity", "method_26958", "canHit", "m_5603_"), "(Lbsr;)Z");
    }

    static jboolean canHit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canHit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onEntityHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHitEntity", "method_7454", "onEntityHit", "m_5790_"), "(Lewz;)V");
    }

    static void onEntityHit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onEntityHit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onBlockHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHitBlock", "method_24920", "onBlockHit", "m_8060_"), "(Lewy;)V");
    }

    static void onBlockHit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onBlockHit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateHookedEntityId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A", "setHookedEntity", "method_6951", "updateHookedEntityId", "m_150157_"), "(Lbsr;)V");
    }

    static void updateHookedEntityId(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateHookedEntityId();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tickFishingLogic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "catchingFish", "method_6949", "tickFishingLogic", "m_37145_"), "(Ljd;)V");
    }

    static void tickFishingLogic(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tickFishingLogic();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isOpenOrWaterAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "calculateOpenWater", "method_26086", "isOpenOrWaterAround", "m_37158_"), "(Ljd;)Z");
    }

    static jboolean isOpenOrWaterAround(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isOpenOrWaterAround();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPositionType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOpenWaterTypeForArea", "method_26341", "getPositionType", "m_37147_"), "(Ljd;Ljd;)Lcnl$b;");
    }

    static jobject getPositionType(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getPositionType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getPositionType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getOpenWaterTypeForBlock", "method_26342", "getPositionType", "m_37163_"), "(Ljd;)Lcnl$b;");
    }

    static jobject _getPositionType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getPositionType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isInOpenWater() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "isOpenWaterFishing", "method_26088", "isInOpenWater", "m_37166_"), "()Z");
    }

    static jboolean isInOpenWater(const jobject& obj) {
                
       const auto methodID = methodID_isInOpenWater();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_use() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "retrieve", "method_6957", "use", "m_37156_"), "(Lcuq;)I");
    }

    static jint use(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_use();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_handleStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "handleEntityEvent", "method_5711", "handleStatus", "m_7822_"), "(B)V");
    }

    static void handleStatus(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_handleStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_pullHookedEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "pullEntity", "method_6954", "pullHookedEntity", "m_150155_"), "(Lbsr;)V");
    }

    static void pullHookedEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_pullHookedEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMoveEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bc", "getMovementEmission", "method_33570", "getMoveEffect", "m_142319_"), "()Lbsr$b;");
    }

    static jobject getMoveEffect(const jobject& obj) {
                
       const auto methodID = methodID_getMoveEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "remove", "method_5650", "remove", "m_142687_"), "(Lbsr$c;)V");
    }

    static void remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onRemoved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("as", "onClientRemoval", "method_36209", "onRemoved", "m_142036_"), "()V");
    }

    static void onRemoved(const jobject& obj) {
                
       const auto methodID = methodID_onRemoved();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setOwner", "method_7432", "setOwner", "m_5602_"), "(Lbsr;)V");
    }

    static void setOwner(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setOwner();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setPlayerFishHook() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateOwnerInfo", "method_36210", "setPlayerFishHook", "m_150147_"), "(Lcnl;)V");
    }

    static void setPlayerFishHook(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setPlayerFishHook();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPlayerOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getPlayerOwner", "method_6947", "getPlayerOwner", "m_37168_"), "()Lcmx;");
    }

    static jobject getPlayerOwner(const jobject& obj) {
                
       const auto methodID = methodID_getPlayerOwner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHookedEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getHookedIn", "method_26957", "getHookedEntity", "m_37170_"), "()Lbsr;");
    }

    static jobject getHookedEntity(const jobject& obj) {
                
       const auto methodID = methodID_getHookedEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canUsePortals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "canUsePortal", "method_5822", "canUsePortals", "m_31145_"), "(Z)Z");
    }

    static jboolean canUsePortals(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_canUsePortals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createSpawnPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAddEntityPacket", "method_18002", "createSpawnPacket", "m_5654_"), "(Laqt;)Lzg;");
    }

    static jobject createSpawnPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createSpawnPacket();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSpawnPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recreateFromPacket", "method_31471", "onSpawnPacket", "m_141965_"), "(Labv;)V");
    }

    static void onSpawnPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onSpawnPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PROJECTILE_FISHINGBOBBERENTITY_HPP