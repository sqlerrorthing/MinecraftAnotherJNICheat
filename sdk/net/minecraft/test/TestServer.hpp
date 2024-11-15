// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEST_TESTSERVER_HPP
#define NET_MINECRAFT_TEST_TESTSERVER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.test.TestServer
 * Remapped: tc
 */
namespace TestServer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("tc", "net/minecraft/gametest/framework/GameTestServer", "net/minecraft/class_6306", "net/minecraft/test/TestServer", "net/minecraft/src/C_141824_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.test.TestServer#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "LOGGER", "field_33156", "LOGGER", "f_177585_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "LOGGER", "field_33156", "LOGGER", "f_177585_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.test.TestServer#RESULT_STRING_LOG_INTERVAL
    [[maybe_unused]] static jint get_field_RESULT_STRING_LOG_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "PROGRESS_REPORT_INTERVAL", "field_33157", "RESULT_STRING_LOG_INTERVAL", "f_177586_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#RESULT_STRING_LOG_INTERVAL
    [[maybe_unused]] static void set_field_RESULT_STRING_LOG_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "PROGRESS_REPORT_INTERVAL", "field_33157", "RESULT_STRING_LOG_INTERVAL", "f_177586_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.test.TestServer#TEST_POS_XZ_RANGE
    [[maybe_unused]] static jint get_field_TEST_POS_XZ_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "TEST_POSITION_RANGE", "field_47175", "TEST_POS_XZ_RANGE", "f_303311_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#TEST_POS_XZ_RANGE
    [[maybe_unused]] static void set_field_TEST_POS_XZ_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "TEST_POSITION_RANGE", "field_47175", "TEST_POS_XZ_RANGE", "f_303311_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.test.TestServer#NONE_API_SERVICES
    [[maybe_unused]] static jobject get_field_NONE_API_SERVICES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "NO_SERVICES", "field_39441", "NONE_API_SERVICES", "f_236789_"), "Lalm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#NONE_API_SERVICES
    [[maybe_unused]] static void set_field_NONE_API_SERVICES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "NO_SERVICES", "field_39441", "NONE_API_SERVICES", "f_236789_"), "Lalm;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestServer#debugSampleLog
    static jobject get_field_debugSampleLog(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "sampleLogger", "field_48984", "debugSampleLog", "f_313906_"), "Lblr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#debugSampleLog
    static void set_field_debugSampleLog(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "sampleLogger", "field_48984", "debugSampleLog", "f_313906_"), "Lblr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestServer#batches
    static jobject get_field_batches(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "testBatches", "field_33158", "batches", "f_177587_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#batches
    static void set_field_batches(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "testBatches", "field_33158", "batches", "f_177587_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestServer#testFunctions
    static jobject get_field_testFunctions(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "testFunctions", "field_48493", "testFunctions", "f_315109_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#testFunctions
    static void set_field_testFunctions(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "testFunctions", "field_48493", "testFunctions", "f_315109_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestServer#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "spawnPos", "field_33159", "pos", "f_177588_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "spawnPos", "field_33159", "pos", "f_177588_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestServer#stopwatch
    static jobject get_field_stopwatch(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "stopwatch", "field_48494", "stopwatch", "f_315742_"), "Lcom/google/common/base/Stopwatch;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#stopwatch
    static void set_field_stopwatch(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "stopwatch", "field_48494", "stopwatch", "f_315742_"), "Lcom/google/common/base/Stopwatch;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.test.TestServer#GAME_RULES
    [[maybe_unused]] static jobject get_field_GAME_RULES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "TEST_GAME_RULES", "field_33160", "GAME_RULES", "f_177589_"), "Ldcs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#GAME_RULES
    [[maybe_unused]] static void set_field_GAME_RULES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("t", "TEST_GAME_RULES", "field_33160", "GAME_RULES", "f_177589_"), "Ldcs;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.test.TestServer#TEST_LEVEL
    [[maybe_unused]] static jobject get_field_TEST_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "WORLD_OPTIONS", "field_33161", "TEST_LEVEL", "f_243964_"), "Ldzw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#TEST_LEVEL
    [[maybe_unused]] static void set_field_TEST_LEVEL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("u", "WORLD_OPTIONS", "field_33161", "TEST_LEVEL", "f_243964_"), "Ldzw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestServer#testSet
    static jobject get_field_testSet(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "testTracker", "field_33162", "testSet", "f_177591_"), "Lti;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestServer#testSet
    static void set_field_testSet(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("v", "testTracker", "field_33162", "testSet", "f_177591_"), "Lti;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_40378", "create", "m_206606_"), "(Ljava/lang/Thread;Lerf$c;Latp;Ljava/util/Collection;Ljd;)Ltc;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_setupServer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "initServer", "method_3823", "setupServer", "m_7038_"), "()Z");
    }

    static jboolean setupServer(const jobject& obj) {
                
       const auto methodID = methodID_setupServer();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "tickServer", "method_3748", "tick", "m_5705_"), "(Ljava/util/function/BooleanSupplier;)V");
    }

    static void tick(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDebugSampleLog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getTickTimeLogger", "method_56593", "getDebugSampleLog", "m_318596_"), "()Lblu;");
    }

    static jobject getDebugSampleLog(const jobject& obj) {
                
       const auto methodID = methodID_getDebugSampleLog();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldPushTickTimeLog() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "isTickTimeLoggingEnabled", "method_56626", "shouldPushTickTimeLog", "m_319241_"), "()Z");
    }

    static jboolean shouldPushTickTimeLog(const jobject& obj) {
                
       const auto methodID = methodID_shouldPushTickTimeLog();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_runTasksTillTickEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v_", "waitUntilNextTick", "method_16208", "runTasksTillTickEnd", "m_130012_"), "()V");
    }

    static void runTasksTillTickEnd(const jobject& obj) {
                
       const auto methodID = methodID_runTasksTillTickEnd();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_addExtraSystemDetails() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillServerSystemReport", "method_3859", "addExtraSystemDetails", "m_142424_"), "(Lac;)Lac;");
    }

    static jobject addExtraSystemDetails(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addExtraSystemDetails();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_exit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "onServerExit", "method_3821", "exit", "m_6988_"), "()V");
    }

    static void exit(const jobject& obj) {
                
       const auto methodID = methodID_exit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setCrashReport() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onServerCrash", "method_3744", "setCrashReport", "m_7268_"), "(Lo;)V");
    }

    static void setCrashReport(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setCrashReport();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_runTestBatches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "startTests", "method_36096", "runTestBatches", "m_177624_"), "(Laqu;)V");
    }

    static void runTestBatches(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_runTestBatches();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isTesting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("br", "haveTestsStarted", "method_36098", "isTesting", "m_177628_"), "()Z");
    }

    static jboolean isTesting(const jobject& obj) {
                
       const auto methodID = methodID_isTesting();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isHardcore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "isHardcore", "method_3754", "isHardcore", "m_7035_"), "()Z");
    }

    static jboolean isHardcore(const jobject& obj) {
                
       const auto methodID = methodID_isHardcore();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOpPermissionLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getOperatorUserPermissionLevel", "method_3798", "getOpPermissionLevel", "m_7022_"), "()I");
    }

    static jint getOpPermissionLevel(const jobject& obj) {
                
       const auto methodID = methodID_getOpPermissionLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFunctionPermissionLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getFunctionCompilationLevel", "method_21714", "getFunctionPermissionLevel", "m_7034_"), "()I");
    }

    static jint getFunctionPermissionLevel(const jobject& obj) {
                
       const auto methodID = methodID_getFunctionPermissionLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldBroadcastRconToOps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "shouldRconBroadcast", "method_3732", "shouldBroadcastRconToOps", "m_6983_"), "()Z");
    }

    static jboolean shouldBroadcastRconToOps(const jobject& obj) {
                
       const auto methodID = methodID_shouldBroadcastRconToOps();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isDedicated() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "isDedicatedServer", "method_3816", "isDedicated", "m_6982_"), "()Z");
    }

    static jboolean isDedicated(const jobject& obj) {
                
       const auto methodID = methodID_isDedicated();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRateLimit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getRateLimitPacketsPerSecond", "method_30612", "getRateLimit", "m_7032_"), "()I");
    }

    static jint getRateLimit(const jobject& obj) {
                
       const auto methodID = methodID_getRateLimit();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_isUsingNativeTransport() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "isEpollEnabled", "method_3759", "isUsingNativeTransport", "m_6994_"), "()Z");
    }

    static jboolean isUsingNativeTransport(const jobject& obj) {
                
       const auto methodID = methodID_isUsingNativeTransport();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_areCommandBlocksEnabled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "isCommandBlockEnabled", "method_3812", "areCommandBlocksEnabled", "m_6993_"), "()Z");
    }

    static jboolean areCommandBlocksEnabled(const jobject& obj) {
                
       const auto methodID = methodID_areCommandBlocksEnabled();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isRemote() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "isPublished", "method_3860", "isRemote", "m_6992_"), "()Z");
    }

    static jboolean isRemote(const jobject& obj) {
                
       const auto methodID = methodID_isRemote();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldBroadcastConsoleToOps() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("M_", "shouldInformAdmins", "method_9201", "shouldBroadcastConsoleToOps", "m_6102_"), "()Z");
    }

    static jboolean shouldBroadcastConsoleToOps(const jobject& obj) {
                
       const auto methodID = methodID_shouldBroadcastConsoleToOps();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isHost() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isSingleplayerOwner", "method_19466", "isHost", "m_7779_"), "(Lcom/mojang/authlib/GameProfile;)Z");
    }

    static jboolean isHost(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isHost();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_TEST_TESTSERVER_HPP