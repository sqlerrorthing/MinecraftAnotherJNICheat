// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_UTIL_REALMSPERSISTENCE_HPP
#define NET_MINECRAFT_CLIENT_REALMS_UTIL_REALMSPERSISTENCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.util.RealmsPersistence
 * Remapped: ffb
 */
namespace RealmsPersistence {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ffb", "com/mojang/realmsclient/util/RealmsPersistence", "net/minecraft/class_4432", "net/minecraft/client/realms/util/RealmsPersistence", "net/minecraft/src/C_3345_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.util.RealmsPersistence#FILE_NAME
    [[maybe_unused]] static jobject get_field_FILE_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FILE_NAME", "field_32128", "FILE_NAME", "f_167613_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.RealmsPersistence#FILE_NAME
    [[maybe_unused]] static void set_field_FILE_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FILE_NAME", "field_32128", "FILE_NAME", "f_167613_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.util.RealmsPersistence#CHECKED_GSON
    [[maybe_unused]] static jobject get_field_CHECKED_GSON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GSON", "field_22729", "CHECKED_GSON", "f_90169_"), "Lfcg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.RealmsPersistence#CHECKED_GSON
    [[maybe_unused]] static void set_field_CHECKED_GSON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "GSON", "field_22729", "CHECKED_GSON", "f_90169_"), "Lfcg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.util.RealmsPersistence#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_39744", "LOGGER", "f_240227_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.RealmsPersistence#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LOGGER", "field_39744", "LOGGER", "f_240227_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_33423", "load", "m_167615_"), "()Lffb$a;");
    }

    static jobject load(const jobject& obj) {
                
       const auto methodID = methodID_load();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_save() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_33424", "save", "m_167616_"), "(Lffb$a;)V");
    }

    static void save(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_save();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "readFile", "method_21549", "readFile", "m_90171_"), "()Lffb$a;");
    }

    static jobject readFile() {
       const auto clazz = self();
       const auto methodID = methodID_readFile();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_writeFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "writeFile", "method_21550", "writeFile", "m_90172_"), "(Lffb$a;)V");
    }

    static void writeFile(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_writeFile();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getPathToData", "method_25279", "getFile", "m_90174_"), "()Ljava/nio/file/Path;");
    }

    static jobject getFile() {
       const auto clazz = self();
       const auto methodID = methodID_getFile();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_UTIL_REALMSPERSISTENCE_HPP