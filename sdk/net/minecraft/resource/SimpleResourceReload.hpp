// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_SIMPLERESOURCERELOAD_HPP
#define NET_MINECRAFT_RESOURCE_SIMPLERESOURCERELOAD_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.SimpleResourceReload
 * Remapped: auk
 */
namespace SimpleResourceReload {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("auk", "net/minecraft/server/packs/resources/SimpleReloadInstance", "net/minecraft/class_4014", "net/minecraft/resource/SimpleResourceReload", "net/minecraft/src/C_82_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.SimpleResourceReload#FIRST_PREPARE_APPLY_WEIGHT
    [[maybe_unused]] static jint get_field_FIRST_PREPARE_APPLY_WEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PREPARATION_PROGRESS_WEIGHT", "field_29784", "FIRST_PREPARE_APPLY_WEIGHT", "f_143937_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.SimpleResourceReload#FIRST_PREPARE_APPLY_WEIGHT
    [[maybe_unused]] static void set_field_FIRST_PREPARE_APPLY_WEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PREPARATION_PROGRESS_WEIGHT", "field_29784", "FIRST_PREPARE_APPLY_WEIGHT", "f_143937_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.SimpleResourceReload#SECOND_PREPARE_APPLY_WEIGHT
    [[maybe_unused]] static jint get_field_SECOND_PREPARE_APPLY_WEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EXTRA_RELOAD_PROGRESS_WEIGHT", "field_29785", "SECOND_PREPARE_APPLY_WEIGHT", "f_143938_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.SimpleResourceReload#SECOND_PREPARE_APPLY_WEIGHT
    [[maybe_unused]] static void set_field_SECOND_PREPARE_APPLY_WEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EXTRA_RELOAD_PROGRESS_WEIGHT", "field_29785", "SECOND_PREPARE_APPLY_WEIGHT", "f_143938_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.resource.SimpleResourceReload#RELOADER_WEIGHT
    [[maybe_unused]] static jint get_field_RELOADER_WEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LISTENER_PROGRESS_WEIGHT", "field_29786", "RELOADER_WEIGHT", "f_143939_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.SimpleResourceReload#RELOADER_WEIGHT
    [[maybe_unused]] static void set_field_RELOADER_WEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LISTENER_PROGRESS_WEIGHT", "field_29786", "RELOADER_WEIGHT", "f_143939_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.resource.SimpleResourceReload#prepareStageFuture
    static jobject get_field_prepareStageFuture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "allPreparations", "field_18042", "prepareStageFuture", "f_10799_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.resource.SimpleResourceReload#prepareStageFuture
    static void set_field_prepareStageFuture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "allPreparations", "field_18042", "prepareStageFuture", "f_10799_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.resource.SimpleResourceReload#applyStageFuture
    static jobject get_field_applyStageFuture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "allDone", "field_18043", "applyStageFuture", "f_10800_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.resource.SimpleResourceReload#applyStageFuture
    static void set_field_applyStageFuture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "allDone", "field_18043", "applyStageFuture", "f_10800_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.resource.SimpleResourceReload#waitingReloaders
    static jobject get_field_waitingReloaders(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "preparingListeners", "field_18044", "waitingReloaders", "f_10801_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.resource.SimpleResourceReload#waitingReloaders
    static void set_field_waitingReloaders(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "preparingListeners", "field_18044", "waitingReloaders", "f_10801_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.SimpleResourceReload#reloaderCount
    static jint get_field_reloaderCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "listenerCount", "field_18045", "reloaderCount", "f_10802_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.SimpleResourceReload#reloaderCount
    static void set_field_reloaderCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "listenerCount", "field_18045", "reloaderCount", "f_10802_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.SimpleResourceReload#toApplyCount
    static jint get_field_toApplyCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "startedReloads", "field_18046", "toApplyCount", "f_10803_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.SimpleResourceReload#toApplyCount
    static void set_field_toApplyCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "startedReloads", "field_18046", "toApplyCount", "f_10803_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.SimpleResourceReload#appliedCount
    static jint get_field_appliedCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "finishedReloads", "field_18047", "appliedCount", "f_10804_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.SimpleResourceReload#appliedCount
    static void set_field_appliedCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "finishedReloads", "field_18047", "appliedCount", "f_10804_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.SimpleResourceReload#toPrepareCount
    static jobject get_field_toPrepareCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "startedTaskCounter", "field_18048", "toPrepareCount", "f_10805_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.SimpleResourceReload#toPrepareCount
    static void set_field_toPrepareCount(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "startedTaskCounter", "field_18048", "toPrepareCount", "f_10805_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.SimpleResourceReload#preparedCount
    static jobject get_field_preparedCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "doneTaskCounter", "field_18049", "preparedCount", "f_10806_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.SimpleResourceReload#preparedCount
    static void set_field_preparedCount(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "doneTaskCounter", "field_18049", "preparedCount", "f_10806_"), "Ljava/util/concurrent/atomic/AtomicInteger;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_18369", "create", "m_10815_"), "(Laue;Ljava/util/List;Ljava/util/concurrent/Executor;Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;)Lauk;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_whenComplete() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "done", "method_18364", "whenComplete", "m_7237_"), "()Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject whenComplete(const jobject& obj) {
                
       const auto methodID = methodID_whenComplete();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getActualProgress", "method_18229", "getProgress", "m_7750_"), "()F");
    }

    static jfloat getProgress(const jobject& obj) {
                
       const auto methodID = methodID_getProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_40087", "start", "m_203834_"), "(Laue;Ljava/util/List;Ljava/util/concurrent/Executor;Ljava/util/concurrent/Executor;Ljava/util/concurrent/CompletableFuture;Z)Laua;");
    }

    static jobject start(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_start();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_SIMPLERESOURCERELOAD_HPP