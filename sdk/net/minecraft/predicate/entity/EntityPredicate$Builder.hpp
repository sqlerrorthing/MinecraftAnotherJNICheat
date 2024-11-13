// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE$BUILDER_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.EntityPredicate$Builder
 * Remapped: bv$a
 */
namespace EntityPredicate$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bv$a", "net/minecraft/advancements/critereon/EntityPredicate$Builder", "net/minecraft/class_2048$class_2049", "net/minecraft/predicate/entity/EntityPredicate$Builder", "net/minecraft/src/C_1147_$C_1149_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entityType", "field_9607", "type", "f_36619_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "entityType", "field_9607", "type", "f_36619_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#distance
    static jobject get_field_distance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "distanceToPlayer", "field_9602", "distance", "f_36620_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#distance
    static void set_field_distance(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "distanceToPlayer", "field_9602", "distance", "f_36620_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#field_51572
    static jobject get_field_field_51572(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fallDistance", "field_51572", "field_51572", "f_337480_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#field_51572
    static void set_field_field_51572(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fallDistance", "field_51572", "field_51572", "f_337480_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#movement
    static jobject get_field_movement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "movement", "field_51573", "movement", "f_337563_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#movement
    static void set_field_movement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "movement", "field_51573", "movement", "f_337563_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#positional
    static jobject get_field_positional(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "location", "field_9604", "positional", "f_36621_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#positional
    static void set_field_positional(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "location", "field_9604", "positional", "f_36621_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#location
    static jobject get_field_location(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "located", "field_51937", "location", "f_336615_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#location
    static void set_field_location(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "located", "field_51937", "location", "f_336615_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#steppingOn
    static jobject get_field_steppingOn(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "steppingOnLocation", "field_33915", "steppingOn", "f_150323_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#steppingOn
    static void set_field_steppingOn(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "steppingOnLocation", "field_33915", "steppingOn", "f_150323_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#movementAffectedBy
    static jobject get_field_movementAffectedBy(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "movementAffectedBy", "field_51938", "movementAffectedBy", "f_336812_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#movementAffectedBy
    static void set_field_movementAffectedBy(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "movementAffectedBy", "field_51938", "movementAffectedBy", "f_336812_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#effects
    static jobject get_field_effects(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "effects", "field_9605", "effects", "f_36622_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#effects
    static void set_field_effects(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "effects", "field_9605", "effects", "f_36622_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#nbt
    static jobject get_field_nbt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "nbt", "field_9603", "nbt", "f_36623_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#nbt
    static void set_field_nbt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "nbt", "field_9603", "nbt", "f_36623_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#flags
    static jobject get_field_flags(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "flags", "field_9606", "flags", "f_36624_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#flags
    static void set_field_flags(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "flags", "field_9606", "flags", "f_36624_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#equipment
    static jobject get_field_equipment(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "equipment", "field_16491", "equipment", "f_36625_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#equipment
    static void set_field_equipment(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "equipment", "field_16491", "equipment", "f_36625_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#typeSpecific
    static jobject get_field_typeSpecific(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "subPredicate", "field_38722", "typeSpecific", "f_218799_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#typeSpecific
    static void set_field_typeSpecific(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "subPredicate", "field_38722", "typeSpecific", "f_218799_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#periodicTick
    static jobject get_field_periodicTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "periodicTick", "field_51574", "periodicTick", "f_337684_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#periodicTick
    static void set_field_periodicTick(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "periodicTick", "field_51574", "periodicTick", "f_337684_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#vehicle
    static jobject get_field_vehicle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "vehicle", "field_24490", "vehicle", "f_36628_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#vehicle
    static void set_field_vehicle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "vehicle", "field_24490", "vehicle", "f_36628_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#passenger
    static jobject get_field_passenger(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "passenger", "field_33917", "passenger", "f_150325_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#passenger
    static void set_field_passenger(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "passenger", "field_33917", "passenger", "f_150325_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#targetedEntity
    static jobject get_field_targetedEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "targetedEntity", "field_24491", "targetedEntity", "f_36629_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#targetedEntity
    static void set_field_targetedEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "targetedEntity", "field_24491", "targetedEntity", "f_36629_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#team
    static jobject get_field_team(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "team", "field_20700", "team", "f_36630_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#team
    static void set_field_team(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "team", "field_20700", "team", "f_36630_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityPredicate$Builder#slots
    static jobject get_field_slots(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "slots", "field_49721", "slots", "f_315815_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityPredicate$Builder#slots
    static void set_field_slots(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "slots", "field_49721", "slots", "f_315815_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "entity", "method_8916", "create", "m_36633_"), "()Lbv$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_8921", "type", "m_36636_"), "(Lbsx;)Lbv$a;");
    }

    static jobject _type(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_8922", "type", "m_204077_"), "(Lawu;)Lbv$a;");
    }

    static jobject __type(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID____type() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "entityType", "method_8917", "type", "m_36646_"), "(Lby;)Lbv$a;");
    }

    static jobject ___type(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID____type();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__distance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "distance", "method_8924", "distance", "m_36638_"), "(Lbm;)Lbv$a;");
    }

    static jobject _distance(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__distance();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__movement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "moving", "method_59930", "movement", "m_340383_"), "(Ldj;)Lbv$a;");
    }

    static jobject _movement(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__movement();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__location() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "located", "method_8918", "location", "m_36650_"), "(Ldf$a;)Lbv$a;");
    }

    static jobject _location(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__location();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__steppingOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "steppingOn", "method_37230", "steppingOn", "m_150330_"), "(Ldf$a;)Lbv$a;");
    }

    static jobject _steppingOn(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__steppingOn();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__movementAffectedBy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "movementAffectedBy", "method_60611", "movementAffectedBy", "m_340153_"), "(Ldf$a;)Lbv$a;");
    }

    static jobject _movementAffectedBy(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__movementAffectedBy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__effects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "effects", "method_8923", "effects", "m_36652_"), "(Ldi$a;)Lbv$a;");
    }

    static jobject _effects(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__effects();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__nbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nbt", "method_8915", "nbt", "m_36654_"), "(Ldk;)Lbv$a;");
    }

    static jobject _nbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__nbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__flags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "flags", "method_8919", "flags", "m_36642_"), "(Lbt$a;)Lbv$a;");
    }

    static jobject _flags(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__flags();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__equipment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "equipment", "method_53141", "equipment", "m_295619_"), "(Lbs$a;)Lbv$a;");
    }

    static jobject _equipment(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__equipment();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___equipment() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "equipment", "method_16227", "equipment", "m_36640_"), "(Lbs;)Lbv$a;");
    }

    static jobject __equipment(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID___equipment();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__typeSpecific() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "subPredicate", "method_43094", "typeSpecific", "m_218800_"), "(Lbw;)Lbv$a;");
    }

    static jobject _typeSpecific(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__typeSpecific();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__periodicTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "periodicTick", "method_59929", "periodicTick", "m_338364_"), "(I)Lbv$a;");
    }

    static jobject _periodicTick(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID__periodicTick();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__vehicle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "vehicle", "method_27971", "vehicle", "m_36644_"), "(Lbv$a;)Lbv$a;");
    }

    static jobject _vehicle(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__vehicle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__passenger() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "passenger", "method_37229", "passenger", "m_150328_"), "(Lbv$a;)Lbv$a;");
    }

    static jobject _passenger(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__passenger();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__targetedEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "targetedEntity", "method_27972", "targetedEntity", "m_36663_"), "(Lbv$a;)Lbv$a;");
    }

    static jobject _targetedEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__targetedEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__team() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "team", "method_22470", "team", "m_36658_"), "(Ljava/lang/String;)Lbv$a;");
    }

    static jobject _team(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__team();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__slots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slots", "method_58058", "slots", "m_322083_"), "(Ldz;)Lbv$a;");
    }

    static jobject _slots(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__slots();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_8920", "build", "m_36662_"), "()Lbv;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_ENTITYPREDICATE$BUILDER_HPP