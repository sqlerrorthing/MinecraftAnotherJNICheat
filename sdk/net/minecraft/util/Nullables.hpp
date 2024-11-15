// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_NULLABLES_HPP
#define NET_MINECRAFT_UTIL_NULLABLES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.Nullables
 * Remapped: x
 */
namespace Nullables {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("x", "net/minecraft/Optionull", "net/minecraft/class_8144", "net/minecraft/util/Nullables", "net/minecraft/src/C_268411_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_map() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "map", "method_49077", "map", "m_269382_"), "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;");
    }

    static jobject map(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_map();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_mapOrElse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "mapOrDefault", "method_49078", "mapOrElse", "m_269278_"), "(Ljava/lang/Object;Ljava/util/function/Function;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject mapOrElse(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_mapOrElse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_mapOrElseGet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "mapOrElse", "method_49079", "mapOrElseGet", "m_269543_"), "(Ljava/lang/Object;Ljava/util/function/Function;Ljava/util/function/Supplier;)Ljava/lang/Object;");
    }

    static jobject mapOrElseGet(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_mapOrElseGet();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getFirst() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "first", "method_49080", "getFirst", "m_269359_"), "(Ljava/util/Collection;)Ljava/lang/Object;");
    }

    static jobject getFirst(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getFirst();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getFirstOrElse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "firstOrDefault", "method_49081", "getFirstOrElse", "m_269248_"), "(Ljava/util/Collection;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject getFirstOrElse(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getFirstOrElse();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getFirstOrElseGet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "firstOrElse", "method_49082", "getFirstOrElseGet", "m_269262_"), "(Ljava/util/Collection;Ljava/util/function/Supplier;)Ljava/lang/Object;");
    }

    static jobject getFirstOrElseGet(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getFirstOrElseGet();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49089", "isEmpty", "m_269596_"), "([Ljava/lang/Object;)Z");
    }

    static jboolean isEmpty(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49091", "isEmpty", "m_269432_"), "([Z)Z");
    }

    static jboolean _isEmpty(const jarray& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49083", "isEmpty", "m_269589_"), "([B)Z");
    }

    static jboolean __isEmpty(const jarray& arg0, const jbyte& arg1) {
       const auto clazz = self();
       const auto methodID = methodID___isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID____isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49084", "isEmpty", "m_269516_"), "([C)Z");
    }

    static jboolean ___isEmpty(const jarray& arg0, const jchar& arg1) {
       const auto clazz = self();
       const auto methodID = methodID____isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_____isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49090", "isEmpty", "m_269165_"), "([S)Z");
    }

    static jboolean ____isEmpty(const jarray& arg0, const jshort& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_____isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID______isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49087", "isEmpty", "m_269216_"), "([I)Z");
    }

    static jboolean _____isEmpty(const jarray& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID______isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_______isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49088", "isEmpty", "m_269433_"), "([J)Z");
    }

    static jboolean ______isEmpty(const jarray& arg0, const jlong& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_______isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID________isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49086", "isEmpty", "m_269501_"), "([F)Z");
    }

    static jboolean _______isEmpty(const jarray& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID________isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_________isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isNullOrEmpty", "method_49085", "isEmpty", "m_269263_"), "([D)Z");
    }

    static jboolean ________isEmpty(const jarray& arg0, const jdouble& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_________isEmpty();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_UTIL_NULLABLES_HPP