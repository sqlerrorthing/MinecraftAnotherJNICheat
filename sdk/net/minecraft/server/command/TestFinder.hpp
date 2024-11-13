// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_TESTFINDER_HPP
#define NET_MINECRAFT_SERVER_COMMAND_TESTFINDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.TestFinder
 * Remapped: tq
 */
namespace TestFinder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("tq", "net/minecraft/gametest/framework/TestFinder", "net/minecraft/class_9123", "net/minecraft/server/command/TestFinder", "net/minecraft/src/C_313828_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.server.command.TestFinder#NOOP_TEST_FUNCTION_FINDER
    [[maybe_unused]] static jobject get_field_NOOP_TEST_FUNCTION_FINDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NO_FUNCTIONS", "field_48507", "NOOP_TEST_FUNCTION_FINDER", "f_315355_"), "Ltt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.server.command.TestFinder#NOOP_TEST_FUNCTION_FINDER
    [[maybe_unused]] static void set_field_NOOP_TEST_FUNCTION_FINDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NO_FUNCTIONS", "field_48507", "NOOP_TEST_FUNCTION_FINDER", "f_315355_"), "Ltt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.server.command.TestFinder#NOOP_STRUCTURE_BLOCK_FINDER
    [[maybe_unused]] static jobject get_field_NOOP_STRUCTURE_BLOCK_FINDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NO_STRUCTURES", "field_48508", "NOOP_STRUCTURE_BLOCK_FINDER", "f_315670_"), "Ltl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.server.command.TestFinder#NOOP_STRUCTURE_BLOCK_FINDER
    [[maybe_unused]] static void set_field_NOOP_STRUCTURE_BLOCK_FINDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NO_STRUCTURES", "field_48508", "NOOP_STRUCTURE_BLOCK_FINDER", "f_315670_"), "Ltl;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.TestFinder#testFunctionFinder
    static jobject get_field_testFunctionFinder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "testFunctionFinder", "field_48509", "testFunctionFinder", "f_315412_"), "Ltt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TestFinder#testFunctionFinder
    static void set_field_testFunctionFinder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "testFunctionFinder", "field_48509", "testFunctionFinder", "f_315412_"), "Ltt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.TestFinder#structureBlockPosFinder
    static jobject get_field_structureBlockPosFinder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "structureBlockPosFinder", "field_48510", "structureBlockPosFinder", "f_315198_"), "Ltl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TestFinder#structureBlockPosFinder
    static void set_field_structureBlockPosFinder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "structureBlockPosFinder", "field_48510", "structureBlockPosFinder", "f_315198_"), "Ltl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.TestFinder#commandSource
    static jobject get_field_commandSource(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "source", "field_48511", "commandSource", "f_315253_"), "Let;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TestFinder#commandSource
    static void set_field_commandSource(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "source", "field_48511", "commandSource", "f_315253_"), "Let;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.command.TestFinder#runnerFactory
    static jobject get_field_runnerFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "contextProvider", "field_48512", "runnerFactory", "f_314837_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.command.TestFinder#runnerFactory
    static void set_field_runnerFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "contextProvider", "field_48512", "runnerFactory", "f_314837_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_findStructureBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("findStructureBlockPos", "findStructureBlockPos", "", "", "m_319645_"), "()Ljava/util/stream/Stream;");
    }

    static jobject findStructureBlockPos(const jobject& obj) {
                
       const auto methodID = methodID_findStructureBlockPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createRunner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get", "method_56306", "createRunner", "m_323683_"), "()Ljava/lang/Object;");
    }

    static jobject createRunner(const jobject& obj) {
                
       const auto methodID = methodID_createRunner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCommandSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "source", "method_56305", "getCommandSource", "m_324045_"), "()Let;");
    }

    static jobject getCommandSource(const jobject& obj) {
                
       const auto methodID = methodID_getCommandSource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_findTestFunctions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("findTestFunctions", "findTestFunctions", "", "", "m_318842_"), "()Ljava/util/stream/Stream;");
    }

    static jobject findTestFunctions(const jobject& obj) {
                
       const auto methodID = methodID_findTestFunctions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_TESTFINDER_HPP