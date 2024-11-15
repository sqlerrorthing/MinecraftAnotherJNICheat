// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_LOOTTABLE_VANILLA_VANILLAENTITYLOOTTABLEGENERATOR_HPP
#define NET_MINECRAFT_DATA_SERVER_LOOTTABLE_VANILLA_VANILLAENTITYLOOTTABLEGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.loottable.vanilla.VanillaEntityLootTableGenerator
 * Remapped: ne
 */
namespace VanillaEntityLootTableGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ne", "net/minecraft/data/loot/packs/VanillaEntityLoot", "net/minecraft/class_2434", "net/minecraft/data/server/loottable/vanilla/VanillaEntityLootTableGenerator", "net/minecraft/src/C_243615_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "generate", "method_10400", "generate", "m_246942_"), "()V");
    }

    static void generate(const jobject& obj) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_createElderGuardianTableBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "elderGuardianLootTable", "method_48515", "createElderGuardianTableBuilder", "m_266591_"), "()Lerw$a;");
    }

    static jobject createElderGuardianTableBuilder(const jobject& obj) {
                
       const auto methodID = methodID_createElderGuardianTableBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_LOOTTABLE_VANILLA_VANILLAENTITYLOOTTABLEGENERATOR_HPP