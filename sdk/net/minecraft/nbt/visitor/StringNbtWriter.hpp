// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_VISITOR_STRINGNBTWRITER_HPP
#define NET_MINECRAFT_NBT_VISITOR_STRINGNBTWRITER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.visitor.StringNbtWriter
 * Remapped: ux
 */
namespace StringNbtWriter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ux", "net/minecraft/nbt/StringTagVisitor", "net/minecraft/class_5626", "net/minecraft/nbt/visitor/StringNbtWriter", "net/minecraft/src/C_141837_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.nbt.visitor.StringNbtWriter#SIMPLE_NAME
    [[maybe_unused]] static jobject get_field_SIMPLE_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SIMPLE_VALUE", "field_27829", "SIMPLE_NAME", "f_178155_"), "Ljava/util/regex/Pattern;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.StringNbtWriter#SIMPLE_NAME
    [[maybe_unused]] static void set_field_SIMPLE_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "SIMPLE_VALUE", "field_27829", "SIMPLE_NAME", "f_178155_"), "Ljava/util/regex/Pattern;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.visitor.StringNbtWriter#result
    static jobject get_field_result(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "builder", "field_27830", "result", "f_178156_"), "Ljava/lang/StringBuilder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.visitor.StringNbtWriter#result
    static void set_field_result(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "builder", "field_27830", "result", "f_178156_"), "Ljava/lang/StringBuilder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_32288", "apply", "m_178187_"), "(Luy;)Ljava/lang/String;");
    }

    static jobject apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitString", "method_32302", "visitString", "m_142614_"), "(Luw;)V");
    }

    static void visitString(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitString();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitByte() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitByte", "method_32291", "visitByte", "m_141946_"), "(Ltz;)V");
    }

    static void visitByte(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitByte();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitShort() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitShort", "method_32301", "visitShort", "m_142183_"), "(Lut;)V");
    }

    static void visitShort(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitShort();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitInt", "method_32297", "visitInt", "m_142045_"), "(Lug;)V");
    }

    static void visitInt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitInt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitLong", "method_32300", "visitLong", "m_142046_"), "(Luj;)V");
    }

    static void visitLong(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitLong();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitFloat", "method_32295", "visitFloat", "m_142181_"), "(Lue;)V");
    }

    static void visitFloat(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitFloat();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitDouble() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitDouble", "method_32293", "visitDouble", "m_142121_"), "(Luc;)V");
    }

    static void visitDouble(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitDouble();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitByteArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitByteArray", "method_32290", "visitByteArray", "m_142154_"), "(Lty;)V");
    }

    static void visitByteArray(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitByteArray();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitIntArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitIntArray", "method_32296", "visitIntArray", "m_142251_"), "(Luf;)V");
    }

    static void visitIntArray(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitIntArray();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitLongArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitLongArray", "method_32299", "visitLongArray", "m_142309_"), "(Lui;)V");
    }

    static void visitLongArray(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitLongArray();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitList", "method_32298", "visitList", "m_142447_"), "(Luh;)V");
    }

    static void visitList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitList();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitCompound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitCompound", "method_32292", "visitCompound", "m_142303_"), "(Lub;)V");
    }

    static void visitCompound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitCompound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_escapeName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "handleEscape", "method_32287", "escapeName", "m_178159_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject escapeName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_escapeName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_visitEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitEnd", "method_32294", "visitEnd", "m_142384_"), "(Lud;)V");
    }

    static void visitEnd(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitEnd();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NBT_VISITOR_STRINGNBTWRITER_HPP