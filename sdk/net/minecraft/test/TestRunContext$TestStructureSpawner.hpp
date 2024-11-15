// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEST_TESTRUNCONTEXT$TESTSTRUCTURESPAWNER_HPP
#define NET_MINECRAFT_TEST_TESTRUNCONTEXT$TESTSTRUCTURESPAWNER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.test.TestRunContext$TestStructureSpawner
 * Remapped: ta$c
 */
namespace TestRunContext$TestStructureSpawner {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ta$c", "net/minecraft/gametest/framework/GameTestRunner$StructureSpawner", "net/minecraft/class_4520$class_9117", "net/minecraft/test/TestRunContext$TestStructureSpawner", "net/minecraft/src/C_4892_$C_313388_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.test.TestRunContext$TestStructureSpawner#REUSE
    [[maybe_unused]] static jobject get_field_REUSE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "IN_PLACE", "field_48491", "REUSE", "f_314859_"), "Lta$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.test.TestRunContext$TestStructureSpawner#REUSE
    [[maybe_unused]] static void set_field_REUSE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "IN_PLACE", "field_48491", "REUSE", "f_314859_"), "Lta$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.test.TestRunContext$TestStructureSpawner#NOOP
    [[maybe_unused]] static jobject get_field_NOOP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NOT_SET", "field_48492", "NOOP", "f_314095_"), "Lta$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.test.TestRunContext$TestStructureSpawner#NOOP
    [[maybe_unused]] static void set_field_NOOP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NOT_SET", "field_48492", "NOOP", "f_314095_"), "Lta$c;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_spawnStructure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("spawnStructure", "spawnStructure", "spawnStructure", "spawnStructure", "m_321592_"), "(Lsx;)Ljava/util/Optional;");
    }

    static jobject spawnStructure(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_spawnStructure();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onBatch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onBatchStart", "method_61098", "onBatch", "m_339414_"), "(Laqu;)V");
    }

    static void onBatch(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onBatch();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_TEST_TESTRUNCONTEXT$TESTSTRUCTURESPAWNER_HPP