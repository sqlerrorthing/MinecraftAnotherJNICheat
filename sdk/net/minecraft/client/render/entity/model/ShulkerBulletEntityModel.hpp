// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SHULKERBULLETENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SHULKERBULLETENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.ShulkerBulletEntityModel
 * Remapped: fxc
 */
namespace ShulkerBulletEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fxc", "net/minecraft/client/model/ShulkerBulletModel", "net/minecraft/class_603", "net/minecraft/client/render/entity/model/ShulkerBulletEntityModel", "net/minecraft/src/C_3865_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.model.ShulkerBulletEntityModel#MAIN
    [[maybe_unused]] static jobject get_field_MAIN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAIN", "field_32553", "MAIN", "f_170913_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ShulkerBulletEntityModel#MAIN
    [[maybe_unused]] static void set_field_MAIN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAIN", "field_32553", "MAIN", "f_170913_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ShulkerBulletEntityModel#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "root", "field_27496", "root", "f_170914_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ShulkerBulletEntityModel#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "root", "field_27496", "root", "f_170914_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ShulkerBulletEntityModel#bullet
    static jobject get_field_bullet(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "main", "field_3556", "bullet", "f_103712_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ShulkerBulletEntityModel#bullet
    static void set_field_bullet(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "main", "field_3556", "bullet", "f_103712_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createBodyLayer", "method_32040", "getTexturedModelData", "m_170917_"), "()Lfyq;");
    }

    static jobject getTexturedModelData() {
       const auto clazz = self();
       const auto methodID = methodID_getTexturedModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getPart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "root", "method_32008", "getPart", "m_142109_"), "()Lfyk;");
    }

    static jobject getPart(const jobject& obj) {
                
       const auto methodID = methodID_getPart();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupAnim", "method_2819", "setAngles", "m_6973_"), "(Lbsr;FFFFF)V");
    }

    static void setAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SHULKERBULLETENTITYMODEL_HPP