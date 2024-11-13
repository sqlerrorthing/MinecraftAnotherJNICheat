// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_MODELWITHHAT_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_MODELWITHHAT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.ModelWithHat
 * Remapped: fxu
 */
namespace ModelWithHat {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fxu", "net/minecraft/client/model/VillagerHeadModel", "net/minecraft/class_3884", "net/minecraft/client/render/entity/model/ModelWithHat", "net/minecraft/src/C_3881_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_setHatVisible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hatVisible", "method_17150", "setHatVisible", "m_7491_"), "(Z)V");
    }

    static void setHatVisible(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setHatVisible();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_MODELWITHHAT_HPP