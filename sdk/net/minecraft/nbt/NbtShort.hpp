// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTSHORT_HPP
#define NET_MINECRAFT_NBT_NBTSHORT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtShort
 * Remapped: ut
 */
namespace NbtShort {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ut", "net/minecraft/nbt/ShortTag", "net/minecraft/class_2516", "net/minecraft/nbt/NbtShort", "net/minecraft/src/C_4945_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.nbt.NbtShort#SIZE
    [[maybe_unused]] static jint get_field_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELF_SIZE_IN_BYTES", "field_41728", "SIZE", "f_263431_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtShort#SIZE
    [[maybe_unused]] static void set_field_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELF_SIZE_IN_BYTES", "field_41728", "SIZE", "f_263431_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.nbt.NbtShort#TYPE
    [[maybe_unused]] static jobject get_field_TYPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_21043", "TYPE", "f_129244_"), "Lva;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.nbt.NbtShort#TYPE
    [[maybe_unused]] static void set_field_TYPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_21043", "TYPE", "f_129244_"), "Lva;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.NbtShort#value
    static jshort get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "data", "field_11588", "value", "f_129245_"), "S");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetShortField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtShort#value
    static void set_field_value(const jobject &obj, const jshort &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "data", "field_11588", "value", "f_129245_"), "S");
        return MinecraftSDK::env->SetShortField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "valueOf", "method_23254", "of", "m_129258_"), "(S)Lut;");
    }

    static jobject of(const jshort& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "copy", "method_10704", "copy", "m_6426_"), "()Lut;");
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
    
    static jmethodID methodID_longValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getAsLong", "method_10699", "longValue", "m_7046_"), "()J");
    }

    static jlong longValue(const jobject& obj) {
                
       const auto methodID = methodID_longValue();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_intValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getAsInt", "method_10701", "intValue", "m_7047_"), "()I");
    }

    static jint intValue(const jobject& obj) {
                
       const auto methodID = methodID_intValue();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_shortValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getAsShort", "method_10696", "shortValue", "m_7053_"), "()S");
    }

    static jshort shortValue(const jobject& obj) {
                
       const auto methodID = methodID_shortValue();
       return MinecraftSDK::env->CallShortMethod(obj, methodID);
    };
    
    static jmethodID methodID_byteValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getAsByte", "method_10698", "byteValue", "m_7063_"), "()B");
    }

    static jbyte byteValue(const jobject& obj) {
                
       const auto methodID = methodID_byteValue();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
    static jmethodID methodID_doubleValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getAsDouble", "method_10697", "doubleValue", "m_7061_"), "()D");
    }

    static jdouble doubleValue(const jobject& obj) {
                
       const auto methodID = methodID_doubleValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_floatValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getAsFloat", "method_10700", "floatValue", "m_7057_"), "()F");
    }

    static jfloat floatValue(const jobject& obj) {
                
       const auto methodID = methodID_floatValue();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_numberValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getAsNumber", "method_10702", "numberValue", "m_8103_"), "()Ljava/lang/Number;");
    }

    static jobject numberValue(const jobject& obj) {
                
       const auto methodID = methodID_numberValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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

#endif // NET_MINECRAFT_NBT_NBTSHORT_HPP