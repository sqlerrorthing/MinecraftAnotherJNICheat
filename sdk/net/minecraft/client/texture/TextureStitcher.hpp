// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.TextureStitcher
 * Remapped: gqi
 */
namespace TextureStitcher {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqi", "net/minecraft/client/renderer/texture/Stitcher", "net/minecraft/class_1055", "net/minecraft/client/texture/TextureStitcher", "net/minecraft/src/C_4478_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.texture.TextureStitcher#COMPARATOR
    [[maybe_unused]] static jobject get_field_COMPARATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HOLDER_COMPARATOR", "field_18030", "COMPARATOR", "f_118161_"), "Ljava/util/Comparator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher#COMPARATOR
    [[maybe_unused]] static void set_field_COMPARATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HOLDER_COMPARATOR", "field_18030", "COMPARATOR", "f_118161_"), "Ljava/util/Comparator;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher#mipLevel
    static jint get_field_mipLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mipLevel", "field_5243", "mipLevel", "f_118162_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher#mipLevel
    static void set_field_mipLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mipLevel", "field_5243", "mipLevel", "f_118162_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher#holders
    static jobject get_field_holders(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "texturesToBeStitched", "field_5237", "holders", "f_118163_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher#holders
    static void set_field_holders(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "texturesToBeStitched", "field_5237", "holders", "f_118163_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher#slots
    static jobject get_field_slots(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "storage", "field_5239", "slots", "f_118164_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher#slots
    static void set_field_slots(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "storage", "field_5239", "slots", "f_118164_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "storageX", "field_5242", "width", "f_118165_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "storageX", "field_5242", "width", "f_118165_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "storageY", "field_5241", "height", "f_118166_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "storageY", "field_5241", "height", "f_118166_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher#maxWidth
    static jint get_field_maxWidth(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "maxWidth", "field_5240", "maxWidth", "f_118167_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher#maxWidth
    static void set_field_maxWidth(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "maxWidth", "field_5240", "maxWidth", "f_118167_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.TextureStitcher#maxHeight
    static jint get_field_maxHeight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "maxHeight", "field_5238", "maxHeight", "f_118168_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.TextureStitcher#maxHeight
    static void set_field_maxHeight(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "maxHeight", "field_5238", "maxHeight", "f_118168_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getWidth", "method_4554", "getWidth", "m_118174_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getHeight", "method_4555", "getHeight", "m_118187_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registerSprite", "method_4553", "add", "m_246099_"), "(Lgqi$a;)V");
    }

    static void add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stitch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "stitch", "method_4557", "stitch", "m_118193_"), "()V");
    }

    static void stitch(const jobject& obj) {
                
       const auto methodID = methodID_stitch();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStitchedSprites() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gatherSprites", "method_4549", "getStitchedSprites", "m_118180_"), "(Lgqi$d;)V");
    }

    static void getStitchedSprites(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStitchedSprites();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_applyMipLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "smallestFittingMinTexel", "method_4551", "applyMipLevel", "m_118188_"), "(II)I");
    }

    static jint applyMipLevel(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_applyMipLevel();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addToStorage", "method_4550", "fit", "m_118178_"), "(Lgqi$b;)Z");
    }

    static jboolean fit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_growAndFit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "expand", "method_4552", "growAndFit", "m_118191_"), "(Lgqi$b;)Z");
    }

    static jboolean growAndFit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_growAndFit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_TEXTURESTITCHER_HPP