// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTTYPE_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.TelemetryEventType
 * Remapped: gvo
 */
namespace TelemetryEventType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvo", "net/minecraft/client/telemetry/TelemetryEventType", "net/minecraft/class_7966", "net/minecraft/client/session/telemetry/TelemetryEventType", "net/minecraft/src/C_260408_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.session.telemetry.TelemetryEventType#TYPES
    [[maybe_unused]] static jobject get_field_TYPES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "REGISTRY", "field_41440", "TYPES", "f_260686_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.session.telemetry.TelemetryEventType#TYPES
    [[maybe_unused]] static void set_field_TYPES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "REGISTRY", "field_41440", "TYPES", "f_260686_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_41435", "CODEC", "f_260690_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_41435", "CODEC", "f_260690_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#BASIC_PROPERTIES
    [[maybe_unused]] static jobject get_field_BASIC_PROPERTIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GLOBAL_PROPERTIES", "field_41441", "BASIC_PROPERTIES", "f_260446_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#BASIC_PROPERTIES
    [[maybe_unused]] static void set_field_BASIC_PROPERTIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "GLOBAL_PROPERTIES", "field_41441", "BASIC_PROPERTIES", "f_260446_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#REQUIRED_PROPERTIES
    [[maybe_unused]] static jobject get_field_REQUIRED_PROPERTIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "WORLD_SESSION_PROPERTIES", "field_41442", "REQUIRED_PROPERTIES", "f_260564_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#REQUIRED_PROPERTIES
    [[maybe_unused]] static void set_field_REQUIRED_PROPERTIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "WORLD_SESSION_PROPERTIES", "field_41442", "REQUIRED_PROPERTIES", "f_260564_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#WORLD_LOADED
    [[maybe_unused]] static jobject get_field_WORLD_LOADED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WORLD_LOADED", "field_41436", "WORLD_LOADED", "f_260573_"), "Lgvo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#WORLD_LOADED
    [[maybe_unused]] static void set_field_WORLD_LOADED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "WORLD_LOADED", "field_41436", "WORLD_LOADED", "f_260573_"), "Lgvo;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#PERFORMANCE_METRICS
    [[maybe_unused]] static jobject get_field_PERFORMANCE_METRICS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PERFORMANCE_METRICS", "field_41437", "PERFORMANCE_METRICS", "f_260620_"), "Lgvo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#PERFORMANCE_METRICS
    [[maybe_unused]] static void set_field_PERFORMANCE_METRICS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PERFORMANCE_METRICS", "field_41437", "PERFORMANCE_METRICS", "f_260620_"), "Lgvo;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#WORLD_LOAD_TIMES
    [[maybe_unused]] static jobject get_field_WORLD_LOAD_TIMES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WORLD_LOAD_TIMES", "field_41438", "WORLD_LOAD_TIMES", "f_260600_"), "Lgvo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#WORLD_LOAD_TIMES
    [[maybe_unused]] static void set_field_WORLD_LOAD_TIMES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "WORLD_LOAD_TIMES", "field_41438", "WORLD_LOAD_TIMES", "f_260600_"), "Lgvo;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#WORLD_UNLOADED
    [[maybe_unused]] static jobject get_field_WORLD_UNLOADED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WORLD_UNLOADED", "field_41439", "WORLD_UNLOADED", "f_260729_"), "Lgvo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#WORLD_UNLOADED
    [[maybe_unused]] static void set_field_WORLD_UNLOADED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WORLD_UNLOADED", "field_41439", "WORLD_UNLOADED", "f_260729_"), "Lgvo;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#ADVANCEMENT_MADE
    [[maybe_unused]] static jobject get_field_ADVANCEMENT_MADE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ADVANCEMENT_MADE", "field_44832", "ADVANCEMENT_MADE", "f_285568_"), "Lgvo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#ADVANCEMENT_MADE
    [[maybe_unused]] static void set_field_ADVANCEMENT_MADE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "ADVANCEMENT_MADE", "field_44832", "ADVANCEMENT_MADE", "f_285568_"), "Lgvo;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#GAME_LOAD_TIMES
    [[maybe_unused]] static jobject get_field_GAME_LOAD_TIMES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GAME_LOAD_TIMES", "field_44833", "GAME_LOAD_TIMES", "f_285589_"), "Lgvo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.session.telemetry.TelemetryEventType#GAME_LOAD_TIMES
    [[maybe_unused]] static void set_field_GAME_LOAD_TIMES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "GAME_LOAD_TIMES", "field_44833", "GAME_LOAD_TIMES", "f_285589_"), "Lgvo;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "id", "field_41443", "id", "f_260629_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "id", "field_41443", "id", "f_260629_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType#exportKey
    static jobject get_field_exportKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "exportKey", "field_41444", "exportKey", "f_260654_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#exportKey
    static void set_field_exportKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "exportKey", "field_41444", "exportKey", "f_260654_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType#properties
    static jobject get_field_properties(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "properties", "field_41445", "properties", "f_260492_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#properties
    static void set_field_properties(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "properties", "field_41445", "properties", "f_260492_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType#optional
    static jboolean get_field_optional(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "isOptIn", "field_41446", "optional", "f_260473_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#optional
    static void set_field_optional(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "isOptIn", "field_41446", "optional", "f_260473_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.session.telemetry.TelemetryEventType#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "codec", "field_41447", "codec", "f_260708_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.TelemetryEventType#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "codec", "field_41447", "codec", "f_260708_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_47725", "builder", "m_261309_"), "(Ljava/lang/String;Ljava/lang/String;)Lgvo$a;");
    }

    static jobject builder(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "method_47720", "getId", "m_260927_"), "()Ljava/lang/String;");
    }

    static jobject getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "properties", "method_47726", "getProperties", "m_261184_"), "()Ljava/util/List;");
    }

    static jobject getProperties(const jobject& obj) {
                
       const auto methodID = methodID_getProperties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "codec", "method_47728", "getCodec", "m_261283_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isOptional() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isOptIn", "method_47729", "isOptional", "m_260839_"), "()Z");
    }

    static jboolean isOptional(const jobject& obj) {
                
       const auto methodID = methodID_isOptional();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_createEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "export", "method_47721", "createEvent", "m_261110_"), "(Lcom/mojang/authlib/minecraft/TelemetrySession;Lgvr;)Lcom/mojang/authlib/minecraft/TelemetryEvent;");
    }

    static jobject createEvent(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createEvent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_hasProperty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "contains", "method_47722", "hasProperty", "m_260992_"), "(Lgvq;)Z");
    }

    static jboolean hasProperty(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hasProperty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTitle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "title", "method_47730", "getTitle", "m_261290_"), "()Lxn;");
    }

    static jobject getTitle(const jobject& obj) {
                
       const auto methodID = methodID_getTitle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDescription() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "description", "method_47731", "getDescription", "m_260935_"), "()Lxn;");
    }

    static jobject getDescription(const jobject& obj) {
                
       const auto methodID = methodID_getDescription();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "makeTranslation", "method_47724", "getText", "m_260811_"), "(Ljava/lang/String;)Lxn;");
    }

    static jobject getText(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTypes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "values", "method_47732", "getTypes", "m_261115_"), "()Ljava/util/List;");
    }

    static jobject getTypes() {
       const auto clazz = self();
       const auto methodID = methodID_getTypes();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_TELEMETRYEVENTTYPE_HPP