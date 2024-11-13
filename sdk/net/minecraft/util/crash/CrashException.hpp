// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_CRASH_CRASHEXCEPTION_HPP
#define NET_MINECRAFT_UTIL_CRASH_CRASHEXCEPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.crash.CrashException
 * Remapped: z
 */
namespace CrashException {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("z", "net/minecraft/ReportedException", "net/minecraft/class_148", "net/minecraft/util/crash/CrashException", "net/minecraft/src/C_5204_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.crash.CrashException#report
    static jobject get_field_report(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "report", "field_1119", "report", "f_134758_"), "Lo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashException#report
    static void set_field_report(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "report", "field_1119", "report", "f_134758_"), "Lo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getReport() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getReport", "method_631", "getReport", "m_134761_"), "()Lo;");
    }

    static jobject getReport(const jobject& obj) {
                
       const auto methodID = methodID_getReport();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCause() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getCause", "getCause", "", "", "getCause"), "()Ljava/lang/Throwable;");
    }

    static jobject getCause(const jobject& obj) {
                
       const auto methodID = methodID_getCause();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getMessage", "getMessage", "", "", "getMessage"), "()Ljava/lang/String;");
    }

    static jobject getMessage(const jobject& obj) {
                
       const auto methodID = methodID_getMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_CRASH_CRASHEXCEPTION_HPP