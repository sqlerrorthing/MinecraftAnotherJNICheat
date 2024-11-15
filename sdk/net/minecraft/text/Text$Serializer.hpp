// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_TEXT$SERIALIZER_HPP
#define NET_MINECRAFT_TEXT_TEXT$SERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.Text$Serializer
 * Remapped: wz$b
 */
namespace Text$Serializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("wz$b", "net/minecraft/network/chat/Component$SerializerAdapter", "net/minecraft/class_2561$class_8822", "net/minecraft/text/Text$Serializer", "net/minecraft/src/C_4996_$C_302142_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.text.Text$Serializer#registries
    static jobject get_field_registries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registries", "field_49665", "registries", "f_315688_"), "Ljo$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.text.Text$Serializer#registries
    static void set_field_registries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "registries", "field_49665", "registries", "f_315688_"), "Ljo$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_deserialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deserialize", "method_54161", "deserialize", "deserialize"), "(Lcom/google/gson/JsonElement;Ljava/lang/reflect/Type;Lcom/google/gson/JsonDeserializationContext;)Lxn;");
    }

    static jobject deserialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_deserialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_serialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "serialize", "method_54162", "serialize", "serialize"), "(Lwz;Ljava/lang/reflect/Type;Lcom/google/gson/JsonSerializationContext;)Lcom/google/gson/JsonElement;");
    }

    static jobject serialize(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_serialize();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_TEXT_TEXT$SERIALIZER_HPP