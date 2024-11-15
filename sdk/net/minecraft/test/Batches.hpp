// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEST_BATCHES_HPP
#define NET_MINECRAFT_TEST_BATCHES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.test.Batches
 * Remapped: ss
 */
namespace Batches {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ss", "net/minecraft/gametest/framework/GameTestBatchFactory", "net/minecraft/class_9113", "net/minecraft/test/Batches", "net/minecraft/src/C_313799_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.test.Batches#BATCH_SIZE
    [[maybe_unused]] static jint get_field_BATCH_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_TESTS_PER_BATCH", "field_48467", "BATCH_SIZE", "f_315550_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.test.Batches#BATCH_SIZE
    [[maybe_unused]] static void set_field_BATCH_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_TESTS_PER_BATCH", "field_48467", "BATCH_SIZE", "f_315550_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_createBatches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromTestFunction", "method_56194", "createBatches", "m_325023_"), "(Ljava/util/Collection;Laqu;)Ljava/util/Collection;");
    }

    static jobject createBatches(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createBatches();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "toGameTestInfo", "method_56198", "createState", "m_323029_"), "(Ltr;ILaqu;)Lsx;");
    }

    static jobject createState(const jobject& arg0, const jint& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createState();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_defaultBatcher() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromGameTestInfo", "method_56188", "defaultBatcher", "m_322110_"), "()Lta$b;");
    }

    static jobject defaultBatcher() {
       const auto clazz = self();
       const auto methodID = methodID_defaultBatcher();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_batcher() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromGameTestInfo", "method_61092", "batcher", "m_339681_"), "(I)Lta$b;");
    }

    static jobject batcher(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_batcher();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "toGameTestBatch", "method_56195", "create", "m_319733_"), "(Ljava/util/Collection;Ljava/lang/String;J)Lsr;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jlong& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_TEST_BATCHES_HPP