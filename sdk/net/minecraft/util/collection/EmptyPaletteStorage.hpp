// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_COLLECTION_EMPTYPALETTESTORAGE_HPP
#define NET_MINECRAFT_UTIL_COLLECTION_EMPTYPALETTESTORAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.collection.EmptyPaletteStorage
 * Remapped: azu
 */
namespace EmptyPaletteStorage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("azu", "net/minecraft/util/ZeroBitStorage", "net/minecraft/class_6502", "net/minecraft/util/collection/EmptyPaletteStorage", "net/minecraft/src/C_182790_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.collection.EmptyPaletteStorage#EMPTY_DATA
    [[maybe_unused]] static jlong get_field_EMPTY_DATA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RAW", "field_34401", "EMPTY_DATA", "f_184787_"), "[J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.collection.EmptyPaletteStorage#EMPTY_DATA
    [[maybe_unused]] static void set_field_EMPTY_DATA(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RAW", "field_34401", "EMPTY_DATA", "f_184787_"), "[J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.collection.EmptyPaletteStorage#size
    static jint get_field_size(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "size", "field_34402", "size", "f_184788_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.EmptyPaletteStorage#size
    static void set_field_size(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "size", "field_34402", "size", "f_184788_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_swap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAndSet", "method_15214", "swap", "m_13516_"), "(II)I");
    }

    static jint swap(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_swap();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "set", "method_15210", "set", "m_13524_"), "(II)V");
    }

    static void set(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_15211", "get", "m_13514_"), "(I)I");
    }

    static jint get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRaw", "method_15212", "getData", "m_13513_"), "()[J");
    }

    static jlong getData(const jobject& obj) {
                
       const auto methodID = methodID_getData();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSize", "method_15215", "getSize", "m_13521_"), "()I");
    }

    static jint getSize(const jobject& obj) {
                
       const auto methodID = methodID_getSize();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getElementBits() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getBits", "method_34896", "getElementBits", "m_144604_"), "()I");
    }

    static jint getElementBits(const jobject& obj) {
                
       const auto methodID = methodID_getElementBits();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_forEach() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAll", "method_21739", "forEach", "m_13519_"), "(Ljava/util/function/IntConsumer;)V");
    }

    static void forEach(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_forEach();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writePaletteIndices() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "unpack", "method_39892", "writePaletteIndices", "m_197970_"), "([I)V");
    }

    static void writePaletteIndices(const jobject& obj, const jarray& arg0, const jint& arg1) {
                
       const auto methodID = methodID_writePaletteIndices();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "copy", "method_39939", "copy", "m_199833_"), "()Laxc;");
    }

    static jobject copy(const jobject& obj) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_COLLECTION_EMPTYPALETTESTORAGE_HPP