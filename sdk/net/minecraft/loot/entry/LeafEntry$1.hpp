// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_ENTRY_LEAFENTRY$1_HPP
#define NET_MINECRAFT_LOOT_ENTRY_LEAFENTRY$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.entry.LeafEntry$1
 * Remapped: esj$1
 */
namespace LeafEntry$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("esj$1", "net/minecraft/world/level/storage/loot/entries/LootPoolSingletonContainer$1", "net/minecraft/class_85$1", "net/minecraft/loot/entry/LeafEntry$1", "net/minecraft/src/C_2860_$C_2861_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_generateLoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createItemStack", "method_426", "generateLoot", "m_6941_"), "(Ljava/util/function/Consumer;Lerr;)V");
    }

    static void generateLoot(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_generateLoot();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_LOOT_ENTRY_LEAFENTRY$1_HPP