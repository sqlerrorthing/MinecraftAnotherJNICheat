// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_SPRITEATLASMANAGER$ATLAS_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_SPRITEATLASMANAGER$ATLAS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.SpriteAtlasManager$Atlas
 * Remapped: gsl$a
 */
namespace SpriteAtlasManager$Atlas {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gsl$a", "net/minecraft/client/resources/model/AtlasSet$AtlasEntry", "net/minecraft/class_4724$class_7772", "net/minecraft/client/render/model/SpriteAtlasManager$Atlas", "net/minecraft/src/C_243561_$C_243609_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.render.model.SpriteAtlasManager$Atlas#atlas
    static jobject get_field_atlas(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "atlas", "comp_1051", "atlas", "f_244361_"), "Lgqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.SpriteAtlasManager$Atlas#atlas
    static void set_field_atlas(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "atlas", "comp_1051", "atlas", "f_244361_"), "Lgqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.render.model.SpriteAtlasManager$Atlas#atlasInfoLocation
    static jobject get_field_atlasInfoLocation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "atlasInfoLocation", "comp_1168", "atlasInfoLocation", "f_260723_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.SpriteAtlasManager$Atlas#atlasInfoLocation
    static void set_field_atlasInfoLocation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "atlasInfoLocation", "comp_1168", "atlasInfoLocation", "f_260723_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__atlas() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "atlas", "comp_1051", "atlas", "f_244361_"), "()Lgqk;");
    }

    static jobject _atlas(const jobject& obj) {
                
       const auto methodID = methodID__atlas();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__atlasInfoLocation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "atlasInfoLocation", "comp_1168", "atlasInfoLocation", "f_260723_"), "()Lakr;");
    }

    static jobject _atlasInfoLocation(const jobject& obj) {
                
       const auto methodID = methodID__atlasInfoLocation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_SPRITEATLASMANAGER$ATLAS_HPP