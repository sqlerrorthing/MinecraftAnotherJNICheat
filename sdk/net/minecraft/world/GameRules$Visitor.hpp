// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GAMERULES$VISITOR_HPP
#define NET_MINECRAFT_WORLD_GAMERULES$VISITOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.GameRules$Visitor
 * Remapped: dcs$c
 */
namespace GameRules$Visitor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcs$c", "net/minecraft/world/level/GameRules$GameRuleTypeVisitor", "net/minecraft/class_1928$class_4311", "net/minecraft/world/GameRules$Visitor", "net/minecraft/src/C_1583_$C_1587_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_visit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visit", "method_20762", "visit", "m_6889_"), "(Ldcs$e;Ldcs$f;)V");
    }

    static void visit(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_visit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitBoolean() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "visitBoolean", "method_27329", "visitBoolean", "m_6891_"), "(Ldcs$e;Ldcs$f;)V");
    }

    static void visitBoolean(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_visitBoolean();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_visitInt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "visitInteger", "method_27330", "visitInt", "m_6894_"), "(Ldcs$e;Ldcs$f;)V");
    }

    static void visitInt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_visitInt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GAMERULES$VISITOR_HPP