// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_UTIL$OPERATINGSYSTEM_HPP
#define NET_MINECRAFT_UTIL_UTIL$OPERATINGSYSTEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Util$OperatingSystem
 * Remapped: ad$a
 */
namespace Util$OperatingSystem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ad$a", "net/minecraft/Util$OS", "net/minecraft/class_156$class_158", "net/minecraft/util/Util$OperatingSystem", "net/minecraft/src/C_5322_$C_5330_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.Util$OperatingSystem#LINUX
    [[maybe_unused]] static jobject get_field_LINUX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LINUX", "field_1135", "LINUX", "LINUX"), "Lad$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Util$OperatingSystem#LINUX
    [[maybe_unused]] static void set_field_LINUX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LINUX", "field_1135", "LINUX", "LINUX"), "Lad$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Util$OperatingSystem#SOLARIS
    [[maybe_unused]] static jobject get_field_SOLARIS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SOLARIS", "field_1134", "SOLARIS", "SOLARIS"), "Lad$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Util$OperatingSystem#SOLARIS
    [[maybe_unused]] static void set_field_SOLARIS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SOLARIS", "field_1134", "SOLARIS", "SOLARIS"), "Lad$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Util$OperatingSystem#WINDOWS
    [[maybe_unused]] static jobject get_field_WINDOWS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "WINDOWS", "field_1133", "WINDOWS", "WINDOWS"), "Lad$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Util$OperatingSystem#WINDOWS
    [[maybe_unused]] static void set_field_WINDOWS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "WINDOWS", "field_1133", "WINDOWS", "WINDOWS"), "Lad$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Util$OperatingSystem#OSX
    [[maybe_unused]] static jobject get_field_OSX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OSX", "field_1137", "OSX", "OSX"), "Lad$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Util$OperatingSystem#OSX
    [[maybe_unused]] static void set_field_OSX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "OSX", "field_1137", "OSX", "OSX"), "Lad$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.util.Util$OperatingSystem#UNKNOWN
    [[maybe_unused]] static jobject get_field_UNKNOWN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNKNOWN", "field_1132", "UNKNOWN", "UNKNOWN"), "Lad$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.Util$OperatingSystem#UNKNOWN
    [[maybe_unused]] static void set_field_UNKNOWN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "UNKNOWN", "field_1132", "UNKNOWN", "UNKNOWN"), "Lad$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.Util$OperatingSystem#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "telemetryName", "field_34894", "name", "f_183994_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.Util$OperatingSystem#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "telemetryName", "field_34894", "name", "f_183994_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lad$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lad$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_open() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openUri", "method_673", "open", "m_137648_"), "(Ljava/net/URI;)V");
    }

    static void open(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_open();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__open() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openFile", "method_672", "open", "m_137644_"), "(Ljava/io/File;)V");
    }

    static void _open(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__open();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___open() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openPath", "method_60932", "open", "m_338824_"), "(Ljava/nio/file/Path;)V");
    }

    static void __open(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___open();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getURIOpenCommand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getOpenUriArguments", "method_674", "getURIOpenCommand", "m_338887_"), "(Ljava/net/URI;)[Ljava/lang/String;");
    }

    static jobject getURIOpenCommand(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getURIOpenCommand();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID____open() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "openUri", "method_670", "open", "m_137646_"), "(Ljava/lang/String;)V");
    }

    static void ___open(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID____open();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "telemetryName", "method_38649", "getName", "m_183999_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_UTIL$OPERATINGSYSTEM_HPP