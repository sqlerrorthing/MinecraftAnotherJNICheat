// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_RULE_BLOCKSTATEMATCHRULETEST_HPP
#define NET_MINECRAFT_STRUCTURE_RULE_BLOCKSTATEMATCHRULETEST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.rule.BlockStateMatchRuleTest
 * Remapped: emx
 */
namespace BlockStateMatchRuleTest {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emx", "net/minecraft/world/level/levelgen/structure/templatesystem/BlockStateMatchTest", "net/minecraft/class_3820", "net/minecraft/structure/rule/BlockStateMatchRuleTest", "net/minecraft/src/C_2612_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.structure.rule.BlockStateMatchRuleTest#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_25001", "CODEC", "f_74089_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.structure.rule.BlockStateMatchRuleTest#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_25001", "CODEC", "f_74089_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.rule.BlockStateMatchRuleTest#blockState
    static jobject get_field_blockState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "blockState", "field_16870", "blockState", "f_74090_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.rule.BlockStateMatchRuleTest#blockState
    static void set_field_blockState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "blockState", "field_16870", "blockState", "f_74090_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "test", "method_16768", "test", "m_213865_"), "(Ldtc;Layw;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_16766", "getType", "m_7319_"), "()Leno;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_RULE_BLOCKSTATEMATCHRULETEST_HPP