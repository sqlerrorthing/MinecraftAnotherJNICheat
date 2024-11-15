// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BOOTSTRAP_HPP
#define NET_MINECRAFT_BOOTSTRAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.Bootstrap
 * Remapped: akt
 */
namespace Bootstrap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("akt", "net/minecraft/server/Bootstrap", "net/minecraft/class_2966", "net/minecraft/Bootstrap", "net/minecraft/src/C_5267_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.Bootstrap#SYSOUT
    [[maybe_unused]] static jobject get_field_SYSOUT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STDOUT", "field_13358", "SYSOUT", "f_135866_"), "Ljava/io/PrintStream;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.Bootstrap#SYSOUT
    [[maybe_unused]] static void set_field_SYSOUT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STDOUT", "field_13358", "SYSOUT", "f_135866_"), "Ljava/io/PrintStream;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.Bootstrap#initialized
    [[maybe_unused]] static jboolean get_field_initialized() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "isBootstrapped", "field_13357", "initialized", "f_135867_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticBooleanField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.Bootstrap#initialized
    [[maybe_unused]] static void set_field_initialized(const jboolean &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "isBootstrapped", "field_13357", "initialized", "f_135867_"), "Z");
        return MinecraftSDK::env->SetStaticBooleanField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.Bootstrap#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_13359", "LOGGER", "f_135868_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.Bootstrap#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "LOGGER", "field_13359", "LOGGER", "f_135868_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.Bootstrap#LOAD_TIME
    [[maybe_unused]] static jobject get_field_LOAD_TIME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "bootstrapDuration", "field_44781", "LOAD_TIME", "f_285608_"), "Ljava/util/concurrent/atomic/AtomicLong;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.Bootstrap#LOAD_TIME
    [[maybe_unused]] static void set_field_LOAD_TIME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "bootstrapDuration", "field_44781", "LOAD_TIME", "f_285608_"), "Ljava/util/concurrent/atomic/AtomicLong;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_initialize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootStrap", "method_12851", "initialize", "m_135870_"), "()V");
    }

    static void initialize() {
       const auto clazz = self();
       const auto methodID = methodID_initialize();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_collectMissingTranslations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "checkTranslations", "method_12848", "collectMissingTranslations", "m_135871_"), "(Ljava/lang/Iterable;Ljava/util/function/Function;Ljava/util/Set;)V");
    }

    static void collectMissingTranslations(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_collectMissingTranslations();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_collectMissingGameRuleTranslations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "checkGameruleTranslations", "method_27732", "collectMissingGameRuleTranslations", "m_135877_"), "(Ljava/util/Set;)V");
    }

    static void collectMissingGameRuleTranslations(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_collectMissingGameRuleTranslations();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getMissingTranslations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getMissingTranslations", "method_17597", "getMissingTranslations", "m_135886_"), "()Ljava/util/Set;");
    }

    static jobject getMissingTranslations() {
       const auto clazz = self();
       const auto methodID = methodID_getMissingTranslations();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_ensureBootstrapped() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "checkBootstrapCalled", "method_36235", "ensureBootstrapped", "m_179912_"), "(Ljava/util/function/Supplier;)V");
    }

    static void ensureBootstrapped(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_ensureBootstrapped();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createNotBootstrappedException() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createBootstrapException", "method_36237", "createNotBootstrappedException", "m_179916_"), "(Ljava/util/function/Supplier;)Ljava/lang/RuntimeException;");
    }

    static jobject createNotBootstrappedException(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createNotBootstrappedException();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_logMissing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "validate", "method_17598", "logMissing", "m_135889_"), "()V");
    }

    static void logMissing() {
       const auto clazz = self();
       const auto methodID = methodID_logMissing();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_setOutputStreams() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "wrapStreams", "method_12852", "setOutputStreams", "m_135890_"), "()V");
    }

    static void setOutputStreams() {
       const auto clazz = self();
       const auto methodID = methodID_setOutputStreams();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_println() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "realStdoutPrintln", "method_12847", "println", "m_135875_"), "(Ljava/lang/String;)V");
    }

    static void println(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_println();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BOOTSTRAP_HPP