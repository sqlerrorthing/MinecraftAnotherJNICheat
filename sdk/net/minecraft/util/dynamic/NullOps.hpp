// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_DYNAMIC_NULLOPS_HPP
#define NET_MINECRAFT_UTIL_DYNAMIC_NULLOPS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.dynamic.NullOps
 * Remapped: ayq
 */
namespace NullOps {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ayq", "net/minecraft/util/NullOps", "net/minecraft/class_9637", "net/minecraft/util/dynamic/NullOps", "net/minecraft/src/C_313604_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.util.dynamic.NullOps#INSTANCE
    [[maybe_unused]] static jobject get_field_INSTANCE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_51366", "INSTANCE", "f_314313_"), "Layq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.util.dynamic.NullOps#INSTANCE
    [[maybe_unused]] static void set_field_INSTANCE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "INSTANCE", "field_51366", "INSTANCE", "f_314313_"), "Layq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_convertTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "convertTo", "method_59568", "convertTo", "convertTo"), "(Lcom/mojang/serialization/DynamicOps;Lazs;)Ljava/lang/Object;");
    }

    static jobject convertTo(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_convertTo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_empty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "empty", "method_59555", "empty", "empty"), "()Lazs;");
    }

    static jobject empty(const jobject& obj) {
                
       const auto methodID = methodID_empty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_emptyMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "emptyMap", "method_59578", "emptyMap", "emptyMap"), "()Lazs;");
    }

    static jobject emptyMap(const jobject& obj) {
                
       const auto methodID = methodID_emptyMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_emptyList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "emptyList", "method_59581", "emptyList", "emptyList"), "()Lazs;");
    }

    static jobject emptyList(const jobject& obj) {
                
       const auto methodID = methodID_emptyList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createNumeric() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createNumeric", "method_59569", "createNumeric", "createNumeric"), "(Ljava/lang/Number;)Lazs;");
    }

    static jobject createNumeric(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createNumeric();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createByte() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createByte", "method_59556", "createByte", "createByte"), "(B)Lazs;");
    }

    static jobject createByte(const jobject& obj, const jbyte& arg0) {
                
       const auto methodID = methodID_createByte();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createShort() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createShort", "method_59576", "createShort", "createShort"), "(S)Lazs;");
    }

    static jobject createShort(const jobject& obj, const jshort& arg0) {
                
       const auto methodID = methodID_createShort();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createInt", "method_59559", "createInt", "createInt"), "(I)Lazs;");
    }

    static jobject createInt(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_createInt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createLong() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createLong", "method_59560", "createLong", "createLong"), "(J)Lazs;");
    }

    static jobject createLong(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_createLong();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createFloat() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createFloat", "method_59558", "createFloat", "createFloat"), "(F)Lazs;");
    }

    static jobject createFloat(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_createFloat();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createDouble() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createDouble", "method_59557", "createDouble", "createDouble"), "(D)Lazs;");
    }

    static jobject createDouble(const jobject& obj, const jdouble& arg0) {
                
       const auto methodID = methodID_createDouble();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBoolean", "method_59577", "createBoolean", "createBoolean"), "(Z)Lazs;");
    }

    static jobject createBoolean(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_createBoolean();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createString", "method_59570", "createString", "createString"), "(Ljava/lang/String;)Lazs;");
    }

    static jobject createString(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getNumberValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNumberValue", "method_59561", "getNumberValue", "getNumberValue"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getNumberValue(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getNumberValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBooleanValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBooleanValue", "method_59579", "getBooleanValue", "getBooleanValue"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getBooleanValue(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBooleanValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStringValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getStringValue", "method_59582", "getStringValue", "getStringValue"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getStringValue(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStringValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_mergeToList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mergeToList", "method_59562", "mergeToList", "mergeToList"), "(Lazs;Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject mergeToList(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_mergeToList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__mergeToList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mergeToList", "method_59566", "mergeToList", "mergeToList"), "(Lazs;Ljava/util/List;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject _mergeToList(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__mergeToList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_mergeToMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mergeToMap", "method_59563", "mergeToMap", "mergeToMap"), "(Lazs;Lazs;Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject mergeToMap(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_mergeToMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__mergeToMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mergeToMap", "method_59567", "mergeToMap", "mergeToMap"), "(Lazs;Ljava/util/Map;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject _mergeToMap(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__mergeToMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___mergeToMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mergeToMap", "method_59564", "mergeToMap", "mergeToMap"), "(Lazs;Lcom/mojang/serialization/MapLike;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject __mergeToMap(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___mergeToMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMapValues() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getMapValues", "method_59584", "getMapValues", "getMapValues"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getMapValues(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMapValues();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMapEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getMapEntries", "method_59586", "getMapEntries", "getMapEntries"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getMapEntries(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMapEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getMap", "method_59588", "getMap", "getMap"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getMap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getStream", "method_59590", "getStream", "getStream"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getStream(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getList", "method_59592", "getList", "getList"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getByteBuffer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getByteBuffer", "method_59594", "getByteBuffer", "getByteBuffer"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getByteBuffer(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getByteBuffer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIntStream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getIntStream", "method_59596", "getIntStream", "getIntStream"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getIntStream(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getIntStream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLongStream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getLongStream", "method_59598", "getLongStream", "getLongStream"), "(Lazs;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject getLongStream(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLongStream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createMap", "method_59575", "createMap", "createMap"), "(Ljava/util/stream/Stream;)Lazs;");
    }

    static jobject createMap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__createMap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createMap", "method_59572", "createMap", "createMap"), "(Ljava/util/Map;)Lazs;");
    }

    static jobject _createMap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__createMap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createList", "method_59580", "createList", "createList"), "(Ljava/util/stream/Stream;)Lazs;");
    }

    static jobject createList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createByteList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createByteList", "method_59571", "createByteList", "createByteList"), "(Ljava/nio/ByteBuffer;)Lazs;");
    }

    static jobject createByteList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createByteList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createIntList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createIntList", "method_59573", "createIntList", "createIntList"), "(Ljava/util/stream/IntStream;)Lazs;");
    }

    static jobject createIntList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createIntList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createLongList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createLongList", "method_59574", "createLongList", "createLongList"), "(Ljava/util/stream/LongStream;)Lazs;");
    }

    static jobject createLongList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createLongList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "remove", "method_59565", "remove", "remove"), "(Lazs;Ljava/lang/String;)Lazs;");
    }

    static jobject remove(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_remove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_mapBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("mapBuilder", "mapBuilder", "", "", "mapBuilder"), "()Lcom/mojang/serialization/RecordBuilder;");
    }

    static jobject mapBuilder(const jobject& obj) {
                
       const auto methodID = methodID_mapBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_UTIL_DYNAMIC_NULLOPS_HPP