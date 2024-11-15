// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDSCREENOPTIONGRID_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDSCREENOPTIONGRID_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.WorldScreenOptionGrid
 * Remapped: ftj
 */
namespace WorldScreenOptionGrid {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftj", "net/minecraft/client/gui/screens/worldselection/SwitchGrid", "net/minecraft/class_8096", "net/minecraft/client/gui/screen/world/WorldScreenOptionGrid", "net/minecraft/src/C_267350_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid#BUTTON_WIDTH
    [[maybe_unused]] static jint get_field_BUTTON_WIDTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_SWITCH_BUTTON_WIDTH", "field_42196", "BUTTON_WIDTH", "f_267419_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid#BUTTON_WIDTH
    [[maybe_unused]] static void set_field_BUTTON_WIDTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DEFAULT_SWITCH_BUTTON_WIDTH", "field_42196", "BUTTON_WIDTH", "f_267419_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid#options
    static jobject get_field_options(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "switches", "field_42197", "options", "f_267482_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldScreenOptionGrid#options
    static void set_field_options(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "switches", "field_42197", "options", "f_267482_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_refresh() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "refreshStates", "method_48683", "refresh", "m_267819_"), "()V");
    }

    static void refresh(const jobject& obj) {
                
       const auto methodID = methodID_refresh();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_builder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "builder", "method_48684", "builder", "m_267742_"), "(I)Lftj$a;");
    }

    static jobject builder(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_builder();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDSCREENOPTIONGRID_HPP