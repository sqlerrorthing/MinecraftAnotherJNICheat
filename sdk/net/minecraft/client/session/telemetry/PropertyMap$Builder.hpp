// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PROPERTYMAP$BUILDER_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PROPERTYMAP$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.PropertyMap$Builder
 * Remapped: gvr$a
 */
namespace PropertyMap$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvr$a", "net/minecraft/client/telemetry/TelemetryPropertyMap$Builder", "net/minecraft/class_7973$class_7974", "net/minecraft/client/session/telemetry/PropertyMap$Builder", "net/minecraft/src/C_260364_$C_260361_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.session.telemetry.PropertyMap$Builder#backingMap
    static jobject get_field_backingMap(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_41498", "backingMap", "f_260436_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.session.telemetry.PropertyMap$Builder#backingMap
    static void set_field_backingMap(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_41498", "backingMap", "f_260436_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_put() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "put", "method_47768", "put", "m_261137_"), "(Lgvq;Ljava/lang/Object;)Lgvr$a;");
    }

    static jobject put(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_put();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_putIfNonNull() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "putIfNotNull", "method_51800", "putIfNonNull", "m_285763_"), "(Lgvq;Ljava/lang/Object;)Lgvr$a;");
    }

    static jobject putIfNonNull(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_putIfNonNull();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_putAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "putAll", "method_47769", "putAll", "m_260832_"), "(Lgvr;)Lgvr$a;");
    }

    static jobject putAll(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_putAll();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_47767", "build", "m_260981_"), "()Lgvr;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PROPERTYMAP$BUILDER_HPP