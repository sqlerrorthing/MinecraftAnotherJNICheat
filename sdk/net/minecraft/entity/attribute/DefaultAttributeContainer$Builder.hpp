// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ATTRIBUTE_DEFAULTATTRIBUTECONTAINER$BUILDER_HPP
#define NET_MINECRAFT_ENTITY_ATTRIBUTE_DEFAULTATTRIBUTECONTAINER$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.attribute.DefaultAttributeContainer$Builder
 * Remapped: buv$a
 */
namespace DefaultAttributeContainer$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("buv$a", "net/minecraft/world/entity/ai/attributes/AttributeSupplier$Builder", "net/minecraft/class_5132$class_5133", "net/minecraft/entity/attribute/DefaultAttributeContainer$Builder", "net/minecraft/src/C_557_$C_558_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.attribute.DefaultAttributeContainer$Builder#instances
    static jobject get_field_instances(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "builder", "field_23714", "instances", "f_22262_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.DefaultAttributeContainer$Builder#instances
    static void set_field_instances(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "builder", "field_23714", "instances", "f_22262_"), "Lcom/google/common/collect/ImmutableMap$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.DefaultAttributeContainer$Builder#unmodifiable
    static jboolean get_field_unmodifiable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "instanceFrozen", "field_23715", "unmodifiable", "f_22263_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.DefaultAttributeContainer$Builder#unmodifiable
    static void set_field_unmodifiable(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "instanceFrozen", "field_23715", "unmodifiable", "f_22263_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_checkedAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "create", "method_26870", "checkedAdd", "m_22274_"), "(Ljm;)Lbus;");
    }

    static jobject checkedAdd(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_checkedAdd();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_26867", "add", "m_22266_"), "(Ljm;)Lbuv$a;");
    }

    static jobject add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_26868", "add", "m_22268_"), "(Ljm;D)Lbuv$a;");
    }

    static jobject _add(const jobject& obj, const jobject& arg0, const jdouble& arg1) {
                
       const auto methodID = methodID__add();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_26866", "build", "m_22265_"), "()Lbuv;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_ATTRIBUTE_DEFAULTATTRIBUTECONTAINER$BUILDER_HPP