// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_TINTABLEANIMALMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_TINTABLEANIMALMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.TintableAnimalModel
 * Remapped: fvb
 */
namespace TintableAnimalModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fvb", "net/minecraft/client/model/ColorableAgeableListModel", "net/minecraft/class_4593", "net/minecraft/client/render/entity/model/TintableAnimalModel", "net/minecraft/src/C_3809_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.model.TintableAnimalModel#tint
    static jint get_field_tint(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "color", "field_52151", "tint", "f_336769_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.TintableAnimalModel#tint
    static void set_field_tint(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "color", "field_52151", "tint", "f_336769_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_setColorMultiplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setColor", "method_22955", "setColorMultiplier", "m_102419_"), "(I)V");
    }

    static void setColorMultiplier(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setColorMultiplier();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderToBuffer", "method_2828", "render", "m_7695_"), "(Lfbi;Lfbm;III)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_TINTABLEANIMALMODEL_HPP