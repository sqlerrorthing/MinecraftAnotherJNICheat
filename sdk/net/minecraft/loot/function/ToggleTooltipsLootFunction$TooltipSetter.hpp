// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_TOGGLETOOLTIPSLOOTFUNCTION$TOOLTIPSETTER_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_TOGGLETOOLTIPSLOOTFUNCTION$TOOLTIPSETTER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.ToggleTooltipsLootFunction$TooltipSetter
 * Remapped: euh$b
 */
namespace ToggleTooltipsLootFunction$TooltipSetter {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("euh$b", "net/minecraft/world/level/storage/loot/functions/ToggleTooltips$TooltipWither", "net/minecraft/class_9429$class_9431", "net/minecraft/loot/function/ToggleTooltipsLootFunction$TooltipSetter", "net/minecraft/src/C_313269_$C_313870_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_withTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("withTooltip", "withTooltip", "withTooltip", "withTooltip", "m_322205_"), "(Ljava/lang/Object;Z)Ljava/lang/Object;");
    }

    static jobject withTooltip(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_withTooltip();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_TOGGLETOOLTIPSLOOTFUNCTION$TOOLTIPSETTER_HPP