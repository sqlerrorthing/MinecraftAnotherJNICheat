// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_COMMANDHISTORYMANAGER_HPP
#define NET_MINECRAFT_CLIENT_UTIL_COMMANDHISTORYMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.CommandHistoryManager
 * Remapped: fgc
 */
namespace CommandHistoryManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgc", "net/minecraft/client/CommandHistory", "net/minecraft/class_8657", "net/minecraft/client/util/CommandHistoryManager", "net/minecraft/src/C_290178_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.util.CommandHistoryManager#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_45287", "LOGGER", "f_290827_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.util.CommandHistoryManager#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_45287", "LOGGER", "f_290827_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.util.CommandHistoryManager#MAX_SIZE
    [[maybe_unused]] static jint get_field_MAX_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_PERSISTED_COMMAND_HISTORY", "field_45288", "MAX_SIZE", "f_291343_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.util.CommandHistoryManager#MAX_SIZE
    [[maybe_unused]] static void set_field_MAX_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_PERSISTED_COMMAND_HISTORY", "field_45288", "MAX_SIZE", "f_291343_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.util.CommandHistoryManager#FILENAME
    [[maybe_unused]] static jobject get_field_FILENAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PERSISTED_COMMANDS_FILE_NAME", "field_45289", "FILENAME", "f_290347_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.util.CommandHistoryManager#FILENAME
    [[maybe_unused]] static void set_field_FILENAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PERSISTED_COMMANDS_FILE_NAME", "field_45289", "FILENAME", "f_290347_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.CommandHistoryManager#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "commandsPath", "field_45290", "path", "f_291280_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.CommandHistoryManager#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "commandsPath", "field_45290", "path", "f_291280_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.CommandHistoryManager#history
    static jobject get_field_history(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "lastCommands", "field_45291", "history", "f_291814_"), "Laxb;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.CommandHistoryManager#history
    static void set_field_history(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "lastCommands", "field_45291", "history", "f_291814_"), "Laxb;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addCommand", "method_52697", "add", "m_294229_"), "(Ljava/lang/String;)V");
    }

    static void add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "save", "method_52698", "write", "m_295124_"), "()V");
    }

    static void write(const jobject& obj) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHistory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "history", "method_52696", "getHistory", "m_295381_"), "()Ljava/util/Collection;");
    }

    static jobject getHistory(const jobject& obj) {
                
       const auto methodID = methodID_getHistory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_COMMANDHISTORYMANAGER_HPP