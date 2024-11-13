// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_VAULT_VAULTCONFIG_HPP
#define NET_MINECRAFT_BLOCK_VAULT_VAULTCONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.vault.VaultConfig
 * Remapped: dsm
 */
namespace VaultConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dsm", "net/minecraft/world/level/block/entity/vault/VaultConfig", "net/minecraft/class_9203", "net/minecraft/block/vault/VaultConfig", "net/minecraft/src/C_313762_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.vault.VaultConfig#lootTable
    static jobject get_field_lootTable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lootTable", "comp_2305", "lootTable", "f_314615_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.vault.VaultConfig#lootTable
    static void set_field_lootTable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "lootTable", "comp_2305", "lootTable", "f_314615_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.vault.VaultConfig#activationRange
    static jdouble get_field_activationRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "activationRange", "comp_2306", "activationRange", "f_316820_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.vault.VaultConfig#activationRange
    static void set_field_activationRange(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "activationRange", "comp_2306", "activationRange", "f_316820_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.vault.VaultConfig#deactivationRange
    static jdouble get_field_deactivationRange(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "deactivationRange", "comp_2307", "deactivationRange", "f_314383_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.vault.VaultConfig#deactivationRange
    static void set_field_deactivationRange(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "deactivationRange", "comp_2307", "deactivationRange", "f_314383_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.vault.VaultConfig#keyItem
    static jobject get_field_keyItem(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "keyItem", "comp_2308", "keyItem", "f_313949_"), "Lcuq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.vault.VaultConfig#keyItem
    static void set_field_keyItem(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "keyItem", "comp_2308", "keyItem", "f_313949_"), "Lcuq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.vault.VaultConfig#overrideLootTableToDisplay
    static jobject get_field_overrideLootTableToDisplay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "overrideLootTableToDisplay", "comp_2309", "overrideLootTableToDisplay", "f_314838_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.vault.VaultConfig#overrideLootTableToDisplay
    static void set_field_overrideLootTableToDisplay(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "overrideLootTableToDisplay", "comp_2309", "overrideLootTableToDisplay", "f_314838_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.vault.VaultConfig#playerDetector
    static jobject get_field_playerDetector(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "playerDetector", "comp_2310", "playerDetector", "f_315955_"), "Ldse;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.vault.VaultConfig#playerDetector
    static void set_field_playerDetector(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "playerDetector", "comp_2310", "playerDetector", "f_315955_"), "Ldse;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.vault.VaultConfig#entitySelector
    static jobject get_field_entitySelector(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "entitySelector", "comp_2311", "entitySelector", "f_315772_"), "Ldse$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.vault.VaultConfig#entitySelector
    static void set_field_entitySelector(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "entitySelector", "comp_2311", "entitySelector", "f_315772_"), "Ldse$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.block.vault.VaultConfig#CONFIG_KEY
    [[maybe_unused]] static jobject get_field_CONFIG_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAG_NAME", "field_48881", "CONFIG_KEY", "f_314429_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.block.vault.VaultConfig#CONFIG_KEY
    [[maybe_unused]] static void set_field_CONFIG_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAG_NAME", "field_48881", "CONFIG_KEY", "f_314429_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.block.vault.VaultConfig#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT", "field_48882", "DEFAULT", "f_314544_"), "Ldsm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.block.vault.VaultConfig#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT", "field_48882", "DEFAULT", "f_314544_"), "Ldsm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.block.vault.VaultConfig#codec
    [[maybe_unused]] static jobject get_field_codec() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_48883", "codec", "f_316227_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.block.vault.VaultConfig#codec
    [[maybe_unused]] static void set_field_codec(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_48883", "codec", "f_316227_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__playerDetector() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playerDetector", "comp_2310", "playerDetector", "f_315955_"), "()Ldse;");
    }

    static jobject _playerDetector(const jobject& obj) {
                
       const auto methodID = methodID__playerDetector();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "validate", "method_56765", "validate", "m_325007_"), "()Lcom/mojang/serialization/DataResult;");
    }

    static jobject validate(const jobject& obj) {
                
       const auto methodID = methodID_validate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__lootTable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "lootTable", "comp_2305", "lootTable", "f_314615_"), "()Lakq;");
    }

    static jobject _lootTable(const jobject& obj) {
                
       const auto methodID = methodID__lootTable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__activationRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "activationRange", "comp_2306", "activationRange", "f_316820_"), "()D");
    }

    static jdouble _activationRange(const jobject& obj) {
                
       const auto methodID = methodID__activationRange();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__deactivationRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "deactivationRange", "comp_2307", "deactivationRange", "f_314383_"), "()D");
    }

    static jdouble _deactivationRange(const jobject& obj) {
                
       const auto methodID = methodID__deactivationRange();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__keyItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "keyItem", "comp_2308", "keyItem", "f_313949_"), "()Lcuq;");
    }

    static jobject _keyItem(const jobject& obj) {
                
       const auto methodID = methodID__keyItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__overrideLootTableToDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "overrideLootTableToDisplay", "comp_2309", "overrideLootTableToDisplay", "f_314838_"), "()Ljava/util/Optional;");
    }

    static jobject _overrideLootTableToDisplay(const jobject& obj) {
                
       const auto methodID = methodID__overrideLootTableToDisplay();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entitySelector() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "entitySelector", "comp_2311", "entitySelector", "f_315772_"), "()Ldse$a;");
    }

    static jobject _entitySelector(const jobject& obj) {
                
       const auto methodID = methodID__entitySelector();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_VAULT_VAULTCONFIG_HPP