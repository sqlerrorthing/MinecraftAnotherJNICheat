// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_BITMAPFONT$LOADER_HPP
#define NET_MINECRAFT_CLIENT_FONT_BITMAPFONT$LOADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.BitmapFont$Loader
 * Remapped: flm$a
 */
namespace BitmapFont$Loader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flm$a", "net/minecraft/client/gui/font/providers/BitmapProvider$Definition", "net/minecraft/class_386$class_387", "net/minecraft/client/font/BitmapFont$Loader", "net/minecraft/src/C_3522_$C_285541_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.font.BitmapFont$Loader#file
    static jobject get_field_file(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "file", "comp_1519", "file", "f_285631_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.BitmapFont$Loader#file
    static void set_field_file(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "file", "comp_1519", "file", "f_285631_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.BitmapFont$Loader#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "height", "comp_1520", "height", "f_285660_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.BitmapFont$Loader#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "height", "comp_1520", "height", "f_285660_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.BitmapFont$Loader#ascent
    static jint get_field_ascent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "ascent", "comp_1521", "ascent", "f_285577_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.BitmapFont$Loader#ascent
    static void set_field_ascent(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "ascent", "comp_1521", "ascent", "f_285577_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.BitmapFont$Loader#codepointGrid
    static jint get_field_codepointGrid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "codepointGrid", "comp_1522", "codepointGrid", "f_285611_"), "[[I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.BitmapFont$Loader#codepointGrid
    static void set_field_codepointGrid(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "codepointGrid", "comp_1522", "codepointGrid", "f_285611_"), "[[I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.BitmapFont$Loader#CODE_POINT_GRID_CODEC
    [[maybe_unused]] static jobject get_field_CODE_POINT_GRID_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CODEPOINT_GRID_CODEC", "field_44800", "CODE_POINT_GRID_CODEC", "f_285599_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.BitmapFont$Loader#CODE_POINT_GRID_CODEC
    [[maybe_unused]] static void set_field_CODE_POINT_GRID_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CODEPOINT_GRID_CODEC", "field_44800", "CODE_POINT_GRID_CODEC", "f_285599_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.BitmapFont$Loader#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44799", "CODEC", "f_285606_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.BitmapFont$Loader#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_44799", "CODEC", "f_285606_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_validateCodePointGrid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "validateDimensions", "method_51752", "validateCodePointGrid", "m_285860_"), "([[I)Lcom/mojang/serialization/DataResult;");
    }

    static jobject validateCodePointGrid(const jarray& arg0, const jarray& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_validateCodePointGrid();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "validate", "method_51749", "validate", "m_285746_"), "(Lflm$a;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject validate(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_validate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_51731", "getType", "m_285843_"), "()Lflp;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "unpack", "method_51734", "build", "m_285782_"), "()Lcom/mojang/datafixers/util/Either;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_2039", "load", "m_286048_"), "(Laue;)Lezm;");
    }

    static jobject load(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_load();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_findCharacterStartX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getActualGlyphWidth", "method_2038", "findCharacterStartX", "m_285979_"), "(Lfaj;IIII)I");
    }

    static jint findCharacterStartX(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4) {
                
       const auto methodID = methodID_findCharacterStartX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__file() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "file", "comp_1519", "file", "f_285631_"), "()Lakr;");
    }

    static jobject _file(const jobject& obj) {
                
       const auto methodID = methodID__file();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__height() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "height", "comp_1520", "height", "f_285660_"), "()I");
    }

    static jint _height(const jobject& obj) {
                
       const auto methodID = methodID__height();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__ascent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "ascent", "comp_1521", "ascent", "f_285577_"), "()I");
    }

    static jint _ascent(const jobject& obj) {
                
       const auto methodID = methodID__ascent();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__codepointGrid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "codepointGrid", "comp_1522", "codepointGrid", "f_285611_"), "()[[I");
    }

    static jint _codepointGrid(const jobject& obj) {
                
       const auto methodID = methodID__codepointGrid();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_BITMAPFONT$LOADER_HPP