// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_STATUSEFFECTFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_STATUSEFFECTFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.StatusEffectFix
 * Remapped: bfl
 */
namespace StatusEffectFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bfl", "net/minecraft/util/datafix/fixes/MobEffectIdFix", "net/minecraft/class_8744", "net/minecraft/datafixer/fix/StatusEffectFix", "net/minecraft/src/C_290067_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.StatusEffectFix#OLD_TO_NEW_IDS
    [[maybe_unused]] static jobject get_field_OLD_TO_NEW_IDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ID_MAP", "field_45725", "OLD_TO_NEW_IDS", "f_290362_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.StatusEffectFix#OLD_TO_NEW_IDS
    [[maybe_unused]] static void set_field_OLD_TO_NEW_IDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ID_MAP", "field_45725", "OLD_TO_NEW_IDS", "f_290362_"), "Lit/unimi/dsi/fastutil/ints/Int2ObjectMap;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.StatusEffectFix#POTION_ITEM_IDS
    [[maybe_unused]] static jobject get_field_POTION_ITEM_IDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MOB_EFFECT_INSTANCE_CARRIER_ITEMS", "field_45726", "POTION_ITEM_IDS", "f_290658_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.StatusEffectFix#POTION_ITEM_IDS
    [[maybe_unused]] static void set_field_POTION_ITEM_IDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MOB_EFFECT_INSTANCE_CARRIER_ITEMS", "field_45726", "POTION_ITEM_IDS", "f_290658_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_updateId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getAndConvertMobEffectId", "method_53084", "updateId", "m_295189_"), "(Lcom/mojang/serialization/Dynamic;Ljava/lang/String;)Ljava/util/Optional;");
    }

    static jobject updateId(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_updateId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_renameKeyAndUpdateId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateMobEffectIdField", "method_53085", "renameKeyAndUpdateId", "m_293587_"), "(Lcom/mojang/serialization/Dynamic;Ljava/lang/String;Lcom/mojang/serialization/Dynamic;Ljava/lang/String;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject renameKeyAndUpdateId(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_renameKeyAndUpdateId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__renameKeyAndUpdateId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateMobEffectIdField", "method_53096", "renameKeyAndUpdateId", "m_294794_"), "(Lcom/mojang/serialization/Dynamic;Ljava/lang/String;Ljava/lang/String;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject _renameKeyAndUpdateId(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__renameKeyAndUpdateId();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_fixEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateMobEffectInstance", "method_53082", "fixEffect", "m_293746_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixEffect(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixEffect();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixEffectList() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "updateMobEffectInstanceList", "method_53101", "fixEffectList", "m_295180_"), "(Lcom/mojang/serialization/Dynamic;Ljava/lang/String;Ljava/lang/String;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixEffectList(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_fixEffectList();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_fixSuspiciousStewEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateSuspiciousStewEntry", "method_53083", "fixSuspiciousStewEffect", "m_294722_"), "(Lcom/mojang/serialization/Dynamic;Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixSuspiciousStewEffect(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fixSuspiciousStewEffect();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__fixSuspiciousStewEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "updateSuspiciousStewEntry", "method_53095", "fixSuspiciousStewEffect", "m_295296_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject _fixSuspiciousStewEffect(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__fixSuspiciousStewEffect();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixEntityEffects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateNamedChoice", "method_53081", "fixEntityEffects", "m_294707_"), "(Lcom/mojang/datafixers/Typed;Lcom/mojang/datafixers/DSL$TypeReference;Ljava/lang/String;Ljava/util/function/Function;)Lcom/mojang/datafixers/Typed;");
    }

    static jobject fixEntityEffects(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_fixEntityEffects();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_makeBlockEntitiesRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "blockEntityFixer", "method_53078", "makeBlockEntitiesRule", "m_293636_"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeBlockEntitiesRule(const jobject& obj) {
                
       const auto methodID = methodID_makeBlockEntitiesRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixStewEffectsKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "fixMooshroomTag", "method_53100", "fixStewEffectsKey", "m_293644_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixStewEffectsKey(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixStewEffectsKey();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixCustomPotionEffectsKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "fixArrowTag", "method_53103", "fixCustomPotionEffectsKey", "m_292610_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixCustomPotionEffectsKey(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixCustomPotionEffectsKey();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixEffectsKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "fixAreaEffectCloudTag", "method_53104", "fixEffectsKey", "m_295662_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixEffectsKey(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixEffectsKey();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fixActiveEffectsKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "updateLivingEntityTag", "method_53105", "fixActiveEffectsKey", "m_292931_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixActiveEffectsKey(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixActiveEffectsKey();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_makeEntitiesRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "entityFixer", "method_53093", "makeEntitiesRule", "m_292587_"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeEntitiesRule(const jobject& obj) {
                
       const auto methodID = methodID_makeEntitiesRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_makePlayersRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "playerFixer", "method_53713", "makePlayersRule", "m_295257_"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makePlayersRule(const jobject& obj) {
                
       const auto methodID = methodID_makePlayersRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_fixSuspiciousStewEffects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "fixSuspiciousStewTag", "method_53106", "fixSuspiciousStewEffects", "m_295495_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject fixSuspiciousStewEffects(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fixSuspiciousStewEffects();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_makeItemStacksRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "itemStackFixer", "method_53098", "makeItemStacksRule", "m_294539_"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeItemStacksRule(const jobject& obj) {
                
       const auto methodID = methodID_makeItemStacksRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
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

#endif // NET_MINECRAFT_DATAFIXER_FIX_STATUSEFFECTFIX_HPP