// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_VERTICALLYATTACHABLEBLOCKITEM_HPP
#define NET_MINECRAFT_ITEM_VERTICALLYATTACHABLEBLOCKITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.VerticallyAttachableBlockItem
 * Remapped: cwe
 */
namespace VerticallyAttachableBlockItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cwe", "net/minecraft/world/item/StandingAndWallBlockItem", "net/minecraft/class_1827", "net/minecraft/item/VerticallyAttachableBlockItem", "net/minecraft/src/C_1423_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.item.VerticallyAttachableBlockItem#wallBlock
    static jobject get_field_wallBlock(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "wallBlock", "field_8918", "wallBlock", "f_43246_"), "Ldfy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.item.VerticallyAttachableBlockItem#wallBlock
    static void set_field_wallBlock(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "wallBlock", "field_8918", "wallBlock", "f_43246_"), "Ldfy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.VerticallyAttachableBlockItem#verticalAttachmentDirection
    static jobject get_field_verticalAttachmentDirection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "attachmentDirection", "field_40240", "verticalAttachmentDirection", "f_244386_"), "Lji;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.VerticallyAttachableBlockItem#verticalAttachmentDirection
    static void set_field_verticalAttachmentDirection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "attachmentDirection", "field_40240", "verticalAttachmentDirection", "f_244386_"), "Lji;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canPlaceAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canPlace", "method_45431", "canPlaceAt", "m_246210_"), "(Ldcz;Ldtc;Ljd;)Z");
    }

    static jboolean canPlaceAt(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_canPlaceAt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getPlacementState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getPlacementState", "method_7707", "getPlacementState", "m_5965_"), "(Lcyd;)Ldtc;");
    }

    static jobject getPlacementState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlacementState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_appendBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registerBlocks", "method_7713", "appendBlocks", "m_6192_"), "(Ljava/util/Map;Lcul;)V");
    }

    static void appendBlocks(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_appendBlocks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ITEM_VERTICALLYATTACHABLEBLOCKITEM_HPP