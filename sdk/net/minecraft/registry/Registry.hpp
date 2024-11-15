// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_REGISTRY_HPP
#define NET_MINECRAFT_REGISTRY_REGISTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.Registry
 * Remapped: jz
 */
namespace Registry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("jz", "net/minecraft/core/Registry", "net/minecraft/class_2378", "net/minecraft/registry/Registry", "net/minecraft/src/C_4705_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "key", "method_30517", "getKey", "m_123023_"), "()Lakq;");
    }

    static jobject getKey(const jobject& obj) {
                
       const auto methodID = methodID_getKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("r", "byNameCodec", "method_39673", "getCodec", "m_194605_"), "()Lcom/mojang/serialization/Codec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEntryCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "holderByNameCodec", "method_40294", "getEntryCodec", "m_206110_"), "()Lcom/mojang/serialization/Codec;");
    }

    static jobject getEntryCodec(const jobject& obj) {
                
       const auto methodID = methodID_getEntryCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getReferenceEntryCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "referenceHolderWithLifecycle", "method_57059", "getReferenceEntryCodec", "m_322937_"), "()Lcom/mojang/serialization/Codec;");
    }

    static jobject getReferenceEntryCodec(const jobject& obj) {
                
       const auto methodID = methodID_getReferenceEntryCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_validateReference() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "safeCastToReference", "method_57061", "validateReference", "m_324863_"), "(Ljm;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject validateReference(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validateReference();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_keys() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("keys", "keys", "keys", "keys", "keys"), "(Lcom/mojang/serialization/DynamicOps;)Ljava/util/stream/Stream;");
    }

    static jobject keys(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_keys();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getKey", "method_10221", "getId", "m_7981_"), "(Ljava/lang/Object;)Lakr;");
    }

    static jobject getId(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getResourceKey", "method_29113", "getKey", "m_7854_"), "(Ljava/lang/Object;)Ljava/util/Optional;");
    }

    static jobject _getKey(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRawId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_10206", "getRawId", "m_7447_"), "(Ljava/lang/Object;)I");
    }

    static jint getRawId(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRawId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_29107", "get", "m_6246_"), "(Lakq;)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_10223", "get", "m_7745_"), "(Lakr;)Ljava/lang/Object;");
    }

    static jobject _get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEntryInfo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "registrationInfo", "method_57058", "getEntryInfo", "m_6228_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject getEntryInfo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getEntryInfo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLifecycle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "registryLifecycle", "method_31138", "getLifecycle", "m_203658_"), "()Lcom/mojang/serialization/Lifecycle;");
    }

    static jobject getLifecycle(const jobject& obj) {
                
       const auto methodID = methodID_getLifecycle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOrEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getOptional", "method_17966", "getOrEmpty", "m_6612_"), "(Lakr;)Ljava/util/Optional;");
    }

    static jobject getOrEmpty(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOrEmpty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getOrEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getOptional", "method_31189", "getOrEmpty", "m_123009_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject _getOrEmpty(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getOrEmpty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDefaultEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAny", "method_60385", "getDefaultEntry", "m_338366_"), "()Ljava/util/Optional;");
    }

    static jobject getDefaultEntry(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOrThrow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getOrThrow", "method_31140", "getOrThrow", "m_123013_"), "(Lakq;)Ljava/lang/Object;");
    }

    static jobject getOrThrow(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOrThrow();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "keySet", "method_10235", "getIds", "m_6566_"), "()Ljava/util/Set;");
    }

    static jobject getIds(const jobject& obj) {
                
       const auto methodID = methodID_getIds();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEntrySet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "entrySet", "method_29722", "getEntrySet", "m_6579_"), "()Ljava/util/Set;");
    }

    static jobject getEntrySet(const jobject& obj) {
                
       const auto methodID = methodID_getEntrySet();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getKeys() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "registryKeySet", "method_42021", "getKeys", "m_214010_"), "()Ljava/util/Set;");
    }

    static jobject getKeys(const jobject& obj) {
                
       const auto methodID = methodID_getKeys();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRandom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandom", "method_10240", "getRandom", "m_213642_"), "(Layw;)Ljava/util/Optional;");
    }

    static jobject getRandom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRandom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "stream", "method_10220", "stream", "m_123024_"), "()Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_containsId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "containsKey", "method_10250", "containsId", "m_7804_"), "(Lakr;)Z");
    }

    static jboolean containsId(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_containsId();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_contains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "containsKey", "method_35842", "contains", "m_142003_"), "(Lakq;)Z");
    }

    static jboolean contains(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_contains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_10226", "register", "m_122961_"), "(Ljz;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_10230", "register", "m_122965_"), "(Ljz;Lakr;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject _register(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID___register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_39197", "register", "m_194579_"), "(Ljz;Lakq;Ljava/lang/Object;)Ljava/lang/Object;");
    }

    static jobject __register(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID___register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_registerReference() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "registerForHolder", "method_47984", "registerReference", "m_263175_"), "(Ljz;Lakq;Ljava/lang/Object;)Ljm$c;");
    }

    static jobject registerReference(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_registerReference();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__registerReference() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "registerForHolder", "method_47985", "registerReference", "m_263174_"), "(Ljz;Lakr;Ljava/lang/Object;)Ljm$c;");
    }

    static jobject _registerReference(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__registerReference();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_freeze() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "freeze", "method_40276", "freeze", "m_203521_"), "()Ljz;");
    }

    static jobject freeze(const jobject& obj) {
                
       const auto methodID = methodID_freeze();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "createIntrusiveHolder", "method_40269", "createEntry", "m_203693_"), "(Ljava/lang/Object;)Ljm$c;");
    }

    static jobject createEntry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getHolder", "method_40265", "getEntry", "m_203300_"), "(I)Ljava/util/Optional;");
    }

    static jobject getEntry(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getHolder", "method_55841", "getEntry", "m_320017_"), "(Lakr;)Ljava/util/Optional;");
    }

    static jobject _getEntry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___getEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getHolder", "method_40264", "getEntry", "m_203636_"), "(Lakq;)Ljava/util/Optional;");
    }

    static jobject __getEntry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___getEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID____getEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "wrapAsHolder", "method_47983", "getEntry", "m_263177_"), "(Ljava/lang/Object;)Ljm;");
    }

    static jobject ___getEntry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID____getEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_entryOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getHolderOrThrow", "method_40290", "entryOf", "m_246971_"), "(Lakq;)Ljm$c;");
    }

    static jobject entryOf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_entryOf();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_streamEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "holders", "method_40270", "streamEntries", "m_203611_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamEntries(const jobject& obj) {
                
       const auto methodID = methodID_streamEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEntryList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getTag", "method_40266", "getEntryList", "m_203431_"), "(Lawu;)Ljava/util/Optional;");
    }

    static jobject getEntryList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getEntryList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_iterateEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getTagOrEmpty", "method_40286", "iterateEntries", "m_206058_"), "(Lawu;)Ljava/lang/Iterable;");
    }

    static jobject iterateEntries(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_iterateEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRandomEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandomElementOf", "method_56159", "getRandomEntry", "m_321004_"), "(Lawu;Layw;)Ljava/util/Optional;");
    }

    static jobject getRandomEntry(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getRandomEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getOrCreateEntryList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOrCreateTag", "method_40260", "getOrCreateEntryList", "m_203561_"), "(Lawu;)Ljq$c;");
    }

    static jobject getOrCreateEntryList(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOrCreateEntryList();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_streamTagsAndEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getTags", "method_40272", "streamTagsAndEntries", "m_203612_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamTagsAndEntries(const jobject& obj) {
                
       const auto methodID = methodID_streamTagsAndEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_streamTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getTagNames", "method_40273", "streamTags", "m_203613_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamTags(const jobject& obj) {
                
       const auto methodID = methodID_streamTags();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_clearTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "resetTags", "method_40278", "clearTags", "m_203635_"), "()V");
    }

    static void clearTags(const jobject& obj) {
                
       const auto methodID = methodID_clearTags();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_populateTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bindTags", "method_40257", "populateTags", "m_203652_"), "(Ljava/util/Map;)V");
    }

    static void populateTags(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_populateTags();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getIndexedEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "asHolderIdMap", "method_40295", "getIndexedEntries", "m_206115_"), "()Ljr;");
    }

    static jobject getIndexedEntries(const jobject& obj) {
                
       const auto methodID = methodID_getIndexedEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEntryOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "holderOwner", "method_46770", "getEntryOwner", "m_255331_"), "()Ljp;");
    }

    static jobject getEntryOwner(const jobject& obj) {
                
       const auto methodID = methodID_getEntryOwner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getReadOnlyWrapper() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "asLookup", "method_46771", "getReadOnlyWrapper", "m_255303_"), "()Ljo$b;");
    }

    static jobject getReadOnlyWrapper(const jobject& obj) {
                
       const auto methodID = methodID_getReadOnlyWrapper();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTagCreatingWrapper() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "asTagAddingLookup", "method_46772", "getTagCreatingWrapper", "m_255014_"), "()Ljo$b;");
    }

    static jobject getTagCreatingWrapper(const jobject& obj) {
                
       const auto methodID = methodID_getTagCreatingWrapper();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_REGISTRY_HPP