// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_ELDERGUARDIANENTITYRENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_ELDERGUARDIANENTITYRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.ElderGuardianEntityRenderer
 * Remapped: gkc
 */
namespace ElderGuardianEntityRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gkc", "net/minecraft/client/renderer/entity/ElderGuardianRenderer", "net/minecraft/class_893", "net/minecraft/client/render/entity/ElderGuardianEntityRenderer", "net/minecraft/src/C_4324_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.entity.ElderGuardianEntityRenderer#TEXTURE
    [[maybe_unused]] static jobject get_field_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GUARDIAN_ELDER_LOCATION", "field_4665", "TEXTURE", "f_114116_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.entity.ElderGuardianEntityRenderer#TEXTURE
    [[maybe_unused]] static void set_field_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "GUARDIAN_ELDER_LOCATION", "field_4665", "TEXTURE", "f_114116_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_scale() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scale", "method_3910", "scale", "m_7546_"), "(Lcjz;Lfbi;F)V");
    }

    static void scale(const jobject& obj, const jobject& arg0, const jobject& arg1, const jfloat& arg2) {
                
       const auto methodID = methodID_scale();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
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

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_ELDERGUARDIANENTITYRENDERER_HPP