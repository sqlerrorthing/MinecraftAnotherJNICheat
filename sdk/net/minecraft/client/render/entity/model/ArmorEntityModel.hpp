// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ARMORENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ARMORENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.ArmorEntityModel
 * Remapped: fvw
 */
namespace ArmorEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fvw", "net/minecraft/client/model/HumanoidArmorModel", "net/minecraft/class_8136", "net/minecraft/client/render/entity/model/ArmorEntityModel", "net/minecraft/src/C_268389_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createBodyLayer", "method_49032", "getModelData", "m_269566_"), "(Lfyo;)Lfys;");
    }

    static jobject getModelData(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ARMORENTITYMODEL_HPP