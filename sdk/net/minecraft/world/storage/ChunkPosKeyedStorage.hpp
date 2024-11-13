// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_STORAGE_CHUNKPOSKEYEDSTORAGE_HPP
#define NET_MINECRAFT_WORLD_STORAGE_CHUNKPOSKEYEDSTORAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.storage.ChunkPosKeyedStorage
 * Remapped: dwu
 */
namespace ChunkPosKeyedStorage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dwu", "net/minecraft/world/level/chunk/storage/SimpleRegionStorage", "net/minecraft/class_9172", "net/minecraft/world/storage/ChunkPosKeyedStorage", "net/minecraft/src/C_313718_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.storage.ChunkPosKeyedStorage#worker
    static jobject get_field_worker(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "worker", "field_48760", "worker", "f_316936_"), "Ldwl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkPosKeyedStorage#worker
    static void set_field_worker(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "worker", "field_48760", "worker", "f_316936_"), "Ldwl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.ChunkPosKeyedStorage#dataFixer
    static jobject get_field_dataFixer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "fixerUpper", "field_48761", "dataFixer", "f_316431_"), "Lcom/mojang/datafixers/DataFixer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkPosKeyedStorage#dataFixer
    static void set_field_dataFixer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "fixerUpper", "field_48761", "dataFixer", "f_316431_"), "Lcom/mojang/datafixers/DataFixer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.ChunkPosKeyedStorage#dataFixTypes
    static jobject get_field_dataFixTypes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dataFixType", "field_48762", "dataFixTypes", "f_315557_"), "Lazw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.ChunkPosKeyedStorage#dataFixTypes
    static void set_field_dataFixTypes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dataFixType", "field_48762", "dataFixTypes", "f_315557_"), "Lazw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_56572", "read", "m_321984_"), "(Ldcd;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject read(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_56565", "set", "m_321640_"), "(Ldcd;Lub;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject set(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_set();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "upgradeChunkTag", "method_56573", "update", "m_323126_"), "(Lub;I)Lub;");
    }

    static jobject update(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_update();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "upgradeChunkTag", "method_56571", "update", "m_323523_"), "(Lcom/mojang/serialization/Dynamic;I)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject _update(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__update();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_completeAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "synchronize", "method_56574", "completeAll", "m_322284_"), "(Z)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject completeAll(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_completeAll();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStorageKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "storageInfo", "method_61007", "getStorageKey", "m_338400_"), "()Ldws;");
    }

    static jobject getStorageKey(const jobject& obj) {
                
       const auto methodID = methodID_getStorageKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_STORAGE_CHUNKPOSKEYEDSTORAGE_HPP