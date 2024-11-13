// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_JSONUNBAKEDMODEL$GUILIGHT_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_JSONUNBAKEDMODEL$GUILIGHT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.JsonUnbakedModel$GuiLight
 * Remapped: ggb$b
 */
namespace JsonUnbakedModel$GuiLight {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggb$b", "net/minecraft/client/renderer/block/model/BlockModel$GuiLight", "net/minecraft/class_793$class_4751", "net/minecraft/client/render/model/json/JsonUnbakedModel$GuiLight", "net/minecraft/src/C_4205_$C_4207_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.render.model.json.JsonUnbakedModel$GuiLight#ITEM
    [[maybe_unused]] static jobject get_field_ITEM() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FRONT", "field_21858", "ITEM", "FRONT"), "Lggb$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.JsonUnbakedModel$GuiLight#ITEM
    [[maybe_unused]] static void set_field_ITEM(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FRONT", "field_21858", "ITEM", "FRONT"), "Lggb$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.render.model.json.JsonUnbakedModel$GuiLight#BLOCK
    [[maybe_unused]] static jobject get_field_BLOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SIDE", "field_21859", "BLOCK", "SIDE"), "Lggb$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.render.model.json.JsonUnbakedModel$GuiLight#BLOCK
    [[maybe_unused]] static void set_field_BLOCK(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SIDE", "field_21859", "BLOCK", "SIDE"), "Lggb$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.model.json.JsonUnbakedModel$GuiLight#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "field_21860", "name", "f_111519_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.JsonUnbakedModel$GuiLight#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "field_21860", "name", "f_111519_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lggb$b;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lggb$b;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_byName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getByName", "method_24300", "byName", "m_111527_"), "(Ljava/lang/String;)Lggb$b;");
    }

    static jobject byName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "lightLikeBlock", "method_24299", "isSide", "m_111526_"), "()Z");
    }

    static jboolean isSide(const jobject& obj) {
                
       const auto methodID = methodID_isSide();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_JSONUNBAKEDMODEL$GUILIGHT_HPP