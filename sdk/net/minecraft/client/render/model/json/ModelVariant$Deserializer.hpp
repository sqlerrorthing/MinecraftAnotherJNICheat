// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELVARIANT$DESERIALIZER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELVARIANT$DESERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelVariant$Deserializer
 * Remapped: ggk$a
 */
namespace ModelVariant$Deserializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggk$a", "net/minecraft/client/renderer/block/model/Variant$Deserializer", "net/minecraft/class_813$class_814", "net/minecraft/client/render/model/json/ModelVariant$Deserializer", "net/minecraft/src/C_4228_$C_4229_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.render.model.json.ModelVariant$Deserializer#DEFAULT_UV_LOCK
    [[maybe_unused]] static jboolean get_field_DEFAULT_UV_LOCK() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_UVLOCK", "field_32810", "DEFAULT_UV_LOCK", "f_173495_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticBooleanField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.json.ModelVariant$Deserializer#DEFAULT_UV_LOCK
    [[maybe_unused]] static void set_field_DEFAULT_UV_LOCK(const jboolean &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_UVLOCK", "field_32810", "DEFAULT_UV_LOCK", "f_173495_"), "Z");
        return MinecraftSDK::env->SetStaticBooleanField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.render.model.json.ModelVariant$Deserializer#DEFAULT_WEIGHT
    [[maybe_unused]] static jint get_field_DEFAULT_WEIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT_WEIGHT", "field_32811", "DEFAULT_WEIGHT", "f_173496_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.json.ModelVariant$Deserializer#DEFAULT_WEIGHT
    [[maybe_unused]] static void set_field_DEFAULT_WEIGHT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DEFAULT_WEIGHT", "field_32811", "DEFAULT_WEIGHT", "f_173496_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.render.model.json.ModelVariant$Deserializer#DEFAULT_X_ROTATION
    [[maybe_unused]] static jint get_field_DEFAULT_X_ROTATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_X_ROTATION", "field_32812", "DEFAULT_X_ROTATION", "f_173497_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.json.ModelVariant$Deserializer#DEFAULT_X_ROTATION
    [[maybe_unused]] static void set_field_DEFAULT_X_ROTATION(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEFAULT_X_ROTATION", "field_32812", "DEFAULT_X_ROTATION", "f_173497_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.client.render.model.json.ModelVariant$Deserializer#DEFAULT_Y_ROTATION
    [[maybe_unused]] static jint get_field_DEFAULT_Y_ROTATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEFAULT_Y_ROTATION", "field_32813", "DEFAULT_Y_ROTATION", "f_173498_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.render.model.json.ModelVariant$Deserializer#DEFAULT_Y_ROTATION
    [[maybe_unused]] static void set_field_DEFAULT_Y_ROTATION(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DEFAULT_Y_ROTATION", "field_32813", "DEFAULT_Y_ROTATION", "f_173498_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_deserialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deserialize", "method_3513", "deserialize", "deserialize"), "(Lcom/google/gson/JsonElement;Ljava/lang/reflect/Type;Lcom/google/gson/JsonDeserializationContext;)Lggk;");
    }

    static jobject deserialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_deserialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_deserializeUvLock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getUvLock", "method_3516", "deserializeUvLock", "m_111902_"), "(Lcom/google/gson/JsonObject;)Z");
    }

    static jboolean deserializeUvLock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deserializeUvLock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_deserializeRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockRotation", "method_3515", "deserializeRotation", "m_111896_"), "(Lcom/google/gson/JsonObject;)Lgsn;");
    }

    static jobject deserializeRotation(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deserializeRotation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_deserializeModel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getModel", "method_3514", "deserializeModel", "m_111898_"), "(Lcom/google/gson/JsonObject;)Lakr;");
    }

    static jobject deserializeModel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deserializeModel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_deserializeWeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getWeight", "method_3517", "deserializeWeight", "m_111900_"), "(Lcom/google/gson/JsonObject;)I");
    }

    static jint deserializeWeight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_deserializeWeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELVARIANT$DESERIALIZER_HPP