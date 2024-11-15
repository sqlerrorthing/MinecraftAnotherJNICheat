// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SPIDERENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SPIDERENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.SpiderEntityModel
 * Remapped: fxl
 */
namespace SpiderEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fxl", "net/minecraft/client/model/SpiderModel", "net/minecraft/class_611", "net/minecraft/client/render/entity/model/SpiderEntityModel", "net/minecraft/src/C_3872_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#BODY0
    [[maybe_unused]] static jobject get_field_BODY0() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BODY_0", "field_32558", "BODY0", "f_170968_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#BODY0
    [[maybe_unused]] static void set_field_BODY0(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BODY_0", "field_32558", "BODY0", "f_170968_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#BODY1
    [[maybe_unused]] static jobject get_field_BODY1() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BODY_1", "field_32559", "BODY1", "f_170969_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#BODY1
    [[maybe_unused]] static void set_field_BODY1(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BODY_1", "field_32559", "BODY1", "f_170969_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#RIGHT_MIDDLE_FRONT_LEG
    [[maybe_unused]] static jobject get_field_RIGHT_MIDDLE_FRONT_LEG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RIGHT_MIDDLE_FRONT_LEG", "field_32560", "RIGHT_MIDDLE_FRONT_LEG", "f_170970_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#RIGHT_MIDDLE_FRONT_LEG
    [[maybe_unused]] static void set_field_RIGHT_MIDDLE_FRONT_LEG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RIGHT_MIDDLE_FRONT_LEG", "field_32560", "RIGHT_MIDDLE_FRONT_LEG", "f_170970_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#LEFT_MIDDLE_FRONT_LEG
    [[maybe_unused]] static jobject get_field_LEFT_MIDDLE_FRONT_LEG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LEFT_MIDDLE_FRONT_LEG", "field_32561", "LEFT_MIDDLE_FRONT_LEG", "f_170971_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#LEFT_MIDDLE_FRONT_LEG
    [[maybe_unused]] static void set_field_LEFT_MIDDLE_FRONT_LEG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LEFT_MIDDLE_FRONT_LEG", "field_32561", "LEFT_MIDDLE_FRONT_LEG", "f_170971_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#RIGHT_MIDDLE_HIND_LEG
    [[maybe_unused]] static jobject get_field_RIGHT_MIDDLE_HIND_LEG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "RIGHT_MIDDLE_HIND_LEG", "field_32562", "RIGHT_MIDDLE_HIND_LEG", "f_170972_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#RIGHT_MIDDLE_HIND_LEG
    [[maybe_unused]] static void set_field_RIGHT_MIDDLE_HIND_LEG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "RIGHT_MIDDLE_HIND_LEG", "field_32562", "RIGHT_MIDDLE_HIND_LEG", "f_170972_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#LEFT_MIDDLE_HIND_LEG
    [[maybe_unused]] static jobject get_field_LEFT_MIDDLE_HIND_LEG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LEFT_MIDDLE_HIND_LEG", "field_32563", "LEFT_MIDDLE_HIND_LEG", "f_170973_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#LEFT_MIDDLE_HIND_LEG
    [[maybe_unused]] static void set_field_LEFT_MIDDLE_HIND_LEG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LEFT_MIDDLE_HIND_LEG", "field_32563", "LEFT_MIDDLE_HIND_LEG", "f_170973_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "root", "field_27504", "root", "f_170974_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "root", "field_27504", "root", "f_170974_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#head
    static jobject get_field_head(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "head", "field_3583", "head", "f_103852_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#head
    static void set_field_head(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "head", "field_3583", "head", "f_103852_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#rightHindLeg
    static jobject get_field_rightHindLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "rightHindLeg", "field_27505", "rightHindLeg", "f_170975_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#rightHindLeg
    static void set_field_rightHindLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "rightHindLeg", "field_27505", "rightHindLeg", "f_170975_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#leftHindLeg
    static jobject get_field_leftHindLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "leftHindLeg", "field_27506", "leftHindLeg", "f_170976_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#leftHindLeg
    static void set_field_leftHindLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "leftHindLeg", "field_27506", "leftHindLeg", "f_170976_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#rightMiddleLeg
    static jobject get_field_rightMiddleLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "rightMiddleHindLeg", "field_27507", "rightMiddleLeg", "f_170977_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#rightMiddleLeg
    static void set_field_rightMiddleLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "rightMiddleHindLeg", "field_27507", "rightMiddleLeg", "f_170977_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#leftMiddleLeg
    static jobject get_field_leftMiddleLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "leftMiddleHindLeg", "field_27508", "leftMiddleLeg", "f_170978_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#leftMiddleLeg
    static void set_field_leftMiddleLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "leftMiddleHindLeg", "field_27508", "leftMiddleLeg", "f_170978_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#rightMiddleFrontLeg
    static jobject get_field_rightMiddleFrontLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "rightMiddleFrontLeg", "field_27509", "rightMiddleFrontLeg", "f_170979_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#rightMiddleFrontLeg
    static void set_field_rightMiddleFrontLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "rightMiddleFrontLeg", "field_27509", "rightMiddleFrontLeg", "f_170979_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#leftMiddleFrontLeg
    static jobject get_field_leftMiddleFrontLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "leftMiddleFrontLeg", "field_27510", "leftMiddleFrontLeg", "f_170980_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#leftMiddleFrontLeg
    static void set_field_leftMiddleFrontLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "leftMiddleFrontLeg", "field_27510", "leftMiddleFrontLeg", "f_170980_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#rightFrontLeg
    static jobject get_field_rightFrontLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "rightFrontLeg", "field_27511", "rightFrontLeg", "f_170981_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#rightFrontLeg
    static void set_field_rightFrontLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "rightFrontLeg", "field_27511", "rightFrontLeg", "f_170981_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.SpiderEntityModel#leftFrontLeg
    static jobject get_field_leftFrontLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "leftFrontLeg", "field_27512", "leftFrontLeg", "f_170982_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.SpiderEntityModel#leftFrontLeg
    static void set_field_leftFrontLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "leftFrontLeg", "field_27512", "leftFrontLeg", "f_170982_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createSpiderBodyLayer", "method_32054", "getTexturedModelData", "m_170985_"), "()Lfyq;");
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

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_SPIDERENTITYMODEL_HPP