// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DATA_DATATRACKER$SERIALIZEDENTRY_HPP
#define NET_MINECRAFT_ENTITY_DATA_DATATRACKER$SERIALIZEDENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.data.DataTracker$SerializedEntry
 * Remapped: aka$c
 */
namespace DataTracker$SerializedEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aka$c", "net/minecraft/network/syncher/SynchedEntityData$DataValue", "net/minecraft/class_2945$class_7834", "net/minecraft/entity/data/DataTracker$SerializedEntry", "net/minecraft/src/C_5247_$C_252362_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.entity.data.DataTracker$SerializedEntry#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_1115", "id", "f_252469_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.data.DataTracker$SerializedEntry#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "id", "comp_1115", "id", "f_252469_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.data.DataTracker$SerializedEntry#handler
    static jobject get_field_handler(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "serializer", "comp_1116", "handler", "f_252511_"), "Lajx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.data.DataTracker$SerializedEntry#handler
    static void set_field_handler(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "serializer", "comp_1116", "handler", "f_252511_"), "Lajx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.entity.data.DataTracker$SerializedEntry#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "comp_1117", "value", "f_252525_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.data.DataTracker$SerializedEntry#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "value", "comp_1117", "value", "f_252525_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_46360", "of", "m_252847_"), "(Lajw;Ljava/lang/Object;)Laka$c;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_46361", "write", "m_252897_"), "(Lwk;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fromBuf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_46362", "fromBuf", "m_252860_"), "(Lwk;I)Laka$c;");
    }

    static jobject fromBuf(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromBuf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__fromBuf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_46363", "fromBuf", "m_252951_"), "(Lwk;ILajx;)Laka$c;");
    }

    static jobject _fromBuf(const jobject& arg0, const jint& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__fromBuf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_1115", "id", "f_252469_"), "()I");
    }

    static jint _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__handler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "serializer", "comp_1116", "handler", "f_252511_"), "()Lajx;");
    }

    static jobject _handler(const jobject& obj) {
                
       const auto methodID = methodID__handler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__value() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "value", "comp_1117", "value", "f_252525_"), "()Ljava/lang/Object;");
    }

    static jobject _value(const jobject& obj) {
                
       const auto methodID = methodID__value();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DATA_DATATRACKER$SERIALIZEDENTRY_HPP