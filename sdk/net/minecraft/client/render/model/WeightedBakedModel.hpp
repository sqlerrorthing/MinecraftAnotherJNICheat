// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_WEIGHTEDBAKEDMODEL_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_WEIGHTEDBAKEDMODEL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.WeightedBakedModel
 * Remapped: gsz
 */
namespace WeightedBakedModel {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gsz", "net/minecraft/client/resources/model/WeightedBakedModel", "net/minecraft/class_1097", "net/minecraft/client/render/model/WeightedBakedModel", "net/minecraft/src/C_4543_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.model.WeightedBakedModel#totalWeight
    static jint get_field_totalWeight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "totalWeight", "field_5433", "totalWeight", "f_119540_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.WeightedBakedModel#totalWeight
    static void set_field_totalWeight(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "totalWeight", "field_5433", "totalWeight", "f_119540_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.WeightedBakedModel#models
    static jobject get_field_models(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "list", "field_5434", "models", "f_119541_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.WeightedBakedModel#models
    static void set_field_models(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "list", "field_5434", "models", "f_119541_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.WeightedBakedModel#defaultModel
    static jobject get_field_defaultModel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "wrapped", "field_5435", "defaultModel", "f_119542_"), "Lgsm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.WeightedBakedModel#defaultModel
    static void set_field_defaultModel(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "wrapped", "field_5435", "defaultModel", "f_119542_"), "Lgsm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getQuads() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getQuads", "method_4707", "getQuads", "m_213637_"), "(Ldtc;Lji;Layw;)Ljava/util/List;");
    }

    static jobject getQuads(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getQuads();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_useAmbientOcclusion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useAmbientOcclusion", "method_4708", "useAmbientOcclusion", "m_7541_"), "()Z");
    }

    static jboolean useAmbientOcclusion(const jobject& obj) {
                
       const auto methodID = methodID_useAmbientOcclusion();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasDepth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isGui3d", "method_4712", "hasDepth", "m_7539_"), "()Z");
    }

    static jboolean hasDepth(const jobject& obj) {
                
       const auto methodID = methodID_hasDepth();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSideLit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "usesBlockLight", "method_24304", "isSideLit", "m_7547_"), "()Z");
    }

    static jboolean isSideLit(const jobject& obj) {
                
       const auto methodID = methodID_isSideLit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isBuiltin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isCustomRenderer", "method_4713", "isBuiltin", "m_7521_"), "()Z");
    }

    static jboolean isBuiltin(const jobject& obj) {
                
       const auto methodID = methodID_isBuiltin();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getParticleSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getParticleIcon", "method_4711", "getParticleSprite", "m_6160_"), "()Lgql;");
    }

    static jobject getParticleSprite(const jobject& obj) {
                
       const auto methodID = methodID_getParticleSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTransformation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getTransforms", "method_4709", "getTransformation", "m_7442_"), "()Lggi;");
    }

    static jobject getTransformation(const jobject& obj) {
                
       const auto methodID = methodID_getTransformation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOverrides() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getOverrides", "method_4710", "getOverrides", "m_7343_"), "()Lggg;");
    }

    static jobject getOverrides(const jobject& obj) {
                
       const auto methodID = methodID_getOverrides();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_WEIGHTEDBAKEDMODEL_HPP