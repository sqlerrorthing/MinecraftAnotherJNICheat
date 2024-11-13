// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_VALUEOBJECT_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_VALUEOBJECT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.ValueObject
 * Remapped: fdc
 */
namespace ValueObject {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fdc", "com/mojang/realmsclient/dto/ValueObject", "net/minecraft/class_4352", "net/minecraft/client/realms/dto/ValueObject", "net/minecraft/src/C_3261_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getName", "method_25093", "getName", "m_87713_"), "(Ljava/lang/reflect/Field;)Ljava/lang/String;");
    }

    static jobject getName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isStatic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "isStatic", "method_25094", "isStatic", "m_87715_"), "(Ljava/lang/reflect/Field;)Z");
    }

    static jboolean isStatic(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isStatic();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_VALUEOBJECT_HPP