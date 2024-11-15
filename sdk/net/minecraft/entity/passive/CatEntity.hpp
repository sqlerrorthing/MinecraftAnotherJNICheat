// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_CATENTITY_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_CATENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.CatEntity
 * Remapped: cfh
 */
namespace CatEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfh", "net/minecraft/world/entity/animal/Cat", "net/minecraft/class_1451", "net/minecraft/entity/passive/CatEntity", "net/minecraft/src/C_819_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.passive.CatEntity#CROUCHING_SPEED
    [[maybe_unused]] static jdouble get_field_CROUCHING_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cg", "TEMPT_SPEED_MOD", "field_30310", "CROUCHING_SPEED", "f_148842_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.CatEntity#CROUCHING_SPEED
    [[maybe_unused]] static void set_field_CROUCHING_SPEED(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cg", "TEMPT_SPEED_MOD", "field_30310", "CROUCHING_SPEED", "f_148842_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.CatEntity#NORMAL_SPEED
    [[maybe_unused]] static jdouble get_field_NORMAL_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ch", "WALK_SPEED_MOD", "field_30311", "NORMAL_SPEED", "f_148843_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.CatEntity#NORMAL_SPEED
    [[maybe_unused]] static void set_field_NORMAL_SPEED(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ch", "WALK_SPEED_MOD", "field_30311", "NORMAL_SPEED", "f_148843_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.CatEntity#SPRINTING_SPEED
    [[maybe_unused]] static jdouble get_field_SPRINTING_SPEED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ci", "SPRINT_SPEED_MOD", "field_30312", "SPRINTING_SPEED", "f_148844_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.CatEntity#SPRINTING_SPEED
    [[maybe_unused]] static void set_field_SPRINTING_SPEED(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ci", "SPRINT_SPEED_MOD", "field_30312", "SPRINTING_SPEED", "f_148844_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.CatEntity#CAT_VARIANT
    [[maybe_unused]] static jobject get_field_CAT_VARIANT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cj", "DATA_VARIANT_ID", "field_6811", "CAT_VARIANT", "f_218131_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#CAT_VARIANT
    [[maybe_unused]] static void set_field_CAT_VARIANT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cj", "DATA_VARIANT_ID", "field_6811", "CAT_VARIANT", "f_218131_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.CatEntity#IN_SLEEPING_POSE
    [[maybe_unused]] static jobject get_field_IN_SLEEPING_POSE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ck", "IS_LYING", "field_16284", "IN_SLEEPING_POSE", "f_28105_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#IN_SLEEPING_POSE
    [[maybe_unused]] static void set_field_IN_SLEEPING_POSE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ck", "IS_LYING", "field_16284", "IN_SLEEPING_POSE", "f_28105_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.CatEntity#HEAD_DOWN
    [[maybe_unused]] static jobject get_field_HEAD_DOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cl", "RELAX_STATE_ONE", "field_16292", "HEAD_DOWN", "f_28106_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#HEAD_DOWN
    [[maybe_unused]] static void set_field_HEAD_DOWN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cl", "RELAX_STATE_ONE", "field_16292", "HEAD_DOWN", "f_28106_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.CatEntity#COLLAR_COLOR
    [[maybe_unused]] static jobject get_field_COLLAR_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cm", "DATA_COLLAR_COLOR", "field_16285", "COLLAR_COLOR", "f_28107_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#COLLAR_COLOR
    [[maybe_unused]] static void set_field_COLLAR_COLOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cm", "DATA_COLLAR_COLOR", "field_16285", "COLLAR_COLOR", "f_28107_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.CatEntity#DEFAULT_VARIANT
    [[maybe_unused]] static jobject get_field_DEFAULT_VARIANT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cn", "DEFAULT_VARIANT", "field_49979", "DEFAULT_VARIANT", "f_314571_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#DEFAULT_VARIANT
    [[maybe_unused]] static void set_field_DEFAULT_VARIANT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cn", "DEFAULT_VARIANT", "field_49979", "DEFAULT_VARIANT", "f_314571_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.CatEntity#fleeGoal
    static jobject get_field_fleeGoal(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("co", "avoidPlayersGoal", "field_6808", "fleeGoal", "f_28108_"), "Lcfh$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#fleeGoal
    static void set_field_fleeGoal(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("co", "avoidPlayersGoal", "field_6808", "fleeGoal", "f_28108_"), "Lcfh$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.CatEntity#temptGoal
    static jobject get_field_temptGoal(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cp", "temptGoal", "field_6810", "temptGoal", "f_28109_"), "Lcbu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#temptGoal
    static void set_field_temptGoal(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cp", "temptGoal", "field_6810", "temptGoal", "f_28109_"), "Lcbu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.CatEntity#sleepAnimation
    static jfloat get_field_sleepAnimation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cq", "lieDownAmount", "field_16290", "sleepAnimation", "f_28110_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#sleepAnimation
    static void set_field_sleepAnimation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cq", "lieDownAmount", "field_16290", "sleepAnimation", "f_28110_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.CatEntity#prevSleepAnimation
    static jfloat get_field_prevSleepAnimation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cr", "lieDownAmountO", "field_16291", "prevSleepAnimation", "f_28111_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#prevSleepAnimation
    static void set_field_prevSleepAnimation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cr", "lieDownAmountO", "field_16291", "prevSleepAnimation", "f_28111_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.CatEntity#tailCurlAnimation
    static jfloat get_field_tailCurlAnimation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cs", "lieDownAmountTail", "field_16288", "tailCurlAnimation", "f_28098_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#tailCurlAnimation
    static void set_field_tailCurlAnimation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cs", "lieDownAmountTail", "field_16288", "tailCurlAnimation", "f_28098_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.CatEntity#prevTailCurlAnimation
    static jfloat get_field_prevTailCurlAnimation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ct", "lieDownAmountOTail", "field_16289", "prevTailCurlAnimation", "f_28099_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#prevTailCurlAnimation
    static void set_field_prevTailCurlAnimation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ct", "lieDownAmountOTail", "field_16289", "prevTailCurlAnimation", "f_28099_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.CatEntity#headDownAnimation
    static jfloat get_field_headDownAnimation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cu", "relaxStateOneAmount", "field_16286", "headDownAnimation", "f_28100_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#headDownAnimation
    static void set_field_headDownAnimation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cu", "relaxStateOneAmount", "field_16286", "headDownAnimation", "f_28100_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.CatEntity#prevHeadDownAnimation
    static jfloat get_field_prevHeadDownAnimation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cv", "relaxStateOneAmountO", "field_16287", "prevHeadDownAnimation", "f_28101_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.CatEntity#prevHeadDownAnimation
    static void set_field_prevHeadDownAnimation(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cv", "relaxStateOneAmountO", "field_16287", "prevHeadDownAnimation", "f_28101_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gu", "getTextureId", "method_16092", "getTexture", "m_322150_"), "()Lakr;");
    }

    static jobject getTexture(const jobject& obj) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_initGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "registerGoals", "method_5959", "initGoals", "m_8099_"), "()V");
    }

    static void initGoals(const jobject& obj) {
                
       const auto methodID = methodID_initGoals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gv", "getVariant", "method_47843", "getVariant", "m_28554_"), "()Ljm;");
    }

    static jobject getVariant(const jobject& obj) {
                
       const auto methodID = methodID_getVariant();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setVariant() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "setVariant", "method_47842", "setVariant", "m_28464_"), "(Ljm;)V");
    }

    static void setVariant(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setVariant();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setInSleepingPose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A", "setLying", "method_16088", "setInSleepingPose", "m_28181_"), "(Z)V");
    }

    static void setInSleepingPose(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setInSleepingPose();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isInSleepingPose() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gw", "isLying", "method_16086", "isInSleepingPose", "m_28164_"), "()Z");
    }

    static jboolean isInSleepingPose(const jobject& obj) {
                
       const auto methodID = methodID_isInSleepingPose();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setHeadDown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "setRelaxStateOne", "method_16087", "setHeadDown", "m_28185_"), "(Z)V");
    }

    static void setHeadDown(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setHeadDown();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isHeadDown() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gB", "isRelaxStateOne", "method_16093", "isHeadDown", "m_28165_"), "()Z");
    }

    static jboolean isHeadDown(const jobject& obj) {
                
       const auto methodID = methodID_isHeadDown();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCollarColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gx", "getCollarColor", "method_16096", "getCollarColor", "m_28166_"), "()Lcti;");
    }

    static jobject getCollarColor(const jobject& obj) {
                
       const auto methodID = methodID_getCollarColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setCollarColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setCollarColor", "method_16094", "setCollarColor", "m_28131_"), "(Lcti;)V");
    }

    static void setCollarColor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setCollarColor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_mobTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ab", "customServerAiStep", "method_5958", "mobTick", "m_8024_"), "()V");
    }

    static void mobTick(const jobject& obj) {
                
       const auto methodID = methodID_mobTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAmbientSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getAmbientSound", "method_5994", "getAmbientSound", "m_7515_"), "()Lavo;");
    }

    static jobject getAmbientSound(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMinAmbientSoundDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("R", "getAmbientSoundInterval", "method_5970", "getMinAmbientSoundDelay", "m_8100_"), "()I");
    }

    static jint getMinAmbientSoundDelay(const jobject& obj) {
                
       const auto methodID = methodID_getMinAmbientSoundDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_hiss() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gy", "hiss", "method_16089", "hiss", "m_28167_"), "()V");
    }

    static void hiss(const jobject& obj) {
                
       const auto methodID = methodID_hiss();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHurtSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getHurtSound", "method_6011", "getHurtSound", "m_7975_"), "(Lbrk;)Lavo;");
    }

    static jobject getHurtSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getHurtSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDeathSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n_", "getDeathSound", "method_6002", "getDeathSound", "m_5592_"), "()Lavo;");
    }

    static jobject getDeathSound(const jobject& obj) {
                
       const auto methodID = methodID_getDeathSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createCatAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("gz", "createAttributes", "method_26881", "createCatAttributes", "m_28168_"), "()Lbuv$a;");
    }

    static jobject createCatAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createCatAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_eat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "usePlayerItem", "method_6475", "eat", "m_142075_"), "(Lcmx;Lbqq;Lcuq;)V");
    }

    static void eat(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_eat();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateAnimations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gC", "handleLieDown", "method_16085", "updateAnimations", "m_28170_"), "()V");
    }

    static void updateAnimations(const jobject& obj) {
                
       const auto methodID = methodID_updateAnimations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateSleepAnimation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gD", "updateLieDownAmount", "method_16090", "updateSleepAnimation", "m_28171_"), "()V");
    }

    static void updateSleepAnimation(const jobject& obj) {
                
       const auto methodID = methodID_updateSleepAnimation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateHeadDownAnimation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gE", "updateRelaxStateOneAmount", "method_16084", "updateHeadDownAnimation", "m_28172_"), "()V");
    }

    static void updateHeadDownAnimation(const jobject& obj) {
                
       const auto methodID = methodID_updateHeadDownAnimation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSleepAnimation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("H", "getLieDownAmount", "method_16082", "getSleepAnimation", "m_28183_"), "(F)F");
    }

    static jfloat getSleepAnimation(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getSleepAnimation();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTailCurlAnimation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("I", "getLieDownAmountTail", "method_16091", "getTailCurlAnimation", "m_28187_"), "(F)F");
    }

    static jfloat getTailCurlAnimation(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getTailCurlAnimation();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getHeadDownAnimation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J", "getRelaxStateOneAmount", "method_16095", "getHeadDownAnimation", "m_28116_"), "(F)F");
    }

    static jfloat getHeadDownAnimation(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getHeadDownAnimation();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBreedOffspring", "method_6573", "createChild", "m_142606_"), "(Laqu;Lbsl;)Lcfh;");
    }

    static jobject createChild(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canBreedWith() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canMate", "method_6474", "canBreedWith", "m_7848_"), "(Lcfe;)Z");
    }

    static jboolean canBreedWith(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canBreedWith();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finalizeSpawn", "method_5943", "initialize", "m_6518_"), "(Lddl;Lbqp;Lbtr;Lbuh;)Lbuh;");
    }

    static jobject initialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_initialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_interactMob() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mobInteract", "method_5992", "interactMob", "m_6071_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interactMob(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interactMob();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isBreedingItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "isFood", "method_6481", "isBreedingItem", "m_6898_"), "(Lcuq;)Z");
    }

    static jboolean isBreedingItem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isBreedingItem();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canImmediatelyDespawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "removeWhenFarAway", "method_5974", "canImmediatelyDespawn", "m_6785_"), "(D)Z");
    }

    static jboolean canImmediatelyDespawn(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_canImmediatelyDespawn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTamed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setTame", "method_6173", "setTamed", "m_7105_"), "(ZZ)V");
    }

    static void setTamed(const jobject& obj, const jboolean& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_setTamed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onTamedChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gA", "reassessTameGoals", "method_6175", "onTamedChanged", "m_28161_"), "()V");
    }

    static void onTamedChanged(const jobject& obj) {
                
       const auto methodID = methodID_onTamedChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryTame() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "tryToTame", "method_58168", "tryTame", "m_320972_"), "(Lcmx;)V");
    }

    static void tryTame(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryTame();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_bypassesSteppingEffects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bX", "isSteppingCarefully", "method_21749", "bypassesSteppingEffects", "m_20161_"), "()Z");
    }

    static jboolean bypassesSteppingEffects(const jobject& obj) {
                
       const auto methodID = methodID_bypassesSteppingEffects();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_CATENTITY_HPP