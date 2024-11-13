// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONDITION_LOOTCONDITION$BUILDER_HPP
#define NET_MINECRAFT_LOOT_CONDITION_LOOTCONDITION$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.condition.LootCondition$Builder
 * Remapped: evc$a
 */
namespace LootCondition$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("evc$a", "net/minecraft/world/level/storage/loot/predicates/LootItemCondition$Builder", "net/minecraft/class_5341$class_210", "net/minecraft/loot/condition/LootCondition$Builder", "net/minecraft/src/C_3004_$C_3005_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("build", "build", "", "", "m_6409_"), "()Levc;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_invert() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("invert", "invert", "method_16780", "invert", "m_81807_"), "()Levc$a;");
    }

    static jobject invert(const jobject& obj) {
                
       const auto methodID = methodID_invert();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_or() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("or", "or", "method_893", "or", "m_285888_"), "(Levc$a;)Leuq$a;");
    }

    static jobject or(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_or();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_and() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("and", "and", "and", "and", "m_285747_"), "(Levc$a;)Leup$a;");
    }

    static jobject and(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_and();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONDITION_LOOTCONDITION$BUILDER_HPP