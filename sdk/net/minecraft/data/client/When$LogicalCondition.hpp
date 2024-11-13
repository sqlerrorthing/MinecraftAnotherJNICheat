// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_WHEN$LOGICALCONDITION_HPP
#define NET_MINECRAFT_DATA_CLIENT_WHEN$LOGICALCONDITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.When$LogicalCondition
 * Remapped: ns$a
 */
namespace When$LogicalCondition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ns$a", "net/minecraft/data/models/blockstates/Condition$CompositeCondition", "net/minecraft/class_4918$class_4919", "net/minecraft/data/client/When$LogicalCondition", "net/minecraft/src/C_4795_$C_4797_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.client.When$LogicalCondition#operator
    static jobject get_field_operator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "operation", "field_22848", "operator", "f_125139_"), "Lns$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.When$LogicalCondition#operator
    static void set_field_operator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "operation", "field_22848", "operator", "f_125139_"), "Lns$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.data.client.When$LogicalCondition#components
    static jobject get_field_components(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "subconditions", "field_22849", "components", "f_125140_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.When$LogicalCondition#components
    static void set_field_components(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "subconditions", "field_22849", "components", "f_125140_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validate", "method_25745", "validate", "m_7619_"), "(Ldtd;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get", "method_25748", "get", "get"), "()Lcom/google/gson/JsonElement;");
    }

    static jobject get(const jobject& obj) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_WHEN$LOGICALCONDITION_HPP