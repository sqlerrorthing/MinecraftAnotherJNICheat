// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLDYEDARMORFACTORY_HPP
#define NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLDYEDARMORFACTORY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.village.TradeOffers$SellDyedArmorFactory
 * Remapped: cmo$a
 */
namespace TradeOffers$SellDyedArmorFactory {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cmo$a", "net/minecraft/world/entity/npc/VillagerTrades$DyedArmorForEmeralds", "net/minecraft/class_3853$class_4160", "net/minecraft/village/TradeOffers$SellDyedArmorFactory", "net/minecraft/src/C_1122_$C_1123_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.village.TradeOffers$SellDyedArmorFactory#sell
    static jobject get_field_sell(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "item", "field_18544", "sell", "f_35634_"), "Lcul;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellDyedArmorFactory#sell
    static void set_field_sell(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "item", "field_18544", "sell", "f_35634_"), "Lcul;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellDyedArmorFactory#price
    static jint get_field_price(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "field_18545", "price", "f_35635_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellDyedArmorFactory#price
    static void set_field_price(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "value", "field_18545", "price", "f_35635_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellDyedArmorFactory#maxUses
    static jint get_field_maxUses(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "maxUses", "field_18546", "maxUses", "f_35636_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellDyedArmorFactory#maxUses
    static void set_field_maxUses(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "maxUses", "field_18546", "maxUses", "f_35636_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.village.TradeOffers$SellDyedArmorFactory#experience
    static jint get_field_experience(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "villagerXp", "field_18547", "experience", "f_35637_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.village.TradeOffers$SellDyedArmorFactory#experience
    static void set_field_experience(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "villagerXp", "field_18547", "experience", "f_35637_"), "I");
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
    
    static jmethodID methodID_getDye() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandomDye", "method_19200", "getDye", "m_219676_"), "(Layw;)Lctj;");
    }

    static jobject getDye(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getDye();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_VILLAGE_TRADEOFFERS$SELLDYEDARMORFACTORY_HPP