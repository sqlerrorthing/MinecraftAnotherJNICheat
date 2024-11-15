// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONDITION_INVERTEDLOOTCONDITION_HPP
#define NET_MINECRAFT_LOOT_CONDITION_INVERTEDLOOTCONDITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.condition.InvertedLootCondition
 * Remapped: euz
 */
namespace InvertedLootCondition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("euz", "net/minecraft/world/level/storage/loot/predicates/InvertedLootItemCondition", "net/minecraft/class_207", "net/minecraft/loot/condition/InvertedLootCondition", "net/minecraft/src/C_2994_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.condition.InvertedLootCondition#term
    static jobject get_field_term(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "term", "comp_1873", "term", "f_81681_"), "Levc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.condition.InvertedLootCondition#term
    static void set_field_term(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "term", "comp_1873", "term", "f_81681_"), "Levc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.condition.InvertedLootCondition#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45865", "CODEC", "f_291412_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.condition.InvertedLootCondition#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45865", "CODEC", "f_291412_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getType", "method_29325", "getType", "m_7940_"), "()Levd;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_888", "test", "test"), "(Lerr;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRequiredParameters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getReferencedContextParams", "method_293", "getRequiredParameters", "m_6231_"), "()Ljava/util/Set;");
    }

    static jobject getRequiredParameters(const jobject& obj) {
                
       const auto methodID = methodID_getRequiredParameters();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validate", "method_292", "validate", "m_6169_"), "(Lerx;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "invert", "method_889", "builder", "m_81694_"), "(Levc$a;)Levc$a;");
    }

    static jobject builder(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__term() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "term", "comp_1873", "term", "f_81681_"), "()Levc;");
    }

    static jobject _term(const jobject& obj) {
                
       const auto methodID = methodID__term();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONDITION_INVERTEDLOOTCONDITION_HPP