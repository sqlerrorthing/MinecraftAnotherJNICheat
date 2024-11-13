// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_AI_WARDENANGERMANAGER_HPP
#define NET_MINECRAFT_ENTITY_AI_WARDENANGERMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ai.WardenAngerManager
 * Remapped: cma
 */
namespace WardenAngerManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cma", "net/minecraft/world/entity/monster/warden/AngerManagement", "net/minecraft/class_7254", "net/minecraft/entity/ai/WardenAngerManager", "net/minecraft/src/C_213058_"));
        }
        return cachedClass;
    };

    // getter for static protected field net.minecraft.entity.ai.WardenAngerManager#field_38733
    [[maybe_unused]] static jint get_field_field_38733() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CONVERSION_DELAY", "field_38733", "field_38733", "f_219241_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.WardenAngerManager#field_38733
    [[maybe_unused]] static void set_field_field_38733(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CONVERSION_DELAY", "field_38733", "field_38733", "f_219241_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.entity.ai.WardenAngerManager#maxAnger
    [[maybe_unused]] static jint get_field_maxAnger() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_ANGER", "field_38128", "maxAnger", "f_219242_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.WardenAngerManager#maxAnger
    [[maybe_unused]] static void set_field_maxAnger(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_ANGER", "field_38128", "maxAnger", "f_219242_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.WardenAngerManager#angerDecreasePerTick
    [[maybe_unused]] static jint get_field_angerDecreasePerTick() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT_ANGER_DECREASE", "field_38129", "angerDecreasePerTick", "f_219246_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.WardenAngerManager#angerDecreasePerTick
    [[maybe_unused]] static void set_field_angerDecreasePerTick(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DEFAULT_ANGER_DECREASE", "field_38129", "angerDecreasePerTick", "f_219246_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.WardenAngerManager#updateTimer
    static jint get_field_updateTimer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "conversionDelay", "field_38736", "updateTimer", "f_219247_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.WardenAngerManager#updateTimer
    static void set_field_updateTimer(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "conversionDelay", "field_38736", "updateTimer", "f_219247_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.entity.ai.WardenAngerManager#primeAnger
    static jint get_field_primeAnger(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "highestAnger", "field_39304", "primeAnger", "f_219248_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.ai.WardenAngerManager#primeAnger
    static void set_field_primeAnger(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "highestAnger", "field_39304", "primeAnger", "f_219248_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.ai.WardenAngerManager#SUSPECT_CODEC
    [[maybe_unused]] static jobject get_field_SUSPECT_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SUSPECT_ANGER_PAIR", "field_38737", "SUSPECT_CODEC", "f_219249_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.WardenAngerManager#SUSPECT_CODEC
    [[maybe_unused]] static void set_field_SUSPECT_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "SUSPECT_ANGER_PAIR", "field_38737", "SUSPECT_CODEC", "f_219249_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.WardenAngerManager#suspectPredicate
    static jobject get_field_suspectPredicate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "filter", "field_39114", "suspectPredicate", "f_219250_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.WardenAngerManager#suspectPredicate
    static void set_field_suspectPredicate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "filter", "field_39114", "suspectPredicate", "f_219250_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.WardenAngerManager#suspects
    static jobject get_field_suspects(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "suspects", "field_38734", "suspects", "f_219243_"), "Ljava/util/ArrayList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.WardenAngerManager#suspects
    static void set_field_suspects(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "suspects", "field_38734", "suspects", "f_219243_"), "Ljava/util/ArrayList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.ai.WardenAngerManager#suspectComparator
    static jobject get_field_suspectComparator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "suspectSorter", "field_39115", "suspectComparator", "f_219251_"), "Lcma$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.ai.WardenAngerManager#suspectComparator
    static void set_field_suspectComparator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "suspectSorter", "field_39115", "suspectComparator", "f_219251_"), "Lcma$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.WardenAngerManager#suspectsToAngerLevel
    static jobject get_field_suspectsToAngerLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "angerBySuspect", "field_38130", "suspectsToAngerLevel", "f_219244_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.WardenAngerManager#suspectsToAngerLevel
    static void set_field_suspectsToAngerLevel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "angerBySuspect", "field_38130", "suspectsToAngerLevel", "f_219244_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.entity.ai.WardenAngerManager#suspectUuidsToAngerLevel
    static jobject get_field_suspectUuidsToAngerLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "angerByUuid", "field_38735", "suspectUuidsToAngerLevel", "f_219245_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.entity.ai.WardenAngerManager#suspectUuidsToAngerLevel
    static void set_field_suspectUuidsToAngerLevel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "angerByUuid", "field_38735", "suspectUuidsToAngerLevel", "f_219245_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_43692", "createCodec", "m_219277_"), "(Ljava/util/function/Predicate;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getSuspects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createUuidAngerPairs", "method_43108", "getSuspects", "m_219285_"), "()Ljava/util/List;");
    }

    static jobject getSuspects(const jobject& obj) {
                
       const auto methodID = methodID_getSuspects();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_42176", "tick", "m_219263_"), "(Laqu;Ljava/util/function/Predicate;)V");
    }

    static void tick(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_updatePrimeAnger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "sortAndUpdateHighestAnger", "method_43998", "updatePrimeAnger", "m_219288_"), "()V");
    }

    static void updatePrimeAnger(const jobject& obj) {
                
       const auto methodID = methodID_updatePrimeAnger();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateSuspectsMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "convertFromUuids", "method_43104", "updateSuspectsMap", "m_219261_"), "(Laqu;)V");
    }

    static void updateSuspectsMap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateSuspectsMap();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_increaseAngerAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "increaseAnger", "method_42179", "increaseAngerAt", "m_219268_"), "(Lbsr;I)I");
    }

    static jint increaseAngerAt(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_increaseAngerAt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_removeSuspect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clearAnger", "method_42178", "removeSuspect", "m_219266_"), "(Lbsr;)V");
    }

    static void removeSuspect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeSuspect();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPrimeSuspectInternal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getTopSuspect", "method_42187", "getPrimeSuspectInternal", "m_219291_"), "()Lbsr;");
    }

    static jobject getPrimeSuspectInternal(const jobject& obj) {
                
       const auto methodID = methodID_getPrimeSuspectInternal();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAngerFor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getActiveAnger", "method_42185", "getAngerFor", "m_219286_"), "(Lbsr;)I");
    }

    static jint getAngerFor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getAngerFor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPrimeSuspect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getActiveEntity", "method_42181", "getPrimeSuspect", "m_219256_"), "()Ljava/util/Optional;");
    }

    static jobject getPrimeSuspect(const jobject& obj) {
                
       const auto methodID = methodID_getPrimeSuspect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_AI_WARDENANGERMANAGER_HPP