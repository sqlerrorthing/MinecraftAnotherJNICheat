// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_SIGNBLOCKENTITYRENDERER$SIGNMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_SIGNBLOCKENTITYRENDERER$SIGNMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.block.entity.SignBlockEntityRenderer$SignModel
 * Remapped: ghn$a
 */
namespace SignBlockEntityRenderer$SignModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ghn$a", "net/minecraft/client/renderer/blockentity/SignRenderer$SignModel", "net/minecraft/class_837$class_4702", "net/minecraft/client/render/block/entity/SignBlockEntityRenderer$SignModel", "net/minecraft/src/C_4253_$C_4254_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.render.block.entity.SignBlockEntityRenderer$SignModel#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "root", "field_27756", "root", "f_173655_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.entity.SignBlockEntityRenderer$SignModel#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "root", "field_27756", "root", "f_173655_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.block.entity.SignBlockEntityRenderer$SignModel#stick
    static jobject get_field_stick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "stick", "field_21531", "stick", "f_112507_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.block.entity.SignBlockEntityRenderer$SignModel#stick
    static void set_field_stick(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "stick", "field_21531", "stick", "f_112507_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
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

#endif // NET_MINECRAFT_CLIENT_RENDER_BLOCK_ENTITY_SIGNBLOCKENTITYRENDERER$SIGNMODEL_HPP