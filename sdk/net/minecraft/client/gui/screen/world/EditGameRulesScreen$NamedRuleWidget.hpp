// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_EDITGAMERULESSCREEN$NAMEDRULEWIDGET_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_EDITGAMERULESSCREEN$NAMEDRULEWIDGET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.EditGameRulesScreen$NamedRuleWidget
 * Remapped: ftd$d
 */
namespace EditGameRulesScreen$NamedRuleWidget {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftd$d", "net/minecraft/client/gui/screens/worldselection/EditGameRulesScreen$GameRuleEntry", "net/minecraft/class_5235$class_5400", "net/minecraft/client/gui/screen/world/EditGameRulesScreen$NamedRuleWidget", "net/minecraft/src/C_3745_$C_3750_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.world.EditGameRulesScreen$NamedRuleWidget#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "label", "field_25629", "name", "f_101159_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.EditGameRulesScreen$NamedRuleWidget#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "label", "field_25629", "name", "f_101159_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.client.gui.screen.world.EditGameRulesScreen$NamedRuleWidget#children
    static jobject get_field_children(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "children", "field_25630", "children", "f_101160_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.client.gui.screen.world.EditGameRulesScreen$NamedRuleWidget#children
    static void set_field_children(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "children", "field_25630", "children", "f_101160_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__children() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aK_", "children", "method_25396", "children", "m_6702_"), "()Ljava/util/List;");
    }

    static jobject _children(const jobject& obj) {
                
       const auto methodID = methodID__children();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_selectableChildren() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "narratables", "method_37025", "selectableChildren", "m_142437_"), "()Ljava/util/List;");
    }

    static jobject selectableChildren(const jobject& obj) {
                
       const auto methodID = methodID_selectableChildren();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_drawName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderLabel", "method_29989", "drawName", "m_280223_"), "(Lfhz;II)V");
    }

    static void drawName(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_drawName();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_EDITGAMERULESSCREEN$NAMEDRULEWIDGET_HPP