// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DATA_DATATRACKER_HPP
#define NET_MINECRAFT_ENTITY_DATA_DATATRACKER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.data.DataTracker
 * Remapped: aka
 */
namespace DataTracker {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aka", "net/minecraft/network/syncher/SynchedEntityData", "net/minecraft/class_2945", "net/minecraft/entity/data/DataTracker", "net/minecraft/src/C_5247_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.data.DataTracker#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_13334", "LOGGER", "f_135342_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.data.DataTracker#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_13334", "LOGGER", "f_135342_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.data.DataTracker#MAX_DATA_VALUE_ID
    [[maybe_unused]] static jint get_field_MAX_DATA_VALUE_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_ID_VALUE", "field_33378", "MAX_DATA_VALUE_ID", "f_179843_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.data.DataTracker#MAX_DATA_VALUE_ID
    [[maybe_unused]] static void set_field_MAX_DATA_VALUE_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_ID_VALUE", "field_33378", "MAX_DATA_VALUE_ID", "f_179843_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static default field net.minecraft.entity.data.DataTracker#CLASS_TO_LAST_ID
    [[maybe_unused]] static jobject get_field_CLASS_TO_LAST_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ID_REGISTRY", "field_49021", "CLASS_TO_LAST_ID", "f_316642_"), "Laxg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.entity.data.DataTracker#CLASS_TO_LAST_ID
    [[maybe_unused]] static void set_field_CLASS_TO_LAST_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ID_REGISTRY", "field_49021", "CLASS_TO_LAST_ID", "f_316642_"), "Laxg;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.data.DataTracker#trackedEntity
    static jobject get_field_trackedEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entity", "field_13333", "trackedEntity", "f_135344_"), "Lajz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.data.DataTracker#trackedEntity
    static void set_field_trackedEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "entity", "field_13333", "trackedEntity", "f_135344_"), "Lajz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.data.DataTracker#entries
    static jobject get_field_entries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "itemsById", "field_13331", "entries", "f_135345_"), "[Laka$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.data.DataTracker#entries
    static void set_field_entries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "itemsById", "field_13331", "entries", "f_135345_"), "[Laka$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.data.DataTracker#dirty
    static jboolean get_field_dirty(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "isDirty", "field_13329", "dirty", "f_135348_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.data.DataTracker#dirty
    static void set_field_dirty(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "isDirty", "field_13329", "dirty", "f_135348_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_registerData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "defineId", "method_12791", "registerData", "m_135353_"), "(Ljava/lang/Class;Lajx;)Lajw;");
    }

    static jobject registerData(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_registerData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getItem", "method_12783", "getEntry", "m_135379_"), "(Lajw;)Laka$b;");
    }

    static jobject getEntry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_12789", "get", "m_135370_"), "(Lajw;)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_12778", "set", "m_135381_"), "(Lajw;Ljava/lang/Object;)V");
    }

    static void set(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_49743", "set", "m_276349_"), "(Lajw;Ljava/lang/Object;Z)V");
    }

    static void _set(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID__set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isDirty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isDirty", "method_12786", "isDirty", "m_135352_"), "()Z");
    }

    static jboolean isDirty(const jobject& obj) {
                
       const auto methodID = methodID_isDirty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDirtyEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "packDirty", "method_12781", "getDirtyEntries", "m_135378_"), "()Ljava/util/List;");
    }

    static jobject getDirtyEntries(const jobject& obj) {
                
       const auto methodID = methodID_getDirtyEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChangedEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getNonDefaultValues", "method_46357", "getChangedEntries", "m_252804_"), "()Ljava/util/List;");
    }

    static jobject getChangedEntries(const jobject& obj) {
                
       const auto methodID = methodID_getChangedEntries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeUpdatedEntries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "assignValues", "method_12779", "writeUpdatedEntries", "m_135356_"), "(Ljava/util/List;)V");
    }

    static void writeUpdatedEntries(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeUpdatedEntries();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyToFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "assignValue", "method_12785", "copyToFrom", "m_135375_"), "(Laka$b;Laka$c;)V");
    }

    static void copyToFrom(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_copyToFrom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DATA_DATATRACKER_HPP