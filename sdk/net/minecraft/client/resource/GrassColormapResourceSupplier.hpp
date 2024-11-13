// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_GRASSCOLORMAPRESOURCESUPPLIER_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_GRASSCOLORMAPRESOURCESUPPLIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.GrassColormapResourceSupplier
 * Remapped: grf
 */
namespace GrassColormapResourceSupplier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grf", "net/minecraft/client/resources/GrassColorReloadListener", "net/minecraft/class_1069", "net/minecraft/client/resource/GrassColormapResourceSupplier", "net/minecraft/src/C_4500_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.resource.GrassColormapResourceSupplier#GRASS_COLORMAP_LOC
    [[maybe_unused]] static jobject get_field_GRASS_COLORMAP_LOC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOCATION", "field_5302", "GRASS_COLORMAP_LOC", "f_118673_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.resource.GrassColormapResourceSupplier#GRASS_COLORMAP_LOC
    [[maybe_unused]] static void set_field_GRASS_COLORMAP_LOC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOCATION", "field_5302", "GRASS_COLORMAP_LOC", "f_118673_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_tryLoad() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "prepare", "method_18662", "tryLoad", "m_5944_"), "(Laue;Lbnf;)[I");
    }

    static jint tryLoad(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_tryLoad();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_18661", "apply", "m_5787_"), "([ILaue;Lbnf;)V");
    }

    static void apply(const jobject& obj, const jarray& arg0, const jint& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_GRASSCOLORMAPRESOURCESUPPLIER_HPP