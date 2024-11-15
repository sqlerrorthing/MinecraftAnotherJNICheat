// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_LOOT_FUNCTION_SETATTRIBUTESLOOTFUNCTION$ATTRIBUTE_HPP
#define NET_MINECRAFT_LOOT_FUNCTION_SETATTRIBUTESLOOTFUNCTION$ATTRIBUTE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.loot.function.SetAttributesLootFunction$Attribute
 * Remapped: etk$b
 */
namespace SetAttributesLootFunction$Attribute {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("etk$b", "net/minecraft/world/level/storage/loot/functions/SetAttributesFunction$Modifier", "net/minecraft/class_137$class_138", "net/minecraft/loot/function/SetAttributesLootFunction$Attribute", "net/minecraft/src/C_2936_$C_2938_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#id
    static jobject get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_1864", "id", "f_80851_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#id
    static void set_field_id(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "id", "comp_1864", "id", "f_80851_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#attribute
    static jobject get_field_attribute(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "attribute", "comp_1860", "attribute", "f_80848_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#attribute
    static void set_field_attribute(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "attribute", "comp_1860", "attribute", "f_80848_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#operation
    static jobject get_field_operation(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "operation", "comp_1861", "operation", "f_80849_"), "Lbuu$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#operation
    static void set_field_operation(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "operation", "comp_1861", "operation", "f_80849_"), "Lbuu$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#amount
    static jobject get_field_amount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "amount", "comp_1862", "amount", "f_80850_"), "Levy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#amount
    static void set_field_amount(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "amount", "comp_1862", "amount", "f_80850_"), "Levy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#slots
    static jobject get_field_slots(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "slots", "comp_1863", "slots", "f_80852_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#slots
    static void set_field_slots(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "slots", "comp_1863", "slots", "f_80852_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#EQUIPMENT_SLOT_LIST_CODEC
    [[maybe_unused]] static jobject get_field_EQUIPMENT_SLOT_LIST_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SLOTS_CODEC", "field_45838", "EQUIPMENT_SLOT_LIST_CODEC", "f_290566_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#EQUIPMENT_SLOT_LIST_CODEC
    [[maybe_unused]] static void set_field_EQUIPMENT_SLOT_LIST_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "SLOTS_CODEC", "field_45838", "EQUIPMENT_SLOT_LIST_CODEC", "f_290566_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45837", "CODEC", "f_291147_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.loot.function.SetAttributesLootFunction$Attribute#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45837", "CODEC", "f_291147_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__id() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "comp_1864", "id", "f_80851_"), "()Lakr;");
    }

    static jobject _id(const jobject& obj) {
                
       const auto methodID = methodID__id();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__attribute() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "attribute", "comp_1860", "attribute", "f_80848_"), "()Ljm;");
    }

    static jobject _attribute(const jobject& obj) {
                
       const auto methodID = methodID__attribute();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__operation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "operation", "comp_1861", "operation", "f_80849_"), "()Lbuu$a;");
    }

    static jobject _operation(const jobject& obj) {
                
       const auto methodID = methodID__operation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__amount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "amount", "comp_1862", "amount", "f_80850_"), "()Levy;");
    }

    static jobject _amount(const jobject& obj) {
                
       const auto methodID = methodID__amount();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__slots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "slots", "comp_1863", "slots", "f_80852_"), "()Ljava/util/List;");
    }

    static jobject _slots(const jobject& obj) {
                
       const auto methodID = methodID__slots();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_LOOT_FUNCTION_SETATTRIBUTESLOOTFUNCTION$ATTRIBUTE_HPP