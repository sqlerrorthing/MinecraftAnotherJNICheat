// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_TAG_PAINTINGVARIANTTAGS_HPP
#define NET_MINECRAFT_REGISTRY_TAG_PAINTINGVARIANTTAGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.tag.PaintingVariantTags
 * Remapped: awo
 */
namespace PaintingVariantTags {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("awo", "net/minecraft/tags/PaintingVariantTags", "net/minecraft/class_7406", "net/minecraft/registry/tag/PaintingVariantTags", "net/minecraft/src/C_212957_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.registry.tag.PaintingVariantTags#PLACEABLE
    [[maybe_unused]] static jobject get_field_PLACEABLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PLACEABLE", "field_38929", "PLACEABLE", "f_215870_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.registry.tag.PaintingVariantTags#PLACEABLE
    [[maybe_unused]] static void set_field_PLACEABLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "PLACEABLE", "field_38929", "PLACEABLE", "f_215870_"), "Lawu;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_43384", "of", "m_215873_"), "(Ljava/lang/String;)Lawu;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_TAG_PAINTINGVARIANTTAGS_HPP