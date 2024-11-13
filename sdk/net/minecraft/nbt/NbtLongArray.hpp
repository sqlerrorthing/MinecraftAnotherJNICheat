// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTLONGARRAY_HPP
#define NET_MINECRAFT_NBT_NBTLONGARRAY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtLongArray
 * Remapped: ui
 */
namespace NbtLongArray {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ui", "net/minecraft/nbt/LongArrayTag", "net/minecraft/class_2501", "net/minecraft/nbt/NbtLongArray", "net/minecraft/src/C_4932_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.nbt.NbtLongArray#SIZE
    [[maybe_unused]] static jint get_field_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELF_SIZE_IN_BYTES", "field_41726", "SIZE", "f_263437_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtLongArray#SIZE
    [[maybe_unused]] static void set_field_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELF_SIZE_IN_BYTES", "field_41726", "SIZE", "f_263437_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.nbt.NbtLongArray#TYPE
    [[maybe_unused]] static jobject get_field_TYPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_21040", "TYPE", "f_128800_"), "Lva;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.nbt.NbtLongArray#TYPE
    [[maybe_unused]] static void set_field_TYPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_21040", "TYPE", "f_128800_"), "Lva;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.NbtLongArray#value
    static jlong get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "data", "field_11552", "value", "f_128801_"), "[J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtLongArray#value
    static void set_field_value(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "data", "field_11552", "value", "f_128801_"), "[J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_toArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "toArray", "method_10617", "toArray", "m_128823_"), "(Ljava/util/List;)[J");
    }

    static jlong toArray(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_toArray();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_10713", "write", "m_6434_"), "(Ljava/io/DataOutput;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSizeInBytes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sizeInBytes", "method_47988", "getSizeInBytes", "m_263179_"), "()I");
    }

    static jint getSizeInBytes(const jobject& obj) {
                
       const auto methodID = methodID_getSizeInBytes();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getId", "method_10711", "getType", "m_7060_"), "()B");
    }

    static jbyte getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNbtType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getType", "method_23258", "getNbtType", "m_6458_"), "()Lva;");
    }

    static jobject getNbtType(const jobject& obj) {
                
       const auto methodID = methodID_getNbtType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "copy", "method_10618", "copy", "m_6426_"), "()Lui;");
    }

    static jobject copy(const jobject& obj) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "accept", "method_32289", "accept", "m_142327_"), "(Lvc;)V");
    }

    static void accept(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLongArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getAsLongArray", "method_10615", "getLongArray", "m_128851_"), "()[J");
    }

    static jlong getLongArray(const jobject& obj) {
                
       const auto methodID = methodID_getLongArray();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("size", "size", "", "", "size"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_10616", "get", "get"), "(I)Luj;");
    }

    static jobject get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_method_10606() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_17810", "method_10606", "set"), "(ILuj;)Luj;");
    }

    static jobject method_10606(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_method_10606();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "add", "method_17812", "add", "add"), "(ILuj;)V");
    }

    static void add(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setElement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setTag", "method_10535", "setElement", "m_7615_"), "(ILuy;)Z");
    }

    static jboolean setElement(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setElement();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_addElement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addTag", "method_10533", "addElement", "m_7614_"), "(ILuy;)Z");
    }

    static jboolean addElement(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_addElement();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "remove", "method_17811", "remove", "remove"), "(I)Luj;");
    }

    static jobject remove(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_remove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getHeldType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getElementType", "method_10601", "getHeldType", "m_7264_"), "()B");
    }

    static jbyte getHeldType(const jobject& obj) {
                
       const auto methodID = methodID_getHeldType();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("clear", "clear", "", "", "clear"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_doAccept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "accept", "method_39850", "doAccept", "m_196533_"), "(Luv;)Luv$b;");
    }

    static jobject doAccept(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_doAccept();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NBT_NBTLONGARRAY_HPP