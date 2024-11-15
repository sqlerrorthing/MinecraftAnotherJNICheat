// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_FURNACERECIPESFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_FURNACERECIPESFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.FurnaceRecipesFix
 * Remapped: bdx
 */
namespace FurnaceRecipesFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bdx", "net/minecraft/util/datafix/fixes/FurnaceRecipeFix", "net/minecraft/class_4752", "net/minecraft/datafixer/fix/FurnaceRecipesFix", "net/minecraft/src/C_290_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateBlockEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "cap", "method_24313", "updateBlockEntities", "m_15849_"), "(Lcom/mojang/datafixers/types/Type;)Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject updateBlockEntities(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updateBlockEntities();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateBlockEntityData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateFurnaceContents", "method_24314", "updateBlockEntityData", "m_15851_"), "(Lcom/mojang/datafixers/types/Type;Lcom/mojang/datafixers/types/Type;Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject updateBlockEntityData(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_updateBlockEntityData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_FURNACERECIPESFIX_HPP