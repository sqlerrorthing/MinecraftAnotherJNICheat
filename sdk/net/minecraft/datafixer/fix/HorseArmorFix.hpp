// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_HORSEARMORFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_HORSEARMORFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.HorseArmorFix
 * Remapped: beb
 */
namespace HorseArmorFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("beb", "net/minecraft/util/datafix/fixes/HorseBodyArmorItemFix", "net/minecraft/class_9183", "net/minecraft/datafixer/fix/HorseArmorFix", "net/minecraft/src/C_313515_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.HorseArmorFix#oldNbtKey
    static jobject get_field_oldNbtKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "previousBodyArmorTag", "field_48805", "oldNbtKey", "f_316620_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.HorseArmorFix#oldNbtKey
    static void set_field_oldNbtKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "previousBodyArmorTag", "field_48805", "oldNbtKey", "f_316620_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.datafixer.fix.HorseArmorFix#removeOldArmor
    static jboolean get_field_removeOldArmor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "clearArmorItems", "field_51519", "removeOldArmor", "f_314671_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.HorseArmorFix#removeOldArmor
    static void set_field_removeOldArmor(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "clearArmorItems", "field_51519", "removeOldArmor", "f_314671_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_transform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_54447", "transform", "m_305448_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject transform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_HORSEARMORFIX_HPP