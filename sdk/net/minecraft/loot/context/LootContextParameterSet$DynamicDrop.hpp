// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTPARAMETERSET$DYNAMICDROP_HPP
#define NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTPARAMETERSET$DYNAMICDROP_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.context.LootContextParameterSet$DynamicDrop
 * Remapped: eru$b
 */
namespace LootContextParameterSet$DynamicDrop {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eru$b", "net/minecraft/world/level/storage/loot/LootParams$DynamicDrop", "net/minecraft/class_8567$class_49", "net/minecraft/loot/context/LootContextParameterSet$DynamicDrop", "net/minecraft/src/C_286926_$C_286929_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("add", "add", "add", "add", "m_287291_"), "(Ljava/util/function/Consumer;)V");
    }

    static void add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_LOOT_CONTEXT_LOOTCONTEXTPARAMETERSET$DYNAMICDROP_HPP