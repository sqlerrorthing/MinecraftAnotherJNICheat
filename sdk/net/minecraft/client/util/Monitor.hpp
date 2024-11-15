// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_MONITOR_HPP
#define NET_MINECRAFT_CLIENT_UTIL_MONITOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.Monitor
 * Remapped: fah
 */
namespace Monitor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fah", "com/mojang/blaze3d/platform/Monitor", "net/minecraft/class_313", "net/minecraft/client/util/Monitor", "net/minecraft/src/C_3146_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.util.Monitor#handle
    static jlong get_field_handle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "monitor", "field_1800", "handle", "f_84936_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.Monitor#handle
    static void set_field_handle(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "monitor", "field_1800", "handle", "f_84936_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.Monitor#videoModes
    static jobject get_field_videoModes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "videoModes", "field_1797", "videoModes", "f_84937_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.Monitor#videoModes
    static void set_field_videoModes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "videoModes", "field_1797", "videoModes", "f_84937_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.Monitor#currentVideoMode
    static jobject get_field_currentVideoMode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentMode", "field_1802", "currentVideoMode", "f_84938_"), "Lfal;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.Monitor#currentVideoMode
    static void set_field_currentVideoMode(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "currentMode", "field_1802", "currentVideoMode", "f_84938_"), "Lfal;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.Monitor#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "x", "field_1799", "x", "f_84939_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.Monitor#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "x", "field_1799", "x", "f_84939_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.Monitor#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "y", "field_1798", "y", "f_84940_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.Monitor#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "y", "field_1798", "y", "f_84940_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_populateVideoModes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "refreshVideoModes", "method_1615", "populateVideoModes", "m_84943_"), "()V");
    }

    static void populateVideoModes(const jobject& obj) {
                
       const auto methodID = methodID_populateVideoModes();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_findClosestVideoMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPreferredVidMode", "method_1614", "findClosestVideoMode", "m_84948_"), "(Ljava/util/Optional;)Lfal;");
    }

    static jobject findClosestVideoMode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findClosestVideoMode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_findClosestVideoModeIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getVideoModeIndex", "method_1619", "findClosestVideoModeIndex", "m_84946_"), "(Lfal;)I");
    }

    static jint findClosestVideoModeIndex(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_findClosestVideoModeIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCurrentVideoMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCurrentMode", "method_1617", "getCurrentVideoMode", "m_84950_"), "()Lfal;");
    }

    static jobject getCurrentVideoMode(const jobject& obj) {
                
       const auto methodID = methodID_getCurrentVideoMode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getViewportX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getX", "method_1616", "getViewportX", "m_84951_"), "()I");
    }

    static jint getViewportX(const jobject& obj) {
                
       const auto methodID = methodID_getViewportX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getViewportY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getY", "method_1618", "getViewportY", "m_84952_"), "()I");
    }

    static jint getViewportY(const jobject& obj) {
                
       const auto methodID = methodID_getViewportY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getVideoMode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMode", "method_1620", "getVideoMode", "m_84944_"), "(I)Lfal;");
    }

    static jobject getVideoMode(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getVideoMode();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getVideoModeCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getModeCount", "method_1621", "getVideoModeCount", "m_84953_"), "()I");
    }

    static jint getVideoModeCount(const jobject& obj) {
                
       const auto methodID = methodID_getVideoModeCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHandle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getMonitor", "method_1622", "getHandle", "m_84954_"), "()J");
    }

    static jlong getHandle(const jobject& obj) {
                
       const auto methodID = methodID_getHandle();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_MONITOR_HPP