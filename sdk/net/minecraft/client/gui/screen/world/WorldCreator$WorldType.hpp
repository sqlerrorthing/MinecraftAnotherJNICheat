// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDCREATOR$WORLDTYPE_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDCREATOR$WORLDTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.world.WorldCreator$WorldType
 * Remapped: ftl$b
 */
namespace WorldCreator$WorldType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ftl$b", "net/minecraft/client/gui/screens/worldselection/WorldCreationUiState$WorldTypeEntry", "net/minecraft/class_8100$class_8101", "net/minecraft/client/gui/screen/world/WorldCreator$WorldType", "net/minecraft/src/C_267339_$C_267337_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.world.WorldCreator$WorldType#preset
    static jobject get_field_preset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "preset", "comp_1238", "preset", "f_267398_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldCreator$WorldType#preset
    static void set_field_preset(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "preset", "comp_1238", "preset", "f_267398_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.client.gui.screen.world.WorldCreator$WorldType#CUSTOM_GENERATOR_TEXT
    [[maybe_unused]] static jobject get_field_CUSTOM_GENERATOR_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CUSTOM_WORLD_DESCRIPTION", "field_42226", "CUSTOM_GENERATOR_TEXT", "f_267418_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.world.WorldCreator$WorldType#CUSTOM_GENERATOR_TEXT
    [[maybe_unused]] static void set_field_CUSTOM_GENERATOR_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CUSTOM_WORLD_DESCRIPTION", "field_42226", "CUSTOM_GENERATOR_TEXT", "f_267418_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "describePreset", "method_48737", "getName", "m_267572_"), "()Lwz;");
    }

    static jobject getName(const jobject& obj) {
                
       const auto methodID = methodID_getName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isAmplified() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isAmplified", "method_48739", "isAmplified", "m_267589_"), "()Z");
    }

    static jboolean isAmplified(const jobject& obj) {
                
       const auto methodID = methodID_isAmplified();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__preset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "preset", "comp_1238", "preset", "f_267398_"), "()Ljm;");
    }

    static jobject _preset(const jobject& obj) {
                
       const auto methodID = methodID__preset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_WORLD_WORLDCREATOR$WORLDTYPE_HPP