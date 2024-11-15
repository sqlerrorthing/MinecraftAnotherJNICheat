// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ARMADILLOENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ARMADILLOENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.ArmadilloEntityModel
 * Remapped: fui
 */
namespace ArmadilloEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fui", "net/minecraft/client/model/ArmadilloModel", "net/minecraft/class_9082", "net/minecraft/client/render/entity/model/ArmadilloEntityModel", "net/minecraft/src/C_313810_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47858
    [[maybe_unused]] static jfloat get_field_field_47858() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BABY_Y_OFFSET", "field_47858", "field_47858", "f_316750_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47858
    [[maybe_unused]] static void set_field_field_47858(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BABY_Y_OFFSET", "field_47858", "field_47858", "f_316750_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47860
    [[maybe_unused]] static jfloat get_field_field_47860() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_DOWN_HEAD_ROTATION_EXTENT", "field_47860", "field_47860", "f_314028_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47860
    [[maybe_unused]] static void set_field_field_47860(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_DOWN_HEAD_ROTATION_EXTENT", "field_47860", "field_47860", "f_314028_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47861
    [[maybe_unused]] static jfloat get_field_field_47861() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_UP_HEAD_ROTATION_EXTENT", "field_47861", "field_47861", "f_315172_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47861
    [[maybe_unused]] static void set_field_field_47861(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_UP_HEAD_ROTATION_EXTENT", "field_47861", "field_47861", "f_315172_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47862
    [[maybe_unused]] static jfloat get_field_field_47862() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_WALK_ANIMATION_SPEED", "field_47862", "field_47862", "f_315679_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47862
    [[maybe_unused]] static void set_field_field_47862(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_WALK_ANIMATION_SPEED", "field_47862", "field_47862", "f_315679_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47863
    [[maybe_unused]] static jfloat get_field_field_47863() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "WALK_ANIMATION_SCALE_FACTOR", "field_47863", "field_47863", "f_315435_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#field_47863
    [[maybe_unused]] static void set_field_field_47863(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "WALK_ANIMATION_SCALE_FACTOR", "field_47863", "field_47863", "f_315435_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#HEAD_CUBE
    [[maybe_unused]] static jobject get_field_HEAD_CUBE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "HEAD_CUBE", "field_47864", "HEAD_CUBE", "f_315651_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#HEAD_CUBE
    [[maybe_unused]] static void set_field_HEAD_CUBE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "HEAD_CUBE", "field_47864", "HEAD_CUBE", "f_315651_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#RIGHT_EAR_CUBE
    [[maybe_unused]] static jobject get_field_RIGHT_EAR_CUBE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "RIGHT_EAR_CUBE", "field_47865", "RIGHT_EAR_CUBE", "f_315194_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#RIGHT_EAR_CUBE
    [[maybe_unused]] static void set_field_RIGHT_EAR_CUBE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "RIGHT_EAR_CUBE", "field_47865", "RIGHT_EAR_CUBE", "f_315194_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#LEFT_EAR_CUBE
    [[maybe_unused]] static jobject get_field_LEFT_EAR_CUBE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "LEFT_EAR_CUBE", "field_47866", "LEFT_EAR_CUBE", "f_314191_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#LEFT_EAR_CUBE
    [[maybe_unused]] static void set_field_LEFT_EAR_CUBE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "LEFT_EAR_CUBE", "field_47866", "LEFT_EAR_CUBE", "f_314191_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "root", "field_47867", "root", "f_314538_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "root", "field_47867", "root", "f_314538_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#body
    static jobject get_field_body(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "body", "field_47868", "body", "f_314464_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#body
    static void set_field_body(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "body", "field_47868", "body", "f_314464_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#rightHindLeg
    static jobject get_field_rightHindLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "rightHindLeg", "field_47869", "rightHindLeg", "f_314828_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#rightHindLeg
    static void set_field_rightHindLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "rightHindLeg", "field_47869", "rightHindLeg", "f_314828_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#leftHindLeg
    static jobject get_field_leftHindLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "leftHindLeg", "field_47870", "leftHindLeg", "f_314455_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#leftHindLeg
    static void set_field_leftHindLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "leftHindLeg", "field_47870", "leftHindLeg", "f_314455_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#cube
    static jobject get_field_cube(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "cube", "field_47871", "cube", "f_314513_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#cube
    static void set_field_cube(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "cube", "field_47871", "cube", "f_314513_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#head
    static jobject get_field_head(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "head", "field_47872", "head", "f_316544_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#head
    static void set_field_head(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "head", "field_47872", "head", "f_316544_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#tail
    static jobject get_field_tail(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "tail", "field_47873", "tail", "f_316639_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.ArmadilloEntityModel#tail
    static void set_field_tail(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "tail", "field_47873", "tail", "f_316639_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createBodyLayer", "method_55818", "getTexturedModelData", "m_320313_"), "()Lfyq;");
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupAnim", "method_55817", "setAngles", "m_6973_"), "(Lcgn;FFFFF)V");
    }

    static void setAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_ARMADILLOENTITYMODEL_HPP