// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_DUMMYPROFILER_HPP
#define NET_MINECRAFT_UTIL_PROFILER_DUMMYPROFILER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.DummyProfiler
 * Remapped: bnc
 */
namespace DummyProfiler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bnc", "net/minecraft/util/profiling/InactiveProfiler", "net/minecraft/class_3694", "net/minecraft/util/profiler/DummyProfiler", "net/minecraft/src/C_439_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.profiler.DummyProfiler#INSTANCE
    [[maybe_unused]] static jobject get_field_INSTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_16280", "INSTANCE", "f_18554_"), "Lbnc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.profiler.DummyProfiler#INSTANCE
    [[maybe_unused]] static void set_field_INSTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_16280", "INSTANCE", "f_18554_"), "Lbnc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_startTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "startTick", "method_16065", "startTick", "m_7242_"), "()V");
    }

    static void startTick(const jobject& obj) {
                
       const auto methodID = methodID_startTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_endTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "endTick", "method_16066", "endTick", "m_7241_"), "()V");
    }

    static void endTick(const jobject& obj) {
                
       const auto methodID = methodID_endTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_push() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "push", "method_15396", "push", "m_6180_"), "(Ljava/lang/String;)V");
    }

    static void push(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_push();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__push() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "push", "method_15400", "push", "m_6521_"), "(Ljava/util/function/Supplier;)V");
    }

    static void _push(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__push();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_markSampleType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "markForCharting", "method_37167", "markSampleType", "m_142259_"), "(Lbol;)V");
    }

    static void markSampleType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_markSampleType();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_pop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "pop", "method_15407", "pop", "m_7238_"), "()V");
    }

    static void pop(const jobject& obj) {
                
       const auto methodID = methodID_pop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_swap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "popPush", "method_15405", "swap", "m_6182_"), "(Ljava/lang/String;)V");
    }

    static void swap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_swap();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__swap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "popPush", "method_15403", "swap", "m_6523_"), "(Ljava/util/function/Supplier;)V");
    }

    static void _swap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__swap();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "incrementCounter", "method_24270", "visit", "m_183275_"), "(Ljava/lang/String;I)V");
    }

    static void visit(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_visit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__visit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "incrementCounter", "method_24271", "visit", "m_183536_"), "(Ljava/util/function/Supplier;I)V");
    }

    static void _visit(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__visit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getResults", "method_16064", "getResult", "m_5948_"), "()Lbne;");
    }

    static jobject getResult(const jobject& obj) {
                
       const auto methodID = methodID_getResult();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getEntry", "method_34696", "getInfo", "m_142431_"), "(Ljava/lang/String;)Lbmy$a;");
    }

    static jobject getInfo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSampleTargets() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getChartedPaths", "method_37168", "getSampleTargets", "m_142579_"), "()Ljava/util/Set;");
    }

    static jobject getSampleTargets(const jobject& obj) {
                
       const auto methodID = methodID_getSampleTargets();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_DUMMYPROFILER_HPP