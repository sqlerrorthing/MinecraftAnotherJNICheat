// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_TNTENTITY_HPP
#define NET_MINECRAFT_ENTITY_TNTENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.TntEntity
 * Remapped: cji
 */
namespace TntEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cji", "net/minecraft/world/entity/item/PrimedTnt", "net/minecraft/class_1541", "net/minecraft/entity/TntEntity", "net/minecraft/src/C_977_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.TntEntity#FUSE
    [[maybe_unused]] static jobject get_field_FUSE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DATA_FUSE_ID", "field_7197", "FUSE", "f_32071_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.TntEntity#FUSE
    [[maybe_unused]] static void set_field_FUSE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DATA_FUSE_ID", "field_7197", "FUSE", "f_32071_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.TntEntity#BLOCK_STATE
    [[maybe_unused]] static jobject get_field_BLOCK_STATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_BLOCK_STATE_ID", "field_46777", "BLOCK_STATE", "f_302614_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.TntEntity#BLOCK_STATE
    [[maybe_unused]] static void set_field_BLOCK_STATE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "DATA_BLOCK_STATE_ID", "field_46777", "BLOCK_STATE", "f_302614_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.TntEntity#DEFAULT_FUSE
    [[maybe_unused]] static jint get_field_DEFAULT_FUSE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_FUSE_TIME", "field_30459", "DEFAULT_FUSE", "f_149679_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.TntEntity#DEFAULT_FUSE
    [[maybe_unused]] static void set_field_DEFAULT_FUSE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "DEFAULT_FUSE_TIME", "field_30459", "DEFAULT_FUSE", "f_149679_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.TntEntity#BLOCK_STATE_NBT_KEY
    [[maybe_unused]] static jobject get_field_BLOCK_STATE_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TAG_BLOCK_STATE", "field_46778", "BLOCK_STATE_NBT_KEY", "f_302380_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.TntEntity#BLOCK_STATE_NBT_KEY
    [[maybe_unused]] static void set_field_BLOCK_STATE_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TAG_BLOCK_STATE", "field_46778", "BLOCK_STATE_NBT_KEY", "f_302380_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.TntEntity#FUSE_NBT_KEY
    [[maybe_unused]] static jobject get_field_FUSE_NBT_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TAG_FUSE", "field_46776", "FUSE_NBT_KEY", "f_302527_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.TntEntity#FUSE_NBT_KEY
    [[maybe_unused]] static void set_field_FUSE_NBT_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TAG_FUSE", "field_46776", "FUSE_NBT_KEY", "f_302527_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.entity.TntEntity#TELEPORTED_EXPLOSION_BEHAVIOR
    [[maybe_unused]] static jobject get_field_TELEPORTED_EXPLOSION_BEHAVIOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "USED_PORTAL_DAMAGE_CALCULATOR", "field_52317", "TELEPORTED_EXPLOSION_BEHAVIOR", "f_336671_"), "Ldcp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.TntEntity#TELEPORTED_EXPLOSION_BEHAVIOR
    [[maybe_unused]] static void set_field_TELEPORTED_EXPLOSION_BEHAVIOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "USED_PORTAL_DAMAGE_CALCULATOR", "field_52317", "TELEPORTED_EXPLOSION_BEHAVIOR", "f_336671_"), "Ldcp;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.TntEntity#causingEntity
    static jobject get_field_causingEntity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "owner", "field_7198", "causingEntity", "f_32072_"), "Lbtn;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.TntEntity#causingEntity
    static void set_field_causingEntity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "owner", "field_7198", "causingEntity", "f_32072_"), "Lbtn;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.TntEntity#teleported
    static jboolean get_field_teleported(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "usedPortal", "field_52318", "teleported", "f_337258_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.TntEntity#teleported
    static void set_field_teleported(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "usedPortal", "field_52318", "teleported", "f_337258_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMoveEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bc", "getMovementEmission", "method_33570", "getMoveEffect", "m_142319_"), "()Lbsr$b;");
    }

    static jobject getMoveEffect(const jobject& obj) {
                
       const auto methodID = methodID_getMoveEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bA", "isPickable", "method_5863", "canHit", "m_6087_"), "()Z");
    }

    static jboolean canHit(const jobject& obj) {
                
       const auto methodID = methodID_canHit();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getGravity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aZ", "getDefaultGravity", "method_7490", "getGravity", "m_319564_"), "()D");
    }

    static jdouble getGravity(const jobject& obj) {
                
       const auto methodID = methodID_getGravity();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "tick", "method_5773", "tick", "m_8119_"), "()V");
    }

    static void tick(const jobject& obj) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_explode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "explode", "method_6971", "explode", "m_32103_"), "()V");
    }

    static void explode(const jobject& obj) {
                
       const auto methodID = methodID_explode();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_writeCustomDataToNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "addAdditionalSaveData", "method_5652", "writeCustomDataToNbt", "m_7380_"), "(Lub;)V");
    }

    static void writeCustomDataToNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_writeCustomDataToNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_readCustomDataFromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "readAdditionalSaveData", "method_5749", "readCustomDataFromNbt", "m_7378_"), "(Lub;)V");
    }

    static void readCustomDataFromNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readCustomDataFromNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOwner() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getOwner", "method_6970", "getOwner", "m_19749_"), "()Lbtn;");
    }

    static jobject getOwner(const jobject& obj) {
                
       const auto methodID = methodID_getOwner();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_copyFrom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "restoreFrom", "method_5878", "copyFrom", "m_20361_"), "(Lbsr;)V");
    }

    static void copyFrom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyFrom();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setFuse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setFuse", "method_6967", "setFuse", "m_32085_"), "(I)V");
    }

    static void setFuse(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setFuse();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFuse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getFuse", "method_6969", "getFuse", "m_32100_"), "()I");
    }

    static jint getFuse(const jobject& obj) {
                
       const auto methodID = methodID_getFuse();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setBlockState", "method_54455", "setBlockState", "m_304689_"), "(Ldtc;)V");
    }

    static void setBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBlockState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "getBlockState", "method_54456", "getBlockState", "m_307876_"), "()Ldtc;");
    }

    static jobject getBlockState(const jobject& obj) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setTeleported() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setUsedPortal", "method_61174", "setTeleported", "m_340582_"), "(Z)V");
    }

    static void setTeleported(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setTeleported();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_teleportTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "changeDimension", "method_5731", "teleportTo", "m_5489_"), "(Leqc;)Lbsr;");
    }

    static jobject teleportTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_teleportTo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_TNTENTITY_HPP