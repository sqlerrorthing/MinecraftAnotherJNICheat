// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_LIGHTPREDICATE$BUILDER_HPP
#define NET_MINECRAFT_PREDICATE_LIGHTPREDICATE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.LightPredicate$Builder
 * Remapped: dc$a
 */
namespace LightPredicate$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dc$a", "net/minecraft/advancements/critereon/LightPredicate$Builder", "net/minecraft/class_4552$class_6087", "net/minecraft/predicate/LightPredicate$Builder", "net/minecraft/src/C_1722_$C_141202_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.LightPredicate$Builder#light
    static jobject get_field_light(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "composite", "field_31078", "light", "f_153101_"), "Ldh$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.LightPredicate$Builder#light
    static void set_field_light(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "composite", "field_31078", "light", "f_153101_"), "Ldh$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "light", "method_35271", "create", "m_153103_"), "()Ldc$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__light() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setComposite", "method_35272", "light", "m_153104_"), "(Ldh$d;)Ldc$a;");
    }

    static jobject _light(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__light();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_35273", "build", "m_153106_"), "()Ldc;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_LIGHTPREDICATE$BUILDER_HPP