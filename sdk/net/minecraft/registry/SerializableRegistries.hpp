// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_SERIALIZABLEREGISTRIES_HPP
#define NET_MINECRAFT_REGISTRY_SERIALIZABLEREGISTRIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.SerializableRegistries
 * Remapped: kd
 */
namespace SerializableRegistries {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("kd", "net/minecraft/core/RegistrySynchronization", "net/minecraft/class_7782", "net/minecraft/registry/SerializableRegistries", "net/minecraft/src/C_243577_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.registry.SerializableRegistries#SYNCED_REGISTRIES
    [[maybe_unused]] static jobject get_field_SYNCED_REGISTRIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NETWORKABLE_REGISTRIES", "field_48771", "SYNCED_REGISTRIES", "f_244438_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.SerializableRegistries#SYNCED_REGISTRIES
    [[maybe_unused]] static void set_field_SYNCED_REGISTRIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NETWORKABLE_REGISTRIES", "field_48771", "SYNCED_REGISTRIES", "f_244438_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_forEachSyncedRegistry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "packRegistries", "method_56598", "forEachSyncedRegistry", "m_319314_"), "(Lcom/mojang/serialization/DynamicOps;Lka;Ljava/util/Set;Ljava/util/function/BiConsumer;)V");
    }

    static void forEachSyncedRegistry(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_forEachSyncedRegistry();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_serialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "packRegistry", "method_56597", "serialize", "m_321996_"), "(Lcom/mojang/serialization/DynamicOps;Lakm$c;Lka;Ljava/util/Set;Ljava/util/function/BiConsumer;)V");
    }

    static void serialize(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_serialize();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "ownedNetworkableRegistries", "method_45956", "stream", "m_247199_"), "(Lka;)Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_streamDynamicEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "networkedRegistries", "method_47449", "streamDynamicEntries", "m_257599_"), "(Ljt;)Ljava/util/stream/Stream;");
    }

    static jobject streamDynamicEntries(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_streamDynamicEntries();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_streamRegistryManagerEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "networkSafeRegistries", "method_45953", "streamRegistryManagerEntries", "m_245122_"), "(Ljt;)Ljava/util/stream/Stream;");
    }

    static jobject streamRegistryManagerEntries(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_streamRegistryManagerEntries();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_SERIALIZABLEREGISTRIES_HPP