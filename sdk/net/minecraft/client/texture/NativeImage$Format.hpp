// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_NATIVEIMAGE$FORMAT_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_NATIVEIMAGE$FORMAT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.NativeImage$Format
 * Remapped: faj$a
 */
namespace NativeImage$Format {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("faj$a", "com/mojang/blaze3d/platform/NativeImage$Format", "net/minecraft/class_1011$class_1012", "net/minecraft/client/texture/NativeImage$Format", "net/minecraft/src/C_3148_$C_3150_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.texture.NativeImage$Format#RGBA
    [[maybe_unused]] static jobject get_field_RGBA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RGBA", "field_4997", "RGBA", "RGBA"), "Lfaj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.NativeImage$Format#RGBA
    [[maybe_unused]] static void set_field_RGBA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RGBA", "field_4997", "RGBA", "RGBA"), "Lfaj$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.NativeImage$Format#RGB
    [[maybe_unused]] static jobject get_field_RGB() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RGB", "field_5001", "RGB", "RGB"), "Lfaj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.NativeImage$Format#RGB
    [[maybe_unused]] static void set_field_RGB(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RGB", "field_5001", "RGB", "RGB"), "Lfaj$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.NativeImage$Format#LUMINANCE_ALPHA
    [[maybe_unused]] static jobject get_field_LUMINANCE_ALPHA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LUMINANCE_ALPHA", "field_5002", "LUMINANCE_ALPHA", "LUMINANCE_ALPHA"), "Lfaj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.NativeImage$Format#LUMINANCE_ALPHA
    [[maybe_unused]] static void set_field_LUMINANCE_ALPHA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LUMINANCE_ALPHA", "field_5002", "LUMINANCE_ALPHA", "LUMINANCE_ALPHA"), "Lfaj$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.NativeImage$Format#LUMINANCE
    [[maybe_unused]] static jobject get_field_LUMINANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LUMINANCE", "field_4998", "LUMINANCE", "LUMINANCE"), "Lfaj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.NativeImage$Format#LUMINANCE
    [[maybe_unused]] static void set_field_LUMINANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LUMINANCE", "field_4998", "LUMINANCE", "LUMINANCE"), "Lfaj$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.client.texture.NativeImage$Format#channelCount
    static jint get_field_channelCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "components", "field_4994", "channelCount", "f_85130_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.texture.NativeImage$Format#channelCount
    static void set_field_channelCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "components", "field_4994", "channelCount", "f_85130_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#glFormat
    static jint get_field_glFormat(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "glFormat", "field_4993", "glFormat", "f_85131_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#glFormat
    static void set_field_glFormat(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "glFormat", "field_4993", "glFormat", "f_85131_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#hasRed
    static jboolean get_field_hasRed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "hasRed", "field_5005", "hasRed", "f_85132_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#hasRed
    static void set_field_hasRed(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "hasRed", "field_5005", "hasRed", "f_85132_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#hasGreen
    static jboolean get_field_hasGreen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "hasGreen", "field_5004", "hasGreen", "f_85133_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#hasGreen
    static void set_field_hasGreen(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "hasGreen", "field_5004", "hasGreen", "f_85133_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#hasBlue
    static jboolean get_field_hasBlue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "hasBlue", "field_5003", "hasBlue", "f_85134_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#hasBlue
    static void set_field_hasBlue(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "hasBlue", "field_5003", "hasBlue", "f_85134_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#hasLuminance
    static jboolean get_field_hasLuminance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "hasLuminance", "field_5000", "hasLuminance", "f_85135_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#hasLuminance
    static void set_field_hasLuminance(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "hasLuminance", "field_5000", "hasLuminance", "f_85135_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#hasAlpha
    static jboolean get_field_hasAlpha(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "hasAlpha", "field_4999", "hasAlpha", "f_85136_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#hasAlpha
    static void set_field_hasAlpha(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "hasAlpha", "field_4999", "hasAlpha", "f_85136_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#redOffset
    static jint get_field_redOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "redOffset", "field_5010", "redOffset", "f_85137_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#redOffset
    static void set_field_redOffset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "redOffset", "field_5010", "redOffset", "f_85137_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#greenOffset
    static jint get_field_greenOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "greenOffset", "field_5009", "greenOffset", "f_85138_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#greenOffset
    static void set_field_greenOffset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "greenOffset", "field_5009", "greenOffset", "f_85138_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#blueOffset
    static jint get_field_blueOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "blueOffset", "field_5008", "blueOffset", "f_85139_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#blueOffset
    static void set_field_blueOffset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "blueOffset", "field_5008", "blueOffset", "f_85139_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#luminanceOffset
    static jint get_field_luminanceOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "luminanceOffset", "field_5007", "luminanceOffset", "f_85140_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#luminanceOffset
    static void set_field_luminanceOffset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "luminanceOffset", "field_5007", "luminanceOffset", "f_85140_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#alphaOffset
    static jint get_field_alphaOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "alphaOffset", "field_5006", "alphaOffset", "f_85141_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#alphaOffset
    static void set_field_alphaOffset(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "alphaOffset", "field_5006", "alphaOffset", "f_85141_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$Format#writeable
    static jboolean get_field_writeable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "supportedByStb", "field_4996", "writeable", "f_85142_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$Format#writeable
    static void set_field_writeable(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "supportedByStb", "field_4996", "writeable", "f_85142_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfaj$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfaj$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getChannelCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "components", "method_4335", "getChannelCount", "m_85161_"), "()I");
    }

    static jint getChannelCount(const jobject& obj) {
                
       const auto methodID = methodID_getChannelCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setPackAlignment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setPackPixelStoreState", "method_4339", "setPackAlignment", "m_85166_"), "()V");
    }

    static void setPackAlignment(const jobject& obj) {
                
       const auto methodID = methodID_setPackAlignment();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setUnpackAlignment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setUnpackPixelStoreState", "method_4340", "setUnpackAlignment", "m_85169_"), "()V");
    }

    static void setUnpackAlignment(const jobject& obj) {
                
       const auto methodID = methodID_setUnpackAlignment();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_toGl() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "glFormat", "method_4333", "toGl", "m_85170_"), "()I");
    }

    static jint toGl(const jobject& obj) {
                
       const auto methodID = methodID_toGl();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__hasRed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "hasRed", "method_35628", "hasRed", "m_166425_"), "()Z");
    }

    static jboolean _hasRed(const jobject& obj) {
                
       const auto methodID = methodID__hasRed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__hasGreen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "hasGreen", "method_35629", "hasGreen", "m_166426_"), "()Z");
    }

    static jboolean _hasGreen(const jobject& obj) {
                
       const auto methodID = methodID__hasGreen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__hasBlue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "hasBlue", "method_35630", "hasBlue", "m_166427_"), "()Z");
    }

    static jboolean _hasBlue(const jobject& obj) {
                
       const auto methodID = methodID__hasBlue();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__hasLuminance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "hasLuminance", "method_35631", "hasLuminance", "m_166428_"), "()Z");
    }

    static jboolean _hasLuminance(const jobject& obj) {
                
       const auto methodID = methodID__hasLuminance();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__hasAlpha() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "hasAlpha", "method_4329", "hasAlpha", "m_85171_"), "()Z");
    }

    static jboolean _hasAlpha(const jobject& obj) {
                
       const auto methodID = methodID__hasAlpha();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRedOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "redOffset", "method_35632", "getRedOffset", "m_166429_"), "()I");
    }

    static jint getRedOffset(const jobject& obj) {
                
       const auto methodID = methodID_getRedOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGreenOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "greenOffset", "method_35633", "getGreenOffset", "m_166430_"), "()I");
    }

    static jint getGreenOffset(const jobject& obj) {
                
       const auto methodID = methodID_getGreenOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlueOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "blueOffset", "method_35634", "getBlueOffset", "m_166431_"), "()I");
    }

    static jint getBlueOffset(const jobject& obj) {
                
       const auto methodID = methodID_getBlueOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLuminanceOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "luminanceOffset", "method_35635", "getLuminanceOffset", "m_166432_"), "()I");
    }

    static jint getLuminanceOffset(const jobject& obj) {
                
       const auto methodID = methodID_getLuminanceOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAlphaOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "alphaOffset", "method_4332", "getAlphaOffset", "m_85172_"), "()I");
    }

    static jint getAlphaOffset(const jobject& obj) {
                
       const auto methodID = methodID_getAlphaOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasRedChannel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "hasLuminanceOrRed", "method_35636", "hasRedChannel", "m_166433_"), "()Z");
    }

    static jboolean hasRedChannel(const jobject& obj) {
                
       const auto methodID = methodID_hasRedChannel();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasGreenChannel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "hasLuminanceOrGreen", "method_35637", "hasGreenChannel", "m_166434_"), "()Z");
    }

    static jboolean hasGreenChannel(const jobject& obj) {
                
       const auto methodID = methodID_hasGreenChannel();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasBlueChannel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "hasLuminanceOrBlue", "method_35638", "hasBlueChannel", "m_166435_"), "()Z");
    }

    static jboolean hasBlueChannel(const jobject& obj) {
                
       const auto methodID = methodID_hasBlueChannel();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasOpacityChannel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "hasLuminanceOrAlpha", "method_4337", "hasOpacityChannel", "m_85173_"), "()Z");
    }

    static jboolean hasOpacityChannel(const jobject& obj) {
                
       const auto methodID = methodID_hasOpacityChannel();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRedChannelOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "luminanceOrRedOffset", "method_35639", "getRedChannelOffset", "m_166436_"), "()I");
    }

    static jint getRedChannelOffset(const jobject& obj) {
                
       const auto methodID = methodID_getRedChannelOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGreenChannelOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "luminanceOrGreenOffset", "method_35640", "getGreenChannelOffset", "m_166437_"), "()I");
    }

    static jint getGreenChannelOffset(const jobject& obj) {
                
       const auto methodID = methodID_getGreenChannelOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlueChannelOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "luminanceOrBlueOffset", "method_35641", "getBlueChannelOffset", "m_166438_"), "()I");
    }

    static jint getBlueChannelOffset(const jobject& obj) {
                
       const auto methodID = methodID_getBlueChannelOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOpacityChannelOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "luminanceOrAlphaOffset", "method_4330", "getOpacityChannelOffset", "m_85174_"), "()I");
    }

    static jint getOpacityChannelOffset(const jobject& obj) {
                
       const auto methodID = methodID_getOpacityChannelOffset();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isWriteable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "supportedByStb", "method_4338", "isWriteable", "m_85175_"), "()Z");
    }

    static jboolean isWriteable(const jobject& obj) {
                
       const auto methodID = methodID_isWriteable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_fromChannelCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getStbFormat", "method_4336", "fromChannelCount", "m_85167_"), "(I)Lfaj$a;");
    }

    static jobject fromChannelCount(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromChannelCount();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_NATIVEIMAGE$FORMAT_HPP