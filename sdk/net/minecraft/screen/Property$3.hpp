// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_PROPERTY$3_HPP
#define NET_MINECRAFT_SCREEN_PROPERTY$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.Property$3
 * Remapped: cqn$3
 */
namespace Property$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqn$3", "net/minecraft/world/inventory/DataSlot$3", "net/minecraft/class_3915$3", "net/minecraft/screen/Property$3", "net/minecraft/src/C_1253_$C_1256_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.screen.Property$3#value
    static jint get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "value", "field_17312", "value", "f_39426_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.Property$3#value
    static void set_field_value(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "value", "field_17312", "value", "f_39426_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get", "method_17407", "get", "m_6501_"), "()I");
    }

    static jint get(const jobject& obj) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_17404", "set", "m_6422_"), "(I)V");
    }

    static void set(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_PROPERTY$3_HPP