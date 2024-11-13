// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$WRAPPERINFOPAIR_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$WRAPPERINFOPAIR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryBuilder$WrapperInfoPair
 * Remapped: kc$a
 */
namespace RegistryBuilder$WrapperInfoPair {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kc$a", "net/minecraft/core/RegistrySetBuilder$1Entry", "net/minecraft/class_7877$class_9256", "net/minecraft/registry/RegistryBuilder$WrapperInfoPair", "net/minecraft/src/C_254591_$C_313309_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.RegistryBuilder$WrapperInfoPair#lookup
    static jobject get_field_lookup(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "lookup", "comp_2360", "lookup", "f_314871_"), "Ljo$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryBuilder$WrapperInfoPair#lookup
    static void set_field_lookup(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "lookup", "comp_2360", "lookup", "f_314871_"), "Ljo$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.RegistryBuilder$WrapperInfoPair#opsInfo
    static jobject get_field_opsInfo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "opsInfo", "comp_2361", "opsInfo", "f_315726_"), "Lakp$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryBuilder$WrapperInfoPair#opsInfo
    static void set_field_opsInfo(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "opsInfo", "comp_2361", "opsInfo", "f_315726_"), "Lakp$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createForContextRegistry", "method_57096", "of", "m_322129_"), "(Ljo$b;)Lkc$a;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createForNewRegistry", "method_57097", "of", "m_324954_"), "(Lkc$m;Ljo$b;)Lkc$a;");
    }

    static jobject _of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__lookup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lookup", "comp_2360", "lookup", "f_314871_"), "()Ljo$b;");
    }

    static jobject _lookup(const jobject& obj) {
                
       const auto methodID = methodID__lookup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__opsInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "opsInfo", "comp_2361", "opsInfo", "f_315726_"), "()Lakp$b;");
    }

    static jobject _opsInfo(const jobject& obj) {
                
       const auto methodID = methodID__opsInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$WRAPPERINFOPAIR_HPP