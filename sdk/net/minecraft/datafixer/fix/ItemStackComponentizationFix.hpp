// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ITEMSTACKCOMPONENTIZATIONFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ITEMSTACKCOMPONENTIZATIONFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.ItemStackComponentizationFix
 * Remapped: ben
 */
namespace ItemStackComponentizationFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ben", "net/minecraft/util/datafix/fixes/ItemStackComponentizationFix", "net/minecraft/class_9267", "net/minecraft/datafixer/fix/ItemStackComponentizationFix", "net/minecraft/src/C_313582_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_ENCHANTMENTS_FLAG
    [[maybe_unused]] static jint get_field_HIDE_ENCHANTMENTS_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HIDE_ENCHANTMENTS", "field_49188", "HIDE_ENCHANTMENTS_FLAG", "f_315428_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_ENCHANTMENTS_FLAG
    [[maybe_unused]] static void set_field_HIDE_ENCHANTMENTS_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HIDE_ENCHANTMENTS", "field_49188", "HIDE_ENCHANTMENTS_FLAG", "f_315428_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_MODIFIERS_FLAG
    [[maybe_unused]] static jint get_field_HIDE_MODIFIERS_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HIDE_MODIFIERS", "field_49189", "HIDE_MODIFIERS_FLAG", "f_316529_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_MODIFIERS_FLAG
    [[maybe_unused]] static void set_field_HIDE_MODIFIERS_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HIDE_MODIFIERS", "field_49189", "HIDE_MODIFIERS_FLAG", "f_316529_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_UNBREAKABLE_FLAG
    [[maybe_unused]] static jint get_field_HIDE_UNBREAKABLE_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HIDE_UNBREAKABLE", "field_49190", "HIDE_UNBREAKABLE_FLAG", "f_316101_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_UNBREAKABLE_FLAG
    [[maybe_unused]] static void set_field_HIDE_UNBREAKABLE_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "HIDE_UNBREAKABLE", "field_49190", "HIDE_UNBREAKABLE_FLAG", "f_316101_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_CAN_DESTROY_FLAG
    [[maybe_unused]] static jint get_field_HIDE_CAN_DESTROY_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HIDE_CAN_DESTROY", "field_49191", "HIDE_CAN_DESTROY_FLAG", "f_317107_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_CAN_DESTROY_FLAG
    [[maybe_unused]] static void set_field_HIDE_CAN_DESTROY_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HIDE_CAN_DESTROY", "field_49191", "HIDE_CAN_DESTROY_FLAG", "f_317107_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_CAN_PLACE_FLAG
    [[maybe_unused]] static jint get_field_HIDE_CAN_PLACE_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "HIDE_CAN_PLACE", "field_49192", "HIDE_CAN_PLACE_FLAG", "f_314391_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_CAN_PLACE_FLAG
    [[maybe_unused]] static void set_field_HIDE_CAN_PLACE_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "HIDE_CAN_PLACE", "field_49192", "HIDE_CAN_PLACE_FLAG", "f_314391_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_ADDITIONAL_FLAG
    [[maybe_unused]] static jint get_field_HIDE_ADDITIONAL_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HIDE_ADDITIONAL", "field_49193", "HIDE_ADDITIONAL_FLAG", "f_314773_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_ADDITIONAL_FLAG
    [[maybe_unused]] static void set_field_HIDE_ADDITIONAL_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "HIDE_ADDITIONAL", "field_49193", "HIDE_ADDITIONAL_FLAG", "f_314773_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_DYED_FLAG
    [[maybe_unused]] static jint get_field_HIDE_DYED_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "HIDE_DYE", "field_49194", "HIDE_DYED_FLAG", "f_316617_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_DYED_FLAG
    [[maybe_unused]] static void set_field_HIDE_DYED_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "HIDE_DYE", "field_49194", "HIDE_DYED_FLAG", "f_316617_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_UPGRADE_FLAG
    [[maybe_unused]] static jint get_field_HIDE_UPGRADE_FLAG() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "HIDE_UPGRADES", "field_49195", "HIDE_UPGRADE_FLAG", "f_315787_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#HIDE_UPGRADE_FLAG
    [[maybe_unused]] static void set_field_HIDE_UPGRADE_FLAG(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "HIDE_UPGRADES", "field_49195", "HIDE_UPGRADE_FLAG", "f_315787_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#POTION_ITEM_IDS
    [[maybe_unused]] static jobject get_field_POTION_ITEM_IDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "POTION_HOLDER_IDS", "field_49196", "POTION_ITEM_IDS", "f_316668_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#POTION_ITEM_IDS
    [[maybe_unused]] static void set_field_POTION_ITEM_IDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "POTION_HOLDER_IDS", "field_49196", "POTION_ITEM_IDS", "f_316668_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#ENTITY_BUCKET_ITEM_IDS
    [[maybe_unused]] static jobject get_field_ENTITY_BUCKET_ITEM_IDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "BUCKETED_MOB_IDS", "field_49197", "ENTITY_BUCKET_ITEM_IDS", "f_316380_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#ENTITY_BUCKET_ITEM_IDS
    [[maybe_unused]] static void set_field_ENTITY_BUCKET_ITEM_IDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "BUCKETED_MOB_IDS", "field_49197", "ENTITY_BUCKET_ITEM_IDS", "f_316380_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#RELEVANT_ENTITY_NBT_KEYS
    [[maybe_unused]] static jobject get_field_RELEVANT_ENTITY_NBT_KEYS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BUCKETED_MOB_TAGS", "field_49198", "RELEVANT_ENTITY_NBT_KEYS", "f_314964_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#RELEVANT_ENTITY_NBT_KEYS
    [[maybe_unused]] static void set_field_RELEVANT_ENTITY_NBT_KEYS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BUCKETED_MOB_TAGS", "field_49198", "RELEVANT_ENTITY_NBT_KEYS", "f_314964_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#BOOLEAN_BLOCK_STATE_PROPERTIES
    [[maybe_unused]] static jobject get_field_BOOLEAN_BLOCK_STATE_PROPERTIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BOOLEAN_BLOCK_STATE_PROPERTIES", "field_51347", "BOOLEAN_BLOCK_STATE_PROPERTIES", "f_316408_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#BOOLEAN_BLOCK_STATE_PROPERTIES
    [[maybe_unused]] static void set_field_BOOLEAN_BLOCK_STATE_PROPERTIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BOOLEAN_BLOCK_STATE_PROPERTIES", "field_51347", "BOOLEAN_BLOCK_STATE_PROPERTIES", "f_316408_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#COMMA_SPLITTER
    [[maybe_unused]] static jobject get_field_COMMA_SPLITTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "PROPERTY_SPLITTER", "field_49199", "COMMA_SPLITTER", "f_314333_"), "Lcom/google/common/base/Splitter;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.ItemStackComponentizationFix#COMMA_SPLITTER
    [[maybe_unused]] static void set_field_COMMA_SPLITTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "PROPERTY_SPLITTER", "field_49199", "COMMA_SPLITTER", "f_314333_"), "Lcom/google/common/base/Splitter;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_fixStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixItemStack", "method_57211", "fixStack", "m_319773_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;)V");
    }

    static void fixStack(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixStack();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixBlockStateTag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fixBlockStateTag", "method_58050", "fixBlockStateTag", "m_320221_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixBlockStateTag(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixBlockStateTag();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixDisplay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixDisplay", "method_57212", "fixDisplay", "m_320020_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;I)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixDisplay(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_fixDisplay();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_fixBlockEntityData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixBlockEntityTag", "method_57213", "fixBlockEntityData", "m_321772_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;Ljava/lang/String;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixBlockEntityData(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_fixBlockEntityData();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_fixEnchantments() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixEnchantments", "method_57214", "fixEnchantments", "m_320987_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;Ljava/lang/String;Ljava/lang/String;Z)V");
    }

    static void fixEnchantments(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_fixEnchantments();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getEnchantmentAndLevelPair() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "parseEnchantment", "method_57215", "getEnchantmentAndLevelPair", "m_320939_"), "(Lcom/mojang/serialization/Dynamic;)Ljava/util/Optional;");
    }

    static jobject getEnchantmentAndLevelPair(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getEnchantmentAndLevelPair();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixAdventureModePredicates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fixAdventureModeChecks", "method_57225", "fixAdventureModePredicates", "m_319433_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;I)V");
    }

    static void fixAdventureModePredicates(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_fixAdventureModePredicates();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_fixBlockPredicateList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fixBlockStatePredicates", "method_57226", "fixBlockPredicateList", "m_319793_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;Ljava/lang/String;Ljava/lang/String;Z)V");
    }

    static void fixBlockPredicateList(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_fixBlockPredicateList();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_createBlockPredicateListDynamic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixBlockStatePredicate", "method_57216", "createBlockPredicateListDynamic", "m_324996_"), "(Lcom/mojang/serialization/Dynamic;Ljava/lang/String;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject createBlockPredicateListDynamic(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createBlockPredicateListDynamic();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixAttributeModifiers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "fixAttributeModifiers", "method_57231", "fixAttributeModifiers", "m_320744_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;I)V");
    }

    static void fixAttributeModifiers(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_fixAttributeModifiers();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_fixAttributeModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "fixAttributeModifier", "method_57227", "fixAttributeModifier", "m_320325_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixAttributeModifier(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixAttributeModifier();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixMapDecorations() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "fixMapDecoration", "method_57232", "fixMapDecorations", "m_321104_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/datafixers/util/Pair;");
    }

    static jobject fixMapDecorations(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixMapDecorations();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getMapDecorationName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixMapDecorationType", "method_57208", "getMapDecorationName", "m_322192_"), "(I)Ljava/lang/String;");
    }

    static jobject getMapDecorationName(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getMapDecorationName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixPotionContents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fixPotionContents", "method_57224", "fixPotionContents", "m_318587_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;)V");
    }

    static void fixPotionContents(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixPotionContents();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixWritableBookContent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "fixWritableBook", "method_57230", "fixWritableBookContent", "m_322954_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;)V");
    }

    static void fixWritableBookContent(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixWritableBookContent();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixWrittenBookContent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "fixWrittenBook", "method_57233", "fixWrittenBookContent", "m_321607_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;)V");
    }

    static void fixWrittenBookContent(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixWrittenBookContent();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixBookPages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "fixBookPages", "method_57235", "fixBookPages", "m_324158_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixBookPages(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixBookPages();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createFilterableTextDynamic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createFilteredText", "method_57217", "createFilterableTextDynamic", "m_319761_"), "(Lcom/mojang/serialization/Dynamic;Ljava/lang/String;Ljava/util/Optional;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject createFilterableTextDynamic(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createFilterableTextDynamic();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_fixBucketEntityData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "fixBucketedMobData", "method_57237", "fixBucketEntityData", "m_319058_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;)V");
    }

    static void fixBucketEntityData(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixBucketEntityData();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixLodestoneTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "fixLodestoneTracker", "method_57239", "fixLodestoneTarget", "m_320827_"), "(Lben$a;Lcom/mojang/serialization/Dynamic;)V");
    }

    static void fixLodestoneTarget(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixLodestoneTarget();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fixExplosion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixFireworkStar", "method_57209", "fixExplosion", "m_322865_"), "(Lben$a;)V");
    }

    static void fixExplosion(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixExplosion();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixFireworks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fixFireworkRocket", "method_57223", "fixFireworks", "m_321950_"), "(Lben$a;)V");
    }

    static void fixFireworks(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixFireworks();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__fixExplosion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "fixFireworkExplosion", "method_57234", "fixExplosion", "m_322691_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject _fixExplosion(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__fixExplosion();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createProfileDynamic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixProfile", "method_57236", "createProfileDynamic", "m_322595_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject createProfileDynamic(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createProfileDynamic();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isValidUsername() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isValidPlayerName", "method_58048", "isValidUsername", "m_318903_"), "(Ljava/lang/String;)Z");
    }

    static jboolean isValidUsername(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isValidUsername();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_createPropertiesDynamic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixProfileProperties", "method_57218", "createPropertiesDynamic", "m_320461_"), "(Lcom/mojang/serialization/OptionalDynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject createPropertiesDynamic(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createPropertiesDynamic();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ITEMSTACKCOMPONENTIZATIONFIX_HPP