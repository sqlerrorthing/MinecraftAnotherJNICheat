// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ITEMGROUP$ENTRIES_HPP
#define NET_MINECRAFT_ITEM_ITEMGROUP$ENTRIES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.ItemGroup$Entries
 * Remapped: cta$e
 */
namespace ItemGroup$Entries {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cta$e", "net/minecraft/world/item/CreativeModeTab$Output", "net/minecraft/class_1761$class_7704", "net/minecraft/item/ItemGroup$Entries", "net/minecraft/src/C_1336_$C_243411_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "accept", "method_45417", "add", "m_246267_"), "(Lcuq;Lcta$g;)V");
    }

    static void add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "accept", "method_45420", "add", "m_246342_"), "(Lcuq;)V");
    }

    static void _add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "accept", "method_45422", "add", "m_245282_"), "(Ldcv;Lcta$g;)V");
    }

    static void __add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID____add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "accept", "method_45421", "add", "m_246326_"), "(Ldcv;)V");
    }

    static void ___add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID____add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acceptAll", "method_45424", "addAll", "m_246233_"), "(Ljava/util/Collection;Lcta$g;)V");
    }

    static void addAll(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addAll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__addAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "acceptAll", "method_45423", "addAll", "m_246601_"), "(Ljava/util/Collection;)V");
    }

    static void _addAll(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__addAll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ITEMGROUP$ENTRIES_HPP