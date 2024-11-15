// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_MINECARTITEM$1_HPP
#define NET_MINECRAFT_ITEM_MINECARTITEM$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.MinecartItem$1
 * Remapped: cve$1
 */
namespace MinecartItem$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cve$1", "net/minecraft/world/item/MinecartItem$1", "net/minecraft/class_1808$1", "net/minecraft/item/MinecartItem$1", "net/minecraft/src/C_1400_$C_1401_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.MinecartItem$1#defaultBehavior
    static jobject get_field_defaultBehavior(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "defaultDispenseItemBehavior", "field_8898", "defaultBehavior", "f_42944_"), "Lkw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.MinecartItem$1#defaultBehavior
    static void set_field_defaultBehavior(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "defaultDispenseItemBehavior", "field_8898", "defaultBehavior", "f_42944_"), "Lkw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_dispenseSilently() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "execute", "method_10135", "dispenseSilently", "m_7498_"), "(Lku;Lcuq;)Lcuq;");
    }

    static jobject dispenseSilently(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_dispenseSilently();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_playSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playSound", "method_10136", "playSound", "m_6823_"), "(Lku;)V");
    }

    static void playSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_MINECARTITEM$1_HPP