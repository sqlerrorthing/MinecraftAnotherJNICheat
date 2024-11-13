// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLITEMFACTORY_HPP
#define NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLITEMFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.village.TradeOffers$SellItemFactory
 * Remapped: cmo$i
 */
namespace TradeOffers$SellItemFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cmo$i", "net/minecraft/world/entity/npc/VillagerTrades$ItemsForEmeralds", "net/minecraft/class_3853$class_4165", "net/minecraft/village/TradeOffers$SellItemFactory", "net/minecraft/src/C_1122_$C_1130_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.village.TradeOffers$SellItemFactory#sell
    static jobject get_field_sell(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "itemStack", "field_18571", "sell", "f_35734_"), "Lcuq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellItemFactory#sell
    static void set_field_sell(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "itemStack", "field_18571", "sell", "f_35734_"), "Lcuq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellItemFactory#price
    static jint get_field_price(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "emeraldCost", "field_18572", "price", "f_35735_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellItemFactory#price
    static void set_field_price(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "emeraldCost", "field_18572", "price", "f_35735_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellItemFactory#maxUses
    static jint get_field_maxUses(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "maxUses", "field_18574", "maxUses", "f_35737_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellItemFactory#maxUses
    static void set_field_maxUses(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "maxUses", "field_18574", "maxUses", "f_35737_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellItemFactory#experience
    static jint get_field_experience(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "villagerXp", "field_18575", "experience", "f_35738_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellItemFactory#experience
    static void set_field_experience(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "villagerXp", "field_18575", "experience", "f_35738_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellItemFactory#multiplier
    static jfloat get_field_multiplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "priceMultiplier", "field_18576", "multiplier", "f_35739_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellItemFactory#multiplier
    static void set_field_multiplier(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "priceMultiplier", "field_18576", "multiplier", "f_35739_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellItemFactory#enchantmentProviderKey
    static jobject get_field_enchantmentProviderKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "enchantmentProvider", "field_51619", "enchantmentProviderKey", "f_337630_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellItemFactory#enchantmentProviderKey
    static void set_field_enchantmentProviderKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "enchantmentProvider", "field_51619", "enchantmentProviderKey", "f_337630_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOffer", "method_7246", "create", "m_213663_"), "(Lbsr;Layw;)Ldbu;");
    }

    static jobject create(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLITEMFACTORY_HPP