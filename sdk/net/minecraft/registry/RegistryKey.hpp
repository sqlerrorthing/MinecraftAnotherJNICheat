// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRYKEY_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRYKEY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.RegistryKey
 * Remapped: akq
 */
namespace RegistryKey {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("akq", "net/minecraft/resources/ResourceKey", "net/minecraft/class_5321", "net/minecraft/registry/RegistryKey", "net/minecraft/src/C_5264_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.registry.RegistryKey#INSTANCES
    [[maybe_unused]] static jobject get_field_INSTANCES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VALUES", "field_25136", "INSTANCES", "f_135775_"), "Ljava/util/concurrent/ConcurrentMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryKey#INSTANCES
    [[maybe_unused]] static void set_field_INSTANCES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VALUES", "field_25136", "INSTANCES", "f_135775_"), "Ljava/util/concurrent/ConcurrentMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.registry.RegistryKey#registry
    static jobject get_field_registry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "registryName", "field_25137", "registry", "f_135776_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryKey#registry
    static void set_field_registry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "registryName", "field_25137", "registry", "f_135776_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.RegistryKey#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "location", "field_25138", "value", "f_135777_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.RegistryKey#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "location", "field_25138", "value", "f_135777_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_39154", "createCodec", "m_195966_"), "(Lakq;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createPacketCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "streamCodec", "method_56038", "createPacketCodec", "m_323597_"), "(Lakq;)Lyx;");
    }

    static jobject createPacketCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createPacketCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_29179", "of", "m_135785_"), "(Lakq;Lakr;)Lakq;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_ofRegistry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createRegistryKey", "method_29180", "ofRegistry", "m_135788_"), "(Lakr;)Lakq;");
    }

    static jobject ofRegistry(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_ofRegistry();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_29181", "of", "m_135790_"), "(Lakr;Lakr;)Lakq;");
    }

    static jobject _of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isFor", "method_31163", "isOf", "m_135783_"), "(Lakq;)Z");
    }

    static jboolean isOf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isOf();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tryCast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "cast", "method_39752", "tryCast", "m_195975_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject tryCast(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tryCast();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "location", "method_29177", "getValue", "m_135782_"), "()Lakr;");
    }

    static jobject getValue(const jobject& obj) {
                
       const auto methodID = methodID_getValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRegistry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "registry", "method_41185", "getRegistry", "m_211136_"), "()Lakr;");
    }

    static jobject getRegistry(const jobject& obj) {
                
       const auto methodID = methodID_getRegistry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRegistryRef() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "registryKey", "method_58273", "getRegistryRef", "m_323747_"), "()Lakq;");
    }

    static jobject getRegistryRef(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryRef();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRYKEY_HPP