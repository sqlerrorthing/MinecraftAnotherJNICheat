// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_SETATTRIBUTESLOOTFUNCTION$BUILDER_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_SETATTRIBUTESLOOTFUNCTION$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.SetAttributesLootFunction$Builder
 * Remapped: etk$a
 */
namespace SetAttributesLootFunction$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("etk$a", "net/minecraft/world/level/storage/loot/functions/SetAttributesFunction$Builder", "net/minecraft/class_137$class_6155", "net/minecraft/loot/function/SetAttributesLootFunction$Builder", "net/minecraft/src/C_2936_$C_141465_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.loot.function.SetAttributesLootFunction$Builder#replace
    static jboolean get_field_replace(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "replace", "field_51361", "replace", "f_316621_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetAttributesLootFunction$Builder#replace
    static void set_field_replace(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "replace", "field_51361", "replace", "f_316621_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.loot.function.SetAttributesLootFunction$Builder#attributes
    static jobject get_field_attributes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "modifiers", "field_31855", "attributes", "f_165242_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetAttributesLootFunction$Builder#attributes
    static void set_field_attributes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "modifiers", "field_31855", "attributes", "f_165242_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getThisBuilder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getThis", "method_35526", "getThisBuilder", "m_6477_"), "()Letk$a;");
    }

    static jobject getThisBuilder(const jobject& obj) {
                
       const auto methodID = methodID_getThisBuilder();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_attribute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withModifier", "method_35527", "attribute", "m_165245_"), "(Letk$c;)Letk$a;");
    }

    static jobject attribute(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_attribute();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_515", "build", "m_7453_"), "()Letf;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_SETATTRIBUTESLOOTFUNCTION$BUILDER_HPP