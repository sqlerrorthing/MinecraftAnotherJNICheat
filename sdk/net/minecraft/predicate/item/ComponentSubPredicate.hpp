// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ITEM_COMPONENTSUBPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_ITEM_COMPONENTSUBPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.item.ComponentSubPredicate
 * Remapped: dw
 */
namespace ComponentSubPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dw", "net/minecraft/advancements/critereon/SingleComponentItemPredicate", "net/minecraft/class_9365", "net/minecraft/predicate/item/ComponentSubPredicate", "net/minecraft/src/C_313258_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_58161", "test", "m_321281_"), "(Lcuq;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getComponentType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "componentType", "method_58163", "getComponentType", "m_318698_"), "()Lkp;");
    }

    static jobject getComponentType(const jobject& obj) {
                
       const auto methodID = methodID_getComponentType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_58167", "test", "m_318913_"), "(Lcuq;Ljava/lang/Object;)Z");
    }

    static jboolean _test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ITEM_COMPONENTSUBPREDICATE_HPP