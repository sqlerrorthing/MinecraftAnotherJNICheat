// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_TEXTRENDERER_HPP
#define NET_MINECRAFT_CLIENT_FONT_TEXTRENDERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.TextRenderer
 * Remapped: fhx
 */
namespace TextRenderer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fhx", "net/minecraft/client/gui/Font", "net/minecraft/class_327", "net/minecraft/client/font/TextRenderer", "net/minecraft/src/C_3429_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.font.TextRenderer#Z_INDEX
    [[maybe_unused]] static jfloat get_field_Z_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EFFECT_DEPTH", "field_32166", "Z_INDEX", "f_168643_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer#Z_INDEX
    [[maybe_unused]] static void set_field_Z_INDEX(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "EFFECT_DEPTH", "field_32166", "Z_INDEX", "f_168643_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.TextRenderer#FORWARD_SHIFT
    [[maybe_unused]] static jobject get_field_FORWARD_SHIFT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SHADOW_OFFSET", "field_24237", "FORWARD_SHIFT", "f_92712_"), "Lorg/joml/Vector3f;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer#FORWARD_SHIFT
    [[maybe_unused]] static void set_field_FORWARD_SHIFT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SHADOW_OFFSET", "field_24237", "FORWARD_SHIFT", "f_92712_"), "Lorg/joml/Vector3f;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.TextRenderer#ARABIC_SHAPING_LETTERS_SHAPE
    [[maybe_unused]] static jint get_field_ARABIC_SHAPING_LETTERS_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALPHA_CUTOFF", "field_35427", "ARABIC_SHAPING_LETTERS_SHAPE", "f_193827_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.TextRenderer#ARABIC_SHAPING_LETTERS_SHAPE
    [[maybe_unused]] static void set_field_ARABIC_SHAPING_LETTERS_SHAPE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALPHA_CUTOFF", "field_35427", "ARABIC_SHAPING_LETTERS_SHAPE", "f_193827_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.client.font.TextRenderer#fontHeight
    static jint get_field_fontHeight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lineHeight", "field_2000", "fontHeight", "f_92710_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.font.TextRenderer#fontHeight
    static void set_field_fontHeight(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "lineHeight", "field_2000", "fontHeight", "f_92710_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.font.TextRenderer#random
    static jobject get_field_random(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "random", "field_2001", "random", "f_92711_"), "Layw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.font.TextRenderer#random
    static void set_field_random(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "random", "field_2001", "random", "f_92711_"), "Layw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer#fontStorageAccessor
    static jobject get_field_fontStorageAccessor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "fonts", "field_1997", "fontStorageAccessor", "f_92713_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer#fontStorageAccessor
    static void set_field_fontStorageAccessor(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "fonts", "field_1997", "fontStorageAccessor", "f_92713_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.font.TextRenderer#validateAdvance
    static jboolean get_field_validateAdvance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "filterFishyGlyphs", "field_39925", "validateAdvance", "f_242994_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.font.TextRenderer#validateAdvance
    static void set_field_validateAdvance(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "filterFishyGlyphs", "field_39925", "validateAdvance", "f_242994_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.TextRenderer#handler
    static jobject get_field_handler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "splitter", "field_24238", "handler", "f_92714_"), "Lfgz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.TextRenderer#handler
    static void set_field_handler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "splitter", "field_24238", "handler", "f_92714_"), "Lfgz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getFontStorage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFontSet", "method_27526", "getFontStorage", "m_92863_"), "(Lakr;)Lfld;");
    }

    static jobject getFontStorage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFontStorage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_mirror() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bidirectionalShaping", "method_1721", "mirror", "m_92801_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject mirror(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_mirror();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawInBatch", "method_27521", "draw", "m_271703_"), "(Ljava/lang/String;FFIZLorg/joml/Matrix4f;Lgez;Lfhx$a;II)I");
    }

    static jint draw(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jint& arg9) {
                
       const auto methodID = methodID_draw();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID__draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawInBatch", "method_27522", "draw", "m_272078_"), "(Ljava/lang/String;FFIZLorg/joml/Matrix4f;Lgez;Lfhx$a;IIZ)I");
    }

    static jint _draw(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jint& arg9, const jboolean& arg10) {
                
       const auto methodID = methodID__draw();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    };
    
    static jmethodID methodID___draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawInBatch", "method_30882", "draw", "m_272077_"), "(Lwz;FFIZLorg/joml/Matrix4f;Lgez;Lfhx$a;II)I");
    }

    static jint __draw(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jint& arg9) {
                
       const auto methodID = methodID___draw();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID____draw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawInBatch", "method_22942", "draw", "m_272191_"), "(Laya;FFIZLorg/joml/Matrix4f;Lgez;Lfhx$a;II)I");
    }

    static jint ___draw(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jint& arg9) {
                
       const auto methodID = methodID____draw();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_drawWithOutline() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "drawInBatch8xOutline", "method_37296", "drawWithOutline", "m_168645_"), "(Laya;FFIILorg/joml/Matrix4f;Lgez;I)V");
    }

    static void drawWithOutline(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jint& arg4, const jobject& arg5, const jobject& arg6, const jint& arg7) {
                
       const auto methodID = methodID_drawWithOutline();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_tweakTransparency() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "adjustColor", "method_27515", "tweakTransparency", "m_92719_"), "(I)I");
    }

    static jint tweakTransparency(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_tweakTransparency();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_drawInternal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "drawInternal", "method_27529", "drawInternal", "m_271880_"), "(Ljava/lang/String;FFIZLorg/joml/Matrix4f;Lgez;Lfhx$a;IIZ)I");
    }

    static jint drawInternal(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jint& arg9, const jboolean& arg10) {
                
       const auto methodID = methodID_drawInternal();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    };
    
    static jmethodID methodID__drawInternal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "drawInternal", "method_1723", "drawInternal", "m_272085_"), "(Laya;FFIZLorg/joml/Matrix4f;Lgez;Lfhx$a;II)I");
    }

    static jint _drawInternal(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jint& arg9) {
                
       const auto methodID = methodID__drawInternal();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_drawLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "renderText", "method_1724", "drawLayer", "m_271978_"), "(Ljava/lang/String;FFIZLorg/joml/Matrix4f;Lgez;Lfhx$a;II)F");
    }

    static jfloat drawLayer(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jint& arg9) {
                
       const auto methodID = methodID_drawLayer();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID__drawLayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "renderText", "method_27530", "drawLayer", "m_271992_"), "(Laya;FFIZLorg/joml/Matrix4f;Lgez;Lfhx$a;II)F");
    }

    static jfloat _drawLayer(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jint& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jint& arg9) {
                
       const auto methodID = methodID__drawLayer();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_drawGlyph() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderChar", "method_1710", "drawGlyph", "m_253238_"), "(Lflh;ZZFFFLorg/joml/Matrix4f;Lfbm;FFFFI)V");
    }

    static void drawGlyph(const jobject& obj, const jobject& arg0, const jboolean& arg1, const jboolean& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5, const jobject& arg6, const jobject& arg7, const jfloat& arg8, const jfloat& arg9, const jfloat& arg10, const jfloat& arg11, const jint& arg12) {
                
       const auto methodID = methodID_drawGlyph();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "width", "method_1727", "getWidth", "m_92895_"), "(Ljava/lang/String;)I");
    }

    static jint getWidth(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "width", "method_27525", "getWidth", "m_92852_"), "(Lxe;)I");
    }

    static jint _getWidth(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "width", "method_30880", "getWidth", "m_92724_"), "(Laya;)I");
    }

    static jint __getWidth(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_trimToWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "plainSubstrByWidth", "method_27524", "trimToWidth", "m_92837_"), "(Ljava/lang/String;IZ)Ljava/lang/String;");
    }

    static jobject trimToWidth(const jobject& obj, const jobject& arg0, const jint& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID_trimToWidth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__trimToWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "plainSubstrByWidth", "method_27523", "trimToWidth", "m_92834_"), "(Ljava/lang/String;I)Ljava/lang/String;");
    }

    static jobject _trimToWidth(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__trimToWidth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___trimToWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "substrByWidth", "method_1714", "trimToWidth", "m_92854_"), "(Lxe;I)Lxe;");
    }

    static jobject __trimToWidth(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID___trimToWidth();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getWrappedLinesHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "wordWrapHeight", "method_1713", "getWrappedLinesHeight", "m_92920_"), "(Ljava/lang/String;I)I");
    }

    static jint getWrappedLinesHeight(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getWrappedLinesHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getWrappedLinesHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "wordWrapHeight", "method_44378", "getWrappedLinesHeight", "m_239133_"), "(Lxe;I)I");
    }

    static jint _getWrappedLinesHeight(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__getWrappedLinesHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_wrapLines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "split", "method_1728", "wrapLines", "m_92923_"), "(Lxe;I)Ljava/util/List;");
    }

    static jobject wrapLines(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_wrapLines();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isRightToLeft() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isBidirectional", "method_1726", "isRightToLeft", "m_92718_"), "()Z");
    }

    static jboolean isRightToLeft(const jobject& obj) {
                
       const auto methodID = methodID_isRightToLeft();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTextHandler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSplitter", "method_27527", "getTextHandler", "m_92865_"), "()Lfgz;");
    }

    static jobject getTextHandler(const jobject& obj) {
                
       const auto methodID = methodID_getTextHandler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_TEXTRENDERER_HPP