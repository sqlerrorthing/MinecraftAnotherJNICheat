// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELELEMENTTEXTURE_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELELEMENTTEXTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelElementTexture
 * Remapped: gga
 */
namespace ModelElementTexture {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gga", "net/minecraft/client/renderer/block/model/BlockFaceUV", "net/minecraft/class_787", "net/minecraft/client/render/model/json/ModelElementTexture", "net/minecraft/src/C_4203_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.render.model.json.ModelElementTexture#uvs
    static jfloat get_field_uvs(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "uvs", "field_4235", "uvs", "f_111387_"), "[F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelElementTexture#uvs
    static void set_field_uvs(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "uvs", "field_4235", "uvs", "f_111387_"), "[F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.model.json.ModelElementTexture#rotation
    static jint get_field_rotation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "rotation", "field_4234", "rotation", "f_111388_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.ModelElementTexture#rotation
    static void set_field_rotation(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "rotation", "field_4234", "rotation", "f_111388_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getU() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getU", "method_3415", "getU", "m_111392_"), "(I)F");
    }

    static jfloat getU(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getU();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getV() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getV", "method_3416", "getV", "m_111396_"), "(I)F");
    }

    static jfloat getV(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getV();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRotatedUVIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getShiftedIndex", "method_3413", "getRotatedUVIndex", "m_111400_"), "(I)I");
    }

    static jint getRotatedUVIndex(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getRotatedUVIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDirectionIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getReverseIndex", "method_3414", "getDirectionIndex", "m_111398_"), "(I)I");
    }

    static jint getDirectionIndex(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getDirectionIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setUvs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setMissingUv", "method_3417", "setUvs", "m_111394_"), "([F)V");
    }

    static void setUvs(const jobject& obj, const jarray& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_setUvs();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELELEMENTTEXTURE_HPP