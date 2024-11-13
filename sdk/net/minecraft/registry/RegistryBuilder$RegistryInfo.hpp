// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$REGISTRYINFO_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$REGISTRYINFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryBuilder$RegistryInfo
 * Remapped: kc$k
 */
namespace RegistryBuilder$RegistryInfo {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kc$k", "net/minecraft/core/RegistrySetBuilder$RegistryStub", "net/minecraft/class_7877$class_7884", "net/minecraft/registry/RegistryBuilder$RegistryInfo", "net/minecraft/src/C_254591_$C_254597_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.RegistryBuilder$RegistryInfo#key
    static jobject get_field_key(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_1144", "key", "f_254738_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryBuilder$RegistryInfo#key
    static void set_field_key(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_1144", "key", "f_254738_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.RegistryBuilder$RegistryInfo#lifecycle
    static jobject get_field_lifecycle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lifecycle", "comp_1145", "lifecycle", "f_254728_"), "Lcom/mojang/serialization/Lifecycle;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryBuilder$RegistryInfo#lifecycle
    static void set_field_lifecycle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lifecycle", "comp_1145", "lifecycle", "f_254728_"), "Lcom/mojang/serialization/Lifecycle;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.RegistryBuilder$RegistryInfo#bootstrap
    static jobject get_field_bootstrap(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "bootstrap", "comp_1146", "bootstrap", "f_254689_"), "Lkc$i;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryBuilder$RegistryInfo#bootstrap
    static void set_field_bootstrap(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "bootstrap", "comp_1146", "bootstrap", "f_254689_"), "Lkc$i;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_runBootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "apply", "method_46806", "runBootstrap", "m_254946_"), "(Lkc$b;)V");
    }

    static void runBootstrap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_runBootstrap();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "collectRegisteredValues", "method_46805", "init", "m_254914_"), "(Lkc$b;)Lkc$j;");
    }

    static jobject init(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_init();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__key() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "key", "comp_1144", "key", "f_254738_"), "()Lakq;");
    }

    static jobject _key(const jobject& obj) {
                
       const auto methodID = methodID__key();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__lifecycle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "lifecycle", "comp_1145", "lifecycle", "f_254728_"), "()Lcom/mojang/serialization/Lifecycle;");
    }

    static jobject _lifecycle(const jobject& obj) {
                
       const auto methodID = methodID__lifecycle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "bootstrap", "comp_1146", "bootstrap", "f_254689_"), "()Lkc$i;");
    }

    static jobject _bootstrap(const jobject& obj) {
                
       const auto methodID = methodID__bootstrap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$REGISTRYINFO_HPP