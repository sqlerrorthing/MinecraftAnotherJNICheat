// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_VAULTBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_VAULTBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.VaultBlockEntity
 * Remapped: dsk
 */
namespace VaultBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dsk", "net/minecraft/world/level/block/entity/vault/VaultBlockEntity", "net/minecraft/class_9199", "net/minecraft/block/entity/VaultBlockEntity", "net/minecraft/src/C_313346_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.block.entity.VaultBlockEntity#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_48865", "LOGGER", "f_316405_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.VaultBlockEntity#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_48865", "LOGGER", "f_316405_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.VaultBlockEntity#serverData
    static jobject get_field_serverData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "serverData", "field_48866", "serverData", "f_315874_"), "Ldsn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.VaultBlockEntity#serverData
    static void set_field_serverData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "serverData", "field_48866", "serverData", "f_315874_"), "Ldsn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.VaultBlockEntity#sharedData
    static jobject get_field_sharedData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "sharedData", "field_48867", "sharedData", "f_314451_"), "Ldso;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.VaultBlockEntity#sharedData
    static void set_field_sharedData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "sharedData", "field_48867", "sharedData", "f_314451_"), "Ldso;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.VaultBlockEntity#clientData
    static jobject get_field_clientData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "clientData", "field_48868", "clientData", "f_315237_"), "Ldsl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.VaultBlockEntity#clientData
    static void set_field_clientData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "clientData", "field_48868", "clientData", "f_315237_"), "Ldsl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.VaultBlockEntity#config
    static jobject get_field_config(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "config", "field_48869", "config", "f_314356_"), "Ldsm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.VaultBlockEntity#config
    static void set_field_config(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "config", "field_48869", "config", "f_314356_"), "Ldsm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_toUpdatePacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("az_", "getUpdatePacket", "method_38235", "toUpdatePacket", "m_58483_"), "()Lzg;");
    }

    static jobject toUpdatePacket(const jobject& obj) {
                
       const auto methodID = methodID_toUpdatePacket();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_toInitialChunkDataNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUpdateTag", "method_16887", "toInitialChunkDataNbt", "m_5995_"), "(Ljo$a;)Lub;");
    }

    static jobject toInitialChunkDataNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toInitialChunkDataNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "saveAdditional", "method_11007", "writeNbt", "m_183515_"), "(Lub;Ljo$a;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_encodeValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "encode", "method_56729", "encodeValue", "m_319292_"), "(Lcom/mojang/serialization/Codec;Ljava/lang/Object;Ljo$a;)Luy;");
    }

    static jobject encodeValue(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_encodeValue();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadAdditional", "method_11014", "readNbt", "m_318667_"), "(Lub;Ljo$a;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getServerData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getServerData", "method_56731", "getServerData", "m_324418_"), "()Ldsn;");
    }

    static jobject getServerData(const jobject& obj) {
                
       const auto methodID = methodID_getServerData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSharedData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSharedData", "method_56735", "getSharedData", "m_318941_"), "()Ldso;");
    }

    static jobject getSharedData(const jobject& obj) {
                
       const auto methodID = methodID_getSharedData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getClientData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getClientData", "method_56736", "getClientData", "m_320550_"), "()Ldsl;");
    }

    static jobject getClientData(const jobject& obj) {
                
       const auto methodID = methodID_getClientData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getConfig() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getConfig", "method_56737", "getConfig", "m_321918_"), "()Ldsm;");
    }

    static jobject getConfig(const jobject& obj) {
                
       const auto methodID = methodID_getConfig();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setConfig() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setConfig", "method_56730", "setConfig", "m_319417_"), "(Ldsm;)V");
    }

    static void setConfig(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setConfig();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_VAULTBLOCKENTITY_HPP