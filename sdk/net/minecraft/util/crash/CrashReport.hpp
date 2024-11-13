// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_CRASH_CRASHREPORT_HPP
#define NET_MINECRAFT_UTIL_CRASH_CRASHREPORT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.crash.CrashReport
 * Remapped: o
 */
namespace CrashReport {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("o", "net/minecraft/CrashReport", "net/minecraft/class_128", "net/minecraft/util/crash/CrashReport", "net/minecraft/src/C_4883_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.crash.CrashReport#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_1091", "LOGGER", "f_127499_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_1091", "LOGGER", "f_127499_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.crash.CrashReport#DATE_TIME_FORMATTER
    [[maybe_unused]] static jobject get_field_DATE_TIME_FORMATTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DATE_TIME_FORMATTER", "field_39880", "DATE_TIME_FORMATTER", "f_241641_"), "Ljava/time/format/DateTimeFormatter;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#DATE_TIME_FORMATTER
    [[maybe_unused]] static void set_field_DATE_TIME_FORMATTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DATE_TIME_FORMATTER", "field_39880", "DATE_TIME_FORMATTER", "f_241641_"), "Ljava/time/format/DateTimeFormatter;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.crash.CrashReport#message
    static jobject get_field_message(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "title", "field_1087", "message", "f_127500_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#message
    static void set_field_message(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "title", "field_1087", "message", "f_127500_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.crash.CrashReport#cause
    static jobject get_field_cause(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "exception", "field_1093", "cause", "f_127501_"), "Ljava/lang/Throwable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#cause
    static void set_field_cause(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "exception", "field_1093", "cause", "f_127501_"), "Ljava/lang/Throwable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.crash.CrashReport#otherSections
    static jobject get_field_otherSections(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "details", "field_1089", "otherSections", "f_127503_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#otherSections
    static void set_field_otherSections(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "details", "field_1089", "otherSections", "f_127503_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.crash.CrashReport#file
    static jobject get_field_file(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "saveFile", "field_1090", "file", "f_127504_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#file
    static void set_field_file(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "saveFile", "field_1090", "file", "f_127504_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.crash.CrashReport#hasStackTrace
    static jboolean get_field_hasStackTrace(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "trackingStackTrace", "field_1086", "hasStackTrace", "f_127505_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#hasStackTrace
    static void set_field_hasStackTrace(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "trackingStackTrace", "field_1086", "hasStackTrace", "f_127505_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.crash.CrashReport#stackTrace
    static jobject get_field_stackTrace(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "uncategorizedStackTrace", "field_1088", "stackTrace", "f_127506_"), "[Ljava/lang/StackTraceElement;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#stackTrace
    static void set_field_stackTrace(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "uncategorizedStackTrace", "field_1088", "stackTrace", "f_127506_"), "[Ljava/lang/StackTraceElement;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.crash.CrashReport#systemDetailsSection
    static jobject get_field_systemDetailsSection(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "systemReport", "field_1092", "systemDetailsSection", "f_178624_"), "Lac;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.crash.CrashReport#systemDetailsSection
    static void set_field_systemDetailsSection(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "systemReport", "field_1092", "systemDetailsSection", "f_178624_"), "Lac;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getMessage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTitle", "method_561", "getMessage", "m_127511_"), "()Ljava/lang/String;");
    }

    static jobject getMessage(const jobject& obj) {
                
       const auto methodID = methodID_getMessage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCause() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getException", "method_564", "getCause", "m_127524_"), "()Ljava/lang/Throwable;");
    }

    static jobject getCause(const jobject& obj) {
                
       const auto methodID = methodID_getCause();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStackTrace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getDetails", "method_36147", "getStackTrace", "m_178625_"), "()Ljava/lang/String;");
    }

    static jobject getStackTrace(const jobject& obj) {
                
       const auto methodID = methodID_getStackTrace();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_addDetails() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getDetails", "method_555", "addDetails", "m_127519_"), "(Ljava/lang/StringBuilder;)V");
    }

    static void addDetails(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addDetails();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCauseAsString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getExceptionMessage", "method_557", "getCauseAsString", "m_127525_"), "()Ljava/lang/String;");
    }

    static jobject getCauseAsString(const jobject& obj) {
                
       const auto methodID = methodID_getCauseAsString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFriendlyReport", "method_60921", "asString", "m_339571_"), "(Ly;Ljava/util/List;)Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFriendlyReport", "method_60920", "asString", "m_127526_"), "(Ly;)Ljava/lang/String;");
    }

    static jobject _asString(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getSaveFile", "method_572", "getFile", "m_127527_"), "()Ljava/nio/file/Path;");
    }

    static jobject getFile(const jobject& obj) {
                
       const auto methodID = methodID_getFile();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeToFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveToFile", "method_569", "writeToFile", "m_127512_"), "(Ljava/nio/file/Path;Ly;Ljava/util/List;)Z");
    }

    static jboolean writeToFile(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_writeToFile();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__writeToFile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saveToFile", "method_60919", "writeToFile", "m_339810_"), "(Ljava/nio/file/Path;Ly;)Z");
    }

    static jboolean _writeToFile(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__writeToFile();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSystemDetailsSection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getSystemReport", "method_567", "getSystemDetailsSection", "m_178626_"), "()Lac;");
    }

    static jobject getSystemDetailsSection(const jobject& obj) {
                
       const auto methodID = methodID_getSystemDetailsSection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_addElement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addCategory", "method_562", "addElement", "m_127514_"), "(Ljava/lang/String;)Lp;");
    }

    static jobject addElement(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addElement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__addElement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addCategory", "method_556", "addElement", "m_127516_"), "(Ljava/lang/String;I)Lp;");
    }

    static jobject _addElement(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__addElement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "forThrowable", "method_560", "create", "m_127521_"), "(Ljava/lang/Throwable;Ljava/lang/String;)Lo;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_initCrashReport() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "preload", "method_24305", "initCrashReport", "m_127529_"), "()V");
    }

    static void initCrashReport() {
       const auto clazz = self();
       const auto methodID = methodID_initCrashReport();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_CRASH_CRASHREPORT_HPP