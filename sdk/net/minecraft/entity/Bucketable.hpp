// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_BUCKETABLE_HPP
#define NET_MINECRAFT_ENTITY_BUCKETABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.Bucketable
 * Remapped: cfg
 */
namespace Bucketable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cfg", "net/minecraft/world/entity/animal/Bucketable", "net/minecraft/class_5761", "net/minecraft/entity/Bucketable", "net/minecraft/src/C_141118_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_isFromBucket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "fromBucket", "method_6453", "isFromBucket", "m_27487_"), "()Z");
    }

    static jboolean isFromBucket(const jobject& obj) {
                
       const auto methodID = methodID_isFromBucket();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setFromBucket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "setFromBucket", "method_6454", "setFromBucket", "m_27497_"), "(Z)V");
    }

    static void setFromBucket(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setFromBucket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyDataToStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "saveToBucketTag", "method_6455", "copyDataToStack", "m_6872_"), "(Lcuq;)V");
    }

    static void copyDataToStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyDataToStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "loadFromBucketTag", "method_35170", "copyDataFromNbt", "m_142278_"), "(Lub;)V");
    }

    static void copyDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBucketItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBucketItemStack", "method_6452", "getBucketItem", "m_28282_"), "()Lcuq;");
    }

    static jobject getBucketItem(const jobject& obj) {
                
       const auto methodID = methodID_getBucketItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBucketFillSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "getPickupSound", "method_35171", "getBucketFillSound", "m_142623_"), "()Lavo;");
    }

    static jobject getBucketFillSound(const jobject& obj) {
                
       const auto methodID = methodID_getBucketFillSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__copyDataToStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "saveDefaultDataToBucketTag", "method_35167", "copyDataToStack", "m_148822_"), "(Lbtp;Lcuq;)V");
    }

    static void _copyDataToStack(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__copyDataToStack();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__copyDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "loadDefaultDataFromBucketTag", "method_35168", "copyDataFromNbt", "m_148825_"), "(Lbtp;Lub;)V");
    }

    static void _copyDataFromNbt(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__copyDataFromNbt();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_tryBucket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bucketMobPickup", "method_35169", "tryBucket", "m_148828_"), "(Lcmx;Lbqq;Lbtn;)Ljava/util/Optional;");
    }

    static jobject tryBucket(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_tryBucket();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_BUCKETABLE_HPP