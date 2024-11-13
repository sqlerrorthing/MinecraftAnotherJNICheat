// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_LEVEL_STORAGE_SESSIONLOCK_HPP
#define NET_MINECRAFT_WORLD_LEVEL_STORAGE_SESSIONLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.level.storage.SessionLock
 * Remapped: axt
 */
namespace SessionLock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axt", "net/minecraft/util/DirectoryLock", "net/minecraft/class_5125", "net/minecraft/world/level/storage/SessionLock", "net/minecraft/src/C_171_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.level.storage.SessionLock#SESSION_LOCK
    [[maybe_unused]] static jobject get_field_SESSION_LOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOCK_FILE", "field_29838", "SESSION_LOCK", "f_144627_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.level.storage.SessionLock#SESSION_LOCK
    [[maybe_unused]] static void set_field_SESSION_LOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOCK_FILE", "field_29838", "SESSION_LOCK", "f_144627_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.storage.SessionLock#channel
    static jobject get_field_channel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lockFile", "field_23692", "channel", "f_13632_"), "Ljava/nio/channels/FileChannel;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.storage.SessionLock#channel
    static void set_field_channel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lockFile", "field_23692", "channel", "f_13632_"), "Ljava/nio/channels/FileChannel;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.level.storage.SessionLock#lock
    static jobject get_field_lock(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lock", "field_23693", "lock", "f_13633_"), "Ljava/nio/channels/FileLock;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.level.storage.SessionLock#lock
    static void set_field_lock(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "lock", "field_23693", "lock", "f_13633_"), "Ljava/nio/channels/FileLock;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.world.level.storage.SessionLock#SNOWMAN
    [[maybe_unused]] static jobject get_field_SNOWMAN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DUMMY", "field_25353", "SNOWMAN", "f_13634_"), "Ljava/nio/ByteBuffer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.level.storage.SessionLock#SNOWMAN
    [[maybe_unused]] static void set_field_SNOWMAN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DUMMY", "field_25353", "SNOWMAN", "f_13634_"), "Ljava/nio/ByteBuffer;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_26803", "create", "m_13640_"), "(Ljava/nio/file/Path;)Laxt;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isValid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isValid", "method_26802", "isValid", "m_13639_"), "()Z");
    }

    static jboolean isValid(const jobject& obj) {
                
       const auto methodID = methodID_isValid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isLocked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "isLocked", "method_26804", "isLocked", "m_13642_"), "(Ljava/nio/file/Path;)Z");
    }

    static jboolean isLocked(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isLocked();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_LEVEL_STORAGE_SESSIONLOCK_HPP