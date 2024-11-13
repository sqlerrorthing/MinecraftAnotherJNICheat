// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_STORAGE_STORAGEIOWORKER_HPP
#define NET_MINECRAFT_WORLD_STORAGE_STORAGEIOWORKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.storage.StorageIoWorker
 * Remapped: dwl
 */
namespace StorageIoWorker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dwl", "net/minecraft/world/level/chunk/storage/IOWorker", "net/minecraft/class_4698", "net/minecraft/world/storage/StorageIoWorker", "net/minecraft/src/C_2160_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.storage.StorageIoWorker#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_21495", "LOGGER", "f_63515_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.StorageIoWorker#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_21495", "LOGGER", "f_63515_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.StorageIoWorker#closed
    static jobject get_field_closed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "shutdownRequested", "field_21497", "closed", "f_63516_"), "Ljava/util/concurrent/atomic/AtomicBoolean;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.StorageIoWorker#closed
    static void set_field_closed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "shutdownRequested", "field_21497", "closed", "f_63516_"), "Ljava/util/concurrent/atomic/AtomicBoolean;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.StorageIoWorker#executor
    static jobject get_field_executor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mailbox", "field_24468", "executor", "f_63517_"), "Lbpk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.StorageIoWorker#executor
    static void set_field_executor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "mailbox", "field_24468", "executor", "f_63517_"), "Lbpk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.StorageIoWorker#storage
    static jobject get_field_storage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "storage", "field_21499", "storage", "f_63518_"), "Ldwq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.StorageIoWorker#storage
    static void set_field_storage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "storage", "field_21499", "storage", "f_63518_"), "Ldwq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.StorageIoWorker#results
    static jobject get_field_results(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pendingWrites", "field_21500", "results", "f_63519_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.StorageIoWorker#results
    static void set_field_results(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "pendingWrites", "field_21500", "results", "f_63519_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.StorageIoWorker#blendingStatusCaches
    static jobject get_field_blendingStatusCaches(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "regionCacheForBlender", "field_38240", "blendingStatusCaches", "f_223459_"), "Lit/unimi/dsi/fastutil/longs/Long2ObjectLinkedOpenHashMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.StorageIoWorker#blendingStatusCaches
    static void set_field_blendingStatusCaches(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "regionCacheForBlender", "field_38240", "blendingStatusCaches", "f_223459_"), "Lit/unimi/dsi/fastutil/longs/Long2ObjectLinkedOpenHashMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.world.storage.StorageIoWorker#MAX_CACHE_SIZE
    [[maybe_unused]] static jint get_field_MAX_CACHE_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "REGION_CACHE_SIZE", "field_38241", "MAX_CACHE_SIZE", "f_223460_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.StorageIoWorker#MAX_CACHE_SIZE
    [[maybe_unused]] static void set_field_MAX_CACHE_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "REGION_CACHE_SIZE", "field_38241", "MAX_CACHE_SIZE", "f_223460_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_needsBlending() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isOldChunkAround", "method_42330", "needsBlending", "m_223471_"), "(Ldcd;I)Z");
    }

    static jboolean needsBlending(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_needsBlending();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getOrComputeBlendingStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOrCreateOldDataForRegion", "method_42329", "getOrComputeBlendingStatus", "m_223463_"), "(II)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject getOrComputeBlendingStatus(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getOrComputeBlendingStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_computeBlendingStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createOldDataForRegion", "method_42333", "computeBlendingStatus", "m_223489_"), "(II)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject computeBlendingStatus(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_computeBlendingStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__needsBlending() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isOldChunk", "method_42332", "needsBlending", "m_223484_"), "(Lub;)Z");
    }

    static jboolean _needsBlending(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__needsBlending();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "store", "method_23703", "setResult", "m_63538_"), "(Ldcd;Lub;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject setResult(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setResult();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_readChunkData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadAsync", "method_31738", "readChunkData", "m_156587_"), "(Ldcd;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject readChunkData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readChunkData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_completeAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "synchronize", "method_23698", "completeAll", "m_182498_"), "(Z)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject completeAll(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_completeAll();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_scanChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scanChunk", "method_39795", "scanChunk", "m_196358_"), "(Ldcd;Luv;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject scanChunk(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_scanChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "submitTask", "method_23709", "run", "m_63545_"), "(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject run(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_run();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "storePendingChunk", "method_23719", "writeResult", "m_63553_"), "()V");
    }

    static void writeResult(const jobject& obj) {
                
       const auto methodID = methodID_writeResult();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeRemainingResults() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "tellStorePending", "method_27945", "writeRemainingResults", "m_63561_"), "()V");
    }

    static void writeRemainingResults(const jobject& obj) {
                
       const auto methodID = methodID_writeRemainingResults();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runStore", "method_23701", "write", "m_63535_"), "(Ldcd;Ldwl$a;)V");
    }

    static void write(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "storageInfo", "method_61004", "getStorageKey", "m_340351_"), "()Ldws;");
    }

    static jobject getStorageKey(const jobject& obj) {
                
       const auto methodID = methodID_getStorageKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_STORAGE_STORAGEIOWORKER_HPP