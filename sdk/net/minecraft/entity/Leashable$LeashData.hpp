// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_LEASHABLE$LEASHDATA_HPP
#define NET_MINECRAFT_ENTITY_LEASHABLE$LEASHDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.Leashable$LeashData
 * Remapped: btk$a
 */
namespace Leashable$LeashData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("btk$a", "net/minecraft/world/entity/Leashable$LeashData", "net/minecraft/class_9817$class_9818", "net/minecraft/entity/Leashable$LeashData", "net/minecraft/src/C_336597_$C_336538_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.entity.Leashable$LeashData#unresolvedLeashHolderId
    static jint get_field_unresolvedLeashHolderId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "delayedLeashHolderId", "field_52219", "unresolvedLeashHolderId", "f_337410_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.entity.Leashable$LeashData#unresolvedLeashHolderId
    static void set_field_unresolvedLeashHolderId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "delayedLeashHolderId", "field_52219", "unresolvedLeashHolderId", "f_337410_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.Leashable$LeashData#leashHolder
    static jobject get_field_leashHolder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "leashHolder", "field_52217", "leashHolder", "f_336742_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.Leashable$LeashData#leashHolder
    static void set_field_leashHolder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "leashHolder", "field_52217", "leashHolder", "f_336742_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.Leashable$LeashData#unresolvedLeashData
    static jobject get_field_unresolvedLeashData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "delayedLeashInfo", "field_52218", "unresolvedLeashData", "f_337125_"), "Lcom/mojang/datafixers/util/Either;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.Leashable$LeashData#unresolvedLeashData
    static void set_field_unresolvedLeashData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "delayedLeashInfo", "field_52218", "unresolvedLeashData", "f_337125_"), "Lcom/mojang/datafixers/util/Either;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setLeashHolder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLeashHolder", "method_60971", "setLeashHolder", "m_339300_"), "(Lbsr;)V");
    }

    static void setLeashHolder(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setLeashHolder();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_LEASHABLE$LEASHDATA_HPP