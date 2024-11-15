// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_WHEN_HPP
#define NET_MINECRAFT_DATA_CLIENT_WHEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.When
 * Remapped: ns
 */
namespace When {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ns", "net/minecraft/data/models/blockstates/Condition", "net/minecraft/class_4918", "net/minecraft/data/client/When", "net/minecraft/src/C_4795_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validate", "method_25745", "validate", "m_7619_"), "(Ldtd;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "condition", "method_25744", "create", "m_125135_"), "()Lns$c;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_allOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "and", "method_35870", "allOf", "m_176293_"), "([Lns;)Lns;");
    }

    static jobject allOf(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_allOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_anyOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "or", "method_25746", "anyOf", "m_125137_"), "([Lns;)Lns;");
    }

    static jobject anyOf(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_anyOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_WHEN_HPP