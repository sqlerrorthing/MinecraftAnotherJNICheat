// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_TEXTCOLLECTOR_HPP
#define NET_MINECRAFT_CLIENT_UTIL_TEXTCOLLECTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.TextCollector
 * Remapped: fgd
 */
namespace TextCollector {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgd", "net/minecraft/client/ComponentCollector", "net/minecraft/class_5222", "net/minecraft/client/util/TextCollector", "net/minecraft/src/C_3377_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.util.TextCollector#texts
    static jobject get_field_texts(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "parts", "field_25260", "texts", "f_90672_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.util.TextCollector#texts
    static void set_field_texts(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "parts", "field_25260", "texts", "f_90672_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "append", "method_27462", "add", "m_90675_"), "(Lxe;)V");
    }

    static void add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRawCombined() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getResult", "method_27461", "getRawCombined", "m_90674_"), "()Lxe;");
    }

    static jobject getRawCombined(const jobject& obj) {
                
       const auto methodID = methodID_getRawCombined();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCombined() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getResultOrEmpty", "method_27463", "getCombined", "m_90677_"), "()Lxe;");
    }

    static jobject getCombined(const jobject& obj) {
                
       const auto methodID = methodID_getCombined();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "reset", "method_35690", "clear", "m_167712_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_UTIL_TEXTCOLLECTOR_HPP