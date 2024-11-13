// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_CAMPFIREBLOCKENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_CAMPFIREBLOCKENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.entity.CampfireBlockEntityRenderer
 * Remapped: ghe
 */
namespace CampfireBlockEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ghe", "net/minecraft/client/renderer/blockentity/CampfireRenderer", "net/minecraft/class_3941", "net/minecraft/client/render/block/entity/CampfireBlockEntityRenderer", "net/minecraft/src/C_4246_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.block.entity.CampfireBlockEntityRenderer#SCALE
    [[maybe_unused]] static jfloat get_field_SCALE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SIZE", "field_32824", "SCALE", "f_173600_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.CampfireBlockEntityRenderer#SCALE
    [[maybe_unused]] static void set_field_SCALE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SIZE", "field_32824", "SCALE", "f_173600_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.block.entity.CampfireBlockEntityRenderer#itemRenderer
    static jobject get_field_itemRenderer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "itemRenderer", "field_38884", "itemRenderer", "f_234448_"), "Lglh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.block.entity.CampfireBlockEntityRenderer#itemRenderer
    static void set_field_itemRenderer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "itemRenderer", "field_38884", "itemRenderer", "f_234448_"), "Lglh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_17581", "render", "m_6922_"), "(Ldqn;FLfbi;Lgez;II)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_CAMPFIREBLOCKENTITYRENDERER_HPP