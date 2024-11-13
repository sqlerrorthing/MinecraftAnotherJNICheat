// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_PREDICATE_ENTITY_ENTITYFLAGSPREDICATE$BUILDER_HPP
#define NET_MINECRAFT_PREDICATE_ENTITY_ENTITYFLAGSPREDICATE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.predicate.entity.EntityFlagsPredicate$Builder
 * Remapped: bt$a
 */
namespace EntityFlagsPredicate$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bt$a", "net/minecraft/advancements/critereon/EntityFlagsPredicate$Builder", "net/minecraft/class_2040$class_2041", "net/minecraft/predicate/entity/EntityFlagsPredicate$Builder", "net/minecraft/src/C_1065_$C_1066_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isOnGround
    static jobject get_field_isOnGround(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "isOnGround", "field_51567", "isOnGround", "f_336929_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isOnGround
    static void set_field_isOnGround(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "isOnGround", "field_51567", "isOnGround", "f_336929_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isOnFire
    static jobject get_field_isOnFire(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isOnFire", "field_9587", "isOnFire", "f_33707_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isOnFire
    static void set_field_isOnFire(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "isOnFire", "field_9587", "isOnFire", "f_33707_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isSneaking
    static jobject get_field_isSneaking(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "isCrouching", "field_9586", "isSneaking", "f_33708_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isSneaking
    static void set_field_isSneaking(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "isCrouching", "field_9586", "isSneaking", "f_33708_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isSprinting
    static jobject get_field_isSprinting(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isSprinting", "field_9588", "isSprinting", "f_33709_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isSprinting
    static void set_field_isSprinting(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isSprinting", "field_9588", "isSprinting", "f_33709_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isSwimming
    static jobject get_field_isSwimming(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "isSwimming", "field_9585", "isSwimming", "f_33710_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isSwimming
    static void set_field_isSwimming(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "isSwimming", "field_9585", "isSwimming", "f_33710_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isFlying
    static jobject get_field_isFlying(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "isFlying", "field_51568", "isFlying", "f_337178_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isFlying
    static void set_field_isFlying(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "isFlying", "field_51568", "isFlying", "f_337178_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isBaby
    static jobject get_field_isBaby(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "isBaby", "field_9584", "isBaby", "f_33711_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.predicate.entity.EntityFlagsPredicate$Builder#isBaby
    static void set_field_isBaby(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "isBaby", "field_9584", "isBaby", "f_33711_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "flags", "method_8897", "create", "m_33713_"), "()Lbt$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_onGround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setOnGround", "method_59918", "onGround", "m_339515_"), "(Ljava/lang/Boolean;)Lbt$a;");
    }

    static jobject onGround(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onGround();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onFire() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setOnFire", "method_8898", "onFire", "m_33714_"), "(Ljava/lang/Boolean;)Lbt$a;");
    }

    static jobject onFire(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onFire();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sneaking() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setCrouching", "method_35203", "sneaking", "m_150057_"), "(Ljava/lang/Boolean;)Lbt$a;");
    }

    static jobject sneaking(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sneaking();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sprinting() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "setSprinting", "method_35204", "sprinting", "m_150059_"), "(Ljava/lang/Boolean;)Lbt$a;");
    }

    static jobject sprinting(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sprinting();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_swimming() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "setSwimming", "method_35205", "swimming", "m_150061_"), "(Ljava/lang/Boolean;)Lbt$a;");
    }

    static jobject swimming(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_swimming();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_flying() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "setIsFlying", "method_59919", "flying", "m_339329_"), "(Ljava/lang/Boolean;)Lbt$a;");
    }

    static jobject flying(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_flying();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__isBaby() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "setIsBaby", "method_29935", "isBaby", "m_33717_"), "(Ljava/lang/Boolean;)Lbt$a;");
    }

    static jobject _isBaby(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__isBaby();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "build", "method_8899", "build", "m_33716_"), "()Lbt;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_PREDICATE_ENTITY_ENTITYFLAGSPREDICATE$BUILDER_HPP