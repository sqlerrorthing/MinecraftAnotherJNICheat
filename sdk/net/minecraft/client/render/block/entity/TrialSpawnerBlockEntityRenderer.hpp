// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_TRIALSPAWNERBLOCKENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_TRIALSPAWNERBLOCKENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.entity.TrialSpawnerBlockEntityRenderer
 * Remapped: ght
 */
namespace TrialSpawnerBlockEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ght", "net/minecraft/client/renderer/blockentity/TrialSpawnerRenderer", "net/minecraft/class_8984", "net/minecraft/client/render/block/entity/TrialSpawnerBlockEntityRenderer", "net/minecraft/src/C_302103_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.block.entity.TrialSpawnerBlockEntityRenderer#entityRenderDispatcher
    static jobject get_field_entityRenderDispatcher(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entityRenderer", "field_47464", "entityRenderDispatcher", "f_302933_"), "Lgkh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.TrialSpawnerBlockEntityRenderer#entityRenderDispatcher
    static void set_field_entityRenderDispatcher(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entityRenderer", "field_47464", "entityRenderDispatcher", "f_302933_"), "Lgkh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_55254", "render", "m_6922_"), "(Ldsc;FLfbi;Lgez;II)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_TRIALSPAWNERBLOCKENTITYRENDERER_HPP