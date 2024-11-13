// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_TRIM_ARMORTRIMMATERIALS_HPP
#define NET_MINECRAFT_ITEM_TRIM_ARMORTRIMMATERIALS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.trim.ArmorTrimMaterials
 * Remapped: cwz
 */
namespace ArmorTrimMaterials {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cwz", "net/minecraft/world/item/armortrim/TrimMaterials", "net/minecraft/class_8055", "net/minecraft/item/trim/ArmorTrimMaterials", "net/minecraft/src/C_265821_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#QUARTZ
    [[maybe_unused]] static jobject get_field_QUARTZ() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "QUARTZ", "field_42004", "QUARTZ", "f_265905_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#QUARTZ
    [[maybe_unused]] static void set_field_QUARTZ(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "QUARTZ", "field_42004", "QUARTZ", "f_265905_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#IRON
    [[maybe_unused]] static jobject get_field_IRON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IRON", "field_42005", "IRON", "f_266000_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#IRON
    [[maybe_unused]] static void set_field_IRON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "IRON", "field_42005", "IRON", "f_266000_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#NETHERITE
    [[maybe_unused]] static jobject get_field_NETHERITE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NETHERITE", "field_42006", "NETHERITE", "f_265896_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#NETHERITE
    [[maybe_unused]] static void set_field_NETHERITE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NETHERITE", "field_42006", "NETHERITE", "f_265896_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#REDSTONE
    [[maybe_unused]] static jobject get_field_REDSTONE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "REDSTONE", "field_42007", "REDSTONE", "f_265870_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#REDSTONE
    [[maybe_unused]] static void set_field_REDSTONE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "REDSTONE", "field_42007", "REDSTONE", "f_265870_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#COPPER
    [[maybe_unused]] static jobject get_field_COPPER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "COPPER", "field_42008", "COPPER", "f_265969_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#COPPER
    [[maybe_unused]] static void set_field_COPPER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "COPPER", "field_42008", "COPPER", "f_265969_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#GOLD
    [[maybe_unused]] static jobject get_field_GOLD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "GOLD", "field_42009", "GOLD", "f_265937_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#GOLD
    [[maybe_unused]] static void set_field_GOLD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "GOLD", "field_42009", "GOLD", "f_265937_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#EMERALD
    [[maybe_unused]] static jobject get_field_EMERALD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "EMERALD", "field_42010", "EMERALD", "f_266071_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#EMERALD
    [[maybe_unused]] static void set_field_EMERALD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "EMERALD", "field_42010", "EMERALD", "f_266071_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#DIAMOND
    [[maybe_unused]] static jobject get_field_DIAMOND() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DIAMOND", "field_42011", "DIAMOND", "f_266027_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#DIAMOND
    [[maybe_unused]] static void set_field_DIAMOND(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "DIAMOND", "field_42011", "DIAMOND", "f_266027_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#LAPIS
    [[maybe_unused]] static jobject get_field_LAPIS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LAPIS", "field_42012", "LAPIS", "f_265981_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#LAPIS
    [[maybe_unused]] static void set_field_LAPIS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "LAPIS", "field_42012", "LAPIS", "f_265981_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.trim.ArmorTrimMaterials#AMETHYST
    [[maybe_unused]] static jobject get_field_AMETHYST() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "AMETHYST", "field_42013", "AMETHYST", "f_265872_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.trim.ArmorTrimMaterials#AMETHYST
    [[maybe_unused]] static void set_field_AMETHYST(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "AMETHYST", "field_42013", "AMETHYST", "f_265872_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_48442", "bootstrap", "m_266479_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getFromIngredient", "method_48440", "get", "m_266539_"), "(Ljo$a;Lcuq;)Ljava/util/Optional;");
    }

    static jobject get(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_48578", "register", "m_267802_"), "(Lqq;Lakq;Lcul;Lxw;F)V");
    }

    static void register(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jfloat& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_48443", "register", "m_267736_"), "(Lqq;Lakq;Lcul;Lxw;FLjava/util/Map;)V");
    }

    static void _register(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jfloat& arg4, const jobject& arg5) {
       const auto clazz = self();
       const auto methodID = methodID__register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "registryKey", "method_48441", "of", "m_266224_"), "(Ljava/lang/String;)Lakq;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_TRIM_ARMORTRIMMATERIALS_HPP