// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEST_TESTRUNCONTEXT$BUILDER_HPP
#define NET_MINECRAFT_TEST_TESTRUNCONTEXT$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.test.TestRunContext$Builder
 * Remapped: ta$a
 */
namespace TestRunContext$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ta$a", "net/minecraft/gametest/framework/GameTestRunner$Builder", "net/minecraft/class_4520$class_9115", "net/minecraft/test/TestRunContext$Builder", "net/minecraft/src/C_4892_$C_313811_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.test.TestRunContext$Builder#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "level", "field_48485", "world", "f_313924_"), "Laqu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestRunContext$Builder#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "level", "field_48485", "world", "f_313924_"), "Laqu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestRunContext$Builder#manager
    static jobject get_field_manager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "testTicker", "field_48486", "manager", "f_314246_"), "Ltd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestRunContext$Builder#manager
    static void set_field_manager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "testTicker", "field_48486", "manager", "f_314246_"), "Ltd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestRunContext$Builder#batcher
    static jobject get_field_batcher(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "batcher", "field_48487", "batcher", "f_314509_"), "Lta$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestRunContext$Builder#batcher
    static void set_field_batcher(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "batcher", "field_48487", "batcher", "f_314509_"), "Lta$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestRunContext$Builder#reuseSpawner
    static jobject get_field_reuseSpawner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "existingStructureSpawner", "field_48488", "reuseSpawner", "f_314482_"), "Lta$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestRunContext$Builder#reuseSpawner
    static void set_field_reuseSpawner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "existingStructureSpawner", "field_48488", "reuseSpawner", "f_314482_"), "Lta$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestRunContext$Builder#initialSpawner
    static jobject get_field_initialSpawner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "newStructureSpawner", "field_48489", "initialSpawner", "f_316948_"), "Lta$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestRunContext$Builder#initialSpawner
    static void set_field_initialSpawner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "newStructureSpawner", "field_48489", "initialSpawner", "f_316948_"), "Lta$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestRunContext$Builder#batches
    static jobject get_field_batches(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "batches", "field_48490", "batches", "f_315759_"), "Ljava/util/Collection;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestRunContext$Builder#batches
    static void set_field_batches(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "batches", "field_48490", "batches", "f_315759_"), "Ljava/util/Collection;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.test.TestRunContext$Builder#stopAfterFailure
    static jboolean get_field_stopAfterFailure(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "haltOnError", "field_52280", "stopAfterFailure", "f_336633_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.test.TestRunContext$Builder#stopAfterFailure
    static void set_field_stopAfterFailure(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "haltOnError", "field_52280", "stopAfterFailure", "f_336633_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromBatches", "method_56236", "of", "m_321232_"), "(Ljava/util/Collection;Laqu;)Lta$a;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_ofStates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fromInfo", "method_56238", "ofStates", "m_319523_"), "(Ljava/util/Collection;Laqu;)Lta$a;");
    }

    static jobject ofStates(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_ofStates();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__stopAfterFailure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "haltOnError", "method_61097", "stopAfterFailure", "m_340306_"), "(Z)Lta$a;");
    }

    static jobject _stopAfterFailure(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID__stopAfterFailure();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__initialSpawner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newStructureSpawner", "method_56237", "initialSpawner", "m_322147_"), "(Lta$c;)Lta$a;");
    }

    static jobject _initialSpawner(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__initialSpawner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__reuseSpawner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "existingStructureSpawner", "method_61096", "reuseSpawner", "m_338844_"), "(Ltm;)Lta$a;");
    }

    static jobject _reuseSpawner(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__reuseSpawner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__batcher() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "batcher", "method_61095", "batcher", "m_340428_"), "(Lta$b;)Lta$a;");
    }

    static jobject _batcher(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__batcher();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_56235", "build", "m_322128_"), "()Lta;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_TEST_TESTRUNCONTEXT$BUILDER_HPP