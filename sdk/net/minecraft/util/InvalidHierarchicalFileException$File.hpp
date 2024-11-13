// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_INVALIDHIERARCHICALFILEEXCEPTION$FILE_HPP
#define NET_MINECRAFT_UTIL_INVALIDHIERARCHICALFILEEXCEPTION$FILE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.InvalidHierarchicalFileException$File
 * Remapped: aku$a
 */
namespace InvalidHierarchicalFileException$File {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aku$a", "net/minecraft/server/ChainedJsonException$Entry", "net/minecraft/class_2973$class_2974", "net/minecraft/util/InvalidHierarchicalFileException$File", "net/minecraft/src/C_5269_$C_5271_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.util.InvalidHierarchicalFileException$File#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "filename", "field_13373", "name", "f_135913_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.util.InvalidHierarchicalFileException$File#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "filename", "field_13373", "name", "f_135913_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.InvalidHierarchicalFileException$File#keys
    static jobject get_field_keys(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "jsonKeys", "field_13374", "keys", "f_135914_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.InvalidHierarchicalFileException$File#keys
    static void set_field_keys(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "jsonKeys", "field_13374", "keys", "f_135914_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addJsonKey", "method_12858", "addKey", "m_135918_"), "(Ljava/lang/String;)V");
    }

    static void addKey(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addKey();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFilename", "method_36182", "getName", "m_179919_"), "()Ljava/lang/String;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_joinKeys() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getJsonKeys", "method_12857", "joinKeys", "m_135923_"), "()Ljava/lang/String;");
    }

    static jobject joinKeys(const jobject& obj) {
                
       const auto methodID = methodID_joinKeys();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_INVALIDHIERARCHICALFILEEXCEPTION$FILE_HPP