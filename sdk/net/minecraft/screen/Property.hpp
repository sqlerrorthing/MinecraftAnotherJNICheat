// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_PROPERTY_HPP
#define NET_MINECRAFT_SCREEN_PROPERTY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.Property
 * Remapped: cqn
 */
namespace Property {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqn", "net/minecraft/world/inventory/DataSlot", "net/minecraft/class_3915", "net/minecraft/screen/Property", "net/minecraft/src/C_1253_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.screen.Property#oldValue
    static jint get_field_oldValue(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "prevValue", "field_17307", "oldValue", "f_39399_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.Property#oldValue
    static void set_field_oldValue(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "prevValue", "field_17307", "oldValue", "f_39399_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "forContainer", "method_17405", "create", "m_39403_"), "(Lcqf;I)Lcqn;");
    }

    static jobject create(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "shared", "method_17406", "create", "m_39406_"), "([II)Lcqn;");
    }

    static jobject _create(const jarray& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID___create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "standalone", "method_17403", "create", "m_39401_"), "()Lcqn;");
    }

    static jobject __create() {
       const auto clazz = self();
       const auto methodID = methodID___create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get", "method_17407", "get", "m_6501_"), "()I");
    }

    static jint get(const jobject& obj) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_17404", "set", "m_6422_"), "(I)V");
    }

    static void set(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "checkAndClearUpdateFlag", "method_17408", "hasChanged", "m_39409_"), "()Z");
    }

    static jboolean hasChanged(const jobject& obj) {
                
       const auto methodID = methodID_hasChanged();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_PROPERTY_HPP