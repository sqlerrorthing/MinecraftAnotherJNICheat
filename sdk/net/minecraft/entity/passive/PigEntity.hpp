// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_PIGENTITY_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_PIGENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.PigEntity
 * Remapped: cfv
 */
namespace PigEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfv", "net/minecraft/world/entity/animal/Pig", "net/minecraft/class_1452", "net/minecraft/entity/passive/PigEntity", "net/minecraft/src/C_879_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.passive.PigEntity#SADDLED
    [[maybe_unused]] static jobject get_field_SADDLED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cc", "DATA_SADDLE_ID", "field_6816", "SADDLED", "f_29456_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.PigEntity#SADDLED
    [[maybe_unused]] static void set_field_SADDLED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cc", "DATA_SADDLE_ID", "field_6816", "SADDLED", "f_29456_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.passive.PigEntity#BOOST_TIME
    [[maybe_unused]] static jobject get_field_BOOST_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "DATA_BOOST_TIME", "field_6815", "BOOST_TIME", "f_29457_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.PigEntity#BOOST_TIME
    [[maybe_unused]] static void set_field_BOOST_TIME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("cd", "DATA_BOOST_TIME", "field_6815", "BOOST_TIME", "f_29457_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.PigEntity#saddledComponent
    static jobject get_field_saddledComponent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ce", "steering", "field_23230", "saddledComponent", "f_29459_"), "Lbti;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.PigEntity#saddledComponent
    static void set_field_saddledComponent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("ce", "steering", "field_23230", "saddledComponent", "f_29459_"), "Lbti;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_initGoals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "registerGoals", "method_5959", "initGoals", "m_8099_"), "()V");
    }

    static void initGoals(const jobject& obj) {
                
       const auto methodID = methodID_initGoals();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createPigAttributes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("s", "createAttributes", "method_26890", "createPigAttributes", "m_29503_"), "()Lbuv$a;");
    }

    static jobject createPigAttributes() {
       const auto clazz = self();
       const auto methodID = methodID_createPigAttributes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getControllingPassenger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cQ", "getControllingPassenger", "method_5642", "getControllingPassenger", "m_6688_"), "()Lbtn;");
    }

    static jobject getControllingPassenger(const jobject& obj) {
                
       const auto methodID = methodID_getControllingPassenger();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_onTrackedDataSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onSyncedDataUpdated", "method_5674", "onTrackedDataSet", "m_7350_"), "(Lajw;)V");
    }

    static void onTrackedDataSet(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onTrackedDataSet();
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
    
    static jmethodID methodID_interactMob() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mobInteract", "method_5992", "interactMob", "m_6071_"), "(Lcmx;Lbqq;)Lbqr;");
    }

    static jobject interactMob(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_interactMob();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canBeSaddled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isSaddleable", "method_6765", "canBeSaddled", "m_6741_"), "()Z");
    }

    static jboolean canBeSaddled(const jobject& obj) {
                
       const auto methodID = methodID_canBeSaddled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_dropInventory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ez", "dropEquipment", "method_16078", "dropInventory", "m_5907_"), "()V");
    }

    static void dropInventory(const jobject& obj) {
                
       const auto methodID = methodID_dropInventory();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSaddled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "isSaddled", "method_6725", "isSaddled", "m_6254_"), "()Z");
    }

    static jboolean isSaddled(const jobject& obj) {
                
       const auto methodID = methodID_isSaddled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_saddle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "equipSaddle", "method_6576", "saddle", "m_5853_"), "(Lcuq;Lavq;)V");
    }

    static void saddle(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_saddle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_updatePassengerForDismount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getDismountLocationForPassenger", "method_24829", "updatePassengerForDismount", "m_7688_"), "(Lbtn;)Lexc;");
    }

    static jobject updatePassengerForDismount(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updatePassengerForDismount();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onStruckByLightning() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "thunderHit", "method_5800", "onStruckByLightning", "m_8038_"), "(Laqu;Lbtm;)V");
    }

    static void onStruckByLightning(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onStruckByLightning();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tickControlled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tickRidden", "method_49481", "tickControlled", "m_274498_"), "(Lcmx;Lexc;)V");
    }

    static void tickControlled(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_tickControlled();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getControlledMovementInput() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRiddenInput", "method_49482", "getControlledMovementInput", "m_274312_"), "(Lcmx;Lexc;)Lexc;");
    }

    static jobject getControlledMovementInput(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getControlledMovementInput();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSaddledSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getRiddenSpeed", "method_49485", "getSaddledSpeed", "m_245547_"), "(Lcmx;)F");
    }

    static jfloat getSaddledSpeed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSaddledSpeed();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_consumeOnAStickItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "boost", "method_6577", "consumeOnAStickItem", "m_6746_"), "()Z");
    }

    static jboolean consumeOnAStickItem(const jobject& obj) {
                
       const auto methodID = methodID_consumeOnAStickItem();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_createChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBreedOffspring", "method_6574", "createChild", "m_142606_"), "(Laqu;Lbsl;)Lcfv;");
    }

    static jobject createChild(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createChild();
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
    
    static jmethodID methodID_getLeashOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cM", "getLeashOffset", "method_29919", "getLeashOffset", "m_7939_"), "()Lexc;");
    }

    static jobject getLeashOffset(const jobject& obj) {
                
       const auto methodID = methodID_getLeashOffset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_PIGENTITY_HPP