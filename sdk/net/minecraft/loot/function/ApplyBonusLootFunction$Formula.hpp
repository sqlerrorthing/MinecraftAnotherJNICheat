// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_APPLYBONUSLOOTFUNCTION$FORMULA_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_APPLYBONUSLOOTFUNCTION$FORMULA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.ApplyBonusLootFunction$Formula
 * Remapped: eso$b
 */
namespace ApplyBonusLootFunction$Formula {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eso$b", "net/minecraft/world/level/storage/loot/functions/ApplyBonusCount$Formula", "net/minecraft/class_94$class_96", "net/minecraft/loot/function/ApplyBonusLootFunction$Formula", "net/minecraft/src/C_2874_$C_2877_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "calculateNewCount", "method_467", "getValue", "m_213779_"), "(Layw;II)I");
    }

    static jint getValue(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getValue();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getType", "method_466", "getType", "m_5713_"), "()Leso$c;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_APPLYBONUSLOOTFUNCTION$FORMULA_HPP