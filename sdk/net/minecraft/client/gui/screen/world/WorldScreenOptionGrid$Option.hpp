// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDSCREENOPTIONGRID$OPTION_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDSCREENOPTIONGRID$OPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.WorldScreenOptionGrid$Option
 * Remapped: ftj$c
 */
namespace WorldScreenOptionGrid$Option {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftj$c", "net/minecraft/client/gui/screens/worldselection/SwitchGrid$LabeledSwitch", "net/minecraft/class_8096$class_8098", "net/minecraft/client/gui/screen/world/WorldScreenOptionGrid$Option", "net/minecraft/src/C_267350_$C_267343_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid$Option#button
    static jobject get_field_button(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "button", "comp_1261", "button", "f_267423_"), "Lfit;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid$Option#button
    static void set_field_button(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "button", "comp_1261", "button", "f_267423_"), "Lfit;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid$Option#getter
    static jobject get_field_getter(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "stateSupplier", "comp_1262", "getter", "f_267403_"), "Ljava/util/function/BooleanSupplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid$Option#getter
    static void set_field_getter(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "stateSupplier", "comp_1262", "getter", "f_267403_"), "Ljava/util/function/BooleanSupplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid$Option#toggleable
    static jobject get_field_toggleable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "isActiveCondition", "comp_1263", "toggleable", "f_267483_"), "Ljava/util/function/BooleanSupplier;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid$Option#toggleable
    static void set_field_toggleable(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "isActiveCondition", "comp_1263", "toggleable", "f_267483_"), "Ljava/util/function/BooleanSupplier;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_refresh() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "refreshState", "method_48688", "refresh", "m_267626_"), "()V");
    }

    static void refresh(const jobject& obj) {
                
       const auto methodID = methodID_refresh();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__button() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "button", "comp_1261", "button", "f_267423_"), "()Lfit;");
    }

    static jobject _button(const jobject& obj) {
                
       const auto methodID = methodID__button();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__getter() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "stateSupplier", "comp_1262", "getter", "f_267403_"), "()Ljava/util/function/BooleanSupplier;");
    }

    static jobject _getter(const jobject& obj) {
                
       const auto methodID = methodID__getter();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__toggleable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isActiveCondition", "comp_1263", "toggleable", "f_267483_"), "()Ljava/util/function/BooleanSupplier;");
    }

    static jobject _toggleable(const jobject& obj) {
                
       const auto methodID = methodID__toggleable();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDSCREENOPTIONGRID$OPTION_HPP