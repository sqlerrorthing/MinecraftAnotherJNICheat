// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_THROWABLEDELIVERER_HPP
#define NET_MINECRAFT_UTIL_THROWABLEDELIVERER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.ThrowableDeliverer
 * Remapped: axv
 */
namespace ThrowableDeliverer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axv", "net/minecraft/util/ExceptionCollector", "net/minecraft/class_5127", "net/minecraft/util/ThrowableDeliverer", "net/minecraft/src/C_173_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.ThrowableDeliverer#throwable
    static jobject get_field_throwable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "result", "field_23694", "throwable", "f_13650_"), "Ljava/lang/Throwable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.ThrowableDeliverer#throwable
    static void set_field_throwable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "result", "field_23694", "throwable", "f_13650_"), "Ljava/lang/Throwable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_26807", "add", "m_13653_"), "(Ljava/lang/Throwable;)V");
    }

    static void add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_deliver() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "throwIfPresent", "method_26806", "deliver", "m_13652_"), "()V");
    }

    static void deliver(const jobject& obj) {
                
       const auto methodID = methodID_deliver();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_THROWABLEDELIVERER_HPP