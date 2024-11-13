// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$ARGBLERPER_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$ARGBLERPER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.DisplayEntity$ArgbLerper
 * Remapped: bsq$c
 */
namespace DisplayEntity$ArgbLerper {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsq$c", "net/minecraft/world/entity/Display$ColorInterpolator", "net/minecraft/class_8113$class_8116", "net/minecraft/entity/decoration/DisplayEntity$ArgbLerper", "net/minecraft/src/C_268383_$C_268402_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$ArgbLerper#previous
    static jint get_field_previous(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "previous", "comp_1320", "previous", "f_276650_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$ArgbLerper#previous
    static void set_field_previous(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "previous", "comp_1320", "previous", "f_276650_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$ArgbLerper#current
    static jint get_field_current(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "current", "comp_1321", "current", "f_276509_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$ArgbLerper#current
    static void set_field_current(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "current", "comp_1321", "current", "f_276509_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_lerp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("get", "get", "method_48889", "lerp", "m_269120_"), "(F)I");
    }

    static jint lerp(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_lerp();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__previous() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "previous", "comp_1320", "previous", "f_276650_"), "()I");
    }

    static jint _previous(const jobject& obj) {
                
       const auto methodID = methodID__previous();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__current() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "current", "comp_1321", "current", "f_276509_"), "()I");
    }

    static jint _current(const jobject& obj) {
                
       const auto methodID = methodID__current();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$ARGBLERPER_HPP