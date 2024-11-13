// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_COMPONENTMAP$BUILDER$SIMPLECOMPONENTMAP_HPP
#define NET_MINECRAFT_COMPONENT_COMPONENTMAP$BUILDER$SIMPLECOMPONENTMAP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.ComponentMap$Builder$SimpleComponentMap
 * Remapped: km$a$a
 */
namespace ComponentMap$Builder$SimpleComponentMap {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("km$a$a", "net/minecraft/core/component/DataComponentMap$Builder$SimpleMap", "net/minecraft/class_9323$class_9324$class_9325", "net/minecraft/component/ComponentMap$Builder$SimpleComponentMap", "net/minecraft/src/C_313470_$C_313535_$C_313584_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.component.ComponentMap$Builder$SimpleComponentMap#map
    static jobject get_field_map(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "map", "comp_2440", "map", "f_314581_"), "Lit/unimi/dsi/fastutil/objects/Reference2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.ComponentMap$Builder$SimpleComponentMap#map
    static void set_field_map(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "map", "comp_2440", "map", "f_314581_"), "Lit/unimi/dsi/fastutil/objects/Reference2ObjectMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_57829", "get", "m_318834_"), "(Lkp;)Ljava/lang/Object;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_contains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "has", "method_57832", "contains", "m_321946_"), "(Lkp;)Z");
    }

    static jboolean contains(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_contains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTypes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "keySet", "method_57831", "getTypes", "m_319675_"), "()Ljava/util/Set;");
    }

    static jobject getTypes(const jobject& obj) {
                
       const auto methodID = methodID_getTypes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_iterator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("iterator", "iterator", "", "", "iterator"), "()Ljava/util/Iterator;");
    }

    static jobject iterator(const jobject& obj) {
                
       const auto methodID = methodID_iterator();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_size() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "size", "method_57835", "size", "m_319491_"), "()I");
    }

    static jint size(const jobject& obj) {
                
       const auto methodID = methodID_size();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__map() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "map", "comp_2440", "map", "f_314581_"), "()Lit/unimi/dsi/fastutil/objects/Reference2ObjectMap;");
    }

    static jobject _map(const jobject& obj) {
                
       const auto methodID = methodID__map();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_COMPONENTMAP$BUILDER$SIMPLECOMPONENTMAP_HPP