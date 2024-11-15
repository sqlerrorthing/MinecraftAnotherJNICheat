// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_STATSSCREEN$ENTITYSTATSLISTWIDGET$ENTRY_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_STATSSCREEN$ENTITYSTATSLISTWIDGET$ENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry
 * Remapped: foh$c$a
 */
namespace StatsScreen$EntityStatsListWidget$Entry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("foh$c$a", "net/minecraft/client/gui/screens/achievement/StatsScreen$MobsStatisticsList$MobRow", "net/minecraft/class_447$class_4202$class_4201", "net/minecraft/client/gui/screen/StatsScreen$EntityStatsListWidget$Entry", "net/minecraft/src/C_3594_$C_3601_$C_3602_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#entityTypeName
    static jobject get_field_entityTypeName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mobName", "field_26548", "entityTypeName", "f_97105_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#entityTypeName
    static void set_field_entityTypeName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "mobName", "field_26548", "entityTypeName", "f_97105_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#killedText
    static jobject get_field_killedText(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "kills", "field_26549", "killedText", "f_97106_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#killedText
    static void set_field_killedText(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "kills", "field_26549", "killedText", "f_97106_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#killedByText
    static jobject get_field_killedByText(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "killedBy", "field_26551", "killedByText", "f_97108_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#killedByText
    static void set_field_killedByText(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "killedBy", "field_26551", "killedByText", "f_97108_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#killedAny
    static jboolean get_field_killedAny(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hasKills", "field_26550", "killedAny", "f_97107_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#killedAny
    static void set_field_killedAny(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hasKills", "field_26550", "killedAny", "f_97107_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#killedByAny
    static jboolean get_field_killedByAny(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "wasKilledBy", "field_26552", "killedByAny", "f_97109_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.screen.StatsScreen$EntityStatsListWidget$Entry#killedByAny
    static void set_field_killedByAny(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "wasKilledBy", "field_26552", "killedByAny", "f_97109_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25343", "render", "m_6311_"), "(Lfhz;IIIIIIIZF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5, const jint& arg6, const jint& arg7, const jboolean& arg8, const jfloat& arg9) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    };
    
    static jmethodID methodID_getNarration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNarration", "method_37006", "getNarration", "m_142172_"), "()Lwz;");
    }

    static jobject getNarration(const jobject& obj) {
                
       const auto methodID = methodID_getNarration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_STATSSCREEN$ENTITYSTATSLISTWIDGET$ENTRY_HPP