// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_CLIENTTAGLOADER_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_CLIENTTAGLOADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.ClientTagLoader
 * Remapped: fzx
 */
namespace ClientTagLoader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fzx", "net/minecraft/client/multiplayer/TagCollector", "net/minecraft/class_9175", "net/minecraft/client/network/ClientTagLoader", "net/minecraft/src/C_313641_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.network.ClientTagLoader#tagsByRegistry
    static jobject get_field_tagsByRegistry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "tags", "field_48770", "tagsByRegistry", "f_315318_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.network.ClientTagLoader#tagsByRegistry
    static void set_field_tagsByRegistry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "tags", "field_48770", "tagsByRegistry", "f_315318_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_put() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "append", "method_56590", "put", "m_322781_"), "(Lakq;Lawx$a;)V");
    }

    static void put(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_put();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onStaticTagsLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "refreshBuiltInTagDependentData", "method_57054", "onStaticTagsLoaded", "m_319038_"), "()V");
    }

    static void onStaticTagsLoaded() {
       const auto clazz = self();
       const auto methodID = methodID_onStaticTagsLoaded();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyTags", "method_56591", "load", "m_322703_"), "(Lka;Ljava/util/function/Predicate;)V");
    }

    static void load(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_load();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateTags", "method_57053", "load", "m_324385_"), "(Lka;Z)V");
    }

    static void _load(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID__load();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_CLIENTTAGLOADER_HPP