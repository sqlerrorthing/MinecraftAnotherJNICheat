// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_SEARCH_IDENTIFIERSEARCHER$1_HPP
#define NET_MINECRAFT_CLIENT_SEARCH_IDENTIFIERSEARCHER$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.search.IdentifierSearcher$1
 * Remapped: guj$1
 */
namespace IdentifierSearcher$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("guj$1", "net/minecraft/client/searchtree/ResourceLocationSearchTree$1", "net/minecraft/class_7455$1", "net/minecraft/client/search/IdentifierSearcher$1", "net/minecraft/src/C_213444_$C_213445_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_searchNamespace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "searchNamespace", "method_43801", "searchNamespace", "m_213904_"), "(Ljava/lang/String;)Ljava/util/List;");
    }

    static jobject searchNamespace(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_searchNamespace();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_searchPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "searchPath", "method_43803", "searchPath", "m_213906_"), "(Ljava/lang/String;)Ljava/util/List;");
    }

    static jobject searchPath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_searchPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_SEARCH_IDENTIFIERSEARCHER$1_HPP