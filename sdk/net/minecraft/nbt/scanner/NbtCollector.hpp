// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_SCANNER_NBTCOLLECTOR_HPP
#define NET_MINECRAFT_NBT_SCANNER_NBTCOLLECTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.scanner.NbtCollector
 * Remapped: vg
 */
namespace NbtCollector {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("vg", "net/minecraft/nbt/visitors/CollectToTag", "net/minecraft/class_6844", "net/minecraft/nbt/scanner/NbtCollector", "net/minecraft/src/C_196130_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.nbt.scanner.NbtCollector#currentKey
    static jobject get_field_currentKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "lastId", "field_36261", "currentKey", "f_197662_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.scanner.NbtCollector#currentKey
    static void set_field_currentKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "lastId", "field_36261", "currentKey", "f_197662_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.scanner.NbtCollector#root
    static jobject get_field_root(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "rootTag", "field_36262", "root", "f_197663_"), "Luy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.scanner.NbtCollector#root
    static void set_field_root(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "rootTag", "field_36262", "root", "f_197663_"), "Luy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.scanner.NbtCollector#stack
    static jobject get_field_stack(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "consumerStack", "field_36263", "stack", "f_197664_"), "Ljava/util/Deque;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.scanner.NbtCollector#stack
    static void set_field_stack(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "consumerStack", "field_36263", "stack", "f_197664_"), "Ljava/util/Deque;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getRoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getResult", "method_39887", "getRoot", "m_197713_"), "()Luy;");
    }

    static jobject getRoot(const jobject& obj) {
                
       const auto methodID = methodID_getRoot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDepth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "depth", "method_39888", "getDepth", "m_197714_"), "()I");
    }

    static jint getDepth(const jobject& obj) {
                
       const auto methodID = methodID_getDepth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_append() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "appendEntry", "method_39883", "append", "m_197682_"), "(Luy;)V");
    }

    static void append(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_append();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitEnd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitEnd", "method_39856", "visitEnd", "m_196525_"), "()Luv$b;");
    }

    static jobject visitEnd(const jobject& obj) {
                
       const auto methodID = methodID_visitEnd();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_visitString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39862", "visitString", "m_196458_"), "(Ljava/lang/String;)Luv$b;");
    }

    static jobject visitString(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitByte() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39857", "visitByte", "m_196209_"), "(B)Luv$b;");
    }

    static jobject visitByte(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_visitByte();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitShort() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39866", "visitShort", "m_196553_"), "(S)Luv$b;");
    }

    static jobject visitShort(const jobject& obj, const jshort& arg0) {
                
       const auto methodID = methodID_visitShort();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39860", "visitInt", "m_196353_"), "(I)Luv$b;");
    }

    static jobject visitInt(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_visitInt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39861", "visitLong", "m_196295_"), "(J)Luv$b;");
    }

    static jobject visitLong(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_visitLong();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39859", "visitFloat", "m_196532_"), "(F)Luv$b;");
    }

    static jobject visitFloat(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_visitFloat();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitDouble() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39858", "visitDouble", "m_196455_"), "(D)Luv$b;");
    }

    static jobject visitDouble(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_visitDouble();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_visitByteArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39867", "visitByteArray", "m_196152_"), "([B)Luv$b;");
    }

    static jobject visitByteArray(const jobject& obj, const jarray& arg0, const jbyte& arg1) {
                
       const auto methodID = methodID_visitByteArray();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitIntArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39868", "visitIntArray", "m_196376_"), "([I)Luv$b;");
    }

    static jobject visitIntArray(const jobject& obj, const jarray& arg0, const jint& arg1) {
                
       const auto methodID = methodID_visitIntArray();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitLongArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_39869", "visitLongArray", "m_196280_"), "([J)Luv$b;");
    }

    static jobject visitLongArray(const jobject& obj, const jarray& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_visitLongArray();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitListMeta() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitList", "method_39864", "visitListMeta", "m_196339_"), "(Lva;I)Luv$b;");
    }

    static jobject visitListMeta(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_visitListMeta();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_startListItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "visitElement", "method_39872", "startListItem", "m_196338_"), "(Lva;I)Luv$a;");
    }

    static jobject startListItem(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_startListItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitSubNbtType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitEntry", "method_39863", "visitSubNbtType", "m_196214_"), "(Lva;)Luv$a;");
    }

    static jobject visitSubNbtType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_visitSubNbtType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_startSubNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitEntry", "method_39865", "startSubNbt", "m_196425_"), "(Lva;Ljava/lang/String;)Luv$a;");
    }

    static jobject startSubNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_startSubNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_pushStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "enterContainerIfNeeded", "method_39886", "pushStack", "m_197711_"), "(Lva;)V");
    }

    static void pushStack(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_pushStack();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_endNested() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "visitContainerEnd", "method_39870", "endNested", "m_196527_"), "()Luv$b;");
    }

    static jobject endNested(const jobject& obj) {
                
       const auto methodID = methodID_endNested();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_start() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "visitRootEntry", "method_39871", "start", "m_196213_"), "(Lva;)Luv$b;");
    }

    static jobject start(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_start();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_NBT_SCANNER_NBTCOLLECTOR_HPP