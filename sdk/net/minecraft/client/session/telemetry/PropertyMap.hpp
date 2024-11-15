// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PROPERTYMAP_HPP
#define NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PROPERTYMAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.session.telemetry.PropertyMap
 * Remapped: gvr
 */
namespace PropertyMap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gvr", "net/minecraft/client/telemetry/TelemetryPropertyMap", "net/minecraft/class_7973", "net/minecraft/client/session/telemetry/PropertyMap", "net/minecraft/src/C_260364_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.session.telemetry.PropertyMap#backingMap
    static jobject get_field_backingMap(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_41496", "backingMap", "f_260483_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.session.telemetry.PropertyMap#backingMap
    static void set_field_backingMap(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entries", "field_41496", "backingMap", "f_260483_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_47759", "builder", "m_261098_"), "()Lgvr$a;");
    }

    static jobject builder() {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createCodec", "method_47761", "createCodec", "m_261042_"), "(Ljava/util/List;)Lcom/mojang/serialization/MapCodec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_47760", "get", "m_260858_"), "(Lgvq;)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_keySet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "propertySet", "method_47762", "keySet", "m_260904_"), "()Ljava/util/Set;");
    }

    static jobject keySet(const jobject& obj) {
                
       const auto methodID = methodID_keySet();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SESSION_TELEMETRY_PROPERTYMAP_HPP