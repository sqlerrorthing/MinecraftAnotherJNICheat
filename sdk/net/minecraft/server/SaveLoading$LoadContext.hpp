// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_SAVELOADING$LOADCONTEXT_HPP
#define NET_MINECRAFT_SERVER_SAVELOADING$LOADCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.SaveLoading$LoadContext
 * Remapped: alo$b
 */
namespace SaveLoading$LoadContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alo$b", "net/minecraft/server/WorldLoader$DataLoadOutput", "net/minecraft/class_7237$class_7661", "net/minecraft/server/SaveLoading$LoadContext", "net/minecraft/src/C_212931_$C_243619_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.server.SaveLoading$LoadContext#extraData
    static jobject get_field_extraData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cookie", "comp_991", "extraData", "f_244458_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.SaveLoading$LoadContext#extraData
    static void set_field_extraData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cookie", "comp_991", "extraData", "f_244458_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.server.SaveLoading$LoadContext#dimensionsRegistryManager
    static jobject get_field_dimensionsRegistryManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "finalDimensions", "comp_992", "dimensionsRegistryManager", "f_244143_"), "Lka$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.server.SaveLoading$LoadContext#dimensionsRegistryManager
    static void set_field_dimensionsRegistryManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "finalDimensions", "comp_992", "dimensionsRegistryManager", "f_244143_"), "Lka$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__extraData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cookie", "comp_991", "extraData", "f_244458_"), "()Ljava/lang/Object;");
    }

    static jobject _extraData(const jobject& obj) {
                
       const auto methodID = methodID__extraData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__dimensionsRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "finalDimensions", "comp_992", "dimensionsRegistryManager", "f_244143_"), "()Lka$b;");
    }

    static jobject _dimensionsRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID__dimensionsRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_SAVELOADING$LOADCONTEXT_HPP