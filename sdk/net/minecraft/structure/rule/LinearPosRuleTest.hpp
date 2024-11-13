// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_RULE_LINEARPOSRULETEST_HPP
#define NET_MINECRAFT_STRUCTURE_RULE_LINEARPOSRULETEST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.rule.LinearPosRuleTest
 * Remapped: enc
 */
namespace LinearPosRuleTest {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("enc", "net/minecraft/world/level/levelgen/structure/templatesystem/LinearPosTest", "net/minecraft/class_4993", "net/minecraft/structure/rule/LinearPosRuleTest", "net/minecraft/src/C_2616_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.rule.LinearPosRuleTest#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_25004", "CODEC", "f_74147_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.rule.LinearPosRuleTest#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_25004", "CODEC", "f_74147_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.rule.LinearPosRuleTest#minChance
    static jfloat get_field_minChance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minChance", "field_23339", "minChance", "f_74148_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.rule.LinearPosRuleTest#minChance
    static void set_field_minChance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minChance", "field_23339", "minChance", "f_74148_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.rule.LinearPosRuleTest#maxChance
    static jfloat get_field_maxChance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxChance", "field_23340", "maxChance", "f_74149_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.rule.LinearPosRuleTest#maxChance
    static void set_field_maxChance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxChance", "field_23340", "maxChance", "f_74149_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.rule.LinearPosRuleTest#minDistance
    static jint get_field_minDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minDist", "field_23341", "minDistance", "f_74150_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.rule.LinearPosRuleTest#minDistance
    static void set_field_minDistance(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "minDist", "field_23341", "minDistance", "f_74150_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.structure.rule.LinearPosRuleTest#maxDistance
    static jint get_field_maxDistance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "maxDist", "field_23342", "maxDistance", "f_74151_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.rule.LinearPosRuleTest#maxDistance
    static void set_field_maxDistance(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "maxDist", "field_23342", "maxDistance", "f_74151_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_26406", "test", "m_213782_"), "(Ljd;Ljd;Ljd;Layw;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_26404", "getType", "m_6158_"), "()Lenh;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_RULE_LINEARPOSRULETEST_HPP