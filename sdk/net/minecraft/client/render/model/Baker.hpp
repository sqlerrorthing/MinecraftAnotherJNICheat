// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_BAKER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_BAKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.Baker
 * Remapped: gsr
 */
namespace Baker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gsr", "net/minecraft/client/resources/model/ModelBaker", "net/minecraft/class_7775", "net/minecraft/client/render/model/Baker", "net/minecraft/src/C_243643_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getOrLoadModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getModel", "method_45872", "getOrLoadModel", "m_245361_"), "(Lakr;)Lgsy;");
    }

    static jobject getOrLoadModel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOrLoadModel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_bake() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bake", "method_45873", "bake", "m_245240_"), "(Lakr;Lgsv;)Lgsm;");
    }

    static jobject bake(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_bake();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_BAKER_HPP