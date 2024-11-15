// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELROTATION_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELROTATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelRotation
 * Remapped: gfz
 */
namespace ModelRotation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gfz", "net/minecraft/client/renderer/block/model/BlockElementRotation", "net/minecraft/class_789", "net/minecraft/client/render/model/json/ModelRotation", "net/minecraft/src/C_4202_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.model.json.ModelRotation#origin
    static jobject get_field_origin(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "origin", "comp_1118", "origin", "f_111378_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelRotation#origin
    static void set_field_origin(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "origin", "comp_1118", "origin", "f_111378_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.json.ModelRotation#axis
    static jobject get_field_axis(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "axis", "comp_1119", "axis", "f_111379_"), "Lji$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelRotation#axis
    static void set_field_axis(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "axis", "comp_1119", "axis", "f_111379_"), "Lji$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.json.ModelRotation#angle
    static jfloat get_field_angle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "angle", "comp_1120", "angle", "f_111380_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelRotation#angle
    static void set_field_angle(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "angle", "comp_1120", "angle", "f_111380_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.json.ModelRotation#rescale
    static jboolean get_field_rescale(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "rescale", "comp_1121", "rescale", "f_111381_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelRotation#rescale
    static void set_field_rescale(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "rescale", "comp_1121", "rescale", "f_111381_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID__origin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "origin", "comp_1118", "origin", "f_111378_"), "()Lorg/joml/Vector3f;");
    }

    static jobject _origin(const jobject& obj) {
                
       const auto methodID = methodID__origin();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__axis() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "axis", "comp_1119", "axis", "f_111379_"), "()Lji$a;");
    }

    static jobject _axis(const jobject& obj) {
                
       const auto methodID = methodID__axis();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__angle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "angle", "comp_1120", "angle", "f_111380_"), "()F");
    }

    static jfloat _angle(const jobject& obj) {
                
       const auto methodID = methodID__angle();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__rescale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "rescale", "comp_1121", "rescale", "f_111381_"), "()Z");
    }

    static jboolean _rescale(const jobject& obj) {
                
       const auto methodID = methodID__rescale();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELROTATION_HPP