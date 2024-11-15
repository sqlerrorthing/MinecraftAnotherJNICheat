// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELELEMENTTEXTURE$DESERIALIZER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELELEMENTTEXTURE$DESERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelElementTexture$Deserializer
 * Remapped: gga$a
 */
namespace ModelElementTexture$Deserializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gga$a", "net/minecraft/client/renderer/block/model/BlockFaceUV$Deserializer", "net/minecraft/class_787$class_788", "net/minecraft/client/render/model/json/ModelElementTexture$Deserializer", "net/minecraft/src/C_4203_$C_4204_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.render.model.json.ModelElementTexture$Deserializer#DEFAULT_ROTATION
    [[maybe_unused]] static jint get_field_DEFAULT_ROTATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_ROTATION", "field_32791", "DEFAULT_ROTATION", "f_173417_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.render.model.json.ModelElementTexture$Deserializer#DEFAULT_ROTATION
    [[maybe_unused]] static void set_field_DEFAULT_ROTATION(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_ROTATION", "field_32791", "DEFAULT_ROTATION", "f_173417_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_deserialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deserialize", "method_3418", "deserialize", "deserialize"), "(Lcom/google/gson/JsonElement;Ljava/lang/reflect/Type;Lcom/google/gson/JsonDeserializationContext;)Lgga;");
    }

    static jobject deserialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_deserialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_deserializeRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRotation", "method_3420", "deserializeRotation", "m_111407_"), "(Lcom/google/gson/JsonObject;)I");
    }

    static jint deserializeRotation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deserializeRotation();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_deserializeUVs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getUVs", "method_3419", "deserializeUVs", "m_111409_"), "(Lcom/google/gson/JsonObject;)[F");
    }

    static jfloat deserializeUVs(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deserializeUVs();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELELEMENTTEXTURE$DESERIALIZER_HPP