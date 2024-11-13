// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_TAG_TAGMANAGERLOADER$REGISTRYTAGS_HPP
#define NET_MINECRAFT_REGISTRY_TAG_TAGMANAGERLOADER$REGISTRYTAGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.tag.TagManagerLoader$RegistryTags
 * Remapped: aww$a
 */
namespace TagManagerLoader$RegistryTags {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aww$a", "net/minecraft/tags/TagManager$LoadResult", "net/minecraft/class_3505$class_6863", "net/minecraft/registry/tag/TagManagerLoader$RegistryTags", "net/minecraft/src/C_162_$C_203209_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.registry.tag.TagManagerLoader$RegistryTags#key
    static jobject get_field_key(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_328", "key", "f_203928_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.tag.TagManagerLoader$RegistryTags#key
    static void set_field_key(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "key", "comp_328", "key", "f_203928_"), "Lakq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.registry.tag.TagManagerLoader$RegistryTags#tags
    static jobject get_field_tags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tags", "comp_329", "tags", "f_203929_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.registry.tag.TagManagerLoader$RegistryTags#tags
    static void set_field_tags(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tags", "comp_329", "tags", "f_203929_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__key() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "key", "comp_328", "key", "f_203928_"), "()Lakq;");
    }

    static jobject _key(const jobject& obj) {
                
       const auto methodID = methodID__key();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__tags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tags", "comp_329", "tags", "f_203929_"), "()Ljava/util/Map;");
    }

    static jobject _tags(const jobject& obj) {
                
       const auto methodID = methodID__tags();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_TAG_TAGMANAGERLOADER$REGISTRYTAGS_HPP