// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_DATACOMMANDSTORAGE_HPP
#define NET_MINECRAFT_COMMAND_DATACOMMANDSTORAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.DataCommandStorage
 * Remapped: eqw
 */
namespace DataCommandStorage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqw", "net/minecraft/world/level/storage/CommandStorage", "net/minecraft/class_4565", "net/minecraft/command/DataCommandStorage", "net/minecraft/src/C_2778_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.DataCommandStorage#COMMAND_STORAGE_PREFIX
    [[maybe_unused]] static jobject get_field_COMMAND_STORAGE_PREFIX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ID_PREFIX", "field_31834", "COMMAND_STORAGE_PREFIX", "f_164834_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.DataCommandStorage#COMMAND_STORAGE_PREFIX
    [[maybe_unused]] static void set_field_COMMAND_STORAGE_PREFIX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ID_PREFIX", "field_31834", "COMMAND_STORAGE_PREFIX", "f_164834_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.command.DataCommandStorage#storages
    static jobject get_field_storages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "namespaces", "field_20747", "storages", "f_78032_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.DataCommandStorage#storages
    static void set_field_storages(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "namespaces", "field_20747", "storages", "f_78032_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.DataCommandStorage#stateManager
    static jobject get_field_stateManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "storage", "field_20748", "stateManager", "f_78033_"), "Leqz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.DataCommandStorage#stateManager
    static void set_field_stateManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "storage", "field_20748", "stateManager", "f_78033_"), "Leqz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createStorage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newStorage", "method_22544", "createStorage", "m_164835_"), "(Ljava/lang/String;)Leqw$a;");
    }

    static jobject createStorage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createStorage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPersistentStateType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "factory", "method_52614", "getPersistentStateType", "m_292956_"), "(Ljava/lang/String;)Leql$a;");
    }

    static jobject getPersistentStateType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPersistentStateType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_22546", "get", "m_78044_"), "(Lakr;)Lub;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_22547", "set", "m_78046_"), "(Lakr;Lub;)V");
    }

    static void set(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getIds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "keys", "method_22542", "getIds", "m_78036_"), "()Ljava/util/stream/Stream;");
    }

    static jobject getIds(const jobject& obj) {
                
       const auto methodID = methodID_getIds();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSaveKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "createId", "method_22543", "getSaveKey", "m_78037_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject getSaveKey(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getSaveKey();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_DATACOMMANDSTORAGE_HPP