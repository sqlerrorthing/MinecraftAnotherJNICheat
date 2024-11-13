// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEST_GAMETESTBATCH_HPP
#define NET_MINECRAFT_TEST_GAMETESTBATCH_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.test.GameTestBatch
 * Remapped: sr
 */
namespace GameTestBatch {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("sr", "net/minecraft/gametest/framework/GameTestBatch", "net/minecraft/class_4514", "net/minecraft/test/GameTestBatch", "net/minecraft/src/C_4884_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.test.GameTestBatch#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "comp_2209", "id", "f_127539_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.GameTestBatch#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "comp_2209", "id", "f_127539_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.GameTestBatch#states
    static jobject get_field_states(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "gameTestInfos", "comp_2210", "states", "f_314676_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.GameTestBatch#states
    static void set_field_states(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "gameTestInfos", "comp_2210", "states", "f_314676_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.GameTestBatch#beforeBatchFunction
    static jobject get_field_beforeBatchFunction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "beforeBatchFunction", "comp_2211", "beforeBatchFunction", "f_127541_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.GameTestBatch#beforeBatchFunction
    static void set_field_beforeBatchFunction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "beforeBatchFunction", "comp_2211", "beforeBatchFunction", "f_127541_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.GameTestBatch#afterBatchFunction
    static jobject get_field_afterBatchFunction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "afterBatchFunction", "comp_2212", "afterBatchFunction", "f_177057_"), "Ljava/util/function/Consumer;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.GameTestBatch#afterBatchFunction
    static void set_field_afterBatchFunction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "afterBatchFunction", "comp_2212", "afterBatchFunction", "f_177057_"), "Ljava/util/function/Consumer;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.test.GameTestBatch#DEFAULT_BATCH
    [[maybe_unused]] static jobject get_field_DEFAULT_BATCH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_BATCH_NAME", "field_33145", "DEFAULT_BATCH", "f_177056_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.test.GameTestBatch#DEFAULT_BATCH
    [[maybe_unused]] static void set_field_DEFAULT_BATCH(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_BATCH_NAME", "field_33145", "DEFAULT_BATCH", "f_177056_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "name", "comp_2209", "id", "f_127539_"), "()Ljava/lang/String;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__states() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "gameTestInfos", "comp_2210", "states", "f_314676_"), "()Ljava/util/Collection;");
    }

    static jobject _states(const jobject& obj) {
                
       const auto methodID = methodID__states();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__beforeBatchFunction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "beforeBatchFunction", "comp_2211", "beforeBatchFunction", "f_127541_"), "()Ljava/util/function/Consumer;");
    }

    static jobject _beforeBatchFunction(const jobject& obj) {
                
       const auto methodID = methodID__beforeBatchFunction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__afterBatchFunction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "afterBatchFunction", "comp_2212", "afterBatchFunction", "f_177057_"), "()Ljava/util/function/Consumer;");
    }

    static jobject _afterBatchFunction(const jobject& obj) {
                
       const auto methodID = methodID__afterBatchFunction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_TEST_GAMETESTBATCH_HPP