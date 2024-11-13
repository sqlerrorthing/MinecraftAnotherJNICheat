// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_NAMESPACERESOURCEMANAGER$RESULT_HPP
#define NET_MINECRAFT_RESOURCE_NAMESPACERESOURCEMANAGER$RESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.NamespaceResourceManager$Result
 * Remapped: atv$a
 */
namespace NamespaceResourceManager$Result {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("atv$a", "net/minecraft/server/packs/resources/FallbackResourceManager$1ResourceWithSourceAndIndex", "net/minecraft/class_3294$class_7681", "net/minecraft/resource/NamespaceResourceManager$Result", "net/minecraft/src/C_67_$C_243516_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.resource.NamespaceResourceManager$Result#pack
    static jobject get_field_pack(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "packResources", "comp_1002", "pack", "f_243853_"), "Lasq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.resource.NamespaceResourceManager$Result#pack
    static void set_field_pack(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "packResources", "comp_1002", "pack", "f_243853_"), "Lasq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.resource.NamespaceResourceManager$Result#supplier
    static jobject get_field_supplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "resource", "comp_1003", "supplier", "f_244005_"), "Latw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.resource.NamespaceResourceManager$Result#supplier
    static void set_field_supplier(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "resource", "comp_1003", "supplier", "f_244005_"), "Latw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.resource.NamespaceResourceManager$Result#packIndex
    static jint get_field_packIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "packIndex", "comp_1004", "packIndex", "f_244110_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.resource.NamespaceResourceManager$Result#packIndex
    static void set_field_packIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "packIndex", "comp_1004", "packIndex", "f_244110_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID__pack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "packResources", "comp_1002", "pack", "f_243853_"), "()Lasq;");
    }

    static jobject _pack(const jobject& obj) {
                
       const auto methodID = methodID__pack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__supplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "resource", "comp_1003", "supplier", "f_244005_"), "()Latw;");
    }

    static jobject _supplier(const jobject& obj) {
                
       const auto methodID = methodID__supplier();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__packIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "packIndex", "comp_1004", "packIndex", "f_244110_"), "()I");
    }

    static jint _packIndex(const jobject& obj) {
                
       const auto methodID = methodID__packIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_NAMESPACERESOURCEMANAGER$RESULT_HPP