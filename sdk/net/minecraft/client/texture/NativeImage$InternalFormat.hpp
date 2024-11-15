// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_NATIVEIMAGE$INTERNALFORMAT_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_NATIVEIMAGE$INTERNALFORMAT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.NativeImage$InternalFormat
 * Remapped: faj$b
 */
namespace NativeImage$InternalFormat {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("faj$b", "com/mojang/blaze3d/platform/NativeImage$InternalGlFormat", "net/minecraft/class_1011$class_1013", "net/minecraft/client/texture/NativeImage$InternalFormat", "net/minecraft/src/C_3148_$C_3151_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.texture.NativeImage$InternalFormat#RGBA
    [[maybe_unused]] static jobject get_field_RGBA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RGBA", "field_5012", "RGBA", "RGBA"), "Lfaj$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.NativeImage$InternalFormat#RGBA
    [[maybe_unused]] static void set_field_RGBA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RGBA", "field_5012", "RGBA", "RGBA"), "Lfaj$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.NativeImage$InternalFormat#RGB
    [[maybe_unused]] static jobject get_field_RGB() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RGB", "field_5011", "RGB", "RGB"), "Lfaj$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.NativeImage$InternalFormat#RGB
    [[maybe_unused]] static void set_field_RGB(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "RGB", "field_5011", "RGB", "RGB"), "Lfaj$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.NativeImage$InternalFormat#RG
    [[maybe_unused]] static jobject get_field_RG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RG", "field_33618", "RG", "RG"), "Lfaj$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.NativeImage$InternalFormat#RG
    [[maybe_unused]] static void set_field_RG(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RG", "field_33618", "RG", "RG"), "Lfaj$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.NativeImage$InternalFormat#RED
    [[maybe_unused]] static jobject get_field_RED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "RED", "field_33619", "RED", "RED"), "Lfaj$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.NativeImage$InternalFormat#RED
    [[maybe_unused]] static void set_field_RED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "RED", "field_33619", "RED", "RED"), "Lfaj$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.NativeImage$InternalFormat#value
    static jint get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "glFormat", "field_5015", "value", "f_85184_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.NativeImage$InternalFormat#value
    static void set_field_value(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "glFormat", "field_5015", "value", "f_85184_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfaj$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfaj$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "glFormat", "method_4341", "getValue", "m_85191_"), "()I");
    }

    static jint getValue(const jobject& obj) {
                
       const auto methodID = methodID_getValue();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_NATIVEIMAGE$INTERNALFORMAT_HPP