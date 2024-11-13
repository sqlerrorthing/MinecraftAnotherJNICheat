// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_WORLD_OPTIONALCHUNK$LOADFAILURE_HPP
#define NET_MINECRAFT_SERVER_WORLD_OPTIONALCHUNK$LOADFAILURE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.world.OptionalChunk$LoadFailure
 * Remapped: aqc$a
 */
namespace OptionalChunk$LoadFailure {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aqc$a", "net/minecraft/server/level/ChunkResult$Fail", "net/minecraft/class_9259$class_9260", "net/minecraft/server/world/OptionalChunk$LoadFailure", "net/minecraft/src/C_313292_$C_313601_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.server.world.OptionalChunk$LoadFailure#error
    static jobject get_field_error(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "error", "comp_2367", "error", "f_314236_"), "Ljava/util/function/Supplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.world.OptionalChunk$LoadFailure#error
    static void set_field_error(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "error", "comp_2367", "error", "f_314236_"), "Ljava/util/function/Supplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_isPresent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isSuccess", "method_57122", "isPresent", "m_321137_"), "()Z");
    }

    static jboolean isPresent(const jobject& obj) {
                
       const auto methodID = methodID_isPresent();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_orElse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "orElse", "method_57130", "orElse", "m_318814_"), "(Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject orElse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_orElse();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getError() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getError", "method_57129", "getError", "m_321629_"), "()Ljava/lang/String;");
    }

    static jobject getError(const jobject& obj) {
                
       const auto methodID = methodID_getError();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_ifPresent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "ifSuccess", "method_57126", "ifPresent", "m_320477_"), "(Ljava/util/function/Consumer;)Laqc;");
    }

    static jobject ifPresent(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_ifPresent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_map() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "map", "method_57127", "map", "m_320014_"), "(Ljava/util/function/Function;)Laqc;");
    }

    static jobject map(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_map();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_orElseThrow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "orElseThrow", "method_57132", "orElseThrow", "m_319590_"), "(Ljava/util/function/Supplier;)Ljava/lang/Object;");
    }

    static jobject orElseThrow(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_orElseThrow();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__error() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "error", "comp_2367", "error", "f_314236_"), "()Ljava/util/function/Supplier;");
    }

    static jobject _error(const jobject& obj) {
                
       const auto methodID = methodID__error();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SERVER_WORLD_OPTIONALCHUNK$LOADFAILURE_HPP