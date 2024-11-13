// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_WITHERENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_WITHERENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.WitherEntityModel
 * Remapped: fya
 */
namespace WitherEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fya", "net/minecraft/client/model/WitherBossModel", "net/minecraft/class_621", "net/minecraft/client/render/entity/model/WitherEntityModel", "net/minecraft/src/C_3884_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#RIBCAGE
    [[maybe_unused]] static jobject get_field_RIBCAGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RIBCAGE", "field_32571", "RIBCAGE", "f_171057_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#RIBCAGE
    [[maybe_unused]] static void set_field_RIBCAGE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RIBCAGE", "field_32571", "RIBCAGE", "f_171057_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#CENTER_HEAD
    [[maybe_unused]] static jobject get_field_CENTER_HEAD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CENTER_HEAD", "field_32572", "CENTER_HEAD", "f_171058_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#CENTER_HEAD
    [[maybe_unused]] static void set_field_CENTER_HEAD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CENTER_HEAD", "field_32572", "CENTER_HEAD", "f_171058_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#RIGHT_HEAD
    [[maybe_unused]] static jobject get_field_RIGHT_HEAD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RIGHT_HEAD", "field_32573", "RIGHT_HEAD", "f_171059_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#RIGHT_HEAD
    [[maybe_unused]] static void set_field_RIGHT_HEAD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RIGHT_HEAD", "field_32573", "RIGHT_HEAD", "f_171059_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#LEFT_HEAD
    [[maybe_unused]] static jobject get_field_LEFT_HEAD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LEFT_HEAD", "field_32574", "LEFT_HEAD", "f_171060_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#LEFT_HEAD
    [[maybe_unused]] static void set_field_LEFT_HEAD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LEFT_HEAD", "field_32574", "LEFT_HEAD", "f_171060_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#RIBCAGE_PITCH_OFFSET
    [[maybe_unused]] static jfloat get_field_RIBCAGE_PITCH_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "RIBCAGE_X_ROT_OFFSET", "field_32575", "RIBCAGE_PITCH_OFFSET", "f_171061_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#RIBCAGE_PITCH_OFFSET
    [[maybe_unused]] static void set_field_RIBCAGE_PITCH_OFFSET(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "RIBCAGE_X_ROT_OFFSET", "field_32575", "RIBCAGE_PITCH_OFFSET", "f_171061_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#TAIL_PITCH_OFFSET
    [[maybe_unused]] static jfloat get_field_TAIL_PITCH_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TAIL_X_ROT_OFFSET", "field_32576", "TAIL_PITCH_OFFSET", "f_171062_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#TAIL_PITCH_OFFSET
    [[maybe_unused]] static void set_field_TAIL_PITCH_OFFSET(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "TAIL_X_ROT_OFFSET", "field_32576", "TAIL_PITCH_OFFSET", "f_171062_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.WitherEntityModel#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "root", "field_27532", "root", "f_171063_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "root", "field_27532", "root", "f_171063_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.WitherEntityModel#centerHead
    static jobject get_field_centerHead(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "centerHead", "field_27533", "centerHead", "f_171064_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#centerHead
    static void set_field_centerHead(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "centerHead", "field_27533", "centerHead", "f_171064_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.WitherEntityModel#rightHead
    static jobject get_field_rightHead(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "rightHead", "field_27534", "rightHead", "f_171065_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#rightHead
    static void set_field_rightHead(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "rightHead", "field_27534", "rightHead", "f_171065_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.WitherEntityModel#leftHead
    static jobject get_field_leftHead(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "leftHead", "field_27535", "leftHead", "f_171066_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#leftHead
    static void set_field_leftHead(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "leftHead", "field_27535", "leftHead", "f_171066_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.WitherEntityModel#ribcage
    static jobject get_field_ribcage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "ribcage", "field_27536", "ribcage", "f_171067_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#ribcage
    static void set_field_ribcage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "ribcage", "field_27536", "ribcage", "f_171067_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.WitherEntityModel#tail
    static jobject get_field_tail(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "tail", "field_27537", "tail", "f_171068_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.WitherEntityModel#tail
    static void set_field_tail(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "tail", "field_27537", "tail", "f_171068_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createBodyLayer", "method_32067", "getTexturedModelData", "m_171075_"), "(Lfyo;)Lfyq;");
    }

    static jobject getTexturedModelData(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getTexturedModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupAnim", "method_17130", "setAngles", "m_6973_"), "(Lciu;FFFFF)V");
    }

    static void setAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_animateModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "prepareMobModel", "method_17128", "animateModel", "m_6839_"), "(Lciu;FFF)V");
    }

    static void animateModel(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_animateModel();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_rotateHead() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setupHeadRotation", "method_32066", "rotateHead", "m_171071_"), "(Lciu;Lfyk;I)V");
    }

    static void rotateHead(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_rotateHead();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_WITHERENTITYMODEL_HPP