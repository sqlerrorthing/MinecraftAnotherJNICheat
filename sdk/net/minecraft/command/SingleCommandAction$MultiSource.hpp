// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_SINGLECOMMANDACTION$MULTISOURCE_HPP
#define NET_MINECRAFT_COMMAND_SINGLECOMMANDACTION$MULTISOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.SingleCommandAction$MultiSource
 * Remapped: hy$a
 */
namespace SingleCommandAction$MultiSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hy$a", "net/minecraft/commands/execution/tasks/BuildContexts$Continuation", "net/minecraft/class_8858$class_8859", "net/minecraft/command/SingleCommandAction$MultiSource", "net/minecraft/src/C_301911_$C_301952_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.SingleCommandAction$MultiSource#flags
    static jobject get_field_flags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "modifiers", "field_47164", "flags", "f_302349_"), "Lhn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.SingleCommandAction$MultiSource#flags
    static void set_field_flags(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "modifiers", "field_47164", "flags", "f_302349_"), "Lhn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.SingleCommandAction$MultiSource#baseSource
    static jobject get_field_baseSource(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "originalSource", "field_47165", "baseSource", "f_303654_"), "Lev;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.SingleCommandAction$MultiSource#baseSource
    static void set_field_baseSource(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "originalSource", "field_47165", "baseSource", "f_303654_"), "Lev;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.command.SingleCommandAction$MultiSource#sources
    static jobject get_field_sources(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "sources", "field_46745", "sources", "f_303156_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.SingleCommandAction$MultiSource#sources
    static void set_field_sources(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "sources", "field_46745", "sources", "f_303156_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_execute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("execute", "execute", "execute", "execute", "m_305380_"), "(Lhs;Lhu;)V");
    }

    static void execute(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_execute();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_SINGLECOMMANDACTION$MULTISOURCE_HPP