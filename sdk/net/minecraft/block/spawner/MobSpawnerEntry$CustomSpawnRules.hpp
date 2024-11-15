// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_SPAWNER_MOBSPAWNERENTRY$CUSTOMSPAWNRULES_HPP
#define NET_MINECRAFT_BLOCK_SPAWNER_MOBSPAWNERENTRY$CUSTOMSPAWNRULES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules
 * Remapped: ddo$a
 */
namespace MobSpawnerEntry$CustomSpawnRules {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ddo$a", "net/minecraft/world/level/SpawnData$CustomSpawnRules", "net/minecraft/class_1952$class_6542", "net/minecraft/block/spawner/MobSpawnerEntry$CustomSpawnRules", "net/minecraft/src/C_1620_$C_182854_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules#blockLightLimit
    static jobject get_field_blockLightLimit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "blockLightLimit", "comp_66", "blockLightLimit", "f_186584_"), "Layg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules#blockLightLimit
    static void set_field_blockLightLimit(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "blockLightLimit", "comp_66", "blockLightLimit", "f_186584_"), "Layg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules#skyLightLimit
    static jobject get_field_skyLightLimit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "skyLightLimit", "comp_67", "skyLightLimit", "f_186585_"), "Layg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules#skyLightLimit
    static void set_field_skyLightLimit(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "skyLightLimit", "comp_67", "skyLightLimit", "f_186585_"), "Layg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LIGHT_RANGE", "field_34463", "DEFAULT", "f_186586_"), "Layg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LIGHT_RANGE", "field_34463", "DEFAULT", "f_186586_"), "Layg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_34462", "CODEC", "f_186583_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.spawner.MobSpawnerEntry$CustomSpawnRules#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_34462", "CODEC", "f_186583_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "checkLightBoundaries", "method_38099", "validate", "m_186592_"), "(Layg;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject validate(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_validate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createLightLimitCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "lightLimit", "method_51719", "createLightLimitCodec", "m_285810_"), "(Ljava/lang/String;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject createLightLimitCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createLightLimitCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_canSpawn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isValidPosition", "method_56563", "canSpawn", "m_320581_"), "(Ljd;Laqu;)Z");
    }

    static jboolean canSpawn(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canSpawn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__blockLightLimit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blockLightLimit", "comp_66", "blockLightLimit", "f_186584_"), "()Layg;");
    }

    static jobject _blockLightLimit(const jobject& obj) {
                
       const auto methodID = methodID__blockLightLimit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__skyLightLimit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "skyLightLimit", "comp_67", "skyLightLimit", "f_186585_"), "()Layg;");
    }

    static jobject _skyLightLimit(const jobject& obj) {
                
       const auto methodID = methodID__skyLightLimit();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_SPAWNER_MOBSPAWNERENTRY$CUSTOMSPAWNRULES_HPP