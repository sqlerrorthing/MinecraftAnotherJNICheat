// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.EntityModel
 * Remapped: fvk
 */
namespace EntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fvk", "net/minecraft/client/model/EntityModel", "net/minecraft/class_583", "net/minecraft/client/render/entity/model/EntityModel", "net/minecraft/src/C_3819_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.render.entity.model.EntityModel#handSwingProgress
    static jfloat get_field_handSwingProgress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "attackTime", "field_3447", "handSwingProgress", "f_102608_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.model.EntityModel#handSwingProgress
    static void set_field_handSwingProgress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "attackTime", "field_3447", "handSwingProgress", "f_102608_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.entity.model.EntityModel#riding
    static jboolean get_field_riding(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "riding", "field_3449", "riding", "f_102609_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.model.EntityModel#riding
    static void set_field_riding(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "riding", "field_3449", "riding", "f_102609_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.entity.model.EntityModel#child
    static jboolean get_field_child(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "young", "field_3448", "child", "f_102610_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.model.EntityModel#child
    static void set_field_child(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "young", "field_3448", "child", "f_102610_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_setAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupAnim", "method_2819", "setAngles", "m_6973_"), "(Lbsr;FFFFF)V");
    }

    static void setAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_animateModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "prepareMobModel", "method_2816", "animateModel", "m_6839_"), "(Lbsr;FFF)V");
    }

    static void animateModel(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_animateModel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_copyStateTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copyPropertiesTo", "method_17081", "copyStateTo", "m_102624_"), "(Lfvk;)V");
    }

    static void copyStateTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyStateTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ENTITYMODEL_HPP