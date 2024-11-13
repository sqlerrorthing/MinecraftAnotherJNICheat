// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_COLLECTION_LINKEDBLOCKPOSHASHSET$STORAGE_HPP
#define NET_MINECRAFT_UTIL_COLLECTION_LINKEDBLOCKPOSHASHSET$STORAGE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.collection.LinkedBlockPosHashSet$Storage
 * Remapped: eoz$a
 */
namespace LinkedBlockPosHashSet$Storage {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eoz$a", "net/minecraft/world/level/lighting/SpatialLongSet$InternalMap", "net/minecraft/class_6136$class_6137", "net/minecraft/util/collection/LinkedBlockPosHashSet$Storage", "net/minecraft/src/C_141433_$C_141434_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#STARTING_OFFSET
    [[maybe_unused]] static jint get_field_STARTING_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "X_BITS", "field_31716", "STARTING_OFFSET", "f_164471_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#STARTING_OFFSET
    [[maybe_unused]] static void set_field_STARTING_OFFSET(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "X_BITS", "field_31716", "STARTING_OFFSET", "f_164471_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#HORIZONTAL_COLUMN_BIT_SEPARATION
    [[maybe_unused]] static jint get_field_HORIZONTAL_COLUMN_BIT_SEPARATION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "Z_BITS", "field_31717", "HORIZONTAL_COLUMN_BIT_SEPARATION", "f_164472_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#HORIZONTAL_COLUMN_BIT_SEPARATION
    [[maybe_unused]] static void set_field_HORIZONTAL_COLUMN_BIT_SEPARATION(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "Z_BITS", "field_31717", "HORIZONTAL_COLUMN_BIT_SEPARATION", "f_164472_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#FIELD_SPACING
    [[maybe_unused]] static jint get_field_FIELD_SPACING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "Y_BITS", "field_31718", "FIELD_SPACING", "f_164473_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#FIELD_SPACING
    [[maybe_unused]] static void set_field_FIELD_SPACING(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "Y_BITS", "field_31718", "FIELD_SPACING", "f_164473_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#Y_BIT_OFFSET
    [[maybe_unused]] static jint get_field_Y_BIT_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "Y_OFFSET", "field_31719", "Y_BIT_OFFSET", "f_164474_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#Y_BIT_OFFSET
    [[maybe_unused]] static void set_field_Y_BIT_OFFSET(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "Y_OFFSET", "field_31719", "Y_BIT_OFFSET", "f_164474_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#X_BIT_OFFSET
    [[maybe_unused]] static jint get_field_X_BIT_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "Z_OFFSET", "field_31720", "X_BIT_OFFSET", "f_164475_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#X_BIT_OFFSET
    [[maybe_unused]] static void set_field_X_BIT_OFFSET(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "Z_OFFSET", "field_31720", "X_BIT_OFFSET", "f_164475_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#Z_BIT_OFFSET
    [[maybe_unused]] static jint get_field_Z_BIT_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "X_OFFSET", "field_31721", "Z_BIT_OFFSET", "f_164476_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#Z_BIT_OFFSET
    [[maybe_unused]] static void set_field_Z_BIT_OFFSET(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "X_OFFSET", "field_31721", "Z_BIT_OFFSET", "f_164476_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#MAX_POSITION
    [[maybe_unused]] static jlong get_field_MAX_POSITION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "OUTER_MASK", "field_31722", "MAX_POSITION", "f_164477_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticLongField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#MAX_POSITION
    [[maybe_unused]] static void set_field_MAX_POSITION(const jlong &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "OUTER_MASK", "field_31722", "MAX_POSITION", "f_164477_"), "J");
        return MinecraftSDK::env->SetStaticLongField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#lastWrittenIndex
    static jint get_field_lastWrittenIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "lastPos", "field_31723", "lastWrittenIndex", "f_164478_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#lastWrittenIndex
    static void set_field_lastWrittenIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "lastPos", "field_31723", "lastWrittenIndex", "f_164478_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#lastWrittenKey
    static jlong get_field_lastWrittenKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "lastOuterKey", "field_31724", "lastWrittenKey", "f_164479_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#lastWrittenKey
    static void set_field_lastWrittenKey(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "lastOuterKey", "field_31724", "lastWrittenKey", "f_164479_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#expectedSize
    static jint get_field_expectedSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "minSize", "field_31725", "expectedSize", "f_164480_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.util.collection.LinkedBlockPosHashSet$Storage#expectedSize
    static void set_field_expectedSize(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "minSize", "field_31725", "expectedSize", "f_164480_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getOuterKey", "method_35483", "getKey", "m_164489_"), "(J)J");
    }

    static jlong getKey(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getKey();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getInnerKey", "method_35486", "getBlockOffset", "m_164497_"), "(J)I");
    }

    static jint getBlockOffset(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getBlockOffset();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockPosLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getFullKey", "method_35484", "getBlockPosLong", "m_164491_"), "(JI)J");
    }

    static jlong getBlockPosLong(const jlong& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getBlockPosLong();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "addBit", "method_35487", "add", "m_164499_"), "(J)Z");
    }

    static jboolean add(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_add();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setBits() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "replaceBit", "method_35482", "setBits", "m_164486_"), "(IJ)Z");
    }

    static jboolean setBits(const jobject& obj, const jint& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_setBits();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_rem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "removeBit", "method_35488", "rem", "m_164501_"), "(J)Z");
    }

    static jboolean rem(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_rem();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_unsetBits() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "removeFromNullEntry", "method_35489", "unsetBits", "m_164503_"), "(J)Z");
    }

    static jboolean unsetBits(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_unsetBits();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_unsetBitsAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "removeFromEntry", "method_35485", "unsetBitsAt", "m_164494_"), "(IJ)Z");
    }

    static jboolean unsetBitsAt(const jobject& obj, const jint& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_unsetBitsAt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_removeFirstLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removeFirstBit", "method_35481", "removeFirstLong", "m_164485_"), "()J");
    }

    static jlong removeFirstLong(const jobject& obj) {
                
       const auto methodID = methodID_removeFirstLong();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_rehash() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("rehash", "rehash", "rehash", "rehash", "rehash"), "(I)V");
    }

    static void rehash(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_rehash();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_UTIL_COLLECTION_LINKEDBLOCKPOSHASHSET$STORAGE_HPP