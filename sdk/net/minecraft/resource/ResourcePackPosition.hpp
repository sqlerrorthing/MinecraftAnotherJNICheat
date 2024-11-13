// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_RESOURCEPACKPOSITION_HPP
#define NET_MINECRAFT_RESOURCE_RESOURCEPACKPOSITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.ResourcePackPosition
 * Remapped: asr
 */
namespace ResourcePackPosition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("asr", "net/minecraft/server/packs/PackSelectionConfig", "net/minecraft/class_9225", "net/minecraft/resource/ResourcePackPosition", "net/minecraft/src/C_313882_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.resource.ResourcePackPosition#required
    static jboolean get_field_required(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "required", "comp_2333", "required", "f_314129_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ResourcePackPosition#required
    static void set_field_required(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "required", "comp_2333", "required", "f_314129_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.ResourcePackPosition#defaultPosition
    static jobject get_field_defaultPosition(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "defaultPosition", "comp_2334", "defaultPosition", "f_314230_"), "Latm$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ResourcePackPosition#defaultPosition
    static void set_field_defaultPosition(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "defaultPosition", "comp_2334", "defaultPosition", "f_314230_"), "Latm$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.ResourcePackPosition#fixedPosition
    static jboolean get_field_fixedPosition(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fixedPosition", "comp_2335", "fixedPosition", "f_315456_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.ResourcePackPosition#fixedPosition
    static void set_field_fixedPosition(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fixedPosition", "comp_2335", "fixedPosition", "f_315456_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID__required() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "required", "comp_2333", "required", "f_314129_"), "()Z");
    }

    static jboolean _required(const jobject& obj) {
                
       const auto methodID = methodID__required();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__defaultPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "defaultPosition", "comp_2334", "defaultPosition", "f_314230_"), "()Latm$b;");
    }

    static jobject _defaultPosition(const jobject& obj) {
                
       const auto methodID = methodID__defaultPosition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__fixedPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "fixedPosition", "comp_2335", "fixedPosition", "f_315456_"), "()Z");
    }

    static jboolean _fixedPosition(const jobject& obj) {
                
       const auto methodID = methodID__fixedPosition();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_RESOURCEPACKPOSITION_HPP