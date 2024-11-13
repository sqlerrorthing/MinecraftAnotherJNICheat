// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef MINECRAFT_SDK_BASE_HPP
#define MINECRAFT_SDK_BASE_HPP

#include <jni.h>
#define JNI_VERSION JNI_VERSION_1_6

#define IS_NULL(env, jObject) (env)->IsSameObject(jObject, nullptr)

#define JSTRING(str) (MinecraftSDK::env)->NewStringUTF(str.c_str())

#define IS_INSTANCE(first, second) MinecraftSDK::env->IsInstanceOf(first, second)

#define JSTRING_TO_STD_STRING(jObj) \
    ([&]() -> std::string { \
        jstring jstr = static_cast<jstring>(jObj); \
        const char *nativeString = MinecraftSDK::env->GetStringUTFChars(jstr, nullptr); \
        std::string cppString(nativeString); \
        struct ReleaseString { \
            JNIEnv* env; \
            jstring jstr; \
            const char* nativeString; \
            ~ReleaseString() { \
                env->ReleaseStringUTFChars(jstr, nativeString); \
            } \
        } release{MinecraftSDK::env, jstr, nativeString}; \
        return cppString; \
    })()

class MinecraftSDK {
public:
    enum Mappings {
        OBFUSCATED,
        MOJANG,
        INTERMEDIARY,
        YARN,
        SEARGE
    };

    static jint getEnumOrdinal(jobject enumObject, JNIEnv* _env = MinecraftSDK::env) {
        jclass enumClass = _env->GetObjectClass(enumObject);
        auto ordinalFieldID = _env->GetFieldID(enumClass, "ordinal", "I");

        jint ordinal = _env->GetIntField(enumObject, ordinalFieldID);
        return ordinal;
    }

    static bool isObjectsEqual(const jobject &obj1, const jobject &obj2, JNIEnv* env = MinecraftSDK::env) {
        if (obj1 == nullptr || obj2 == nullptr) {
            return false;
        }

        jclass objectClass = env->FindClass("java/lang/Object");
        jmethodID equalsMethod = env->GetMethodID(objectClass, "equals", "(Ljava/lang/Object;)Z");
        return env->CallBooleanMethod(obj1, equalsMethod, obj2);
    }

    static Mappings selectedMapping;

    static JavaVM* vm;
    static JNIEnv* env;
    
    static const char *getRemapped(
        const char *obfuscated,
        const char *mojang,
        const char *intermediary,
        const char *yarn,
        const char *searge
    ) {
        switch (selectedMapping) {
            case OBFUSCATED: return obfuscated;
            case MOJANG: return mojang;
            case INTERMEDIARY: return intermediary;
            case YARN: return yarn;
            case SEARGE: return searge;
        }
 
        return obfuscated; // if not found...
    }
    
    static int InitializeSDK(const Mappings &mapping = OBFUSCATED) {
        jsize count;
    
        if (JNI_GetCreatedJavaVMs(&vm, 1, &count) != JNI_OK || count == 0) {
            return JNI_ERR;
        }
        
        JavaVMAttachArgs attach_args;
        attach_args.version = JNI_VERSION;
    
        if (jint result = vm->GetEnv(reinterpret_cast<void **>(&env), JNI_VERSION); result == JNI_EDETACHED) {
          	if (result = vm->AttachCurrentThread(reinterpret_cast<void **>(&env), &attach_args); result != JNI_OK) {
          	    return JNI_ERR;
          	}
        }
 
        selectedMapping = mapping;
        return JNI_OK;
    }
    
};

#endif // MINECRAFT_SDK_BASE_HPP

// by sqlerrorthing with ❤️❤️❤️