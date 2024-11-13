// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_LOGGING_LOGFILECOMPRESSOR$LOGFILEITERABLE_HPP
#define NET_MINECRAFT_UTIL_LOGGING_LOGFILECOMPRESSOR$LOGFILEITERABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.logging.LogFileCompressor$LogFileIterable
 * Remapped: blx$d
 */
namespace LogFileCompressor$LogFileIterable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("blx$d", "net/minecraft/util/eventlog/EventLogDirectory$FileList", "net/minecraft/class_7929$class_7933", "net/minecraft/util/logging/LogFileCompressor$LogFileIterable", "net/minecraft/src/C_260394_$C_260425_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.util.logging.LogFileCompressor$LogFileIterable#logs
    static jobject get_field_logs(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "files", "field_41294", "logs", "f_260732_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.logging.LogFileCompressor$LogFileIterable#logs
    static void set_field_logs(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "files", "field_41294", "logs", "f_260732_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_removeExpired() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "prune", "method_47562", "removeExpired", "m_261245_"), "(Ljava/time/LocalDate;I)Lblx$d;");
    }

    static jobject removeExpired(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_removeExpired();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_compressAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compressAll", "method_47560", "compressAll", "m_261127_"), "()Lblx$d;");
    }

    static jobject compressAll(const jobject& obj) {
                
       const auto methodID = methodID_compressAll();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_iterator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("iterator", "iterator", "", "", "iterator"), "()Ljava/util/Iterator;");
    }

    static jobject iterator(const jobject& obj) {
                
       const auto methodID = methodID_iterator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stream", "method_47563", "stream", "m_260849_"), "()Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_toIdSet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "ids", "method_47564", "toIdSet", "m_261047_"), "()Ljava/util/Set;");
    }

    static jobject toIdSet(const jobject& obj) {
                
       const auto methodID = methodID_toIdSet();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_LOGGING_LOGFILECOMPRESSOR$LOGFILEITERABLE_HPP