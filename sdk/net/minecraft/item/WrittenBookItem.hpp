// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_WRITTENBOOKITEM_HPP
#define NET_MINECRAFT_ITEM_WRITTENBOOKITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.WrittenBookItem
 * Remapped: cwr
 */
namespace WrittenBookItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cwr", "net/minecraft/world/item/WrittenBookItem", "net/minecraft/class_1843", "net/minecraft/item/WrittenBookItem", "net/minecraft/src/C_1439_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "getName", "method_7864", "getName", "m_7626_"), "(Lcuq;)Lwz;");
    }

    static jobject getName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_appendTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "appendHoverText", "method_7851", "appendTooltip", "m_7373_"), "(Lcuq;Lcul$b;Ljava/util/List;Lcwm;)V");
    }

    static void appendTooltip(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_appendTooltip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_use() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "use", "method_7836", "use", "m_7203_"), "(Ldcw;Lcmx;Lbqq;)Lbqs;");
    }

    static jobject use(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_use();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_resolve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "resolveBookComponents", "method_8054", "resolve", "m_43461_"), "(Lcuq;Let;Lcmx;)Z");
    }

    static jboolean resolve(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_resolve();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ITEM_WRITTENBOOKITEM_HPP