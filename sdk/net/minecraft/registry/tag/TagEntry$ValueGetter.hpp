// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_REGISTRY_TAG_TAGENTRY$VALUEGETTER_HPP
#define NET_MINECRAFT_REGISTRY_TAG_TAGENTRY$VALUEGETTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.registry.tag.TagEntry$ValueGetter
 * Remapped: aws$a
 */
namespace TagEntry$ValueGetter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("aws$a", "net/minecraft/tags/TagEntry$Lookup", "net/minecraft/class_3497$class_7474", "net/minecraft/registry/tag/TagEntry$ValueGetter", "net/minecraft/src/C_212961_$C_212962_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_direct() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "element", "method_43948", "direct", "m_213619_"), "(Lakr;)Ljava/lang/Object;");
    }

    static jobject direct(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_direct();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tag", "method_43949", "tag", "m_214048_"), "(Lakr;)Ljava/util/Collection;");
    }

    static jobject tag(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tag();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_REGISTRY_TAG_TAGENTRY$VALUEGETTER_HPP