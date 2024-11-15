// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTSTRING_HPP
#define NET_MINECRAFT_NBT_NBTSTRING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtString
 * Remapped: uw
 */
namespace NbtString {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("uw", "net/minecraft/nbt/StringTag", "net/minecraft/class_2519", "net/minecraft/nbt/NbtString", "net/minecraft/src/C_4948_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.nbt.NbtString#SIZE
    [[maybe_unused]] static jint get_field_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELF_SIZE_IN_BYTES", "field_41729", "SIZE", "f_263432_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtString#SIZE
    [[maybe_unused]] static void set_field_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELF_SIZE_IN_BYTES", "field_41729", "SIZE", "f_263432_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.nbt.NbtString#TYPE
    [[maybe_unused]] static jobject get_field_TYPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_21045", "TYPE", "f_129288_"), "Lva;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.nbt.NbtString#TYPE
    [[maybe_unused]] static void set_field_TYPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_21045", "TYPE", "f_129288_"), "Lva;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.NbtString#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "EMPTY", "field_21046", "EMPTY", "f_129289_"), "Luw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtString#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "EMPTY", "field_21046", "EMPTY", "f_129289_"), "Luw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.NbtString#DOUBLE_QUOTE
    [[maybe_unused]] static jchar get_field_DOUBLE_QUOTE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "DOUBLE_QUOTE", "field_33242", "DOUBLE_QUOTE", "f_178149_"), "C");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticCharField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtString#DOUBLE_QUOTE
    [[maybe_unused]] static void set_field_DOUBLE_QUOTE(const jchar &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("w", "DOUBLE_QUOTE", "field_33242", "DOUBLE_QUOTE", "f_178149_"), "C");
        return MinecraftSDK::env->SetStaticCharField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.NbtString#SINGLE_QUOTE
    [[maybe_unused]] static jchar get_field_SINGLE_QUOTE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "SINGLE_QUOTE", "field_33243", "SINGLE_QUOTE", "f_178150_"), "C");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticCharField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtString#SINGLE_QUOTE
    [[maybe_unused]] static void set_field_SINGLE_QUOTE(const jchar &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("x", "SINGLE_QUOTE", "field_33243", "SINGLE_QUOTE", "f_178150_"), "C");
        return MinecraftSDK::env->SetStaticCharField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.NbtString#BACKSLASH
    [[maybe_unused]] static jchar get_field_BACKSLASH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ESCAPE", "field_33244", "BACKSLASH", "f_178151_"), "C");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticCharField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtString#BACKSLASH
    [[maybe_unused]] static void set_field_BACKSLASH(const jchar &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y", "ESCAPE", "field_33244", "BACKSLASH", "f_178151_"), "C");
        return MinecraftSDK::env->SetStaticCharField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.nbt.NbtString#NULL
    [[maybe_unused]] static jchar get_field_NULL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "NOT_SET", "field_33245", "NULL", "f_178152_"), "C");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticCharField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtString#NULL
    [[maybe_unused]] static void set_field_NULL(const jchar &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("z", "NOT_SET", "field_33245", "NULL", "f_178152_"), "C");
        return MinecraftSDK::env->SetStaticCharField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.NbtString#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "data", "field_11590", "value", "f_129290_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtString#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("A", "data", "field_11590", "value", "f_129290_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_skip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "skipString", "method_39875", "skip", "m_197563_"), "(Ljava/io/DataInput;)V");
    }

    static void skip(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_skip();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "valueOf", "method_23256", "of", "m_129297_"), "(Ljava/lang/String;)Luw;");
    }

    static jobject of(const jobject& arg0) {
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "copy", "method_10705", "copy", "m_6426_"), "()Luw;");
    }

    static jobject copy(const jobject& obj) {
                
       const auto methodID = methodID_copy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s_", "getAsString", "method_10714", "asString", "m_7916_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
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
    
    static jmethodID methodID_escape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "quoteAndEscape", "method_10706", "escape", "m_129303_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject escape(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_escape();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
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

#endif // NET_MINECRAFT_NBT_NBTSTRING_HPP