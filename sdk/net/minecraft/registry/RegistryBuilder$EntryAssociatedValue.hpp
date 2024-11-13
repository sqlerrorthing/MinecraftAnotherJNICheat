// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$ENTRYASSOCIATEDVALUE_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$ENTRYASSOCIATEDVALUE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryBuilder$EntryAssociatedValue
 * Remapped: kc$n
 */
namespace RegistryBuilder$EntryAssociatedValue {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kc$n", "net/minecraft/core/RegistrySetBuilder$ValueAndHolder", "net/minecraft/class_7877$class_7886", "net/minecraft/registry/RegistryBuilder$EntryAssociatedValue", "net/minecraft/src/C_254591_$C_254581_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.RegistryBuilder$EntryAssociatedValue#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "value", "comp_1147", "value", "f_254683_"), "Lkc$h;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryBuilder$EntryAssociatedValue#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "value", "comp_1147", "value", "f_254683_"), "Lkc$h;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.RegistryBuilder$EntryAssociatedValue#entry
    static jobject get_field_entry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "holder", "comp_1148", "entry", "f_254632_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryBuilder$EntryAssociatedValue#entry
    static void set_field_entry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "holder", "comp_1148", "entry", "f_254632_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "value", "comp_1147", "value", "f_254683_"), "()Lkc$h;");
    }

    static jobject _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__entry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "holder", "comp_1148", "entry", "f_254632_"), "()Ljava/util/Optional;");
    }

    static jobject _entry(const jobject& obj) {
                
       const auto methodID = methodID__entry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYBUILDER$ENTRYASSOCIATEDVALUE_HPP