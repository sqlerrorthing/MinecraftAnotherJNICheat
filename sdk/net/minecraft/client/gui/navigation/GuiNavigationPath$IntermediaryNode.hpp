// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_NAVIGATION_GUINAVIGATIONPATH$INTERMEDIARYNODE_HPP
#define NET_MINECRAFT_CLIENT_GUI_NAVIGATION_GUINAVIGATIONPATH$INTERMEDIARYNODE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.navigation.GuiNavigationPath$IntermediaryNode
 * Remapped: fhw$b
 */
namespace GuiNavigationPath$IntermediaryNode {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fhw$b", "net/minecraft/client/gui/ComponentPath$Path", "net/minecraft/class_8016$class_8018", "net/minecraft/client/gui/navigation/GuiNavigationPath$IntermediaryNode", "net/minecraft/src/C_263634_$C_263605_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.navigation.GuiNavigationPath$IntermediaryNode#component
    static jobject get_field_component(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "component", "comp_1189", "component", "f_263715_"), "Lfkh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.navigation.GuiNavigationPath$IntermediaryNode#component
    static void set_field_component(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "component", "comp_1189", "component", "f_263715_"), "Lfkh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.navigation.GuiNavigationPath$IntermediaryNode#childPath
    static jobject get_field_childPath(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "childPath", "comp_1190", "childPath", "f_263808_"), "Lfhw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.navigation.GuiNavigationPath$IntermediaryNode#childPath
    static void set_field_childPath(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "childPath", "comp_1190", "childPath", "f_263808_"), "Lfhw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setFocused() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyFocus", "method_48195", "setFocused", "m_264432_"), "(Z)V");
    }

    static void setFocused(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setFocused();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__component() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "component", "comp_1189", "component", "m_264222_"), "()Lfkh;");
    }

    static jobject _component(const jobject& obj) {
                
       const auto methodID = methodID__component();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__childPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "childPath", "comp_1190", "childPath", "f_263808_"), "()Lfhw;");
    }

    static jobject _childPath(const jobject& obj) {
                
       const auto methodID = methodID__childPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_NAVIGATION_GUINAVIGATIONPATH$INTERMEDIARYNODE_HPP