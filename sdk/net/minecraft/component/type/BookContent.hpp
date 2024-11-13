// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_TYPE_BOOKCONTENT_HPP
#define NET_MINECRAFT_COMPONENT_TYPE_BOOKCONTENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.type.BookContent
 * Remapped: cxe
 */
namespace BookContent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cxe", "net/minecraft/world/item/component/BookContent", "net/minecraft/class_9364", "net/minecraft/component/type/BookContent", "net/minecraft/src/C_313473_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_pages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pages", "comp_2422", "pages", "m_319402_"), "()Ljava/util/List;");
    }

    static jobject pages(const jobject& obj) {
                
       const auto methodID = methodID_pages();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_withPages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withReplacedPages", "method_58186", "withPages", "m_319955_"), "(Ljava/util/List;)Ljava/lang/Object;");
    }

    static jobject withPages(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withPages();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_TYPE_BOOKCONTENT_HPP