// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ARMORMATERIAL$LAYER_HPP
#define NET_MINECRAFT_ITEM_ARMORMATERIAL$LAYER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.ArmorMaterial$Layer
 * Remapped: csg$a
 */
namespace ArmorMaterial$Layer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("csg$a", "net/minecraft/world/item/ArmorMaterial$Layer", "net/minecraft/class_1741$class_9196", "net/minecraft/item/ArmorMaterial$Layer", "net/minecraft/src/C_1315_$C_313715_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.ArmorMaterial$Layer#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "assetName", "field_48841", "id", "f_317138_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ArmorMaterial$Layer#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "assetName", "field_48841", "id", "f_317138_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.ArmorMaterial$Layer#suffix
    static jobject get_field_suffix(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "suffix", "field_48842", "suffix", "f_315638_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ArmorMaterial$Layer#suffix
    static void set_field_suffix(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "suffix", "field_48842", "suffix", "f_315638_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.ArmorMaterial$Layer#dyeable
    static jboolean get_field_dyeable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dyeable", "field_48843", "dyeable", "f_315668_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ArmorMaterial$Layer#dyeable
    static void set_field_dyeable(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dyeable", "field_48843", "dyeable", "f_315668_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.ArmorMaterial$Layer#layer2Texture
    static jobject get_field_layer2Texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "innerTexture", "field_48844", "layer2Texture", "f_314936_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ArmorMaterial$Layer#layer2Texture
    static void set_field_layer2Texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "innerTexture", "field_48844", "layer2Texture", "f_314936_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.ArmorMaterial$Layer#layer1Texture
    static jobject get_field_layer1Texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "outerTexture", "field_48845", "layer1Texture", "f_315722_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ArmorMaterial$Layer#layer1Texture
    static void set_field_layer1Texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "outerTexture", "field_48845", "layer1Texture", "f_315722_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getTextureId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "resolveTexture", "method_56695", "getTextureId", "m_320920_"), "(Z)Lakr;");
    }

    static jobject getTextureId(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getTextureId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTexture() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "texture", "method_56693", "getTexture", "m_318738_"), "(Z)Lakr;");
    }

    static jobject getTexture(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getTexture();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isDyeable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dyeable", "method_56692", "isDyeable", "m_324910_"), "()Z");
    }

    static jboolean isDyeable(const jobject& obj) {
                
       const auto methodID = methodID_isDyeable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ARMORMATERIAL$LAYER_HPP