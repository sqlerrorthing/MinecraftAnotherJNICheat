// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ENTITYRAVAGERRENAMEFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ENTITYRAVAGERRENAMEFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.EntityRavagerRenameFix
 * Remapped: bdc
 */
namespace EntityRavagerRenameFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bdc", "net/minecraft/util/datafix/fixes/EntityRavagerRenameFix", "net/minecraft/class_3983", "net/minecraft/datafixer/fix/EntityRavagerRenameFix", "net/minecraft/src/C_274_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.datafixer.fix.EntityRavagerRenameFix#ITEMS
    [[maybe_unused]] static jobject get_field_ITEMS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RENAMED_IDS", "field_17712", "ITEMS", "f_15591_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.datafixer.fix.EntityRavagerRenameFix#ITEMS
    [[maybe_unused]] static void set_field_ITEMS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "RENAMED_IDS", "field_17712", "ITEMS", "f_15591_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_rename() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rename", "method_5163", "rename", "m_7476_"), "(Ljava/lang/String;)Ljava/lang/String;");
    }

    static jobject rename(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_rename();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ENTITYRAVAGERRENAMEFIX_HPP