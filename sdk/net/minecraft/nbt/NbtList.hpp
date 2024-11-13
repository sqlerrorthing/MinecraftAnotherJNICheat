// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTLIST_HPP
#define NET_MINECRAFT_NBT_NBTLIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtList
 * Remapped: uh
 */
namespace NbtList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("uh", "net/minecraft/nbt/ListTag", "net/minecraft/class_2499", "net/minecraft/nbt/NbtList", "net/minecraft/src/C_4930_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.nbt.NbtList#SIZE
    [[maybe_unused]] static jint get_field_SIZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELF_SIZE_IN_BYTES", "field_41725", "SIZE", "f_263445_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtList#SIZE
    [[maybe_unused]] static void set_field_SIZE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SELF_SIZE_IN_BYTES", "field_41725", "SIZE", "f_263445_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.nbt.NbtList#TYPE
    [[maybe_unused]] static jobject get_field_TYPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_21039", "TYPE", "f_128714_"), "Lva;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.nbt.NbtList#TYPE
    [[maybe_unused]] static void set_field_TYPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TYPE", "field_21039", "TYPE", "f_128714_"), "Lva;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.NbtList#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "list", "field_11550", "value", "f_128716_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtList#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "list", "field_11550", "value", "f_128716_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.nbt.NbtList#type
    static jbyte get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "type", "field_11551", "type", "f_128717_"), "B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.nbt.NbtList#type
    static void set_field_type(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("w", "type", "field_11551", "type", "f_128717_"), "B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
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
    
    static jmethodID methodID_forgetTypeIfEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "updateTypeAfterRemove", "method_17809", "forgetTypeIfEmpty", "m_128769_"), "()V");
    }

    static void forgetTypeIfEmpty(const jobject& obj) {
                
       const auto methodID = methodID_forgetTypeIfEmpty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "remove", "method_10536", "remove", "remove"), "(I)Luy;");
    }

    static jobject remove(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_remove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("isEmpty", "isEmpty", "", "", "isEmpty"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCompound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCompound", "method_10602", "getCompound", "m_128728_"), "(I)Lub;");
    }

    static jobject getCompound(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getCompound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getList", "method_10603", "getList", "m_128744_"), "(I)Luh;");
    }

    static jobject getList(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getShort() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getShort", "method_10609", "getShort", "m_128757_"), "(I)S");
    }

    static jshort getShort(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getShort();
       return MinecraftSDK::env->CallShortMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getInt", "method_10600", "getInt", "m_128763_"), "(I)I");
    }

    static jint getInt(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getInt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIntArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getIntArray", "method_36111", "getIntArray", "m_128767_"), "(I)[I");
    }

    static jint getIntArray(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getIntArray();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLongArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getLongArray", "method_36112", "getLongArray", "m_177991_"), "(I)[J");
    }

    static jlong getLongArray(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getLongArray();
       return MinecraftSDK::env->CallLongMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDouble() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getDouble", "method_10611", "getDouble", "m_128772_"), "(I)D");
    }

    static jdouble getDouble(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getDouble();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getFloat", "method_10604", "getFloat", "m_128775_"), "(I)F");
    }

    static jfloat getFloat(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getFloat();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getString", "method_10608", "getString", "m_128778_"), "(I)Ljava/lang/String;");
    }

    static jobject getString(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "get", "method_10534", "get", "get"), "(I)Luy;");
    }

    static jobject get(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "set", "method_10606", "set", "set"), "(ILuy;)Luy;");
    }

    static jobject set(const jobject& obj, const jint& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_set();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "add", "method_10531", "add", "add"), "(ILuy;)V");
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
    
    static jmethodID methodID_canAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateType", "method_10605", "canAdd", "m_128738_"), "(Luy;)Z");
    }

    static jboolean canAdd(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canAdd();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "copy", "method_10612", "copy", "m_6426_"), "()Luh;");
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

#endif // NET_MINECRAFT_NBT_NBTLIST_HPP