// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_TEXTCODECS_HPP
#define NET_MINECRAFT_TEXT_TEXTCODECS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.TextCodecs
 * Remapped: xb
 */
namespace TextCodecs {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xb", "net/minecraft/network/chat/ComponentSerialization", "net/minecraft/class_8824", "net/minecraft/text/TextCodecs", "net/minecraft/src/C_302096_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.text.TextCodecs#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46597", "CODEC", "f_303288_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.TextCodecs#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46597", "CODEC", "f_303288_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.text.TextCodecs#REGISTRY_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_REGISTRY_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48540", "REGISTRY_PACKET_CODEC", "f_315335_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.TextCodecs#REGISTRY_PACKET_CODEC
    [[maybe_unused]] static void set_field_REGISTRY_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48540", "REGISTRY_PACKET_CODEC", "f_315335_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.text.TextCodecs#OPTIONAL_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_OPTIONAL_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OPTIONAL_STREAM_CODEC", "field_48985", "OPTIONAL_PACKET_CODEC", "f_315970_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.TextCodecs#OPTIONAL_PACKET_CODEC
    [[maybe_unused]] static void set_field_OPTIONAL_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OPTIONAL_STREAM_CODEC", "field_48985", "OPTIONAL_PACKET_CODEC", "f_315970_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.text.TextCodecs#UNLIMITED_REGISTRY_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_UNLIMITED_REGISTRY_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TRUSTED_STREAM_CODEC", "field_49666", "UNLIMITED_REGISTRY_PACKET_CODEC", "f_316335_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.TextCodecs#UNLIMITED_REGISTRY_PACKET_CODEC
    [[maybe_unused]] static void set_field_UNLIMITED_REGISTRY_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TRUSTED_STREAM_CODEC", "field_49666", "UNLIMITED_REGISTRY_PACKET_CODEC", "f_316335_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.text.TextCodecs#OPTIONAL_UNLIMITED_REGISTRY_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_OPTIONAL_UNLIMITED_REGISTRY_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TRUSTED_OPTIONAL_STREAM_CODEC", "field_49667", "OPTIONAL_UNLIMITED_REGISTRY_PACKET_CODEC", "f_316844_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.TextCodecs#OPTIONAL_UNLIMITED_REGISTRY_PACKET_CODEC
    [[maybe_unused]] static void set_field_OPTIONAL_UNLIMITED_REGISTRY_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "TRUSTED_OPTIONAL_STREAM_CODEC", "field_49667", "OPTIONAL_UNLIMITED_REGISTRY_PACKET_CODEC", "f_316844_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.text.TextCodecs#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TRUSTED_CONTEXT_FREE_STREAM_CODEC", "field_49668", "PACKET_CODEC", "f_314039_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.TextCodecs#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TRUSTED_CONTEXT_FREE_STREAM_CODEC", "field_49668", "PACKET_CODEC", "f_314039_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.text.TextCodecs#STRINGIFIED_CODEC
    [[maybe_unused]] static jobject get_field_STRINGIFIED_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FLAT_CODEC", "field_46598", "STRINGIFIED_CODEC", "f_303675_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.text.TextCodecs#STRINGIFIED_CODEC
    [[maybe_unused]] static void set_field_STRINGIFIED_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FLAT_CODEC", "field_46598", "STRINGIFIED_CODEC", "f_303675_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "flatCodec", "method_57973", "codec", "m_324597_"), "(I)Lcom/mojang/serialization/Codec;");
    }

    static jobject codec(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_combine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createFromList", "method_54169", "combine", "m_304932_"), "(Ljava/util/List;)Lxn;");
    }

    static jobject combine(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_combine();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_dispatchingCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createLegacyComponentMatcher", "method_54174", "dispatchingCodec", "m_306757_"), "([Lazk;Ljava/util/function/Function;Ljava/util/function/Function;Ljava/lang/String;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject dispatchingCodec(const jarray& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_dispatchingCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createCodec", "method_54166", "createCodec", "m_305392_"), "(Lcom/mojang/serialization/Codec;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_TEXT_TEXTCODECS_HPP