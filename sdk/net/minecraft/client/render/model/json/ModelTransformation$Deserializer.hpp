// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELTRANSFORMATION$DESERIALIZER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELTRANSFORMATION$DESERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.ModelTransformation$Deserializer
 * Remapped: ggi$a
 */
namespace ModelTransformation$Deserializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggi$a", "net/minecraft/client/renderer/block/model/ItemTransforms$Deserializer", "net/minecraft/class_809$class_810", "net/minecraft/client/render/model/json/ModelTransformation$Deserializer", "net/minecraft/src/C_4222_$C_4224_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_deserialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deserialize", "method_3505", "deserialize", "deserialize"), "(Lcom/google/gson/JsonElement;Ljava/lang/reflect/Type;Lcom/google/gson/JsonDeserializationContext;)Lggi;");
    }

    static jobject deserialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_deserialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_parseModelTransformation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTransform", "method_3504", "parseModelTransformation", "m_269518_"), "(Lcom/google/gson/JsonDeserializationContext;Lcom/google/gson/JsonObject;Lcun;)Lggh;");
    }

    static jobject parseModelTransformation(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_parseModelTransformation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_MODELTRANSFORMATION$DESERIALIZER_HPP