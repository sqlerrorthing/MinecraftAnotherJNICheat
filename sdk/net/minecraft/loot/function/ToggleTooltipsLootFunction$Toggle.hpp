// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_TOGGLETOOLTIPSLOOTFUNCTION$TOGGLE_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_TOGGLETOOLTIPSLOOTFUNCTION$TOGGLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.ToggleTooltipsLootFunction$Toggle
 * Remapped: euh$a
 */
namespace ToggleTooltipsLootFunction$Toggle {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("euh$a", "net/minecraft/world/level/storage/loot/functions/ToggleTooltips$ComponentToggle", "net/minecraft/class_9429$class_9430", "net/minecraft/loot/function/ToggleTooltipsLootFunction$Toggle", "net/minecraft/src/C_313269_$C_313512_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.function.ToggleTooltipsLootFunction$Toggle#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "comp_2523", "type", "f_316853_"), "Lkp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.ToggleTooltipsLootFunction$Toggle#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "type", "comp_2523", "type", "f_316853_"), "Lkp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.ToggleTooltipsLootFunction$Toggle#setter
    static jobject get_field_setter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "setter", "comp_2524", "setter", "f_313919_"), "Leuh$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.ToggleTooltipsLootFunction$Toggle#setter
    static void set_field_setter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "setter", "comp_2524", "setter", "f_313919_"), "Leuh$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyIfPresent", "method_58469", "apply", "m_324204_"), "(Lcuq;Z)V");
    }

    static void apply(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "comp_2523", "type", "f_316853_"), "()Lkp;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__setter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setter", "comp_2524", "setter", "f_313919_"), "()Leuh$b;");
    }

    static jobject _setter(const jobject& obj) {
                
       const auto methodID = methodID__setter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_TOGGLETOOLTIPSLOOTFUNCTION$TOGGLE_HPP