// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_ZIPCOMPRESSOR_HPP
#define NET_MINECRAFT_UTIL_ZIPCOMPRESSOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.ZipCompressor
 * Remapped: axz
 */
namespace ZipCompressor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("axz", "net/minecraft/util/FileZipper", "net/minecraft/class_6397", "net/minecraft/util/ZipCompressor", "net/minecraft/src/C_140991_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.ZipCompressor#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33864", "LOGGER", "f_144691_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.ZipCompressor#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_33864", "LOGGER", "f_144691_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.ZipCompressor#file
    static jobject get_field_file(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "outputFile", "field_33865", "file", "f_144692_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.ZipCompressor#file
    static void set_field_file(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "outputFile", "field_33865", "file", "f_144692_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.ZipCompressor#temp
    static jobject get_field_temp(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tempFile", "field_33866", "temp", "f_144693_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.ZipCompressor#temp
    static void set_field_temp(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "tempFile", "field_33866", "temp", "f_144693_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.ZipCompressor#zip
    static jobject get_field_zip(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "fs", "field_33867", "zip", "f_144694_"), "Ljava/nio/file/FileSystem;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.ZipCompressor#zip
    static void set_field_zip(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "fs", "field_33867", "zip", "f_144694_"), "Ljava/nio/file/FileSystem;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_37163", "write", "m_144703_"), "(Ljava/nio/file/Path;Ljava/lang/String;)V");
    }

    static void write(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_37162", "copy", "m_144700_"), "(Ljava/nio/file/Path;Ljava/io/File;)V");
    }

    static void copy(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_copy();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_copyAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_37161", "copyAll", "m_144698_"), "(Ljava/nio/file/Path;)V");
    }

    static void copyAll(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyAll();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_ZIPCOMPRESSOR_HPP