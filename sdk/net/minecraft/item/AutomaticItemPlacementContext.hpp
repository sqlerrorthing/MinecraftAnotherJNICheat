// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_AUTOMATICITEMPLACEMENTCONTEXT_HPP
#define NET_MINECRAFT_ITEM_AUTOMATICITEMPLACEMENTCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.AutomaticItemPlacementContext
 * Remapped: cye
 */
namespace AutomaticItemPlacementContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cye", "net/minecraft/world/item/context/DirectionalPlaceContext", "net/minecraft/class_2968", "net/minecraft/item/AutomaticItemPlacementContext", "net/minecraft/src/C_1446_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.AutomaticItemPlacementContext#facing
    static jobject get_field_facing(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "direction", "field_13362", "facing", "f_43648_"), "Lji;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.AutomaticItemPlacementContext#facing
    static void set_field_facing(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "direction", "field_13362", "facing", "f_43648_"), "Lji;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getClickedPos", "method_8037", "getBlockPos", "m_8083_"), "()Ljd;");
    }

    static jobject getBlockPos(const jobject& obj) {
                
       const auto methodID = methodID_getBlockPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canPlace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canPlace", "method_7716", "canPlace", "m_7059_"), "()Z");
    }

    static jboolean canPlace(const jobject& obj) {
                
       const auto methodID = methodID_canPlace();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_canReplaceExisting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "replacingClickedOnBlock", "method_7717", "canReplaceExisting", "m_7058_"), "()Z");
    }

    static jboolean canReplaceExisting(const jobject& obj) {
                
       const auto methodID = methodID_canReplaceExisting();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlayerLookDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getNearestLookingDirection", "method_7715", "getPlayerLookDirection", "m_7820_"), "()Lji;");
    }

    static jobject getPlayerLookDirection(const jobject& obj) {
                
       const auto methodID = methodID_getPlayerLookDirection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlacementDirections() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getNearestLookingDirections", "method_7718", "getPlacementDirections", "m_6232_"), "()[Lji;");
    }

    static jobject getPlacementDirections(const jobject& obj) {
                
       const auto methodID = methodID_getPlacementDirections();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHorizontalPlayerFacing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getHorizontalDirection", "method_8042", "getHorizontalPlayerFacing", "m_8125_"), "()Lji;");
    }

    static jobject getHorizontalPlayerFacing(const jobject& obj) {
                
       const auto methodID = methodID_getHorizontalPlayerFacing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldCancelInteraction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "isSecondaryUseActive", "method_8046", "shouldCancelInteraction", "m_7078_"), "()Z");
    }

    static jboolean shouldCancelInteraction(const jobject& obj) {
                
       const auto methodID = methodID_shouldCancelInteraction();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlayerYaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getRotation", "method_8044", "getPlayerYaw", "m_7074_"), "()F");
    }

    static jfloat getPlayerYaw(const jobject& obj) {
                
       const auto methodID = methodID_getPlayerYaw();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_AUTOMATICITEMPLACEMENTCONTEXT_HPP