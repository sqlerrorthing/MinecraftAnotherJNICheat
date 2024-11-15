// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_PLAYERSKINPROVIDER_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_PLAYERSKINPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.PlayerSkinProvider
 * Remapped: grm
 */
namespace PlayerSkinProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grm", "net/minecraft/client/resources/SkinManager", "net/minecraft/class_1071", "net/minecraft/client/texture/PlayerSkinProvider", "net/minecraft/src/C_4506_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.texture.PlayerSkinProvider#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_46909", "LOGGER", "f_302802_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.texture.PlayerSkinProvider#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_46909", "LOGGER", "f_302802_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.PlayerSkinProvider#sessionService
    static jobject get_field_sessionService(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sessionService", "field_46910", "sessionService", "f_302450_"), "Lcom/mojang/authlib/minecraft/MinecraftSessionService;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.PlayerSkinProvider#sessionService
    static void set_field_sessionService(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sessionService", "field_46910", "sessionService", "f_302450_"), "Lcom/mojang/authlib/minecraft/MinecraftSessionService;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.PlayerSkinProvider#cache
    static jobject get_field_cache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "skinCache", "field_45634", "cache", "f_291642_"), "Lcom/google/common/cache/LoadingCache;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.PlayerSkinProvider#cache
    static void set_field_cache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "skinCache", "field_45634", "cache", "f_291642_"), "Lcom/google/common/cache/LoadingCache;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.PlayerSkinProvider#skinCache
    static jobject get_field_skinCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "skinTextures", "field_45635", "skinCache", "f_291663_"), "Lgrm$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.PlayerSkinProvider#skinCache
    static void set_field_skinCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "skinTextures", "field_45635", "skinCache", "f_291663_"), "Lgrm$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.PlayerSkinProvider#capeCache
    static jobject get_field_capeCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "capeTextures", "field_45636", "capeCache", "f_291885_"), "Lgrm$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.PlayerSkinProvider#capeCache
    static void set_field_capeCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "capeTextures", "field_45636", "capeCache", "f_291885_"), "Lgrm$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.PlayerSkinProvider#elytraCache
    static jobject get_field_elytraCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "elytraTextures", "field_45637", "elytraCache", "f_290946_"), "Lgrm$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.PlayerSkinProvider#elytraCache
    static void set_field_elytraCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "elytraTextures", "field_45637", "elytraCache", "f_290946_"), "Lgrm$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getSkinTexturesSupplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lookupInsecure", "method_52858", "getSkinTexturesSupplier", "m_293884_"), "(Lcom/mojang/authlib/GameProfile;)Ljava/util/function/Supplier;");
    }

    static jobject getSkinTexturesSupplier(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSkinTexturesSupplier();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSkinTextures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getInsecureSkin", "method_52862", "getSkinTextures", "m_293307_"), "(Lcom/mojang/authlib/GameProfile;)Lgrl;");
    }

    static jobject getSkinTextures(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSkinTextures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fetchSkinTextures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getOrLoad", "method_52863", "fetchSkinTextures", "m_293351_"), "(Lcom/mojang/authlib/GameProfile;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject fetchSkinTextures(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fetchSkinTextures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__fetchSkinTextures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registerTextures", "method_52859", "fetchSkinTextures", "m_292851_"), "(Ljava/util/UUID;Lcom/mojang/authlib/minecraft/MinecraftProfileTextures;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject _fetchSkinTextures(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__fetchSkinTextures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_PLAYERSKINPROVIDER_HPP