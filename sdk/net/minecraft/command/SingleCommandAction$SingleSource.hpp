// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_SINGLECOMMANDACTION$SINGLESOURCE_HPP
#define NET_MINECRAFT_COMMAND_SINGLECOMMANDACTION$SINGLESOURCE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.SingleCommandAction$SingleSource
 * Remapped: hy$b
 */
namespace SingleCommandAction$SingleSource {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("hy$b", "net/minecraft/commands/execution/tasks/BuildContexts$TopLevel", "net/minecraft/class_8858$class_8860", "net/minecraft/command/SingleCommandAction$SingleSource", "net/minecraft/src/C_301911_$C_301902_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.command.SingleCommandAction$SingleSource#source
    static jobject get_field_source(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "source", "field_46746", "source", "f_302189_"), "Lev;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.SingleCommandAction$SingleSource#source
    static void set_field_source(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "source", "field_46746", "source", "f_302189_"), "Lev;");
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

#endif // NET_MINECRAFT_COMMAND_SINGLECOMMANDACTION$SINGLESOURCE_HPP