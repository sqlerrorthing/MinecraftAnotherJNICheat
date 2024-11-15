// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_TROPICALFISHENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_TROPICALFISHENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.TropicalFishEntityRenderer
 * Remapped: gna
 */
namespace TropicalFishEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gna", "net/minecraft/client/renderer/entity/TropicalFishRenderer", "net/minecraft/class_959", "net/minecraft/client/render/entity/TropicalFishEntityRenderer", "net/minecraft/src/C_4402_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.entity.TropicalFishEntityRenderer#smallModel
    static jobject get_field_smallModel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "modelA", "field_4800", "smallModel", "f_116183_"), "Lfvc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.TropicalFishEntityRenderer#smallModel
    static void set_field_smallModel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "modelA", "field_4800", "smallModel", "f_116183_"), "Lfvc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.TropicalFishEntityRenderer#largeModel
    static jobject get_field_largeModel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "modelB", "field_4799", "largeModel", "f_116184_"), "Lfvc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.TropicalFishEntityRenderer#largeModel
    static void set_field_largeModel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "modelB", "field_4799", "largeModel", "f_116184_"), "Lfvc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.TropicalFishEntityRenderer#A_TEXTURE
    [[maybe_unused]] static jobject get_field_A_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "MODEL_A_TEXTURE", "field_41643", "A_TEXTURE", "f_262282_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.TropicalFishEntityRenderer#A_TEXTURE
    [[maybe_unused]] static void set_field_A_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "MODEL_A_TEXTURE", "field_41643", "A_TEXTURE", "f_262282_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.TropicalFishEntityRenderer#B_TEXTURE
    [[maybe_unused]] static jobject get_field_B_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "MODEL_B_TEXTURE", "field_41644", "B_TEXTURE", "f_262236_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.TropicalFishEntityRenderer#B_TEXTURE
    [[maybe_unused]] static void set_field_B_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "MODEL_B_TEXTURE", "field_41644", "B_TEXTURE", "f_262236_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_4141", "getTexture", "m_5478_"), "(Lcge;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_4140", "render", "m_7392_"), "(Lcge;FFLfbi;Lgez;I)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_setupTransforms() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupRotations", "method_4142", "setupTransforms", "m_7523_"), "(Lcge;Lfbi;FFFF)V");
    }

    static void setupTransforms(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_setupTransforms();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_TROPICALFISHENTITYRENDERER_HPP