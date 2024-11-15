// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ANIMALARMORITEM$TYPE_HPP
#define NET_MINECRAFT_ITEM_ANIMALARMORITEM$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.AnimalArmorItem$Type
 * Remapped: cse$a
 */
namespace AnimalArmorItem$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cse$a", "net/minecraft/world/item/AnimalArmorItem$BodyType", "net/minecraft/class_4059$class_9076", "net/minecraft/item/AnimalArmorItem$Type", "net/minecraft/src/C_313678_$C_313439_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.item.AnimalArmorItem$Type#EQUESTRIAN
    [[maybe_unused]] static jobject get_field_EQUESTRIAN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EQUESTRIAN", "field_47825", "EQUESTRIAN", "EQUESTRIAN"), "Lcse$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.AnimalArmorItem$Type#EQUESTRIAN
    [[maybe_unused]] static void set_field_EQUESTRIAN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EQUESTRIAN", "field_47825", "EQUESTRIAN", "EQUESTRIAN"), "Lcse$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.AnimalArmorItem$Type#CANINE
    [[maybe_unused]] static jobject get_field_CANINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CANINE", "field_47826", "CANINE", "CANINE"), "Lcse$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.AnimalArmorItem$Type#CANINE
    [[maybe_unused]] static void set_field_CANINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CANINE", "field_47826", "CANINE", "CANINE"), "Lcse$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for default field net.minecraft.item.AnimalArmorItem$Type#textureIdFunction
    static jobject get_field_textureIdFunction(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "textureLocator", "field_47827", "textureIdFunction", "f_315425_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.item.AnimalArmorItem$Type#textureIdFunction
    static void set_field_textureIdFunction(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "textureLocator", "field_47827", "textureIdFunction", "f_315425_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.item.AnimalArmorItem$Type#breakSound
    static jobject get_field_breakSound(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "breakingSound", "field_49256", "breakSound", "f_315049_"), "Lavo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.item.AnimalArmorItem$Type#breakSound
    static void set_field_breakSound(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "breakingSound", "field_49256", "breakSound", "f_315049_"), "Lavo;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lcse$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lcse$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ANIMALARMORITEM$TYPE_HPP