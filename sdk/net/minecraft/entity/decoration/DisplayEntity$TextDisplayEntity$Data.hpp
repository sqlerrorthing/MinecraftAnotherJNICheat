// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$DATA_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$DATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data
 * Remapped: bsq$l$e
 */
namespace DisplayEntity$TextDisplayEntity$Data {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsq$l$e", "net/minecraft/world/entity/Display$TextDisplay$TextRenderState", "net/minecraft/class_8113$class_8123$class_8230", "net/minecraft/entity/decoration/DisplayEntity$TextDisplayEntity$Data", "net/minecraft/src/C_268383_$C_268409_$C_276414_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#text
    static jobject get_field_text(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "text", "comp_1334", "text", "f_276477_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#text
    static void set_field_text(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "text", "comp_1334", "text", "f_276477_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#lineWidth
    static jint get_field_lineWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lineWidth", "comp_1335", "lineWidth", "f_276622_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#lineWidth
    static void set_field_lineWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lineWidth", "comp_1335", "lineWidth", "f_276622_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#textOpacity
    static jobject get_field_textOpacity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "textOpacity", "comp_1336", "textOpacity", "f_276579_"), "Lbsq$f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#textOpacity
    static void set_field_textOpacity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "textOpacity", "comp_1336", "textOpacity", "f_276579_"), "Lbsq$f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#backgroundColor
    static jobject get_field_backgroundColor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "backgroundColor", "comp_1337", "backgroundColor", "f_276562_"), "Lbsq$f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#backgroundColor
    static void set_field_backgroundColor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "backgroundColor", "comp_1337", "backgroundColor", "f_276562_"), "Lbsq$f;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#flags
    static jbyte get_field_flags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "flags", "comp_1338", "flags", "f_276556_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$Data#flags
    static void set_field_flags(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "flags", "comp_1338", "flags", "f_276556_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    static jmethodID methodID__text() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "text", "comp_1334", "text", "f_276477_"), "()Lwz;");
    }

    static jobject _text(const jobject& obj) {
                
       const auto methodID = methodID__text();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__lineWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "lineWidth", "comp_1335", "lineWidth", "f_276622_"), "()I");
    }

    static jint _lineWidth(const jobject& obj) {
                
       const auto methodID = methodID__lineWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__textOpacity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "textOpacity", "comp_1336", "textOpacity", "f_276579_"), "()Lbsq$f;");
    }

    static jobject _textOpacity(const jobject& obj) {
                
       const auto methodID = methodID__textOpacity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__backgroundColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "backgroundColor", "comp_1337", "backgroundColor", "f_276562_"), "()Lbsq$f;");
    }

    static jobject _backgroundColor(const jobject& obj) {
                
       const auto methodID = methodID__backgroundColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__flags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "flags", "comp_1338", "flags", "f_276556_"), "()B");
    }

    static jbyte _flags(const jobject& obj) {
                
       const auto methodID = methodID__flags();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$DATA_HPP