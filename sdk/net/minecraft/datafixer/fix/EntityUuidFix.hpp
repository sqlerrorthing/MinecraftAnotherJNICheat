// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_ENTITYUUIDFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_ENTITYUUIDFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.EntityUuidFix
 * Remapped: bdm
 */
namespace EntityUuidFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bdm", "net/minecraft/util/datafix/fixes/EntityUUIDFix", "net/minecraft/class_4960", "net/minecraft/datafixer/fix/EntityUuidFix", "net/minecraft/src/C_284_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityUuidFix#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_36328", "LOGGER", "f_201927_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityUuidFix#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_36328", "LOGGER", "f_201927_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityUuidFix#RIDEABLE_TAMEABLES
    [[maybe_unused]] static jobject get_field_RIDEABLE_TAMEABLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ABSTRACT_HORSES", "field_23122", "RIDEABLE_TAMEABLES", "f_15715_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityUuidFix#RIDEABLE_TAMEABLES
    [[maybe_unused]] static void set_field_RIDEABLE_TAMEABLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ABSTRACT_HORSES", "field_23122", "RIDEABLE_TAMEABLES", "f_15715_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityUuidFix#TAMEABLE_PETS
    [[maybe_unused]] static jobject get_field_TAMEABLE_PETS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TAMEABLE_ANIMALS", "field_23123", "TAMEABLE_PETS", "f_15716_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityUuidFix#TAMEABLE_PETS
    [[maybe_unused]] static void set_field_TAMEABLE_PETS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "TAMEABLE_ANIMALS", "field_23123", "TAMEABLE_PETS", "f_15716_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityUuidFix#BREEDABLES
    [[maybe_unused]] static jobject get_field_BREEDABLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ANIMALS", "field_23124", "BREEDABLES", "f_15717_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityUuidFix#BREEDABLES
    [[maybe_unused]] static void set_field_BREEDABLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ANIMALS", "field_23124", "BREEDABLES", "f_15717_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityUuidFix#LEASHABLES
    [[maybe_unused]] static jobject get_field_LEASHABLES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MOBS", "field_23125", "LEASHABLES", "f_15718_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityUuidFix#LEASHABLES
    [[maybe_unused]] static void set_field_LEASHABLES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MOBS", "field_23125", "LEASHABLES", "f_15718_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityUuidFix#OTHER_LIVINGS
    [[maybe_unused]] static jobject get_field_OTHER_LIVINGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LIVING_ENTITIES", "field_23126", "OTHER_LIVINGS", "f_15719_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityUuidFix#OTHER_LIVINGS
    [[maybe_unused]] static void set_field_OTHER_LIVINGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LIVING_ENTITIES", "field_23126", "OTHER_LIVINGS", "f_15719_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.datafixer.fix.EntityUuidFix#PROJECTILES
    [[maybe_unused]] static jobject get_field_PROJECTILES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "PROJECTILES", "field_23127", "PROJECTILES", "f_15720_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.EntityUuidFix#PROJECTILES
    [[maybe_unused]] static void set_field_PROJECTILES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "PROJECTILES", "field_23127", "PROJECTILES", "f_15720_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_makeRule() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("makeRule", "makeRule", "", "", "makeRule"), "()Lcom/mojang/datafixers/TypeRewriteRule;");
    }

    static jobject makeRule(const jobject& obj) {
                
       const auto methodID = methodID_makeRule();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateAngryAtMemory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "updatePiglin", "method_26022", "updateAngryAtMemory", "m_15739_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateAngryAtMemory(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateAngryAtMemory();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateEvokerFangs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "updateEvokerFangs", "method_26024", "updateEvokerFangs", "m_15744_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateEvokerFangs(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateEvokerFangs();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateZombieVillager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("f", "updateZombieVillager", "method_26026", "updateZombieVillager", "m_15749_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateZombieVillager(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateZombieVillager();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateAreaEffectCloud() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "updateAreaEffectCloud", "method_26028", "updateAreaEffectCloud", "m_15751_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateAreaEffectCloud(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateAreaEffectCloud();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateShulkerBullet() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("h", "updateShulkerBullet", "method_26030", "updateShulkerBullet", "m_15753_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateShulkerBullet(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateShulkerBullet();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateItemEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("i", "updateItem", "method_26031", "updateItemEntity", "m_15755_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateItemEntity(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateItemEntity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateFox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("j", "updateFox", "method_26032", "updateFox", "m_15757_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateFox(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateFox();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateZombifiedPiglin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("k", "updateHurtBy", "method_26033", "updateZombifiedPiglin", "m_15759_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateZombifiedPiglin(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateZombifiedPiglin();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateTameable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("l", "updateAnimalOwner", "method_26034", "updateTameable", "m_15761_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateTameable(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateTameable();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateBreedable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("m", "updateAnimal", "method_26035", "updateBreedable", "m_15763_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateBreedable(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateBreedable();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateLeashable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("n", "updateMob", "method_26036", "updateLeashable", "m_15766_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateLeashable(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateLeashable();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateLiving() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "updateLivingEntity", "method_26037", "updateLiving", "m_15729_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateLiving(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateLiving();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateProjectile() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("o", "updateProjectile", "method_26038", "updateProjectile", "m_15768_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateProjectile(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateProjectile();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_updateSelfUuid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "updateEntityUUID", "method_26039", "updateSelfUuid", "m_15734_"), "(Lcom/mojang/serialization/Dynamic;)Lcom/mojang/serialization/Dynamic;");
    }

    static jobject updateSelfUuid(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_updateSelfUuid();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_ENTITYUUIDFIX_HPP