// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ADVANCEMENTSFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ADVANCEMENTSFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.AdvancementsFix
 * Remapped: bag
 */
namespace AdvancementsFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bag", "net/minecraft/util/datafix/fixes/AdvancementsFix", "net/minecraft/class_3555", "net/minecraft/datafixer/fix/AdvancementsFix", "net/minecraft/src/C_215_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.AdvancementsFix#RENAMED_ADVANCEMENTS
    [[maybe_unused]] static jobject get_field_RENAMED_ADVANCEMENTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RENAMES", "field_15788", "RENAMED_ADVANCEMENTS", "f_14642_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.AdvancementsFix#RENAMED_ADVANCEMENTS
    [[maybe_unused]] static void set_field_RENAMED_ADVANCEMENTS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RENAMES", "field_15788", "RENAMED_ADVANCEMENTS", "f_14642_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ADVANCEMENTSFIX_HPP