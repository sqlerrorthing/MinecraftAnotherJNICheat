// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_AXEITEM_HPP
#define NET_MINECRAFT_ITEM_AXEITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.AxeItem
 * Remapped: csk
 */
namespace AxeItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("csk", "net/minecraft/world/item/AxeItem", "net/minecraft/class_1743", "net/minecraft/item/AxeItem", "net/minecraft/src/C_1321_"));
        }
        return cachedClass;
    };

    // getter for static protected field net.minecraft.item.AxeItem#STRIPPED_BLOCKS
    [[maybe_unused]] static jobject get_field_STRIPPED_BLOCKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STRIPPABLES", "field_7898", "STRIPPED_BLOCKS", "f_150683_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.item.AxeItem#STRIPPED_BLOCKS
    [[maybe_unused]] static void set_field_STRIPPED_BLOCKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STRIPPABLES", "field_7898", "STRIPPED_BLOCKS", "f_150683_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_useOnBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useOn", "method_7884", "useOnBlock", "m_6225_"), "(Lcyf;)Lbqr;");
    }

    static jobject useOnBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_useOnBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_shouldCancelStripAttempt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "playerHasShieldUseIntent", "method_59967", "shouldCancelStripAttempt", "m_340414_"), "(Lcyf;)Z");
    }

    static jboolean shouldCancelStripAttempt(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_shouldCancelStripAttempt();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_tryStrip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "evaluateNewBlockState", "method_54760", "tryStrip", "m_304772_"), "(Ldcw;Ljd;Lcmx;Ldtc;)Ljava/util/Optional;");
    }

    static jobject tryStrip(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_tryStrip();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getStrippedState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStripped", "method_34716", "getStrippedState", "m_150690_"), "(Ldtc;)Ljava/util/Optional;");
    }

    static jobject getStrippedState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStrippedState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_AXEITEM_HPP