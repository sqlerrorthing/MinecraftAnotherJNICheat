// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELTRANSFORMATIONMODE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELTRANSFORMATIONMODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelTransformationMode
 * Remapped: cun
 */
namespace ModelTransformationMode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cun", "net/minecraft/world/item/ItemDisplayContext", "net/minecraft/class_811", "net/minecraft/client/render/model/json/ModelTransformationMode", "net/minecraft/src/C_268388_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#NONE
    [[maybe_unused]] static jobject get_field_NONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_4315", "NONE", "NONE"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#NONE
    [[maybe_unused]] static void set_field_NONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NONE", "field_4315", "NONE", "NONE"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#THIRD_PERSON_LEFT_HAND
    [[maybe_unused]] static jobject get_field_THIRD_PERSON_LEFT_HAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "THIRD_PERSON_LEFT_HAND", "field_4323", "THIRD_PERSON_LEFT_HAND", "THIRD_PERSON_LEFT_HAND"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#THIRD_PERSON_LEFT_HAND
    [[maybe_unused]] static void set_field_THIRD_PERSON_LEFT_HAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "THIRD_PERSON_LEFT_HAND", "field_4323", "THIRD_PERSON_LEFT_HAND", "THIRD_PERSON_LEFT_HAND"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#THIRD_PERSON_RIGHT_HAND
    [[maybe_unused]] static jobject get_field_THIRD_PERSON_RIGHT_HAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "THIRD_PERSON_RIGHT_HAND", "field_4320", "THIRD_PERSON_RIGHT_HAND", "THIRD_PERSON_RIGHT_HAND"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#THIRD_PERSON_RIGHT_HAND
    [[maybe_unused]] static void set_field_THIRD_PERSON_RIGHT_HAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "THIRD_PERSON_RIGHT_HAND", "field_4320", "THIRD_PERSON_RIGHT_HAND", "THIRD_PERSON_RIGHT_HAND"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#FIRST_PERSON_LEFT_HAND
    [[maybe_unused]] static jobject get_field_FIRST_PERSON_LEFT_HAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FIRST_PERSON_LEFT_HAND", "field_4321", "FIRST_PERSON_LEFT_HAND", "FIRST_PERSON_LEFT_HAND"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#FIRST_PERSON_LEFT_HAND
    [[maybe_unused]] static void set_field_FIRST_PERSON_LEFT_HAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FIRST_PERSON_LEFT_HAND", "field_4321", "FIRST_PERSON_LEFT_HAND", "FIRST_PERSON_LEFT_HAND"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#FIRST_PERSON_RIGHT_HAND
    [[maybe_unused]] static jobject get_field_FIRST_PERSON_RIGHT_HAND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "FIRST_PERSON_RIGHT_HAND", "field_4322", "FIRST_PERSON_RIGHT_HAND", "FIRST_PERSON_RIGHT_HAND"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#FIRST_PERSON_RIGHT_HAND
    [[maybe_unused]] static void set_field_FIRST_PERSON_RIGHT_HAND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "FIRST_PERSON_RIGHT_HAND", "field_4322", "FIRST_PERSON_RIGHT_HAND", "FIRST_PERSON_RIGHT_HAND"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#HEAD
    [[maybe_unused]] static jobject get_field_HEAD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HEAD", "field_4316", "HEAD", "HEAD"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#HEAD
    [[maybe_unused]] static void set_field_HEAD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HEAD", "field_4316", "HEAD", "HEAD"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#GUI
    [[maybe_unused]] static jobject get_field_GUI() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GUI", "field_4317", "GUI", "GUI"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#GUI
    [[maybe_unused]] static void set_field_GUI(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GUI", "field_4317", "GUI", "GUI"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#GROUND
    [[maybe_unused]] static jobject get_field_GROUND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "GROUND", "field_4318", "GROUND", "GROUND"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#GROUND
    [[maybe_unused]] static void set_field_GROUND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "GROUND", "field_4318", "GROUND", "GROUND"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#FIXED
    [[maybe_unused]] static jobject get_field_FIXED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FIXED", "field_4319", "FIXED", "FIXED"), "Lcun;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#FIXED
    [[maybe_unused]] static void set_field_FIXED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FIXED", "field_4319", "FIXED", "FIXED"), "Lcun;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "CODEC", "field_42468", "CODEC", "f_268458_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "CODEC", "field_42468", "CODEC", "f_268458_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#FROM_INDEX
    [[maybe_unused]] static jobject get_field_FROM_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BY_ID", "field_42469", "FROM_INDEX", "f_268648_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelTransformationMode#FROM_INDEX
    [[maybe_unused]] static void set_field_FROM_INDEX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BY_ID", "field_42469", "FROM_INDEX", "f_268648_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.json.ModelTransformationMode#index
    static jbyte get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "id", "field_42470", "index", "f_268735_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelTransformationMode#index
    static void set_field_index(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "id", "field_42470", "index", "f_268735_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.json.ModelTransformationMode#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "name", "field_42471", "name", "f_268747_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelTransformationMode#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "name", "field_42471", "name", "f_268747_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcun;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcun;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_48961", "getIndex", "m_269462_"), "()B");
    }

    static jbyte getIndex(const jobject& obj) {
                
       const auto methodID = methodID_getIndex();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
    static jmethodID methodID_isFirstPerson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "firstPerson", "method_29998", "isFirstPerson", "m_269069_"), "()Z");
    }

    static jboolean isFirstPerson(const jobject& obj) {
                
       const auto methodID = methodID_isFirstPerson();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELTRANSFORMATIONMODE_HPP