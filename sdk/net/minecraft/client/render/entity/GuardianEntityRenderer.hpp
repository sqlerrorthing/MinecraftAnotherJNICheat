// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_GUARDIANENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_GUARDIANENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.GuardianEntityRenderer
 * Remapped: gkx
 */
namespace GuardianEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gkx", "net/minecraft/client/renderer/entity/GuardianRenderer", "net/minecraft/class_907", "net/minecraft/client/render/entity/GuardianEntityRenderer", "net/minecraft/src/C_4343_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.GuardianEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GUARDIAN_LOCATION", "field_4708", "TEXTURE", "f_114778_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.GuardianEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GUARDIAN_LOCATION", "field_4708", "TEXTURE", "f_114778_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.GuardianEntityRenderer#EXPLOSION_BEAM_TEXTURE
    [[maybe_unused]] static jobject get_field_EXPLOSION_BEAM_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GUARDIAN_BEAM_LOCATION", "field_4709", "EXPLOSION_BEAM_TEXTURE", "f_114779_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.GuardianEntityRenderer#EXPLOSION_BEAM_TEXTURE
    [[maybe_unused]] static void set_field_EXPLOSION_BEAM_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GUARDIAN_BEAM_LOCATION", "field_4709", "EXPLOSION_BEAM_TEXTURE", "f_114779_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.render.entity.GuardianEntityRenderer#LAYER
    [[maybe_unused]] static jobject get_field_LAYER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "BEAM_RENDER_TYPE", "field_21743", "LAYER", "f_114780_"), "Lgfh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.GuardianEntityRenderer#LAYER
    [[maybe_unused]] static void set_field_LAYER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "BEAM_RENDER_TYPE", "field_21743", "LAYER", "f_114780_"), "Lgfh;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_shouldRender() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldRender", "method_3978", "shouldRender", "m_5523_"), "(Lcjz;Lgie;DDD)Z");
    }

    static jboolean shouldRender(const jobject& obj, const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4) {
                
       const auto methodID = methodID_shouldRender();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_fromLerpedPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPosition", "method_3979", "fromLerpedPosition", "m_114802_"), "(Lbtn;DF)Lexc;");
    }

    static jobject fromLerpedPosition(const jobject& obj, const jobject& arg0, const jdouble& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_fromLerpedPosition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_3977", "render", "m_7392_"), "(Lcjz;FFLfbi;Lgez;I)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jobject& arg3, const jobject& arg4, const jint& arg5) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_vertex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "vertex", "method_23173", "vertex", "m_252738_"), "(Lfbm;Lfbi$a;FFFIIIFF)V");
    }

    static void vertex(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jfloat& arg8, const jfloat& arg9) {
       const auto clazz = self();
       const auto methodID = methodID_vertex();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTextureLocation", "method_3976", "getTexture", "m_5478_"), "(Lcjz;)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_GUARDIANENTITYRENDERER_HPP