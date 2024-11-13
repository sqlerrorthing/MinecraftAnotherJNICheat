// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYLOADER$ENTRY_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYLOADER$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryLoader$Entry
 * Remapped: akm$c
 */
namespace RegistryLoader$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("akm$c", "net/minecraft/resources/RegistryDataLoader$RegistryData", "net/minecraft/class_7655$class_7657", "net/minecraft/registry/RegistryLoader$Entry", "net/minecraft/src/C_243574_$C_243529_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.RegistryLoader$Entry#key
    static jobject get_field_key(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_985", "key", "f_243794_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryLoader$Entry#key
    static void set_field_key(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_985", "key", "f_243794_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.registry.RegistryLoader$Entry#elementCodec
    static jobject get_field_elementCodec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "elementCodec", "comp_986", "elementCodec", "f_244580_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.registry.RegistryLoader$Entry#elementCodec
    static void set_field_elementCodec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "elementCodec", "comp_986", "elementCodec", "f_244580_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.registry.RegistryLoader$Entry#requiredNonEmpty
    static jboolean get_field_requiredNonEmpty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "requiredNonEmpty", "comp_2664", "requiredNonEmpty", "f_337394_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.registry.RegistryLoader$Entry#requiredNonEmpty
    static void set_field_requiredNonEmpty(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "requiredNonEmpty", "comp_2664", "requiredNonEmpty", "f_337394_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getLoader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_45131", "getLoader", "m_245364_"), "(Lcom/mojang/serialization/Lifecycle;Ljava/util/Map;)Lakm$a;");
    }

    static jobject getLoader(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getLoader();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addToCloner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runWithArguments", "method_54920", "addToCloner", "m_305182_"), "(Ljava/util/function/BiConsumer;)V");
    }

    static void addToCloner(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addToCloner();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__key() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "key", "comp_985", "key", "f_243794_"), "()Lakq;");
    }

    static jobject _key(const jobject& obj) {
                
       const auto methodID = methodID__key();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__elementCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "elementCodec", "comp_986", "elementCodec", "f_244580_"), "()Lcom/mojang/serialization/Codec;");
    }

    static jobject _elementCodec(const jobject& obj) {
                
       const auto methodID = methodID__elementCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__requiredNonEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "requiredNonEmpty", "comp_2664", "requiredNonEmpty", "f_337394_"), "()Z");
    }

    static jboolean _requiredNonEmpty(const jobject& obj) {
                
       const auto methodID = methodID__requiredNonEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYLOADER$ENTRY_HPP