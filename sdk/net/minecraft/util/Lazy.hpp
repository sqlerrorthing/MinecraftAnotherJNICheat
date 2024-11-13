// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_LAZY_HPP
#define NET_MINECRAFT_UTIL_LAZY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Lazy
 * Remapped: ayi
 */
namespace Lazy {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ayi", "net/minecraft/util/LazyLoadedValue", "net/minecraft/class_3528", "net/minecraft/util/Lazy", "net/minecraft/src/C_184_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.Lazy#supplier
    static jobject get_field_supplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "factory", "field_15719", "supplier", "f_13967_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Lazy#supplier
    static void set_field_supplier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "factory", "field_15719", "supplier", "f_13967_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_15332", "get", "m_13971_"), "()Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_LAZY_HPP