// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ZOMBIEENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ZOMBIEENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.ZombieEntityModel
 * Remapped: fyc
 */
namespace ZombieEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fyc", "net/minecraft/client/model/ZombieModel", "net/minecraft/class_623", "net/minecraft/client/render/entity/model/ZombieEntityModel", "net/minecraft/src/C_3886_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_isAttacking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isAggressive", "method_17793", "isAttacking", "m_7134_"), "(Lckw;)Z");
    }

    static jboolean isAttacking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isAttacking();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ZOMBIEENTITYMODEL_HPP