// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_TEXT_STRINGVISITABLE$STYLEDVISITOR_HPP
#define NET_MINECRAFT_TEXT_STRINGVISITABLE$STYLEDVISITOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.text.StringVisitable$StyledVisitor
 * Remapped: xe$b
 */
namespace StringVisitable$StyledVisitor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("xe$b", "net/minecraft/network/chat/FormattedText$StyledContentConsumer", "net/minecraft/class_5348$class_5246", "net/minecraft/text/StringVisitable$StyledVisitor", "net/minecraft/src/C_5000_$C_5006_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_7164_"), "(Lxw;Ljava/lang/String;)Ljava/util/Optional;");
    }

    static jobject accept(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_accept();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_TEXT_STRINGVISITABLE$STYLEDVISITOR_HPP