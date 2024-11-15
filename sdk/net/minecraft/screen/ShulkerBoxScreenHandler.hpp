// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SHULKERBOXSCREENHANDLER_HPP
#define NET_MINECRAFT_SCREEN_SHULKERBOXSCREENHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.ShulkerBoxScreenHandler
 * Remapped: crn
 */
namespace ShulkerBoxScreenHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("crn", "net/minecraft/world/inventory/ShulkerBoxMenu", "net/minecraft/class_1733", "net/minecraft/screen/ShulkerBoxScreenHandler", "net/minecraft/src/C_1302_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.screen.ShulkerBoxScreenHandler#INVENTORY_SIZE
    [[maybe_unused]] static jint get_field_INVENTORY_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CONTAINER_SIZE", "field_30841", "INVENTORY_SIZE", "f_150640_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.ShulkerBoxScreenHandler#INVENTORY_SIZE
    [[maybe_unused]] static void set_field_INVENTORY_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CONTAINER_SIZE", "field_30841", "INVENTORY_SIZE", "f_150640_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.screen.ShulkerBoxScreenHandler#inventory
    static jobject get_field_inventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "container", "field_7867", "inventory", "f_40186_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.ShulkerBoxScreenHandler#inventory
    static void set_field_inventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "container", "field_7867", "inventory", "f_40186_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stillValid", "method_7597", "canUse", "m_6875_"), "(Lcmx;)Z");
    }

    static jboolean canUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_quickMove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "quickMoveStack", "method_7601", "quickMove", "m_7648_"), "(Lcmx;I)Lcuq;");
    }

    static jobject quickMove(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_quickMove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onClosed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removed", "method_7595", "onClosed", "m_6877_"), "(Lcmx;)V");
    }

    static void onClosed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClosed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SHULKERBOXSCREENHANDLER_HPP