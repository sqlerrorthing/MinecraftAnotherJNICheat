// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_UNBAKEDMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_UNBAKEDMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.UnbakedModel
 * Remapped: gsy
 */
namespace UnbakedModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gsy", "net/minecraft/client/resources/model/UnbakedModel", "net/minecraft/class_1100", "net/minecraft/client/render/model/UnbakedModel", "net/minecraft/src/C_4542_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getModelDependencies() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getDependencies", "method_4755", "getModelDependencies", "m_7970_"), "()Ljava/util/Collection;");
    }

    static jobject getModelDependencies(const jobject& obj) {
                
       const auto methodID = methodID_getModelDependencies();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setParents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resolveParents", "method_45785", "setParents", "m_5500_"), "(Ljava/util/function/Function;)V");
    }

    static void setParents(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setParents();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_bake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bake", "method_4753", "bake", "m_7611_"), "(Lgsr;Ljava/util/function/Function;Lgsv;)Lgsm;");
    }

    static jobject bake(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_bake();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_UNBAKEDMODEL_HPP