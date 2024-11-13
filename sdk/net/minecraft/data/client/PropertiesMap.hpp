// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_PROPERTIESMAP_HPP
#define NET_MINECRAFT_DATA_CLIENT_PROPERTIESMAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.PropertiesMap
 * Remapped: nw
 */
namespace PropertiesMap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("nw", "net/minecraft/data/models/blockstates/Selector", "net/minecraft/class_4934", "net/minecraft/data/client/PropertiesMap", "net/minecraft/src/C_4813_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.data.client.PropertiesMap#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_22881", "EMPTY", "f_125479_"), "Lnw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.client.PropertiesMap#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_22881", "EMPTY", "f_125479_"), "Lnw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.client.PropertiesMap#COMPARATOR
    [[maybe_unused]] static jobject get_field_COMPARATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "COMPARE_BY_NAME", "field_22882", "COMPARATOR", "f_125480_"), "Ljava/util/Comparator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.client.PropertiesMap#COMPARATOR
    [[maybe_unused]] static void set_field_COMPARATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "COMPARE_BY_NAME", "field_22882", "COMPARATOR", "f_125480_"), "Ljava/util/Comparator;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.data.client.PropertiesMap#values
    static jobject get_field_values(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "values", "field_22883", "values", "f_125481_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.PropertiesMap#values
    static void set_field_values(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "values", "field_22883", "values", "f_125481_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_withValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "extend", "method_25819", "withValue", "m_125486_"), "(Lduf$a;)Lnw;");
    }

    static jobject withValue(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withValue();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "extend", "method_25820", "copyOf", "m_125488_"), "(Lnw;)Lnw;");
    }

    static jobject copyOf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyOf();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_empty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "empty", "method_25818", "empty", "m_125485_"), "()Lnw;");
    }

    static jobject empty() {
       const auto clazz = self();
       const auto methodID = methodID_empty();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_withValues() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_25821", "withValues", "m_125490_"), "([Lduf$a;)Lnw;");
    }

    static jobject withValues(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_withValues();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getKey", "method_25822", "asString", "m_125492_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_PROPERTIESMAP_HPP