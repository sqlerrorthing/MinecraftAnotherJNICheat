// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PROJECTILE_PROJECTILEENTITY_HPP
#define NET_MINECRAFT_ENTITY_PROJECTILE_PROJECTILEENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.projectile.ProjectileEntity
 * Remapped: cnp
 */
namespace ProjectileEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cnp", "net/minecraft/world/entity/projectile/Projectile", "net/minecraft/class_1676", "net/minecraft/entity/projectile/ProjectileEntity", "net/minecraft/src/C_1167_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.projectile.ProjectileEntity#ownerUuid
    static jobject get_field_ownerUuid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ownerUUID", "field_22478", "ownerUuid", "f_37244_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.ProjectileEntity#ownerUuid
    static void set_field_ownerUuid(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "ownerUUID", "field_22478", "ownerUuid", "f_37244_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.ProjectileEntity#owner
    static jobject get_field_owner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "cachedOwner", "field_33399", "owner", "f_150163_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.ProjectileEntity#owner
    static void set_field_owner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "cachedOwner", "field_33399", "owner", "f_150163_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.ProjectileEntity#leftOwner
    static jboolean get_field_leftOwner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "leftOwner", "field_23740", "leftOwner", "f_37246_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.ProjectileEntity#leftOwner
    static void set_field_leftOwner(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "leftOwner", "field_23740", "leftOwner", "f_37246_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.ProjectileEntity#shot
    static jboolean get_field_shot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hasBeenShot", "field_28646", "shot", "f_150164_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.ProjectileEntity#shot
    static void set_field_shot(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "hasBeenShot", "field_28646", "shot", "f_150164_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.projectile.ProjectileEntity#lastDeflectedEntity
    static jobject get_field_lastDeflectedEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastDeflectedBy", "field_51621", "lastDeflectedEntity", "f_336827_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.projectile.ProjectileEntity#lastDeflectedEntity
    static void set_field_lastDeflectedEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "lastDeflectedBy", "field_51621", "lastDeflectedEntity", "f_336827_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setOwner", "method_7432", "setOwner", "m_5602_"), "(Lbsr;)V");
    }

    static void setOwner(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setOwner();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "getOwner", "method_24921", "getOwner", "m_19749_"), "()Lbsr;");
    }

    static jobject getOwner(const jobject& obj) {
                
       const auto methodID = methodID_getOwner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEffectCause() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("H", "getEffectSource", "method_37225", "getEffectCause", "m_150173_"), "()Lbsr;");
    }

    static jobject getEffectCause(const jobject& obj) {
                
       const auto methodID = methodID_getEffectCause();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "ownedBy", "method_34714", "isOwner", "m_150171_"), "(Lbsr;)Z");
    }

    static jboolean isOwner(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isOwner();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "restoreFrom", "method_5878", "copyFrom", "m_20361_"), "(Lbsr;)V");
    }

    static void copyFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyFrom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldLeaveOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "checkLeftOwner", "method_26961", "shouldLeaveOwner", "m_37276_"), "()Z");
    }

    static jboolean shouldLeaveOwner(const jobject& obj) {
                
       const auto methodID = methodID_shouldLeaveOwner();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_calculateVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getMovementToShoot", "method_58645", "calculateVelocity", "m_321027_"), "(DDDFF)Lexc;");
    }

    static jobject calculateVelocity(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jfloat& arg3, const jfloat& arg4) {
                
       const auto methodID = methodID_calculateVelocity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_setVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "shoot", "method_7485", "setVelocity", "m_6686_"), "(DDDFF)V");
    }

    static void setVelocity(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jfloat& arg3, const jfloat& arg4) {
                
       const auto methodID = methodID_setVelocity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__setVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shootFromRotation", "method_24919", "setVelocity", "m_37251_"), "(Lbsr;FFFFF)V");
    }

    static void _setVelocity(const jobject& obj, const jobject& arg0, const jfloat& arg1, const jfloat& arg2, const jfloat& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID__setVelocity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_hitOrDeflect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hitTargetOrDeflectSelf", "method_59860", "hitOrDeflect", "m_320847_"), "(Lexa;)Lcnq;");
    }

    static jobject hitOrDeflect(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hitOrDeflect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_deflect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "deflect", "method_59859", "deflect", "m_318938_"), "(Lcnq;Lbsr;Lbsr;Z)Z");
    }

    static jboolean deflect(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_deflect();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onDeflected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "onDeflection", "method_59525", "onDeflected", "m_318614_"), "(Lbsr;Z)V");
    }

    static void onDeflected(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_onDeflected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onCollision() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHit", "method_7488", "onCollision", "m_6532_"), "(Lexa;)V");
    }

    static void onCollision(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onCollision();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onEntityHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHitEntity", "method_7454", "onEntityHit", "m_5790_"), "(Lewz;)V");
    }

    static void onEntityHit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onEntityHit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onBlockHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onHitBlock", "method_24920", "onBlockHit", "m_8060_"), "(Lewy;)V");
    }

    static void onBlockHit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onBlockHit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setVelocityClient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "lerpMotion", "method_5750", "setVelocityClient", "m_6001_"), "(DDD)V");
    }

    static void setVelocityClient(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2) {
                
       const auto methodID = methodID_setVelocityClient();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_canHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "canHitEntity", "method_26958", "canHit", "m_5603_"), "(Lbsr;)Z");
    }

    static jboolean canHit(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canHit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("I", "updateRotation", "method_26962", "updateRotation", "m_37283_"), "()V");
    }

    static void updateRotation(const jobject& obj) {
                
       const auto methodID = methodID_updateRotation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID__updateRotation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "lerpRotation", "method_26960", "updateRotation", "m_37273_"), "(FF)F");
    }

    static jfloat _updateRotation(const jfloat& arg0, const jfloat& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__updateRotation();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createSpawnPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getAddEntityPacket", "method_18002", "createSpawnPacket", "m_5654_"), "(Laqt;)Lzg;");
    }

    static jobject createSpawnPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createSpawnPacket();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSpawnPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recreateFromPacket", "method_31471", "onSpawnPacket", "m_141965_"), "(Labv;)V");
    }

    static void onSpawnPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onSpawnPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_canModifyAt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mayInteract", "method_36971", "canModifyAt", "m_142265_"), "(Ldcw;Ljd;)Z");
    }

    static jboolean canModifyAt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canModifyAt();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canBreakBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "mayBreak", "method_54457", "canBreakBlocks", "m_305640_"), "(Ldcw;)Z");
    }

    static jboolean canBreakBlocks(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canBreakBlocks();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__canHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bA", "isPickable", "method_5863", "canHit", "m_6087_"), "()Z");
    }

    static jboolean _canHit(const jobject& obj) {
                
       const auto methodID = methodID__canHit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTargetingMargin() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bL", "getPickRadius", "method_5871", "getTargetingMargin", "m_6143_"), "()F");
    }

    static jfloat getTargetingMargin(const jobject& obj) {
                
       const auto methodID = methodID_getTargetingMargin();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getKnockback() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "calculateHorizontalHurtKnockbackDirection", "method_59959", "getKnockback", "m_339151_"), "(Lbtn;Lbrk;)Lit/unimi/dsi/fastutil/doubles/DoubleDoubleImmutablePair;");
    }

    static jobject getKnockback(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getKnockback();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PROJECTILE_PROJECTILEENTITY_HPP