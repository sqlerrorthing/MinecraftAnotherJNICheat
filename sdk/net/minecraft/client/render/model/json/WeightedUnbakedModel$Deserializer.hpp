// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_WEIGHTEDUNBAKEDMODEL$DESERIALIZER_HPP
#define NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_WEIGHTEDUNBAKEDMODEL$DESERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.model.json.WeightedUnbakedModel$Deserializer
 * Remapped: ggj$a
 */
namespace WeightedUnbakedModel$Deserializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ggj$a", "net/minecraft/client/renderer/block/model/MultiVariant$Deserializer", "net/minecraft/class_807$class_808", "net/minecraft/client/render/model/json/WeightedUnbakedModel$Deserializer", "net/minecraft/src/C_4226_$C_4227_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_deserialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deserialize", "method_3499", "deserialize", "deserialize"), "(Lcom/google/gson/JsonElement;Ljava/lang/reflect/Type;Lcom/google/gson/JsonDeserializationContext;)Lggj;");
    }

    static jobject deserialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_deserialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_MODEL_JSON_WEIGHTEDUNBAKEDMODEL$DESERIALIZER_HPP