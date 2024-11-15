// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_VALIDATE_STRUCTUREVALIDATORPROVIDER_HPP
#define NET_MINECRAFT_DATA_VALIDATE_STRUCTUREVALIDATORPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.validate.StructureValidatorProvider
 * Remapped: pi
 */
namespace StructureValidatorProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("pi", "net/minecraft/data/structures/StructureUpdater", "net/minecraft/class_3843", "net/minecraft/data/validate/StructureValidatorProvider", "net/minecraft/src/C_4846_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.data.validate.StructureValidatorProvider#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_24617", "LOGGER", "f_126499_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.validate.StructureValidatorProvider#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_24617", "LOGGER", "f_126499_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.data.validate.StructureValidatorProvider#PATH_PREFIX
    [[maybe_unused]] static jobject get_field_PATH_PREFIX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PREFIX", "field_52179", "PATH_PREFIX", "f_337499_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.data.validate.StructureValidatorProvider#PATH_PREFIX
    [[maybe_unused]] static void set_field_PATH_PREFIX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PREFIX", "field_52179", "PATH_PREFIX", "f_337499_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("apply", "apply", "method_21674", "write", "m_6392_"), "(Ljava/lang/String;Lub;)Lub;");
    }

    static jobject write(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_write();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "update", "method_32235", "update", "m_176822_"), "(Ljava/lang/String;Lub;)Lub;");
    }

    static jobject update(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_update();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATA_VALIDATE_STRUCTUREVALIDATORPROVIDER_HPP