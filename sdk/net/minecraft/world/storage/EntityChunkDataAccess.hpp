// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_STORAGE_ENTITYCHUNKDATAACCESS_HPP
#define NET_MINECRAFT_WORLD_STORAGE_ENTITYCHUNKDATAACCESS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.storage.EntityChunkDataAccess
 * Remapped: dwk
 */
namespace EntityChunkDataAccess {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dwk", "net/minecraft/world/level/chunk/storage/EntityStorage", "net/minecraft/class_5565", "net/minecraft/world/storage/EntityChunkDataAccess", "net/minecraft/src/C_141271_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.storage.EntityChunkDataAccess#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27232", "LOGGER", "f_156535_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.EntityChunkDataAccess#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_27232", "LOGGER", "f_156535_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.storage.EntityChunkDataAccess#ENTITIES_KEY
    [[maybe_unused]] static jobject get_field_ENTITIES_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ENTITIES_TAG", "field_31414", "ENTITIES_KEY", "f_156536_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.EntityChunkDataAccess#ENTITIES_KEY
    [[maybe_unused]] static void set_field_ENTITIES_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ENTITIES_TAG", "field_31414", "ENTITIES_KEY", "f_156536_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.storage.EntityChunkDataAccess#POSITION_KEY
    [[maybe_unused]] static jobject get_field_POSITION_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "POSITION_TAG", "field_31415", "POSITION_KEY", "f_156537_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.EntityChunkDataAccess#POSITION_KEY
    [[maybe_unused]] static void set_field_POSITION_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "POSITION_TAG", "field_31415", "POSITION_KEY", "f_156537_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.EntityChunkDataAccess#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "level", "field_27233", "world", "f_156538_"), "Laqu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.EntityChunkDataAccess#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "level", "field_27233", "world", "f_156538_"), "Laqu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.EntityChunkDataAccess#storage
    static jobject get_field_storage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "simpleRegionStorage", "field_48747", "storage", "f_314245_"), "Ldwu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.EntityChunkDataAccess#storage
    static void set_field_storage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "simpleRegionStorage", "field_48747", "storage", "f_314245_"), "Ldwu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.EntityChunkDataAccess#emptyChunks
    static jobject get_field_emptyChunks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "emptyChunks", "field_27235", "emptyChunks", "f_156540_"), "Lit/unimi/dsi/fastutil/longs/LongSet;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.EntityChunkDataAccess#emptyChunks
    static void set_field_emptyChunks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "emptyChunks", "field_27235", "emptyChunks", "f_156540_"), "Lit/unimi/dsi/fastutil/longs/LongSet;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.storage.EntityChunkDataAccess#taskExecutor
    static jobject get_field_taskExecutor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "entityDeserializerQueue", "field_34056", "taskExecutor", "f_182485_"), "Lbpk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.storage.EntityChunkDataAccess#taskExecutor
    static void set_field_taskExecutor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "entityDeserializerQueue", "field_34056", "taskExecutor", "f_182485_"), "Lbpk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_readChunkData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadEntities", "method_31759", "readChunkData", "m_141930_"), "(Ldcd;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject readChunkData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readChunkData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getChunkPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "readChunkPos", "method_31736", "getChunkPos", "m_156570_"), "(Lub;)Ldcd;");
    }

    static jobject getChunkPos(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getChunkPos();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_putChunkPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "writeChunkPos", "method_31733", "putChunkPos", "m_156562_"), "(Lub;Ldcd;)V");
    }

    static void putChunkPos(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_putChunkPos();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_emptyDataList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "emptyChunk", "method_31735", "emptyDataList", "m_156568_"), "(Ldcd;)Ldxe;");
    }

    static jobject emptyDataList(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_emptyDataList();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_writeChunkData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "storeEntities", "method_31760", "writeChunkData", "m_141971_"), "(Ldxe;)V");
    }

    static void writeChunkData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeChunkData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_handleSaveFailure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reportSaveFailureIfPresent", "method_61001", "handleSaveFailure", "m_340226_"), "(Ljava/util/concurrent/CompletableFuture;Ldcd;)V");
    }

    static void handleSaveFailure(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_handleSaveFailure();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_handleLoadFailure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "reportLoadFailureIfPresent", "method_61003", "handleLoadFailure", "m_338511_"), "(Ljava/util/concurrent/CompletableFuture;Ldcd;)V");
    }

    static void handleLoadFailure(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_handleLoadFailure();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_awaitAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "flush", "method_31758", "awaitAll", "m_182219_"), "(Z)V");
    }

    static void awaitAll(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_awaitAll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_STORAGE_ENTITYCHUNKDATAACCESS_HPP