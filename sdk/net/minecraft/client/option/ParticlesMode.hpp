// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_PARTICLESMODE_HPP
#define NET_MINECRAFT_CLIENT_OPTION_PARTICLESMODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.ParticlesMode
 * Remapped: fgt
 */
namespace ParticlesMode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgt", "net/minecraft/client/ParticleStatus", "net/minecraft/class_4066", "net/minecraft/client/option/ParticlesMode", "net/minecraft/src/C_3404_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.client.option.ParticlesMode#ALL
    [[maybe_unused]] static jobject get_field_ALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALL", "field_18197", "ALL", "ALL"), "Lfgt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.ParticlesMode#ALL
    [[maybe_unused]] static void set_field_ALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ALL", "field_18197", "ALL", "ALL"), "Lfgt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.ParticlesMode#DECREASED
    [[maybe_unused]] static jobject get_field_DECREASED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DECREASED", "field_18198", "DECREASED", "DECREASED"), "Lfgt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.ParticlesMode#DECREASED
    [[maybe_unused]] static void set_field_DECREASED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DECREASED", "field_18198", "DECREASED", "DECREASED"), "Lfgt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.ParticlesMode#MINIMAL
    [[maybe_unused]] static jobject get_field_MINIMAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MINIMAL", "field_18199", "MINIMAL", "MINIMAL"), "Lfgt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.ParticlesMode#MINIMAL
    [[maybe_unused]] static void set_field_MINIMAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MINIMAL", "field_18199", "MINIMAL", "MINIMAL"), "Lfgt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.option.ParticlesMode#BY_ID
    [[maybe_unused]] static jobject get_field_BY_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_ID", "field_18200", "BY_ID", "f_92185_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.option.ParticlesMode#BY_ID
    [[maybe_unused]] static void set_field_BY_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_ID", "field_18200", "BY_ID", "f_92185_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.ParticlesMode#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "id", "field_18201", "id", "f_92186_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.ParticlesMode#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "id", "field_18201", "id", "f_92186_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.ParticlesMode#translationKey
    static jobject get_field_translationKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "key", "field_18202", "translationKey", "f_92187_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.ParticlesMode#translationKey
    static void set_field_translationKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "key", "field_18202", "translationKey", "f_92187_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lfgt;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lfgt;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getKey", "method_7359", "getTranslationKey", "m_35968_"), "()Ljava/lang/String;");
    }

    static jobject getTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getId", "method_7362", "getId", "m_35965_"), "()I");
    }

    static jint getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_byId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byId", "method_18608", "byId", "m_92196_"), "(I)Lfgt;");
    }

    static jobject byId(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_PARTICLESMODE_HPP