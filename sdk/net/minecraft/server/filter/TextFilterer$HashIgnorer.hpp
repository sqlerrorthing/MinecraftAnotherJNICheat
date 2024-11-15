// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_FILTER_TEXTFILTERER$HASHIGNORER_HPP
#define NET_MINECRAFT_SERVER_FILTER_TEXTFILTERER$HASHIGNORER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.filter.TextFilterer$HashIgnorer
 * Remapped: asa$a
 */
namespace TextFilterer$HashIgnorer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asa$a", "net/minecraft/server/network/TextFilterClient$IgnoreStrategy", "net/minecraft/class_5514$class_5515", "net/minecraft/server/filter/TextFilterer$HashIgnorer", "net/minecraft/src/C_42_$C_44_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.server.filter.TextFilterer$HashIgnorer#NEVER_IGNORE
    [[maybe_unused]] static jobject get_field_NEVER_IGNORE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NEVER_IGNORE", "field_26834", "NEVER_IGNORE", "f_10162_"), "Lasa$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.filter.TextFilterer$HashIgnorer#NEVER_IGNORE
    [[maybe_unused]] static void set_field_NEVER_IGNORE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NEVER_IGNORE", "field_26834", "NEVER_IGNORE", "f_10162_"), "Lasa$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.server.filter.TextFilterer$HashIgnorer#IGNORE_IF_MATCHES_ALL
    [[maybe_unused]] static jobject get_field_IGNORE_IF_MATCHES_ALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IGNORE_FULLY_FILTERED", "field_26835", "IGNORE_IF_MATCHES_ALL", "f_10163_"), "Lasa$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.server.filter.TextFilterer$HashIgnorer#IGNORE_IF_MATCHES_ALL
    [[maybe_unused]] static void set_field_IGNORE_IF_MATCHES_ALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IGNORE_FULLY_FILTERED", "field_26835", "IGNORE_IF_MATCHES_ALL", "f_10163_"), "Lasa$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_internalDropHashes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("ignoreOverThreshold", "ignoreOverThreshold", "method_33806", "internalDropHashes", "m_143738_"), "(I)Lasa$a;");
    }

    static jobject internalDropHashes(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_internalDropHashes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_dropHashes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("select", "select", "method_33808", "dropHashes", "m_143744_"), "(I)Lasa$a;");
    }

    static jobject dropHashes(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_dropHashes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shouldIgnore() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("shouldIgnore", "shouldIgnore", "shouldIgnore", "shouldIgnore", "m_10171_"), "(Ljava/lang/String;I)Z");
    }

    static jboolean shouldIgnore(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_shouldIgnore();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_FILTER_TEXTFILTERER$HASHIGNORER_HPP