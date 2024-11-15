// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLMAPFACTORY_HPP
#define NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLMAPFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.village.TradeOffers$SellMapFactory
 * Remapped: cmo$l
 */
namespace TradeOffers$SellMapFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cmo$l", "net/minecraft/world/entity/npc/VillagerTrades$TreasureMapForEmeralds", "net/minecraft/class_3853$class_1654", "net/minecraft/village/TradeOffers$SellMapFactory", "net/minecraft/src/C_1122_$C_1133_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.village.TradeOffers$SellMapFactory#price
    static jint get_field_price(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "emeraldCost", "field_18589", "price", "f_35805_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellMapFactory#price
    static void set_field_price(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "emeraldCost", "field_18589", "price", "f_35805_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellMapFactory#structure
    static jobject get_field_structure(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "destination", "field_7474", "structure", "f_35806_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellMapFactory#structure
    static void set_field_structure(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "destination", "field_7474", "structure", "f_35806_"), "Lawu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellMapFactory#nameKey
    static jobject get_field_nameKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "displayName", "field_37051", "nameKey", "f_207765_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellMapFactory#nameKey
    static void set_field_nameKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "displayName", "field_37051", "nameKey", "f_207765_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellMapFactory#decoration
    static jobject get_field_decoration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "destinationType", "field_7473", "decoration", "f_35807_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellMapFactory#decoration
    static void set_field_decoration(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "destinationType", "field_7473", "decoration", "f_35807_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellMapFactory#maxUses
    static jint get_field_maxUses(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxUses", "field_18590", "maxUses", "f_35808_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellMapFactory#maxUses
    static void set_field_maxUses(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "maxUses", "field_18590", "maxUses", "f_35808_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellMapFactory#experience
    static jint get_field_experience(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "villagerXp", "field_18591", "experience", "f_35809_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellMapFactory#experience
    static void set_field_experience(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "villagerXp", "field_18591", "experience", "f_35809_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
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

#endif // NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLMAPFACTORY_HPP