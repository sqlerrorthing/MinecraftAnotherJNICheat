// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_HORSESCREENHANDLER_HPP
#define NET_MINECRAFT_SCREEN_HORSESCREENHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.HorseScreenHandler
 * Remapped: cqv
 */
namespace HorseScreenHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqv", "net/minecraft/world/inventory/HorseInventoryMenu", "net/minecraft/class_1724", "net/minecraft/screen/HorseScreenHandler", "net/minecraft/src/C_1271_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.screen.HorseScreenHandler#inventory
    static jobject get_field_inventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "horseContainer", "field_7836", "inventory", "f_39653_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.HorseScreenHandler#inventory
    static void set_field_inventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "horseContainer", "field_7836", "inventory", "f_39653_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.HorseScreenHandler#horseArmorInventory
    static jobject get_field_horseArmorInventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "armorContainer", "field_48834", "horseArmorInventory", "f_314456_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.HorseScreenHandler#horseArmorInventory
    static void set_field_horseArmorInventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "armorContainer", "field_48834", "horseArmorInventory", "f_314456_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.HorseScreenHandler#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "horse", "field_7837", "entity", "f_39654_"), "Lchi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.HorseScreenHandler#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "horse", "field_7837", "entity", "f_39654_"), "Lchi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.HorseScreenHandler#field_48835
    [[maybe_unused]] static jint get_field_field_48835() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SLOT_BODY_ARMOR", "field_48835", "field_48835", "f_314190_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.HorseScreenHandler#field_48835
    [[maybe_unused]] static void set_field_field_48835(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "SLOT_BODY_ARMOR", "field_48835", "field_48835", "f_314190_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.HorseScreenHandler#field_48836
    [[maybe_unused]] static jint get_field_field_48836() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "SLOT_HORSE_INVENTORY_START", "field_48836", "field_48836", "f_316240_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.HorseScreenHandler#field_48836
    [[maybe_unused]] static void set_field_field_48836(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "SLOT_HORSE_INVENTORY_START", "field_48836", "field_48836", "f_316240_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
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

#endif // NET_MINECRAFT_SCREEN_HORSESCREENHANDLER_HPP