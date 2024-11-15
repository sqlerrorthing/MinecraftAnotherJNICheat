// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_GOATENTITY_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_GOATENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.GoatEntity
 * Remapped: che
 */
namespace GoatEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("che", "net/minecraft/world/entity/animal/goat/Goat", "net/minecraft/class_6053", "net/minecraft/entity/passive/GoatEntity", "net/minecraft/src/C_141129_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.passive.GoatEntity#LONG_JUMPING_DIMENSIONS
    [[maybe_unused]] static jobject get_field_LONG_JUMPING_DIMENSIONS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cc", "LONG_JUMPING_DIMENSIONS", "field_30399", "LONG_JUMPING_DIMENSIONS", "f_149342_"), "Lbsu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatEntity#LONG_JUMPING_DIMENSIONS
    [[maybe_unused]] static void set_field_LONG_JUMPING_DIMENSIONS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cc", "LONG_JUMPING_DIMENSIONS", "field_30399", "LONG_JUMPING_DIMENSIONS", "f_149342_"), "Lbsu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatEntity#DEFAULT_ATTACK_DAMAGE
    [[maybe_unused]] static jint get_field_DEFAULT_ATTACK_DAMAGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cj", "ADULT_ATTACK_DAMAGE", "field_34022", "DEFAULT_ATTACK_DAMAGE", "f_182382_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatEntity#DEFAULT_ATTACK_DAMAGE
    [[maybe_unused]] static void set_field_DEFAULT_ATTACK_DAMAGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cj", "ADULT_ATTACK_DAMAGE", "field_34022", "DEFAULT_ATTACK_DAMAGE", "f_182382_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatEntity#BABY_ATTACK_DAMAGE
    [[maybe_unused]] static jint get_field_BABY_ATTACK_DAMAGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ck", "BABY_ATTACK_DAMAGE", "field_34023", "BABY_ATTACK_DAMAGE", "f_182383_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatEntity#BABY_ATTACK_DAMAGE
    [[maybe_unused]] static void set_field_BABY_ATTACK_DAMAGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ck", "BABY_ATTACK_DAMAGE", "field_34023", "BABY_ATTACK_DAMAGE", "f_182383_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.entity.passive.GoatEntity#SENSORS
    [[maybe_unused]] static jobject get_field_SENSORS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "SENSOR_TYPES", "field_30400", "SENSORS", "f_149343_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.passive.GoatEntity#SENSORS
    [[maybe_unused]] static void set_field_SENSORS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "SENSOR_TYPES", "field_30400", "SENSORS", "f_149343_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.entity.passive.GoatEntity#MEMORY_MODULES
    [[maybe_unused]] static jobject get_field_MEMORY_MODULES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ce", "MEMORY_TYPES", "field_30401", "MEMORY_MODULES", "f_149344_"), "Lcom/google/common/collect/ImmutableList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.passive.GoatEntity#MEMORY_MODULES
    [[maybe_unused]] static void set_field_MEMORY_MODULES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ce", "MEMORY_TYPES", "field_30401", "MEMORY_MODULES", "f_149344_"), "Lcom/google/common/collect/ImmutableList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatEntity#FALL_DAMAGE_SUBTRACTOR
    [[maybe_unused]] static jint get_field_FALL_DAMAGE_SUBTRACTOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cg", "GOAT_FALL_DAMAGE_REDUCTION", "field_30402", "FALL_DAMAGE_SUBTRACTOR", "f_149345_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatEntity#FALL_DAMAGE_SUBTRACTOR
    [[maybe_unused]] static void set_field_FALL_DAMAGE_SUBTRACTOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cg", "GOAT_FALL_DAMAGE_REDUCTION", "field_30402", "FALL_DAMAGE_SUBTRACTOR", "f_149345_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatEntity#SCREAMING_CHANCE
    [[maybe_unused]] static jdouble get_field_SCREAMING_CHANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ch", "GOAT_SCREAMING_CHANCE", "field_30403", "SCREAMING_CHANCE", "f_149346_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatEntity#SCREAMING_CHANCE
    [[maybe_unused]] static void set_field_SCREAMING_CHANCE(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ch", "GOAT_SCREAMING_CHANCE", "field_30403", "SCREAMING_CHANCE", "f_149346_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.GoatEntity#field_39046
    [[maybe_unused]] static jdouble get_field_field_39046() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ci", "UNIHORN_CHANCE", "field_39046", "field_39046", "f_218749_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.GoatEntity#field_39046
    [[maybe_unused]] static void set_field_field_39046(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("ci", "UNIHORN_CHANCE", "field_39046", "field_39046", "f_218749_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatEntity#SCREAMING
    [[maybe_unused]] static jobject get_field_SCREAMING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cl", "DATA_IS_SCREAMING_GOAT", "field_33486", "SCREAMING", "f_149347_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatEntity#SCREAMING
    [[maybe_unused]] static void set_field_SCREAMING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cl", "DATA_IS_SCREAMING_GOAT", "field_33486", "SCREAMING", "f_149347_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatEntity#LEFT_HORN
    [[maybe_unused]] static jobject get_field_LEFT_HORN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cm", "DATA_HAS_LEFT_HORN", "field_39047", "LEFT_HORN", "f_218750_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatEntity#LEFT_HORN
    [[maybe_unused]] static void set_field_LEFT_HORN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cm", "DATA_HAS_LEFT_HORN", "field_39047", "LEFT_HORN", "f_218750_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.GoatEntity#RIGHT_HORN
    [[maybe_unused]] static jobject get_field_RIGHT_HORN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cn", "DATA_HAS_RIGHT_HORN", "field_39048", "RIGHT_HORN", "f_218751_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatEntity#RIGHT_HORN
    [[maybe_unused]] static void set_field_RIGHT_HORN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cn", "DATA_HAS_RIGHT_HORN", "field_39048", "RIGHT_HORN", "f_218751_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.GoatEntity#preparingRam
    static jboolean get_field_preparingRam(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("co", "isLoweringHead", "field_33487", "preparingRam", "f_149348_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatEntity#preparingRam
    static void set_field_preparingRam(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("co", "isLoweringHead", "field_33487", "preparingRam", "f_149348_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.GoatEntity#headPitch
    static jint get_field_headPitch(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cp", "lowerHeadTick", "field_33488", "headPitch", "f_149349_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.GoatEntity#headPitch
    static void set_field_headPitch(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("cp", "lowerHeadTick", "field_33488", "headPitch", "f_149349_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getGoatHornStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "createHorn", "method_43690", "getGoatHornStack", "m_218763_"), "()Lcuq;");
    }

    static jobject getGoatHornStack(const jobject& obj) {
                
       const auto methodID = methodID_getGoatHornStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createBrainProfile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dU", "brainProvider", "method_28306", "createBrainProfile", "m_5490_"), "()Lbuq$b;");
    }

    static jobject createBrainProfile(const jobject& obj) {
                
       const auto methodID = methodID_createBrainProfile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_deserializeBrain() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "makeBrain", "method_18867", "deserializeBrain", "m_8075_"), "(Lcom/mojang/serialization/Dynamic;)Lbuq;");
    }

    static jobject deserializeBrain(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deserializeBrain();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createGoatAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("t", "createAttributes", "method_35179", "createGoatAttributes", "m_149401_"), "()Lbuv$a;");
    }

    static jobject createGoatAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createGoatAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_onGrowUp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "ageBoundaryReached", "method_5619", "onGrowUp", "m_30232_"), "()V");
    }

    static void onGrowUp(const jobject& obj) {
                
       const auto methodID = methodID_onGrowUp();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_computeFallDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "calculateFallDamage", "method_23329", "computeFallDamage", "m_5639_"), "(FF)I");
    }

    static jint computeFallDamage(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_computeFallDamage();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getAmbientSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getAmbientSound", "method_5994", "getAmbientSound", "m_7515_"), "()Lavo;");
    }

    static jobject getAmbientSound(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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
    
    static jmethodID methodID_playStepSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "playStepSound", "method_5712", "playStepSound", "m_7355_"), "(Ljd;Ldtc;)V");
    }

    static void playStepSound(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_playStepSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMilkingSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "getMilkingSound", "method_35180", "getMilkingSound", "m_149403_"), "()Lavo;");
    }

    static jobject getMilkingSound(const jobject& obj) {
                
       const auto methodID = methodID_getMilkingSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBreedOffspring", "method_35177", "createChild", "m_142606_"), "(Laqu;Lbsl;)Lche;");
    }

    static jobject createChild(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBrain() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("dT", "getBrain", "method_18868", "getBrain", "m_6274_"), "()Lbuq;");
    }

    static jobject getBrain(const jobject& obj) {
                
       const auto methodID = methodID_getBrain();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_mobTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ab", "customServerAiStep", "method_5958", "mobTick", "m_8024_"), "()V");
    }

    static void mobTick(const jobject& obj) {
                
       const auto methodID = methodID_mobTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxHeadRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ae", "getMaxHeadYRot", "method_5986", "getMaxHeadRotation", "m_8085_"), "()I");
    }

    static jint getMaxHeadRotation(const jobject& obj) {
                
       const auto methodID = methodID_getMaxHeadRotation();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setHeadYaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "setYHeadRot", "method_5847", "setHeadYaw", "m_5616_"), "(F)V");
    }

    static void setHeadYaw(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setHeadYaw();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEatSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getEatingSound", "method_18869", "getEatSound", "m_7866_"), "(Lcuq;)Lavo;");
    }

    static jobject getEatSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getEatSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isBreedingItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "isFood", "method_6481", "isBreedingItem", "m_6898_"), "(Lcuq;)Z");
    }

    static jboolean isBreedingItem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isBreedingItem();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_interactMob() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mobInteract", "method_5992", "interactMob", "m_6071_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interactMob(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interactMob();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_initialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finalizeSpawn", "method_5943", "initialize", "m_6518_"), "(Lddl;Lbqp;Lbtr;Lbuh;)Lbuh;");
    }

    static jobject initialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_initialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_sendAiDebugData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aa", "sendDebugPackets", "method_18409", "sendAiDebugData", "m_8025_"), "()V");
    }

    static void sendAiDebugData(const jobject& obj) {
                
       const auto methodID = methodID_sendAiDebugData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBaseDimensions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getDefaultDimensions", "method_55694", "getBaseDimensions", "m_31586_"), "(Lbua;)Lbsu;");
    }

    static jobject getBaseDimensions(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBaseDimensions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_handleStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "handleEntityEvent", "method_5711", "handleStatus", "m_7822_"), "(B)V");
    }

    static void handleStatus(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_handleStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tickMovement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m_", "aiStep", "method_6007", "tickMovement", "m_8107_"), "()V");
    }

    static void tickMovement(const jobject& obj) {
                
       const auto methodID = methodID_tickMovement();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasLeftHorn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gk", "hasLeftHorn", "method_43538", "hasLeftHorn", "m_218758_"), "()Z");
    }

    static jboolean hasLeftHorn(const jobject& obj) {
                
       const auto methodID = methodID_hasLeftHorn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasRightHorn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gl", "hasRightHorn", "method_43539", "hasRightHorn", "m_218759_"), "()Z");
    }

    static jboolean hasRightHorn(const jobject& obj) {
                
       const auto methodID = methodID_hasRightHorn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_dropHorn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gm", "dropHorn", "method_43540", "dropHorn", "m_218760_"), "()Z");
    }

    static jboolean dropHorn(const jobject& obj) {
                
       const auto methodID = methodID_dropHorn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_addHorns() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gn", "addHorns", "method_43541", "addHorns", "m_218761_"), "()V");
    }

    static void addHorns(const jobject& obj) {
                
       const auto methodID = methodID_addHorns();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeHorns() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("go", "removeHorns", "method_43542", "removeHorns", "m_218762_"), "()V");
    }

    static void removeHorns(const jobject& obj) {
                
       const auto methodID = methodID_removeHorns();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isScreaming() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gu", "isScreamingGoat", "method_35178", "isScreaming", "m_149397_"), "()Z");
    }

    static jboolean isScreaming(const jobject& obj) {
                
       const auto methodID = methodID_isScreaming();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setScreaming() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "setScreamingGoat", "method_36284", "setScreaming", "m_149405_"), "(Z)V");
    }

    static void setScreaming(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setScreaming();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getHeadPitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("gv", "getRammingXHeadRot", "method_36283", "getHeadPitch", "m_149398_"), "()F");
    }

    static jfloat getHeadPitch(const jobject& obj) {
                
       const auto methodID = methodID_getHeadPitch();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_canSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "checkGoatSpawnRules", "method_38067", "canSpawn", "m_218752_"), "(Lbsx;Ldcx;Lbtr;Ljd;Layw;)Z");
    }

    static jboolean canSpawn(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_canSpawn();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_GOATENTITY_HPP