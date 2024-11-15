// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER$SLOT_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER$SLOT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.TextureStitcher$Slot
 * Remapped: gqi$c
 */
namespace TextureStitcher$Slot {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqi$c", "net/minecraft/client/renderer/texture/Stitcher$Region", "net/minecraft/class_1055$class_1057", "net/minecraft/client/texture/TextureStitcher$Slot", "net/minecraft/src/C_4478_$C_4480_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher$Slot#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "originX", "field_5253", "x", "f_118209_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher$Slot#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "originX", "field_5253", "x", "f_118209_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher$Slot#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "originY", "field_5252", "y", "f_118210_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher$Slot#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "originY", "field_5252", "y", "f_118210_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher$Slot#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "width", "field_5251", "width", "f_118211_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher$Slot#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "width", "field_5251", "width", "f_118211_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher$Slot#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "height", "field_5250", "height", "f_118212_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher$Slot#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "height", "field_5250", "height", "f_118212_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher$Slot#subSlots
    static jobject get_field_subSlots(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "subSlots", "field_5255", "subSlots", "f_118213_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher$Slot#subSlots
    static void set_field_subSlots(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "subSlots", "field_5255", "subSlots", "f_118213_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher$Slot#texture
    static jobject get_field_texture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "holder", "field_5254", "texture", "f_118214_"), "Lgqi$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher$Slot#texture
    static void set_field_texture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "holder", "field_5254", "texture", "f_118214_"), "Lgqi$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getX", "method_4569", "getX", "m_118225_"), "()I");
    }

    static jint getX(const jobject& obj) {
                
       const auto methodID = methodID_getX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getY", "method_4567", "getY", "m_118226_"), "()I");
    }

    static jint getY(const jobject& obj) {
                
       const auto methodID = methodID_getY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_fit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_4566", "fit", "m_118221_"), "(Lgqi$b;)Z");
    }

    static jboolean fit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addAllFilledSlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "walk", "method_4568", "addAllFilledSlots", "m_246763_"), "(Lgqi$d;)V");
    }

    static void addAllFilledSlots(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addAllFilledSlots();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER$SLOT_HPP