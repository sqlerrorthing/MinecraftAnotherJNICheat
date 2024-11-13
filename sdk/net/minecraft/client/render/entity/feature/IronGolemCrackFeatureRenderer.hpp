// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_IRONGOLEMCRACKFEATURERENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_IRONGOLEMCRACKFEATURERENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.IronGolemCrackFeatureRenderer
 * Remapped: gom
 */
namespace IronGolemCrackFeatureRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gom", "net/minecraft/client/renderer/entity/layers/IronGolemCrackinessLayer", "net/minecraft/class_4691", "net/minecraft/client/render/entity/feature/IronGolemCrackFeatureRenderer", "net/minecraft/src/C_4439_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.feature.IronGolemCrackFeatureRenderer#CRACK_TEXTURES
    [[maybe_unused]] static jobject get_field_CRACK_TEXTURES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "resourceLocations", "field_21443", "CRACK_TEXTURES", "f_117132_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.IronGolemCrackFeatureRenderer#CRACK_TEXTURES
    [[maybe_unused]] static void set_field_CRACK_TEXTURES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "resourceLocations", "field_21443", "CRACK_TEXTURES", "f_117132_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_23623", "render", "m_6494_"), "(Lfbi;Lgez;ILcfq;FFFFFF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_IRONGOLEMCRACKFEATURERENDERER_HPP