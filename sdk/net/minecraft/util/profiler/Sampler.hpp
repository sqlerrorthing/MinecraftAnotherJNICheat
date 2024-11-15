// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_PROFILER_SAMPLER_HPP
#define NET_MINECRAFT_UTIL_PROFILER_SAMPLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.profiler.Sampler
 * Remapped: bom
 */
namespace Sampler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bom", "net/minecraft/util/profiling/metrics/MetricSampler", "net/minecraft/class_5965", "net/minecraft/util/profiler/Sampler", "net/minecraft/src/C_141012_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.profiler.Sampler#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "field_33882", "name", "f_145987_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "name", "field_33882", "name", "f_145987_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "category", "field_29598", "type", "f_145988_"), "Lbol;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "category", "field_29598", "type", "f_145988_"), "Lbol;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler#retriever
    static jobject get_field_retriever(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "sampler", "field_29599", "retriever", "f_145989_"), "Ljava/util/function/DoubleSupplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler#retriever
    static void set_field_retriever(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "sampler", "field_29599", "retriever", "f_145989_"), "Ljava/util/function/DoubleSupplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler#ticksBuffer
    static jobject get_field_ticksBuffer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "ticks", "field_33883", "ticksBuffer", "f_145990_"), "Lio/netty/buffer/ByteBuf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler#ticksBuffer
    static void set_field_ticksBuffer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "ticks", "field_33883", "ticksBuffer", "f_145990_"), "Lio/netty/buffer/ByteBuf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler#valueBuffer
    static jobject get_field_valueBuffer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "values", "field_29600", "valueBuffer", "f_145991_"), "Lio/netty/buffer/ByteBuf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler#valueBuffer
    static void set_field_valueBuffer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "values", "field_29600", "valueBuffer", "f_145991_"), "Lio/netty/buffer/ByteBuf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler#active
    static jboolean get_field_active(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "isRunning", "field_29601", "active", "f_145992_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler#active
    static void set_field_active(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "isRunning", "field_29601", "active", "f_145992_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler#startAction
    static jobject get_field_startAction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "beforeTick", "field_29602", "startAction", "f_145993_"), "Ljava/lang/Runnable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler#startAction
    static void set_field_startAction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "beforeTick", "field_29602", "startAction", "f_145993_"), "Ljava/lang/Runnable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.util.profiler.Sampler#deviationChecker
    static jobject get_field_deviationChecker(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "thresholdTest", "field_29603", "deviationChecker", "f_145986_"), "Lbom$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.profiler.Sampler#deviationChecker
    static void set_field_deviationChecker(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "thresholdTest", "field_29603", "deviationChecker", "f_145986_"), "Lbom$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.profiler.Sampler#currentSample
    static jdouble get_field_currentSample(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "currentValue", "field_33884", "currentSample", "f_145994_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.profiler.Sampler#currentSample
    static void set_field_currentSample(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "currentValue", "field_33884", "currentSample", "f_145994_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_34776", "create", "m_146009_"), "(Ljava/lang/String;Lbol;Ljava/util/function/DoubleSupplier;)Lbom;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_34778", "create", "m_146004_"), "(Ljava/lang/String;Lbol;Ljava/lang/Object;Ljava/util/function/ToDoubleFunction;)Lbom;");
    }

    static jobject _create(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_34779", "builder", "m_146013_"), "(Ljava/lang/String;Lbol;Ljava/util/function/ToDoubleFunction;Ljava/lang/Object;)Lbom$a;");
    }

    static jobject builder(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onStartTick", "method_34780", "start", "m_146001_"), "()V");
    }

    static void start(const jobject& obj) {
                
       const auto methodID = methodID_start();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onEndTick", "method_34781", "sample", "m_146002_"), "(I)V");
    }

    static void sample(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_sample();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stop() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onFinished", "method_34782", "stop", "m_146018_"), "()V");
    }

    static void stop(const jobject& obj) {
                
       const auto methodID = methodID_stop();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_ensureActive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "verifyRunning", "method_34786", "ensureActive", "m_146026_"), "()V");
    }

    static void ensureActive(const jobject& obj) {
                
       const auto methodID = methodID_ensureActive();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRetriever() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSampler", "method_37170", "getRetriever", "m_146019_"), "()Ljava/util/function/DoubleSupplier;");
    }

    static jobject getRetriever(const jobject& obj) {
                
       const auto methodID = methodID_getRetriever();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getName", "method_37171", "getName", "m_146020_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getCategory", "method_37172", "getType", "m_146021_"), "()Lbol;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_collectData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "result", "method_37173", "collectData", "m_146024_"), "()Lbom$b;");
    }

    static jobject collectData(const jobject& obj) {
                
       const auto methodID = methodID_collectData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasDeviated() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "triggersThreshold", "method_37174", "hasDeviated", "m_146025_"), "()Z");
    }

    static jboolean hasDeviated(const jobject& obj) {
                
       const auto methodID = methodID_hasDeviated();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_PROFILER_SAMPLER_HPP