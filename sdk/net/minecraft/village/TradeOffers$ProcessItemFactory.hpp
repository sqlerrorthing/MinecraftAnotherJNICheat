// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_VILLAGE_TRADEOFFERS$PROCESSITEMFACTORY_HPP
#define NET_MINECRAFT_VILLAGE_TRADEOFFERS$PROCESSITEMFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.village.TradeOffers$ProcessItemFactory
 * Remapped: cmo$h
 */
namespace TradeOffers$ProcessItemFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cmo$h", "net/minecraft/world/entity/npc/VillagerTrades$ItemsAndEmeraldsToItems", "net/minecraft/class_3853$class_4164", "net/minecraft/village/TradeOffers$ProcessItemFactory", "net/minecraft/src/C_1122_$C_1129_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.village.TradeOffers$ProcessItemFactory#toBeProcessed
    static jobject get_field_toBeProcessed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fromItem", "field_18563", "toBeProcessed", "f_35708_"), "Ldbs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$ProcessItemFactory#toBeProcessed
    static void set_field_toBeProcessed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "fromItem", "field_18563", "toBeProcessed", "f_35708_"), "Ldbs;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$ProcessItemFactory#price
    static jint get_field_price(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "emeraldCost", "field_18565", "price", "f_35710_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$ProcessItemFactory#price
    static void set_field_price(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "emeraldCost", "field_18565", "price", "f_35710_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$ProcessItemFactory#processed
    static jobject get_field_processed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "toItem", "field_18566", "processed", "f_35711_"), "Lcuq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$ProcessItemFactory#processed
    static void set_field_processed(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "toItem", "field_18566", "processed", "f_35711_"), "Lcuq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$ProcessItemFactory#maxUses
    static jint get_field_maxUses(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxUses", "field_18568", "maxUses", "f_35713_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$ProcessItemFactory#maxUses
    static void set_field_maxUses(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "maxUses", "field_18568", "maxUses", "f_35713_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$ProcessItemFactory#experience
    static jint get_field_experience(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "villagerXp", "field_18569", "experience", "f_35714_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$ProcessItemFactory#experience
    static void set_field_experience(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "villagerXp", "field_18569", "experience", "f_35714_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$ProcessItemFactory#multiplier
    static jfloat get_field_multiplier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "priceMultiplier", "field_18570", "multiplier", "f_35715_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$ProcessItemFactory#multiplier
    static void set_field_multiplier(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "priceMultiplier", "field_18570", "multiplier", "f_35715_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$ProcessItemFactory#enchantmentProviderKey
    static jobject get_field_enchantmentProviderKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "enchantmentProvider", "field_51618", "enchantmentProviderKey", "f_337541_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$ProcessItemFactory#enchantmentProviderKey
    static void set_field_enchantmentProviderKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "enchantmentProvider", "field_51618", "enchantmentProviderKey", "f_337541_"), "Ljava/util/Optional;");
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

#endif // NET_MINECRAFT_VILLAGE_TRADEOFFERS$PROCESSITEMFACTORY_HPP