// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_TRIM_ARMORTRIMMATERIAL_HPP
#define NET_MINECRAFT_ITEM_TRIM_ARMORTRIMMATERIAL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.trim.ArmorTrimMaterial
 * Remapped: cwy
 */
namespace ArmorTrimMaterial {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cwy", "net/minecraft/world/item/armortrim/TrimMaterial", "net/minecraft/class_8054", "net/minecraft/item/trim/ArmorTrimMaterial", "net/minecraft/src/C_265813_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.trim.ArmorTrimMaterial#assetName
    static jobject get_field_assetName(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "assetName", "comp_1208", "assetName", "f_265854_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.trim.ArmorTrimMaterial#assetName
    static void set_field_assetName(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "assetName", "comp_1208", "assetName", "f_265854_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.trim.ArmorTrimMaterial#ingredient
    static jobject get_field_ingredient(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "ingredient", "comp_1209", "ingredient", "f_265970_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.trim.ArmorTrimMaterial#ingredient
    static void set_field_ingredient(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "ingredient", "comp_1209", "ingredient", "f_265970_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.trim.ArmorTrimMaterial#itemModelIndex
    static jfloat get_field_itemModelIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "itemModelIndex", "comp_1210", "itemModelIndex", "f_265933_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.trim.ArmorTrimMaterial#itemModelIndex
    static void set_field_itemModelIndex(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "itemModelIndex", "comp_1210", "itemModelIndex", "f_265933_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.trim.ArmorTrimMaterial#overrideArmorMaterials
    static jobject get_field_overrideArmorMaterials(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "overrideArmorMaterials", "comp_1237", "overrideArmorMaterials", "f_267481_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.trim.ArmorTrimMaterial#overrideArmorMaterials
    static void set_field_overrideArmorMaterials(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "overrideArmorMaterials", "comp_1237", "overrideArmorMaterials", "f_267481_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.trim.ArmorTrimMaterial#description
    static jobject get_field_description(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "description", "comp_1212", "description", "f_266021_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.trim.ArmorTrimMaterial#description
    static void set_field_description(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "description", "comp_1212", "description", "f_266021_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterial#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_42002", "CODEC", "f_266095_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterial#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "DIRECT_CODEC", "field_42002", "CODEC", "f_266095_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterial#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DIRECT_STREAM_CODEC", "field_49280", "PACKET_CODEC", "f_316229_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterial#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DIRECT_STREAM_CODEC", "field_49280", "PACKET_CODEC", "f_316229_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterial#ENTRY_CODEC
    [[maybe_unused]] static jobject get_field_ENTRY_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_42003", "ENTRY_CODEC", "f_266056_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterial#ENTRY_CODEC
    [[maybe_unused]] static void set_field_ENTRY_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_42003", "ENTRY_CODEC", "f_266056_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterial#ENTRY_PACKET_CODEC
    [[maybe_unused]] static jobject get_field_ENTRY_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_49281", "ENTRY_PACKET_CODEC", "f_314439_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterial#ENTRY_PACKET_CODEC
    [[maybe_unused]] static void set_field_ENTRY_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "STREAM_CODEC", "field_49281", "ENTRY_PACKET_CODEC", "f_314439_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_48438", "of", "m_267605_"), "(Ljava/lang/String;Lcul;FLwz;Ljava/util/Map;)Lcwy;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__assetName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "assetName", "comp_1208", "assetName", "f_265854_"), "()Ljava/lang/String;");
    }

    static jobject _assetName(const jobject& obj) {
                
       const auto methodID = methodID__assetName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__ingredient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "ingredient", "comp_1209", "ingredient", "f_265970_"), "()Ljm;");
    }

    static jobject _ingredient(const jobject& obj) {
                
       const auto methodID = methodID__ingredient();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__itemModelIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "itemModelIndex", "comp_1210", "itemModelIndex", "f_265933_"), "()F");
    }

    static jfloat _itemModelIndex(const jobject& obj) {
                
       const auto methodID = methodID__itemModelIndex();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__overrideArmorMaterials() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "overrideArmorMaterials", "comp_1237", "overrideArmorMaterials", "f_267481_"), "()Ljava/util/Map;");
    }

    static jobject _overrideArmorMaterials(const jobject& obj) {
                
       const auto methodID = methodID__overrideArmorMaterials();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__description() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "description", "comp_1212", "description", "f_266021_"), "()Lwz;");
    }

    static jobject _description(const jobject& obj) {
                
       const auto methodID = methodID__description();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_TRIM_ARMORTRIMMATERIAL_HPP