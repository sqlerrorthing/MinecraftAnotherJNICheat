// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_ICONS_HPP
#define NET_MINECRAFT_CLIENT_UTIL_ICONS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.Icons
 * Remapped: fad
 */
namespace Icons {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fad", "com/mojang/blaze3d/platform/IconSet", "net/minecraft/class_8518", "net/minecraft/client/util/Icons", "net/minecraft/src/C_279509_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.util.Icons#RELEASE
    [[maybe_unused]] static jobject get_field_RELEASE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RELEASE", "field_44650", "RELEASE", "RELEASE"), "Lfad;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.util.Icons#RELEASE
    [[maybe_unused]] static void set_field_RELEASE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RELEASE", "field_44650", "RELEASE", "RELEASE"), "Lfad;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.util.Icons#SNAPSHOT
    [[maybe_unused]] static jobject get_field_SNAPSHOT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SNAPSHOT", "field_44651", "SNAPSHOT", "SNAPSHOT"), "Lfad;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.util.Icons#SNAPSHOT
    [[maybe_unused]] static void set_field_SNAPSHOT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SNAPSHOT", "field_44651", "SNAPSHOT", "SNAPSHOT"), "Lfad;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.util.Icons#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "path", "field_44652", "path", "f_279589_"), "[Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.Icons#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "path", "field_44652", "path", "f_279589_"), "[Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfad;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfad;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getIcons() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStandardIcons", "method_51418", "getIcons", "m_280284_"), "(Lasq;)Ljava/util/List;");
    }

    static jobject getIcons(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getIcons();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMacIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getMacIcon", "method_51420", "getMacIcon", "m_280095_"), "(Lasq;)Latw;");
    }

    static jobject getMacIcon(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMacIcon();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIcon() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFile", "method_51419", "getIcon", "m_280117_"), "(Lasq;Ljava/lang/String;)Latw;");
    }

    static jobject getIcon(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getIcon();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_ICONS_HPP