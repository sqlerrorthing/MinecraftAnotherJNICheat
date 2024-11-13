// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_AXOLOTLENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_AXOLOTLENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.AxolotlEntityModel
 * Remapped: fum
 */
namespace AxolotlEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fum", "net/minecraft/client/model/AxolotlModel", "net/minecraft/class_5772", "net/minecraft/client/render/entity/model/AxolotlEntityModel", "net/minecraft/src/C_141647_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.entity.model.AxolotlEntityModel#MOVING_IN_WATER_LEG_PITCH
    [[maybe_unused]] static jfloat get_field_MOVING_IN_WATER_LEG_PITCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SWIMMING_LEG_XROT", "field_32449", "MOVING_IN_WATER_LEG_PITCH", "f_170358_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.model.AxolotlEntityModel#MOVING_IN_WATER_LEG_PITCH
    [[maybe_unused]] static void set_field_MOVING_IN_WATER_LEG_PITCH(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SWIMMING_LEG_XROT", "field_32449", "MOVING_IN_WATER_LEG_PITCH", "f_170358_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#tail
    static jobject get_field_tail(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tail", "field_28373", "tail", "f_170359_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#tail
    static void set_field_tail(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tail", "field_28373", "tail", "f_170359_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#leftHindLeg
    static jobject get_field_leftHindLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "leftHindLeg", "field_28374", "leftHindLeg", "f_170360_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#leftHindLeg
    static void set_field_leftHindLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "leftHindLeg", "field_28374", "leftHindLeg", "f_170360_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#rightHindLeg
    static jobject get_field_rightHindLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "rightHindLeg", "field_28375", "rightHindLeg", "f_170361_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#rightHindLeg
    static void set_field_rightHindLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "rightHindLeg", "field_28375", "rightHindLeg", "f_170361_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#leftFrontLeg
    static jobject get_field_leftFrontLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "leftFrontLeg", "field_28376", "leftFrontLeg", "f_170362_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#leftFrontLeg
    static void set_field_leftFrontLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "leftFrontLeg", "field_28376", "leftFrontLeg", "f_170362_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#rightFrontLeg
    static jobject get_field_rightFrontLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "rightFrontLeg", "field_28377", "rightFrontLeg", "f_170363_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#rightFrontLeg
    static void set_field_rightFrontLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "rightFrontLeg", "field_28377", "rightFrontLeg", "f_170363_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#body
    static jobject get_field_body(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "body", "field_28378", "body", "f_170364_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#body
    static void set_field_body(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "body", "field_28378", "body", "f_170364_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#head
    static jobject get_field_head(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "head", "field_28379", "head", "f_170365_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#head
    static void set_field_head(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "head", "field_28379", "head", "f_170365_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#topGills
    static jobject get_field_topGills(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "topGills", "field_28380", "topGills", "f_170366_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#topGills
    static void set_field_topGills(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "topGills", "field_28380", "topGills", "f_170366_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#leftGills
    static jobject get_field_leftGills(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "leftGills", "field_28381", "leftGills", "f_170367_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#leftGills
    static void set_field_leftGills(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "leftGills", "field_28381", "leftGills", "f_170367_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.AxolotlEntityModel#rightGills
    static jobject get_field_rightGills(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "rightGills", "field_28382", "rightGills", "f_170368_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.AxolotlEntityModel#rightGills
    static void set_field_rightGills(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "rightGills", "field_28382", "rightGills", "f_170368_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "createBodyLayer", "method_33296", "getTexturedModelData", "m_170417_"), "()Lfyq;");
    }

    static jobject getTexturedModelData() {
       const auto clazz = self();
       const auto methodID = methodID_getTexturedModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_getHeadParts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "headParts", "method_22946", "getHeadParts", "m_5607_"), "()Ljava/lang/Iterable;");
    }

    static jobject getHeadParts(const jobject& obj) {
                
       const auto methodID = methodID_getHeadParts();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBodyParts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "bodyParts", "method_22948", "getBodyParts", "m_5608_"), "()Ljava/lang/Iterable;");
    }

    static jobject getBodyParts(const jobject& obj) {
                
       const auto methodID = methodID_getBodyParts();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupAnim", "method_33293", "setAngles", "m_6973_"), "(Lcgq;FFFFF)V");
    }

    static void setAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_updateAnglesCache() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveAnimationValues", "method_37093", "updateAnglesCache", "m_170388_"), "(Lcgq;)V");
    }

    static void updateAnglesCache(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateAnglesCache();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRotationVector", "method_37094", "getAngles", "m_253263_"), "(Lfyk;)Lorg/joml/Vector3f;");
    }

    static jobject getAngles(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getAngles();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__setAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setRotationFromVector", "method_37096", "setAngles", "m_252862_"), "(Lfyk;Lorg/joml/Vector3f;)V");
    }

    static void _setAngles(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_resetAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupInitialAnimationValues", "method_33292", "resetAngles", "m_170390_"), "(Lcgq;FF)V");
    }

    static void resetAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_resetAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_lerpAngleDegrees() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lerpTo", "method_37091", "lerpAngleDegrees", "m_170374_"), "(FF)F");
    }

    static jfloat lerpAngleDegrees(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_lerpAngleDegrees();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__lerpAngleDegrees() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lerpTo", "method_37092", "lerpAngleDegrees", "m_170377_"), "(FFF)F");
    }

    static jfloat _lerpAngleDegrees(const jobject& obj, const jfloat& arg0, const jfloat& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID__lerpAngleDegrees();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID___setAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lerpPart", "method_37095", "setAngles", "m_170403_"), "(Lfyk;FFF)V");
    }

    static void __setAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID___setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_setStandingOnGroundAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setupLayStillOnGroundAnimation", "method_33291", "setStandingOnGroundAngles", "m_170414_"), "(FF)V");
    }

    static void setStandingOnGroundAngles(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_setStandingOnGroundAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setMovingOnGroundAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setupGroundCrawlingAnimation", "method_33294", "setMovingOnGroundAngles", "m_170418_"), "(FF)V");
    }

    static void setMovingOnGroundAngles(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_setMovingOnGroundAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setStandingInWaterAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupWaterHoveringAnimation", "method_33297", "setStandingInWaterAngles", "m_170372_"), "(F)V");
    }

    static void setStandingInWaterAngles(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setStandingInWaterAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setMovingInWaterAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "setupSwimmingAnimation", "method_33295", "setMovingInWaterAngles", "m_170422_"), "(FF)V");
    }

    static void setMovingInWaterAngles(const jobject& obj, const jfloat& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_setMovingInWaterAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setPlayingDeadAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setupPlayDeadAnimation", "method_33298", "setPlayingDeadAngles", "m_170412_"), "(F)V");
    }

    static void setPlayingDeadAngles(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setPlayingDeadAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyLegAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "applyMirrorLegRotations", "method_33299", "copyLegAngles", "m_170421_"), "()V");
    }

    static void copyLegAngles(const jobject& obj) {
                
       const auto methodID = methodID_copyLegAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_AXOLOTLENTITYMODEL_HPP