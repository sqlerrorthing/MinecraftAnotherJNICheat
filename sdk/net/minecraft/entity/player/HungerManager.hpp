// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PLAYER_HUNGERMANAGER_HPP
#define NET_MINECRAFT_ENTITY_PLAYER_HUNGERMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.player.HungerManager
 * Remapped: cpq
 */
namespace HungerManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpq", "net/minecraft/world/food/FoodData", "net/minecraft/class_1702", "net/minecraft/entity/player/HungerManager", "net/minecraft/src/C_1219_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.player.HungerManager#foodLevel
    static jint get_field_foodLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "foodLevel", "field_7756", "foodLevel", "f_38696_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.HungerManager#foodLevel
    static void set_field_foodLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "foodLevel", "field_7756", "foodLevel", "f_38696_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.HungerManager#saturationLevel
    static jfloat get_field_saturationLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "saturationLevel", "field_7753", "saturationLevel", "f_38697_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.HungerManager#saturationLevel
    static void set_field_saturationLevel(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "saturationLevel", "field_7753", "saturationLevel", "f_38697_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.HungerManager#exhaustion
    static jfloat get_field_exhaustion(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "exhaustionLevel", "field_7752", "exhaustion", "f_38698_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.HungerManager#exhaustion
    static void set_field_exhaustion(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "exhaustionLevel", "field_7752", "exhaustion", "f_38698_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.HungerManager#foodTickTimer
    static jint get_field_foodTickTimer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tickTimer", "field_7755", "foodTickTimer", "f_38699_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.HungerManager#foodTickTimer
    static void set_field_foodTickTimer(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tickTimer", "field_7755", "foodTickTimer", "f_38699_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.player.HungerManager#prevFoodLevel
    static jint get_field_prevFoodLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "lastFoodLevel", "field_7754", "prevFoodLevel", "f_38700_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.player.HungerManager#prevFoodLevel
    static void set_field_prevFoodLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "lastFoodLevel", "field_7754", "prevFoodLevel", "f_38700_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_addInternal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "add", "method_59684", "addInternal", "m_320067_"), "(IF)V");
    }

    static void addInternal(const jobject& obj, const jint& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_addInternal();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "eat", "method_7585", "add", "m_38707_"), "(IF)V");
    }

    static void add(const jobject& obj, const jint& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_eat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "eat", "method_7579", "eat", "m_38712_"), "(Lcpr;)V");
    }

    static void eat(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_eat();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_7588", "update", "m_38710_"), "(Lcmx;)V");
    }

    static void update(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_update();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_7584", "readNbt", "m_38715_"), "(Lub;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_7582", "writeNbt", "m_38719_"), "(Lub;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFoodLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFoodLevel", "method_7586", "getFoodLevel", "m_38702_"), "()I");
    }

    static jint getFoodLevel(const jobject& obj) {
                
       const auto methodID = methodID_getFoodLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPrevFoodLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getLastFoodLevel", "method_35217", "getPrevFoodLevel", "m_150377_"), "()I");
    }

    static jint getPrevFoodLevel(const jobject& obj) {
                
       const auto methodID = methodID_getPrevFoodLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isNotFull() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "needsFood", "method_7587", "isNotFull", "m_38721_"), "()Z");
    }

    static jboolean isNotFull(const jobject& obj) {
                
       const auto methodID = methodID_isNotFull();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_addExhaustion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addExhaustion", "method_7583", "addExhaustion", "m_38703_"), "(F)V");
    }

    static void addExhaustion(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_addExhaustion();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getExhaustion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getExhaustionLevel", "method_35219", "getExhaustion", "m_150380_"), "()F");
    }

    static jfloat getExhaustion(const jobject& obj) {
                
       const auto methodID = methodID_getExhaustion();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSaturationLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getSaturationLevel", "method_7589", "getSaturationLevel", "m_38722_"), "()F");
    }

    static jfloat getSaturationLevel(const jobject& obj) {
                
       const auto methodID = methodID_getSaturationLevel();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_setFoodLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setFoodLevel", "method_7580", "setFoodLevel", "m_38705_"), "(I)V");
    }

    static void setFoodLevel(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setFoodLevel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setSaturationLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setSaturation", "method_7581", "setSaturationLevel", "m_38717_"), "(F)V");
    }

    static void setSaturationLevel(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setSaturationLevel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setExhaustion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setExhaustion", "method_35218", "setExhaustion", "m_150378_"), "(F)V");
    }

    static void setExhaustion(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setExhaustion();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PLAYER_HUNGERMANAGER_HPP