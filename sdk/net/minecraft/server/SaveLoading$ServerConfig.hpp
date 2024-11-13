// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SAVELOADING$SERVERCONFIG_HPP
#define NET_MINECRAFT_SERVER_SAVELOADING$SERVERCONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.SaveLoading$ServerConfig
 * Remapped: alo$c
 */
namespace SaveLoading$ServerConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alo$c", "net/minecraft/server/WorldLoader$InitConfig", "net/minecraft/class_7237$class_6906", "net/minecraft/server/SaveLoading$ServerConfig", "net/minecraft/src/C_212931_$C_212932_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.server.SaveLoading$ServerConfig#dataPacks
    static jobject get_field_dataPacks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "packConfig", "comp_634", "dataPacks", "f_214378_"), "Lalo$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.SaveLoading$ServerConfig#dataPacks
    static void set_field_dataPacks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "packConfig", "comp_634", "dataPacks", "f_214378_"), "Lalo$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.SaveLoading$ServerConfig#commandEnvironment
    static jobject get_field_commandEnvironment(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "commandSelection", "comp_361", "commandEnvironment", "f_214379_"), "Leu$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoading$ServerConfig#commandEnvironment
    static void set_field_commandEnvironment(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "commandSelection", "comp_361", "commandEnvironment", "f_214379_"), "Leu$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.SaveLoading$ServerConfig#functionPermissionLevel
    static jint get_field_functionPermissionLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "functionCompilationLevel", "comp_362", "functionPermissionLevel", "f_214380_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.SaveLoading$ServerConfig#functionPermissionLevel
    static void set_field_functionPermissionLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "functionCompilationLevel", "comp_362", "functionPermissionLevel", "f_214380_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID__dataPacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "packConfig", "comp_634", "dataPacks", "f_214378_"), "()Lalo$d;");
    }

    static jobject _dataPacks(const jobject& obj) {
                
       const auto methodID = methodID__dataPacks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__commandEnvironment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "commandSelection", "comp_361", "commandEnvironment", "f_214379_"), "()Leu$a;");
    }

    static jobject _commandEnvironment(const jobject& obj) {
                
       const auto methodID = methodID__commandEnvironment();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__functionPermissionLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "functionCompilationLevel", "comp_362", "functionPermissionLevel", "f_214380_"), "()I");
    }

    static jint _functionPermissionLevel(const jobject& obj) {
                
       const auto methodID = methodID__functionPermissionLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SAVELOADING$SERVERCONFIG_HPP