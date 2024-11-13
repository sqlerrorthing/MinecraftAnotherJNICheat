// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_STRIDERENTITYMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_STRIDERENTITYMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.model.StriderEntityModel
 * Remapped: fxn
 */
namespace StriderEntityModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fxn", "net/minecraft/client/model/StriderModel", "net/minecraft/class_4997", "net/minecraft/client/render/entity/model/StriderEntityModel", "net/minecraft/src/C_3874_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#RIGHT_BOTTOM_BRISTLE
    [[maybe_unused]] static jobject get_field_RIGHT_BOTTOM_BRISTLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RIGHT_BOTTOM_BRISTLE", "field_32564", "RIGHT_BOTTOM_BRISTLE", "f_170997_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#RIGHT_BOTTOM_BRISTLE
    [[maybe_unused]] static void set_field_RIGHT_BOTTOM_BRISTLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RIGHT_BOTTOM_BRISTLE", "field_32564", "RIGHT_BOTTOM_BRISTLE", "f_170997_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#RIGHT_MIDDLE_BRISTLE
    [[maybe_unused]] static jobject get_field_RIGHT_MIDDLE_BRISTLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RIGHT_MIDDLE_BRISTLE", "field_32565", "RIGHT_MIDDLE_BRISTLE", "f_170998_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#RIGHT_MIDDLE_BRISTLE
    [[maybe_unused]] static void set_field_RIGHT_MIDDLE_BRISTLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RIGHT_MIDDLE_BRISTLE", "field_32565", "RIGHT_MIDDLE_BRISTLE", "f_170998_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#RIGHT_TOP_BRISTLE
    [[maybe_unused]] static jobject get_field_RIGHT_TOP_BRISTLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RIGHT_TOP_BRISTLE", "field_32566", "RIGHT_TOP_BRISTLE", "f_170999_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#RIGHT_TOP_BRISTLE
    [[maybe_unused]] static void set_field_RIGHT_TOP_BRISTLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "RIGHT_TOP_BRISTLE", "field_32566", "RIGHT_TOP_BRISTLE", "f_170999_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#LEFT_TOP_BRISTLE
    [[maybe_unused]] static jobject get_field_LEFT_TOP_BRISTLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LEFT_TOP_BRISTLE", "field_32567", "LEFT_TOP_BRISTLE", "f_171000_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#LEFT_TOP_BRISTLE
    [[maybe_unused]] static void set_field_LEFT_TOP_BRISTLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LEFT_TOP_BRISTLE", "field_32567", "LEFT_TOP_BRISTLE", "f_171000_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#LEFT_MIDDLE_BRISTLE
    [[maybe_unused]] static jobject get_field_LEFT_MIDDLE_BRISTLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LEFT_MIDDLE_BRISTLE", "field_32568", "LEFT_MIDDLE_BRISTLE", "f_171001_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#LEFT_MIDDLE_BRISTLE
    [[maybe_unused]] static void set_field_LEFT_MIDDLE_BRISTLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "LEFT_MIDDLE_BRISTLE", "field_32568", "LEFT_MIDDLE_BRISTLE", "f_171001_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#LEFT_BOTTOM_BRISTLE
    [[maybe_unused]] static jobject get_field_LEFT_BOTTOM_BRISTLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LEFT_BOTTOM_BRISTLE", "field_32569", "LEFT_BOTTOM_BRISTLE", "f_171002_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#LEFT_BOTTOM_BRISTLE
    [[maybe_unused]] static void set_field_LEFT_BOTTOM_BRISTLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LEFT_BOTTOM_BRISTLE", "field_32569", "LEFT_BOTTOM_BRISTLE", "f_171002_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "root", "field_27514", "root", "f_171003_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "root", "field_27514", "root", "f_171003_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#rightLeg
    static jobject get_field_rightLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "rightLeg", "field_23353", "rightLeg", "f_103884_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#rightLeg
    static void set_field_rightLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "rightLeg", "field_23353", "rightLeg", "f_103884_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#leftLeg
    static jobject get_field_leftLeg(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "leftLeg", "field_23354", "leftLeg", "f_103885_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#leftLeg
    static void set_field_leftLeg(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "leftLeg", "field_23354", "leftLeg", "f_103885_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#body
    static jobject get_field_body(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "body", "field_23355", "body", "f_103886_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#body
    static void set_field_body(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "body", "field_23355", "body", "f_103886_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#rightBottomBristle
    static jobject get_field_rightBottomBristle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "rightBottomBristle", "field_27515", "rightBottomBristle", "f_171004_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#rightBottomBristle
    static void set_field_rightBottomBristle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "rightBottomBristle", "field_27515", "rightBottomBristle", "f_171004_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#rightMiddleBristle
    static jobject get_field_rightMiddleBristle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "rightMiddleBristle", "field_27516", "rightMiddleBristle", "f_171005_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#rightMiddleBristle
    static void set_field_rightMiddleBristle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "rightMiddleBristle", "field_27516", "rightMiddleBristle", "f_171005_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#rightTopBristle
    static jobject get_field_rightTopBristle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "rightTopBristle", "field_27517", "rightTopBristle", "f_171006_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#rightTopBristle
    static void set_field_rightTopBristle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "rightTopBristle", "field_27517", "rightTopBristle", "f_171006_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#leftTopBristle
    static jobject get_field_leftTopBristle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "leftTopBristle", "field_27518", "leftTopBristle", "f_171007_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#leftTopBristle
    static void set_field_leftTopBristle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "leftTopBristle", "field_27518", "leftTopBristle", "f_171007_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#leftMiddleBristle
    static jobject get_field_leftMiddleBristle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "leftMiddleBristle", "field_27519", "leftMiddleBristle", "f_171008_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#leftMiddleBristle
    static void set_field_leftMiddleBristle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "leftMiddleBristle", "field_27519", "leftMiddleBristle", "f_171008_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.model.StriderEntityModel#leftBottomBristle
    static jobject get_field_leftBottomBristle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "leftBottomBristle", "field_27520", "leftBottomBristle", "f_171009_"), "Lfyk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.model.StriderEntityModel#leftBottomBristle
    static void set_field_leftBottomBristle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "leftBottomBristle", "field_27520", "leftBottomBristle", "f_171009_"), "Lfyk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTexturedModelData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createBodyLayer", "method_32058", "getTexturedModelData", "m_171012_"), "()Lfyq;");
    }

    static jobject getTexturedModelData() {
       const auto clazz = self();
       const auto methodID = methodID_getTexturedModelData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_setAngles() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupAnim", "method_26414", "setAngles", "m_6973_"), "(Lckq;FFFFF)V");
    }

    static void setAngles(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setAngles();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getPart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "root", "method_32008", "getPart", "m_142109_"), "()Lfyk;");
    }

    static jobject getPart(const jobject& obj) {
                
       const auto methodID = methodID_getPart();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_MODEL_STRIDERENTITYMODEL_HPP