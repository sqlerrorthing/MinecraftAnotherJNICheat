// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERCLOTHINGFEATURERENDERER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERCLOTHINGFEATURERENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer
 * Remapped: gpg
 */
namespace VillagerClothingFeatureRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gpg", "net/minecraft/client/renderer/entity/layers/VillagerProfessionLayer", "net/minecraft/class_3885", "net/minecraft/client/render/entity/feature/VillagerClothingFeatureRenderer", "net/minecraft/src/C_4458_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#LEVEL_TO_ID
    [[maybe_unused]] static jobject get_field_LEVEL_TO_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LEVEL_LOCATIONS", "field_17148", "LEVEL_TO_ID", "f_117622_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#LEVEL_TO_ID
    [[maybe_unused]] static void set_field_LEVEL_TO_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LEVEL_LOCATIONS", "field_17148", "LEVEL_TO_ID", "f_117622_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#villagerTypeToHat
    static jobject get_field_villagerTypeToHat(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "typeHatCache", "field_17149", "villagerTypeToHat", "f_117623_"), "Lit/unimi/dsi/fastutil/objects/Object2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#villagerTypeToHat
    static void set_field_villagerTypeToHat(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "typeHatCache", "field_17149", "villagerTypeToHat", "f_117623_"), "Lit/unimi/dsi/fastutil/objects/Object2ObjectMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#professionToHat
    static jobject get_field_professionToHat(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "professionHatCache", "field_17150", "professionToHat", "f_117624_"), "Lit/unimi/dsi/fastutil/objects/Object2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#professionToHat
    static void set_field_professionToHat(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "professionHatCache", "field_17150", "professionToHat", "f_117624_"), "Lit/unimi/dsi/fastutil/objects/Object2ObjectMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#resourceManager
    static jobject get_field_resourceManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "resourceManager", "field_17151", "resourceManager", "f_117625_"), "Laue;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#resourceManager
    static void set_field_resourceManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "resourceManager", "field_17151", "resourceManager", "f_117625_"), "Laue;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#entityType
    static jobject get_field_entityType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "path", "field_17152", "entityType", "f_117626_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.entity.feature.VillagerClothingFeatureRenderer#entityType
    static void set_field_entityType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "path", "field_17152", "entityType", "f_117626_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_17151", "render", "m_6494_"), "(Lfbi;Lgez;ILbtn;FFFFFF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5, const jfloat& arg6, const jfloat& arg7, const jfloat& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_findTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getResourceLocation", "method_17155", "findTexture", "m_117668_"), "(Ljava/lang/String;Lakr;)Lakr;");
    }

    static jobject findTexture(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_findTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getHatType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHatData", "method_17153", "getHatType", "m_117658_"), "(Lit/unimi/dsi/fastutil/objects/Object2ObjectMap;Ljava/lang/String;Ljh;Ljava/lang/Object;)Lgrz$a;");
    }

    static jobject getHatType(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getHatType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_ENTITY_FEATURE_VILLAGERCLOTHINGFEATURERENDERER_HPP