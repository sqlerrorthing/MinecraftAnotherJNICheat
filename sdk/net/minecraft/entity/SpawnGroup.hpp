// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_SPAWNGROUP_HPP
#define NET_MINECRAFT_ENTITY_SPAWNGROUP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.SpawnGroup
 * Remapped: btq
 */
namespace SpawnGroup {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("btq", "net/minecraft/world/entity/MobCategory", "net/minecraft/class_1311", "net/minecraft/entity/SpawnGroup", "net/minecraft/src/C_528_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#MONSTER
    [[maybe_unused]] static jobject get_field_MONSTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MONSTER", "field_6302", "MONSTER", "MONSTER"), "Lbtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#MONSTER
    [[maybe_unused]] static void set_field_MONSTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MONSTER", "field_6302", "MONSTER", "MONSTER"), "Lbtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#CREATURE
    [[maybe_unused]] static jobject get_field_CREATURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CREATURE", "field_6294", "CREATURE", "CREATURE"), "Lbtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#CREATURE
    [[maybe_unused]] static void set_field_CREATURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CREATURE", "field_6294", "CREATURE", "CREATURE"), "Lbtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#AMBIENT
    [[maybe_unused]] static jobject get_field_AMBIENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "AMBIENT", "field_6303", "AMBIENT", "AMBIENT"), "Lbtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#AMBIENT
    [[maybe_unused]] static void set_field_AMBIENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "AMBIENT", "field_6303", "AMBIENT", "AMBIENT"), "Lbtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#AXOLOTLS
    [[maybe_unused]] static jobject get_field_AXOLOTLS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AXOLOTLS", "field_34447", "AXOLOTLS", "AXOLOTLS"), "Lbtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#AXOLOTLS
    [[maybe_unused]] static void set_field_AXOLOTLS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AXOLOTLS", "field_34447", "AXOLOTLS", "AXOLOTLS"), "Lbtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#UNDERGROUND_WATER_CREATURE
    [[maybe_unused]] static jobject get_field_UNDERGROUND_WATER_CREATURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNDERGROUND_WATER_CREATURE", "field_30092", "UNDERGROUND_WATER_CREATURE", "UNDERGROUND_WATER_CREATURE"), "Lbtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#UNDERGROUND_WATER_CREATURE
    [[maybe_unused]] static void set_field_UNDERGROUND_WATER_CREATURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNDERGROUND_WATER_CREATURE", "field_30092", "UNDERGROUND_WATER_CREATURE", "UNDERGROUND_WATER_CREATURE"), "Lbtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#WATER_CREATURE
    [[maybe_unused]] static jobject get_field_WATER_CREATURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "WATER_CREATURE", "field_6300", "WATER_CREATURE", "WATER_CREATURE"), "Lbtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#WATER_CREATURE
    [[maybe_unused]] static void set_field_WATER_CREATURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "WATER_CREATURE", "field_6300", "WATER_CREATURE", "WATER_CREATURE"), "Lbtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#WATER_AMBIENT
    [[maybe_unused]] static jobject get_field_WATER_AMBIENT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "WATER_AMBIENT", "field_24460", "WATER_AMBIENT", "WATER_AMBIENT"), "Lbtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#WATER_AMBIENT
    [[maybe_unused]] static void set_field_WATER_AMBIENT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "WATER_AMBIENT", "field_24460", "WATER_AMBIENT", "WATER_AMBIENT"), "Lbtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#MISC
    [[maybe_unused]] static jobject get_field_MISC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MISC", "field_17715", "MISC", "MISC"), "Lbtq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#MISC
    [[maybe_unused]] static void set_field_MISC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MISC", "field_17715", "MISC", "MISC"), "Lbtq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.SpawnGroup#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CODEC", "field_24655", "CODEC", "f_21584_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.SpawnGroup#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "CODEC", "field_24655", "CODEC", "f_21584_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.SpawnGroup#capacity
    static jint get_field_capacity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "max", "field_6297", "capacity", "f_21586_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.SpawnGroup#capacity
    static void set_field_capacity(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "max", "field_6297", "capacity", "f_21586_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.SpawnGroup#peaceful
    static jboolean get_field_peaceful(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "isFriendly", "field_6298", "peaceful", "f_21587_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.SpawnGroup#peaceful
    static void set_field_peaceful(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "isFriendly", "field_6298", "peaceful", "f_21587_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.SpawnGroup#rare
    static jboolean get_field_rare(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "isPersistent", "field_6295", "rare", "f_21588_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.SpawnGroup#rare
    static void set_field_rare(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "isPersistent", "field_6295", "rare", "f_21588_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.SpawnGroup#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "name", "field_6304", "name", "f_21589_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.SpawnGroup#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "name", "field_6304", "name", "f_21589_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.SpawnGroup#despawnStartRange
    static jint get_field_despawnStartRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "noDespawnDistance", "field_24461", "despawnStartRange", "f_21590_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.SpawnGroup#despawnStartRange
    static void set_field_despawnStartRange(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "noDespawnDistance", "field_24461", "despawnStartRange", "f_21590_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.SpawnGroup#immediateDespawnRange
    static jint get_field_immediateDespawnRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "despawnDistance", "field_24462", "immediateDespawnRange", "f_21591_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.SpawnGroup#immediateDespawnRange
    static void set_field_immediateDespawnRange(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "despawnDistance", "field_24462", "immediateDespawnRange", "f_21591_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbtq;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbtq;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_6133", "getName", "m_21607_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCapacity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMaxInstancesPerChunk", "method_6134", "getCapacity", "m_21608_"), "()I");
    }

    static jint getCapacity(const jobject& obj) {
                
       const auto methodID = methodID_getCapacity();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isPeaceful() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isFriendly", "method_6136", "isPeaceful", "m_21609_"), "()Z");
    }

    static jboolean isPeaceful(const jobject& obj) {
                
       const auto methodID = methodID_isPeaceful();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isRare() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isPersistent", "method_6135", "isRare", "m_21610_"), "()Z");
    }

    static jboolean isRare(const jobject& obj) {
                
       const auto methodID = methodID_isRare();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getImmediateDespawnRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getDespawnDistance", "method_27919", "getImmediateDespawnRange", "m_21611_"), "()I");
    }

    static jint getImmediateDespawnRange(const jobject& obj) {
                
       const auto methodID = methodID_getImmediateDespawnRange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDespawnStartRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getNoDespawnDistance", "method_27920", "getDespawnStartRange", "m_21612_"), "()I");
    }

    static jint getDespawnStartRange(const jobject& obj) {
                
       const auto methodID = methodID_getDespawnStartRange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_SPAWNGROUP_HPP