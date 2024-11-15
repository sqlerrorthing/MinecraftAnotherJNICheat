// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_ADVANCEMENTPROVIDER_HPP
#define NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_ADVANCEMENTPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.advancement.AdvancementProvider
 * Remapped: md
 */
namespace AdvancementProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("md", "net/minecraft/data/advancements/AdvancementProvider", "net/minecraft/class_2409", "net/minecraft/data/server/advancement/AdvancementProvider", "net/minecraft/src/C_4767_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.server.advancement.AdvancementProvider#pathResolver
    static jobject get_field_pathResolver(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pathProvider", "field_39372", "pathResolver", "f_236156_"), "Lmc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.advancement.AdvancementProvider#pathResolver
    static void set_field_pathResolver(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pathProvider", "field_39372", "pathResolver", "f_236156_"), "Lmc$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.server.advancement.AdvancementProvider#tabGenerators
    static jobject get_field_tabGenerators(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "subProviders", "field_11289", "tabGenerators", "f_244266_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.advancement.AdvancementProvider#tabGenerators
    static void set_field_tabGenerators(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "subProviders", "field_11289", "tabGenerators", "f_244266_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.server.advancement.AdvancementProvider#registryLookupFuture
    static jobject get_field_registryLookupFuture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "registries", "field_40949", "registryLookupFuture", "f_254664_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.server.advancement.AdvancementProvider#registryLookupFuture
    static void set_field_registryLookupFuture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "registries", "field_40949", "registryLookupFuture", "f_254664_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "run", "method_10319", "run", "m_213708_"), "(Lly;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject run(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_run();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_10321", "getName", "m_6055_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_ADVANCEMENTPROVIDER_HPP