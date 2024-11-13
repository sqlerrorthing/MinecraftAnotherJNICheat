// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ENTITYPAINTINGMOTIVEFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ENTITYPAINTINGMOTIVEFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.EntityPaintingMotiveFix
 * Remapped: bcz
 */
namespace EntityPaintingMotiveFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bcz", "net/minecraft/util/datafix/fixes/EntityPaintingMotiveFix", "net/minecraft/class_3607", "net/minecraft/datafixer/fix/EntityPaintingMotiveFix", "net/minecraft/src/C_270_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityPaintingMotiveFix#RENAMED_MOTIVES
    [[maybe_unused]] static jobject get_field_RENAMED_MOTIVES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP", "field_15898", "RENAMED_MOTIVES", "f_15522_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityPaintingMotiveFix#RENAMED_MOTIVES
    [[maybe_unused]] static void set_field_RENAMED_MOTIVES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAP", "field_15898", "RENAMED_MOTIVES", "f_15522_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_renameMotive() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fixTag", "method_15723", "renameMotive", "m_15529_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject renameMotive(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_renameMotive();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_transform() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fix", "method_5105", "transform", "m_7504_"), "(Lcom/mojang/datafixers/Typed;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject transform(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transform();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ENTITYPAINTINGMOTIVEFIX_HPP