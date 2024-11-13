// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SALMONENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SALMONENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.SalmonEntityModel
 * Remapped: fwy
 */
namespace SalmonEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fwy", "net/minecraft/client/model/SalmonModel", "net/minecraft/class_599", "net/minecraft/client/render/entity/model/SalmonEntityModel", "net/minecraft/src/C_3861_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.model.SalmonEntityModel#BODY_FRONT
    [[maybe_unused]] static jobject get_field_BODY_FRONT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BODY_FRONT", "field_32547", "BODY_FRONT", "f_170892_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SalmonEntityModel#BODY_FRONT
    [[maybe_unused]] static void set_field_BODY_FRONT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BODY_FRONT", "field_32547", "BODY_FRONT", "f_170892_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.SalmonEntityModel#BODY_BACK
    [[maybe_unused]] static jobject get_field_BODY_BACK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BODY_BACK", "field_32548", "BODY_BACK", "f_170893_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SalmonEntityModel#BODY_BACK
    [[maybe_unused]] static void set_field_BODY_BACK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BODY_BACK", "field_32548", "BODY_BACK", "f_170893_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SalmonEntityModel#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "root", "field_27494", "root", "f_170894_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SalmonEntityModel#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "root", "field_27494", "root", "f_170894_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SalmonEntityModel#tail
    static jobject get_field_tail(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "bodyBack", "field_3548", "tail", "f_103633_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SalmonEntityModel#tail
    static void set_field_tail(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "bodyBack", "field_3548", "tail", "f_103633_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createBodyLayer", "method_32036", "getTexturedModelData", "m_170897_"), "()Lfyq;");
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

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SALMONENTITYMODEL_HPP