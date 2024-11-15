// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_SPRITEATLASTEXTURE_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_SPRITEATLASTEXTURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.SpriteAtlasTexture
 * Remapped: gqk
 */
namespace SpriteAtlasTexture {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqk", "net/minecraft/client/renderer/texture/TextureAtlas", "net/minecraft/class_1059", "net/minecraft/client/texture/SpriteAtlasTexture", "net/minecraft/src/C_4484_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.texture.SpriteAtlasTexture#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LOGGER", "field_5278", "LOGGER", "f_118261_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LOGGER", "field_5278", "LOGGER", "f_118261_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.SpriteAtlasTexture#BLOCK_ATLAS_TEXTURE
    [[maybe_unused]] static jobject get_field_BLOCK_ATLAS_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOCATION_BLOCKS", "field_5275", "BLOCK_ATLAS_TEXTURE", "f_118259_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.SpriteAtlasTexture#BLOCK_ATLAS_TEXTURE
    [[maybe_unused]] static void set_field_BLOCK_ATLAS_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "LOCATION_BLOCKS", "field_5275", "BLOCK_ATLAS_TEXTURE", "f_118259_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.texture.SpriteAtlasTexture#PARTICLE_ATLAS_TEXTURE
    [[maybe_unused]] static jobject get_field_PARTICLE_ATLAS_TEXTURE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOCATION_PARTICLES", "field_17898", "PARTICLE_ATLAS_TEXTURE", "f_118260_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.texture.SpriteAtlasTexture#PARTICLE_ATLAS_TEXTURE
    [[maybe_unused]] static void set_field_PARTICLE_ATLAS_TEXTURE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOCATION_PARTICLES", "field_17898", "PARTICLE_ATLAS_TEXTURE", "f_118260_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#spritesToLoad
    static jobject get_field_spritesToLoad(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "sprites", "field_5277", "spritesToLoad", "f_118263_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#spritesToLoad
    static void set_field_spritesToLoad(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "sprites", "field_5277", "spritesToLoad", "f_118263_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#animatedSprites
    static jobject get_field_animatedSprites(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "animatedTextures", "field_5276", "animatedSprites", "f_118262_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#animatedSprites
    static void set_field_animatedSprites(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "animatedTextures", "field_5276", "animatedSprites", "f_118262_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#sprites
    static jobject get_field_sprites(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "texturesByName", "field_5280", "sprites", "f_118264_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#sprites
    static void set_field_sprites(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "texturesByName", "field_5280", "sprites", "f_118264_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#missingSprite
    static jobject get_field_missingSprite(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "missingSprite", "field_46207", "missingSprite", "f_301625_"), "Lgql;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#missingSprite
    static void set_field_missingSprite(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "missingSprite", "field_46207", "missingSprite", "f_301625_"), "Lgql;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "location", "field_21749", "id", "f_118265_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "location", "field_21749", "id", "f_118265_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#maxTextureSize
    static jint get_field_maxTextureSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "maxSupportedTextureSize", "field_17899", "maxTextureSize", "f_118266_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#maxTextureSize
    static void set_field_maxTextureSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "maxSupportedTextureSize", "field_17899", "maxTextureSize", "f_118266_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "width", "field_43113", "width", "f_276067_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "width", "field_43113", "width", "f_276067_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "height", "field_43114", "height", "f_276070_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "height", "field_43114", "height", "f_276070_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.texture.SpriteAtlasTexture#mipLevel
    static jint get_field_mipLevel(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "mipLevel", "field_43115", "mipLevel", "f_276072_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.texture.SpriteAtlasTexture#mipLevel
    static void set_field_mipLevel(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "mipLevel", "field_43115", "mipLevel", "f_276072_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_4625", "load", "m_6704_"), "(Laue;)V");
    }

    static void load(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_load();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_upload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "upload", "method_45848", "upload", "m_247065_"), "(Lgqg$a;)V");
    }

    static void upload(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_upload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_save() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dumpContents", "method_49712", "save", "m_276079_"), "(Lakr;Ljava/nio/file/Path;)V");
    }

    static void save(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_save();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_dumpAtlasInfos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "dumpSpriteNames", "method_45849", "dumpAtlasInfos", "m_260988_"), "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/util/Map;)V");
    }

    static void dumpAtlasInfos(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_dumpAtlasInfos();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_tickAnimatedSprites() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "cycleAnimationFrames", "method_4612", "tickAnimatedSprites", "m_118270_"), "()V");
    }

    static void tickAnimatedSprites(const jobject& obj) {
                
       const auto methodID = methodID_tickAnimatedSprites();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "tick", "method_4622", "tick", "m_7673_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSprite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSprite", "method_4608", "getSprite", "m_118316_"), "(Lakr;)Lgql;");
    }

    static jobject getSprite(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSprite();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "clearTextureData", "method_4601", "clear", "m_118329_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "location", "method_24106", "getId", "m_118330_"), "()Lakr;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMaxTextureSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "maxSupportedTextureSize", "method_45850", "getMaxTextureSize", "m_245285_"), "()I");
    }

    static jint getMaxTextureSize(const jobject& obj) {
                
       const auto methodID = methodID_getMaxTextureSize();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getWidth", "method_49713", "getWidth", "m_276092_"), "()I");
    }

    static jint getWidth(const jobject& obj) {
                
       const auto methodID = methodID_getWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getHeight", "method_49714", "getHeight", "m_276095_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_applyTextureFilter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateFilter", "method_24198", "applyTextureFilter", "m_247255_"), "(Lgqg$a;)V");
    }

    static void applyTextureFilter(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_applyTextureFilter();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_SPRITEATLASTEXTURE_HPP