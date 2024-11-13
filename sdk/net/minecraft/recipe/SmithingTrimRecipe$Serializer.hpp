// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RECIPE_SMITHINGTRIMRECIPE$SERIALIZER_HPP
#define NET_MINECRAFT_RECIPE_SMITHINGTRIMRECIPE$SERIALIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.recipe.SmithingTrimRecipe$Serializer
 * Remapped: czu$a
 */
namespace SmithingTrimRecipe$Serializer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("czu$a", "net/minecraft/world/item/crafting/SmithingTrimRecipe$Serializer", "net/minecraft/class_8062$class_8063", "net/minecraft/recipe/SmithingTrimRecipe$Serializer", "net/minecraft/src/C_265809_$C_265819_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.recipe.SmithingTrimRecipe$Serializer#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "CODEC", "field_46109", "CODEC", "f_291091_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.recipe.SmithingTrimRecipe$Serializer#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "CODEC", "field_46109", "CODEC", "f_291091_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.recipe.SmithingTrimRecipe$Serializer#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "STREAM_CODEC", "field_48365", "PACKET_CODEC", "f_314618_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.recipe.SmithingTrimRecipe$Serializer#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "STREAM_CODEC", "field_48365", "PACKET_CODEC", "f_314618_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_codec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53736", "codec", "m_292673_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject codec(const jobject& obj) {
                
       const auto methodID = methodID_codec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_packetCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "streamCodec", "method_56104", "packetCodec", "m_318841_"), "()Lyx;");
    }

    static jobject packetCodec(const jobject& obj) {
                
       const auto methodID = methodID_packetCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromNetwork", "method_48460", "read", "m_266515_"), "(Lwk;)Lczu;");
    }

    static jobject read(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "toNetwork", "method_48461", "write", "m_266337_"), "(Lwk;Lczu;)V");
    }

    static void write(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_RECIPE_SMITHINGTRIMRECIPE$SERIALIZER_HPP