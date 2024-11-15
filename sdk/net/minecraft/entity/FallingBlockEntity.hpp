// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_FALLINGBLOCKENTITY_HPP
#define NET_MINECRAFT_ENTITY_FALLINGBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.FallingBlockEntity
 * Remapped: cjg
 */
namespace FallingBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cjg", "net/minecraft/world/entity/item/FallingBlockEntity", "net/minecraft/class_1540", "net/minecraft/entity/FallingBlockEntity", "net/minecraft/src/C_975_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.entity.FallingBlockEntity#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LOGGER", "field_36333", "LOGGER", "f_201970_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.entity.FallingBlockEntity#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LOGGER", "field_36333", "LOGGER", "f_201970_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.FallingBlockEntity#block
    static jobject get_field_block(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "blockState", "field_7188", "block", "f_31946_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.FallingBlockEntity#block
    static void set_field_block(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "blockState", "field_7188", "block", "f_31946_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.FallingBlockEntity#timeFalling
    static jint get_field_timeFalling(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "time", "field_7192", "timeFalling", "f_31942_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.FallingBlockEntity#timeFalling
    static void set_field_timeFalling(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "time", "field_7192", "timeFalling", "f_31942_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.FallingBlockEntity#dropItem
    static jboolean get_field_dropItem(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dropItem", "field_7193", "dropItem", "f_31943_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.FallingBlockEntity#dropItem
    static void set_field_dropItem(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "dropItem", "field_7193", "dropItem", "f_31943_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.FallingBlockEntity#destroyedOnLanding
    static jboolean get_field_destroyedOnLanding(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "cancelDrop", "field_7189", "destroyedOnLanding", "f_31947_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.FallingBlockEntity#destroyedOnLanding
    static void set_field_destroyedOnLanding(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "cancelDrop", "field_7189", "destroyedOnLanding", "f_31947_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.FallingBlockEntity#hurtEntities
    static jboolean get_field_hurtEntities(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "hurtEntities", "field_7191", "hurtEntities", "f_31939_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.FallingBlockEntity#hurtEntities
    static void set_field_hurtEntities(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "hurtEntities", "field_7191", "hurtEntities", "f_31939_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.FallingBlockEntity#fallHurtMax
    static jint get_field_fallHurtMax(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "fallDamageMax", "field_7190", "fallHurtMax", "f_31940_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.FallingBlockEntity#fallHurtMax
    static void set_field_fallHurtMax(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "fallDamageMax", "field_7190", "fallHurtMax", "f_31940_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.FallingBlockEntity#fallHurtAmount
    static jfloat get_field_fallHurtAmount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "fallDamagePerDistance", "field_7187", "fallHurtAmount", "f_149641_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.FallingBlockEntity#fallHurtAmount
    static void set_field_fallHurtAmount(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "fallDamagePerDistance", "field_7187", "fallHurtAmount", "f_149641_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.FallingBlockEntity#blockEntityData
    static jobject get_field_blockEntityData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "blockData", "field_7194", "blockEntityData", "f_31944_"), "Lub;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.FallingBlockEntity#blockEntityData
    static void set_field_blockEntityData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "blockData", "field_7194", "blockEntityData", "f_31944_"), "Lub;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.entity.FallingBlockEntity#shouldDupe
    static jboolean get_field_shouldDupe(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "forceTickAfterTeleportToDuplicate", "field_52015", "shouldDupe", "f_337732_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static public field net.minecraft.entity.FallingBlockEntity#shouldDupe
    static void set_field_shouldDupe(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "forceTickAfterTeleportToDuplicate", "field_52015", "shouldDupe", "f_337732_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static protected field net.minecraft.entity.FallingBlockEntity#BLOCK_POS
    [[maybe_unused]] static jobject get_field_BLOCK_POS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DATA_START_POS", "field_7195", "BLOCK_POS", "f_31945_"), "Lajw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.entity.FallingBlockEntity#BLOCK_POS
    [[maybe_unused]] static void set_field_BLOCK_POS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DATA_START_POS", "field_7195", "BLOCK_POS", "f_31945_"), "Lajw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_spawnFromBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fall", "method_40005", "spawnFromBlock", "m_201971_"), "(Ldcw;Ljd;Ldtc;)Lcjg;");
    }

    static jobject spawnFromBlock(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_spawnFromBlock();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isAttackable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cu", "isAttackable", "method_5732", "isAttackable", "m_6097_"), "()Z");
    }

    static jboolean isAttackable(const jobject& obj) {
                
       const auto methodID = methodID_isAttackable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setFallingBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setStartPos", "method_6963", "setFallingBlockPos", "m_31959_"), "(Ljd;)V");
    }

    static void setFallingBlockPos(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setFallingBlockPos();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFallingBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getStartPos", "method_6964", "getFallingBlockPos", "m_31978_"), "()Ljd;");
    }

    static jobject getFallingBlockPos(const jobject& obj) {
                
       const auto methodID = methodID_getFallingBlockPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMoveEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("bc", "getMovementEmission", "method_33570", "getMoveEffect", "m_142319_"), "()Lbsr$b;");
    }

    static jobject getMoveEffect(const jobject& obj) {
                
       const auto methodID = methodID_getMoveEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_initDataTracker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "defineSynchedData", "method_5693", "initDataTracker", "m_8097_"), "(Laka$a;)V");
    }

    static void initDataTracker(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initDataTracker();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_onDestroyedOnLanding() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "callOnBrokenAfterFall", "method_32752", "onDestroyedOnLanding", "m_149650_"), "(Ldfy;Ljd;)V");
    }

    static void onDestroyedOnLanding(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onDestroyedOnLanding();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_handleFallDamage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "causeFallDamage", "method_5747", "handleFallDamage", "m_142535_"), "(FFLbrk;)Z");
    }

    static jboolean handleFallDamage(const jobject& obj, const jfloat& arg0, const jfloat& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_handleFallDamage();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
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
    
    static jmethodID methodID_setHurtEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setHurtsEntities", "method_6965", "setHurtEntities", "m_149656_"), "(FI)V");
    }

    static void setHurtEntities(const jobject& obj, const jfloat& arg0, const jint& arg1) {
                
       const auto methodID = methodID_setHurtEntities();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setDestroyedOnLanding() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("s", "disableDrop", "method_49181", "setDestroyedOnLanding", "m_272001_"), "()V");
    }

    static void setDestroyedOnLanding(const jobject& obj) {
                
       const auto methodID = methodID_setDestroyedOnLanding();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_doesRenderOnFire() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cy", "displayFireAnimation", "method_5862", "doesRenderOnFire", "m_6051_"), "()Z");
    }

    static jboolean doesRenderOnFire(const jobject& obj) {
                
       const auto methodID = methodID_doesRenderOnFire();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_populateCrashReport() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillCrashReportCategory", "method_5819", "populateCrashReport", "m_7976_"), "(Lp;)V");
    }

    static void populateCrashReport(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_populateCrashReport();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getBlockState", "method_6962", "getBlockState", "m_31980_"), "()Ldtc;");
    }

    static jobject getBlockState(const jobject& obj) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDefaultName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cs", "getTypeName", "method_23315", "getDefaultName", "m_5677_"), "()Lwz;");
    }

    static jobject getDefaultName(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_entityDataRequiresOperator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("cP", "onlyOpCanSetNbt", "method_5833", "entityDataRequiresOperator", "m_6127_"), "()Z");
    }

    static jboolean entityDataRequiresOperator(const jobject& obj) {
                
       const auto methodID = methodID_entityDataRequiresOperator();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
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
    
    static jmethodID methodID_teleportTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "changeDimension", "method_5731", "teleportTo", "m_5489_"), "(Leqc;)Lbsr;");
    }

    static jobject teleportTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_teleportTo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_FALLINGBLOCKENTITY_HPP