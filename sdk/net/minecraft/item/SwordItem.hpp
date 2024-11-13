// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_SWORDITEM_HPP
#define NET_MINECRAFT_ITEM_SWORDITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.SwordItem
 * Remapped: cwg
 */
namespace SwordItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cwg", "net/minecraft/world/item/SwordItem", "net/minecraft/class_1829", "net/minecraft/item/SwordItem", "net/minecraft/src/C_1425_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_createToolComponent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("k", "createToolProperties", "method_58417", "createToolComponent", "m_319740_"), "()Lcxx;");
    }

    static jobject createToolComponent() {
       const auto clazz = self();
       const auto methodID = methodID_createToolComponent();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_createAttributeModifiers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createAttributes", "method_57394", "createAttributeModifiers", "m_322253_"), "(Lcwi;IF)Lcxn;");
    }

    static jobject createAttributeModifiers(const jobject& arg0, const jint& arg1, const jfloat& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createAttributeModifiers();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_canMine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canAttackBlock", "method_7885", "canMine", "m_6777_"), "(Ldtc;Ldcw;Ljd;Lcmx;)Z");
    }

    static jboolean canMine(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_canMine();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_postHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hurtEnemy", "method_7873", "postHit", "m_7579_"), "(Lcuq;Lbtn;Lbtn;)Z");
    }

    static jboolean postHit(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_postHit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_postDamageEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "postHurtEnemy", "method_59978", "postDamageEntity", "m_338515_"), "(Lcuq;Lbtn;Lbtn;)V");
    }

    static void postDamageEntity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_postDamageEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ITEM_SWORDITEM_HPP