// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_EDITGAMERULESSCREEN$RULECATEGORYWIDGET$1_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_EDITGAMERULESSCREEN$RULECATEGORYWIDGET$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.EditGameRulesScreen$RuleCategoryWidget$1
 * Remapped: ftd$b$1
 */
namespace EditGameRulesScreen$RuleCategoryWidget$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftd$b$1", "net/minecraft/client/gui/screens/worldselection/EditGameRulesScreen$CategoryRuleEntry$1", "net/minecraft/class_5235$class_5237$1", "net/minecraft/client/gui/screen/world/EditGameRulesScreen$RuleCategoryWidget$1", "net/minecraft/src/C_3745_$C_3748_$C_141642_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "narrationPriority", "method_37018", "getType", "m_142684_"), "()Lfmg$a;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_appendNarrations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updateNarration", "method_37020", "appendNarrations", "m_142291_"), "(Lfmi;)V");
    }

    static void appendNarrations(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendNarrations();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_EDITGAMERULESSCREEN$RULECATEGORYWIDGET$1_HPP