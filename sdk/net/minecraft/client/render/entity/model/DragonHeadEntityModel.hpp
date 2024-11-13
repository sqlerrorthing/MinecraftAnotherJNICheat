// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_DRAGONHEADENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_DRAGONHEADENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.DragonHeadEntityModel
 * Remapped: fye
 */
namespace DragonHeadEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fye", "net/minecraft/client/model/dragon/DragonHeadModel", "net/minecraft/class_626", "net/minecraft/client/render/entity/model/DragonHeadEntityModel", "net/minecraft/src/C_3888_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.model.DragonHeadEntityModel#head
    static jobject get_field_head(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "head", "field_3638", "head", "f_104183_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.DragonHeadEntityModel#head
    static void set_field_head(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "head", "field_3638", "head", "f_104183_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.DragonHeadEntityModel#jaw
    static jobject get_field_jaw(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "jaw", "field_3639", "jaw", "f_104184_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.DragonHeadEntityModel#jaw
    static void set_field_jaw(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "jaw", "field_3639", "jaw", "f_104184_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createHeadLayer", "method_32071", "getTexturedModelData", "m_171098_"), "()Lfyq;");
    }

    static jobject getTexturedModelData() {
       const auto clazz = self();
       const auto methodID = methodID_getTexturedModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_setHeadRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupAnim", "method_2821", "setHeadRotation", "m_6251_"), "(FFF)V");
    }

    static void setHeadRotation(const jobject& obj, const jfloat& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_setHeadRotation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
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

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_DRAGONHEADENTITYMODEL_HPP