// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_GLYPHATLASTEXTURE$SLOT_HPP
#define NET_MINECRAFT_CLIENT_FONT_GLYPHATLASTEXTURE$SLOT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.GlyphAtlasTexture$Slot
 * Remapped: fle$a
 */
namespace GlyphAtlasTexture$Slot {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fle$a", "net/minecraft/client/gui/font/FontTexture$Node", "net/minecraft/class_380$class_381", "net/minecraft/client/font/GlyphAtlasTexture$Slot", "net/minecraft/src/C_3512_$C_3514_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.font.GlyphAtlasTexture$Slot#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "x", "field_2269", "x", "f_95105_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.GlyphAtlasTexture$Slot#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "x", "field_2269", "x", "f_95105_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.font.GlyphAtlasTexture$Slot#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "y", "field_2268", "y", "f_95106_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.GlyphAtlasTexture$Slot#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "y", "field_2268", "y", "f_95106_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphAtlasTexture$Slot#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "width", "field_2267", "width", "f_95107_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphAtlasTexture$Slot#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "width", "field_2267", "width", "f_95107_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphAtlasTexture$Slot#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "height", "field_2266", "height", "f_95108_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphAtlasTexture$Slot#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "height", "field_2266", "height", "f_95108_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphAtlasTexture$Slot#subSlot1
    static jobject get_field_subSlot1(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "left", "field_2270", "subSlot1", "f_95109_"), "Lfle$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphAtlasTexture$Slot#subSlot1
    static void set_field_subSlot1(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "left", "field_2270", "subSlot1", "f_95109_"), "Lfle$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphAtlasTexture$Slot#subSlot2
    static jobject get_field_subSlot2(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "right", "field_2271", "subSlot2", "f_95110_"), "Lfle$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphAtlasTexture$Slot#subSlot2
    static void set_field_subSlot2(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "right", "field_2271", "subSlot2", "f_95110_"), "Lfle$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.GlyphAtlasTexture$Slot#occupied
    static jboolean get_field_occupied(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "occupied", "field_2265", "occupied", "f_95111_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.GlyphAtlasTexture$Slot#occupied
    static void set_field_occupied(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "occupied", "field_2265", "occupied", "f_95111_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_findSlotFor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "insert", "method_2024", "findSlotFor", "m_232570_"), "(Lezn;)Lfle$a;");
    }

    static jobject findSlotFor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findSlotFor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_GLYPHATLASTEXTURE$SLOT_HPP