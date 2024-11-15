// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.EntityPredicate
 * Remapped: bv
 */
namespace EntityPredicate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bv", "net/minecraft/advancements/critereon/EntityPredicate", "net/minecraft/class_2048", "net/minecraft/predicate/entity/EntityPredicate", "net/minecraft/src/C_1147_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "entityType", "comp_1761", "type", "f_36551_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "entityType", "comp_1761", "type", "f_36551_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#distance
    static jobject get_field_distance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "distanceToPlayer", "comp_1762", "distance", "f_36552_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#distance
    static void set_field_distance(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "distanceToPlayer", "comp_1762", "distance", "f_36552_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#movement
    static jobject get_field_movement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "movement", "comp_2668", "movement", "f_336844_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#movement
    static void set_field_movement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "movement", "comp_2668", "movement", "f_336844_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#location
    static jobject get_field_location(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "location", "comp_1763", "location", "f_36553_"), "Lbv$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#location
    static void set_field_location(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "location", "comp_1763", "location", "f_36553_"), "Lbv$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#effects
    static jobject get_field_effects(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "effects", "comp_1765", "effects", "f_36554_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#effects
    static void set_field_effects(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "effects", "comp_1765", "effects", "f_36554_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#nbt
    static jobject get_field_nbt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "nbt", "comp_1766", "nbt", "f_36555_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#nbt
    static void set_field_nbt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "nbt", "comp_1766", "nbt", "f_36555_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#flags
    static jobject get_field_flags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "flags", "comp_1767", "flags", "f_36556_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#flags
    static void set_field_flags(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "flags", "comp_1767", "flags", "f_36556_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#equipment
    static jobject get_field_equipment(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "equipment", "comp_1768", "equipment", "f_36557_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#equipment
    static void set_field_equipment(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "equipment", "comp_1768", "equipment", "f_36557_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#typeSpecific
    static jobject get_field_typeSpecific(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "subPredicate", "comp_1769", "typeSpecific", "f_218773_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#typeSpecific
    static void set_field_typeSpecific(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "subPredicate", "comp_1769", "typeSpecific", "f_218773_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#periodicTick
    static jobject get_field_periodicTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "periodicTick", "comp_2669", "periodicTick", "f_337247_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#periodicTick
    static void set_field_periodicTick(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "periodicTick", "comp_2669", "periodicTick", "f_337247_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#vehicle
    static jobject get_field_vehicle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "vehicle", "comp_1770", "vehicle", "f_36560_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#vehicle
    static void set_field_vehicle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "vehicle", "comp_1770", "vehicle", "f_36560_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#passenger
    static jobject get_field_passenger(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "passenger", "comp_1771", "passenger", "f_150287_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#passenger
    static void set_field_passenger(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "passenger", "comp_1771", "passenger", "f_150287_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#targetedEntity
    static jobject get_field_targetedEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "targetedEntity", "comp_1772", "targetedEntity", "f_36561_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#targetedEntity
    static void set_field_targetedEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "targetedEntity", "comp_1772", "targetedEntity", "f_36561_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#team
    static jobject get_field_team(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "team", "comp_1773", "team", "f_36562_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#team
    static void set_field_team(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "team", "comp_1773", "team", "f_36562_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate#slots
    static jobject get_field_slots(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "slots", "comp_2446", "slots", "f_315910_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate#slots
    static void set_field_slots(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "slots", "comp_2446", "slots", "f_315910_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicate#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45746", "CODEC", "f_291089_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicate#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_45746", "CODEC", "f_291089_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.predicate.entity.EntityPredicate#LOOT_CONTEXT_PREDICATE_CODEC
    [[maybe_unused]] static jobject get_field_LOOT_CONTEXT_PREDICATE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ADVANCEMENT_CODEC", "field_47250", "LOOT_CONTEXT_PREDICATE_CODEC", "f_303210_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.predicate.entity.EntityPredicate#LOOT_CONTEXT_PREDICATE_CODEC
    [[maybe_unused]] static void set_field_LOOT_CONTEXT_PREDICATE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ADVANCEMENT_CODEC", "field_47250", "LOOT_CONTEXT_PREDICATE_CODEC", "f_303210_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_contextPredicateFromEntityPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "wrap", "method_53134", "contextPredicateFromEntityPredicate", "m_293222_"), "(Lbv$a;)Lbg;");
    }

    static jobject contextPredicateFromEntityPredicate(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_contextPredicateFromEntityPredicate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__contextPredicateFromEntityPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "wrap", "method_53137", "contextPredicateFromEntityPredicate", "m_295302_"), "(Ljava/util/Optional;)Ljava/util/Optional;");
    }

    static jobject _contextPredicateFromEntityPredicate(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__contextPredicateFromEntityPredicate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_contextPredicateFromEntityPredicates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "wrap", "method_53139", "contextPredicateFromEntityPredicates", "m_294255_"), "([Lbv$a;)Ljava/util/List;");
    }

    static jobject contextPredicateFromEntityPredicates(const jarray& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_contextPredicateFromEntityPredicates();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_asLootContextPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "wrap", "method_51704", "asLootContextPredicate", "m_285787_"), "(Lbv;)Lbg;");
    }

    static jobject asLootContextPredicate(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_asLootContextPredicate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_8914", "test", "m_36611_"), "(Laqv;Lbsr;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_8909", "test", "m_36607_"), "(Laqu;Lexc;Lbsr;)Z");
    }

    static jboolean _test(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createAdvancementEntityLootContext() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "createContext", "method_27802", "createAdvancementEntityLootContext", "m_36616_"), "(Laqv;Lbsr;)Lerr;");
    }

    static jobject createAdvancementEntityLootContext(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createAdvancementEntityLootContext();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "entityType", "comp_1761", "type", "f_36551_"), "()Ljava/util/Optional;");
    }

    static jobject _type(const jobject& obj) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__distance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "distanceToPlayer", "comp_1762", "distance", "f_36552_"), "()Ljava/util/Optional;");
    }

    static jobject _distance(const jobject& obj) {
                
       const auto methodID = methodID__distance();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__movement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "movement", "comp_2668", "movement", "f_336844_"), "()Ljava/util/Optional;");
    }

    static jobject _movement(const jobject& obj) {
                
       const auto methodID = methodID__movement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__location() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "location", "comp_1763", "location", "f_36553_"), "()Lbv$b;");
    }

    static jobject _location(const jobject& obj) {
                
       const auto methodID = methodID__location();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__effects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "effects", "comp_1765", "effects", "f_36554_"), "()Ljava/util/Optional;");
    }

    static jobject _effects(const jobject& obj) {
                
       const auto methodID = methodID__effects();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__nbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "nbt", "comp_1766", "nbt", "f_36555_"), "()Ljava/util/Optional;");
    }

    static jobject _nbt(const jobject& obj) {
                
       const auto methodID = methodID__nbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__flags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "flags", "comp_1767", "flags", "f_36556_"), "()Ljava/util/Optional;");
    }

    static jobject _flags(const jobject& obj) {
                
       const auto methodID = methodID__flags();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__equipment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "equipment", "comp_1768", "equipment", "f_36557_"), "()Ljava/util/Optional;");
    }

    static jobject _equipment(const jobject& obj) {
                
       const auto methodID = methodID__equipment();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__typeSpecific() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "subPredicate", "comp_1769", "typeSpecific", "f_218773_"), "()Ljava/util/Optional;");
    }

    static jobject _typeSpecific(const jobject& obj) {
                
       const auto methodID = methodID__typeSpecific();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__periodicTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "periodicTick", "comp_2669", "periodicTick", "f_337247_"), "()Ljava/util/Optional;");
    }

    static jobject _periodicTick(const jobject& obj) {
                
       const auto methodID = methodID__periodicTick();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__vehicle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "vehicle", "comp_1770", "vehicle", "f_36560_"), "()Ljava/util/Optional;");
    }

    static jobject _vehicle(const jobject& obj) {
                
       const auto methodID = methodID__vehicle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__passenger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "passenger", "comp_1771", "passenger", "f_150287_"), "()Ljava/util/Optional;");
    }

    static jobject _passenger(const jobject& obj) {
                
       const auto methodID = methodID__passenger();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__targetedEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "targetedEntity", "comp_1772", "targetedEntity", "f_36561_"), "()Ljava/util/Optional;");
    }

    static jobject _targetedEntity(const jobject& obj) {
                
       const auto methodID = methodID__targetedEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__team() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "team", "comp_1773", "team", "f_36562_"), "()Ljava/util/Optional;");
    }

    static jobject _team(const jobject& obj) {
                
       const auto methodID = methodID__team();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__slots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "slots", "comp_2446", "slots", "f_315910_"), "()Ljava/util/Optional;");
    }

    static jobject _slots(const jobject& obj) {
                
       const auto methodID = methodID__slots();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE_HPP