// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_UTIL_PERIODICRUNNERFACTORY$PERIODICRUNNER_HPP
#define NET_MINECRAFT_CLIENT_REALMS_UTIL_PERIODICRUNNERFACTORY$PERIODICRUNNER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner
 * Remapped: fev$e
 */
namespace PeriodicRunnerFactory$PeriodicRunner {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fev$e", "com/mojang/realmsclient/gui/task/DataFetcher$Task", "net/minecraft/class_7581$class_7586", "net/minecraft/client/realms/util/PeriodicRunnerFactory$PeriodicRunner", "net/minecraft/src/C_238486_$C_238474_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "field_39707", "name", "f_238608_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "field_39707", "name", "f_238608_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#task
    static jobject get_field_task(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "updater", "field_39708", "task", "f_238640_"), "Ljava/util/concurrent/Callable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#task
    static void set_field_task(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "updater", "field_39708", "task", "f_238640_"), "Ljava/util/concurrent/Callable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#unitDuration
    static jlong get_field_unitDuration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "period", "field_39709", "unitDuration", "f_238571_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#unitDuration
    static void set_field_unitDuration(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "period", "field_39709", "unitDuration", "f_238571_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#backoff
    static jobject get_field_backoff(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "repeatStrategy", "field_39710", "backoff", "f_238639_"), "Lfew;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#backoff
    static void set_field_backoff(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "repeatStrategy", "field_39710", "backoff", "f_238639_"), "Lfew;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#resultFuture
    static jobject get_field_resultFuture(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "pendingTask", "field_39711", "resultFuture", "f_238827_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#resultFuture
    static void set_field_resultFuture(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "pendingTask", "field_39711", "resultFuture", "f_238827_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#lastResult
    static jobject get_field_lastResult(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lastResult", "field_39712", "lastResult", "f_238610_"), "Lfev$d;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#lastResult
    static void set_field_lastResult(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lastResult", "field_39712", "lastResult", "f_238610_"), "Lfev$d;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#nextTime
    static jlong get_field_nextTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "nextUpdate", "field_39713", "nextTime", "f_238812_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.util.PeriodicRunnerFactory$PeriodicRunner#nextTime
    static void set_field_nextTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "nextUpdate", "field_39713", "nextTime", "f_238812_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateIfNeeded", "method_44639", "run", "m_239709_"), "(J)V");
    }

    static void run(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_reset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reset", "method_44638", "reset", "m_239964_"), "()V");
    }

    static void reset(const jobject& obj) {
                
       const auto methodID = methodID_reset();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_UTIL_PERIODICRUNNERFACTORY$PERIODICRUNNER_HPP