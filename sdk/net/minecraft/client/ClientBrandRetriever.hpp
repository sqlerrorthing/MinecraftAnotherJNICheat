// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_CLIENTBRANDRETRIEVER_HPP
#define NET_MINECRAFT_CLIENT_CLIENTBRANDRETRIEVER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.ClientBrandRetriever
 * Remapped: net/minecraft/client/ClientBrandRetriever
 */
namespace ClientBrandRetriever {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("net/minecraft/client/ClientBrandRetriever", "net/minecraft/client/ClientBrandRetriever", "net/minecraft/client/ClientBrandRetriever", "net/minecraft/client/ClientBrandRetriever", "net/minecraft/client/ClientBrandRetriever"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.ClientBrandRetriever#VANILLA
    [[maybe_unused]] static jobject get_field_VANILLA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VANILLA_NAME", "field_33204", "VANILLA", "f_177870_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.ClientBrandRetriever#VANILLA
    [[maybe_unused]] static void set_field_VANILLA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "VANILLA_NAME", "field_33204", "VANILLA", "f_177870_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getClientModName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("getClientModName", "getClientModName", "", "", "getClientModName"), "()Ljava/lang/String;");
    }

    static jobject getClientModName() {
       const auto clazz = self();
       const auto methodID = methodID_getClientModName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_CLIENTBRANDRETRIEVER_HPP