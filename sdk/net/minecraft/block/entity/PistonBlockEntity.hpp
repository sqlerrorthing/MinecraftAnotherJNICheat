// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_PISTONBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_PISTONBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.PistonBlockEntity
 * Remapped: dsy
 */
namespace PistonBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dsy", "net/minecraft/world/level/block/piston/PistonMovingBlockEntity", "net/minecraft/class_2669", "net/minecraft/block/entity/PistonBlockEntity", "net/minecraft/src/C_2053_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.block.entity.PistonBlockEntity#field_31382
    [[maybe_unused]] static jint get_field_field_31382() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TICKS_TO_EXTEND", "field_31382", "field_31382", "f_155898_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#field_31382
    [[maybe_unused]] static void set_field_field_31382(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TICKS_TO_EXTEND", "field_31382", "field_31382", "f_155898_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.entity.PistonBlockEntity#field_31383
    [[maybe_unused]] static jdouble get_field_field_31383() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PUSH_OFFSET", "field_31383", "field_31383", "f_155899_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#field_31383
    [[maybe_unused]] static void set_field_field_31383(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "PUSH_OFFSET", "field_31383", "field_31383", "f_155899_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.PistonBlockEntity#field_31381
    [[maybe_unused]] static jdouble get_field_field_31381() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TICK_MOVEMENT", "field_31381", "field_31381", "f_155897_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.PistonBlockEntity#field_31381
    [[maybe_unused]] static void set_field_field_31381(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TICK_MOVEMENT", "field_31381", "field_31381", "f_155897_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.PistonBlockEntity#pushedBlock
    static jobject get_field_pushedBlock(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "movedState", "field_12204", "pushedBlock", "f_60334_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#pushedBlock
    static void set_field_pushedBlock(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "movedState", "field_12204", "pushedBlock", "f_60334_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.PistonBlockEntity#facing
    static jobject get_field_facing(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "direction", "field_12201", "facing", "f_60335_"), "Lji;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#facing
    static void set_field_facing(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "direction", "field_12201", "facing", "f_60335_"), "Lji;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.PistonBlockEntity#extending
    static jboolean get_field_extending(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "extending", "field_12203", "extending", "f_60336_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#extending
    static void set_field_extending(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "extending", "field_12203", "extending", "f_60336_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.PistonBlockEntity#source
    static jboolean get_field_source(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "isSourcePiston", "field_12202", "source", "f_60337_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#source
    static void set_field_source(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "isSourcePiston", "field_12202", "source", "f_60337_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.block.entity.PistonBlockEntity#entityMovementDirection
    [[maybe_unused]] static jobject get_field_entityMovementDirection() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "NOCLIP", "field_12205", "entityMovementDirection", "f_60338_"), "Ljava/lang/ThreadLocal;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#entityMovementDirection
    [[maybe_unused]] static void set_field_entityMovementDirection(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "NOCLIP", "field_12205", "entityMovementDirection", "f_60338_"), "Ljava/lang/ThreadLocal;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.PistonBlockEntity#progress
    static jfloat get_field_progress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "progress", "field_12207", "progress", "f_60339_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#progress
    static void set_field_progress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "progress", "field_12207", "progress", "f_60339_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.PistonBlockEntity#lastProgress
    static jfloat get_field_lastProgress(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "progressO", "field_12206", "lastProgress", "f_60340_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#lastProgress
    static void set_field_lastProgress(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "progressO", "field_12206", "lastProgress", "f_60340_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.PistonBlockEntity#savedWorldTime
    static jlong get_field_savedWorldTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "lastTicked", "field_12208", "savedWorldTime", "f_60341_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#savedWorldTime
    static void set_field_savedWorldTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "lastTicked", "field_12208", "savedWorldTime", "f_60341_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.PistonBlockEntity#field_26705
    static jint get_field_field_26705(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "deathTicks", "field_26705", "field_26705", "f_60342_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.PistonBlockEntity#field_26705
    static void set_field_field_26705(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "deathTicks", "field_26705", "field_26705", "f_60342_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_toInitialChunkDataNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUpdateTag", "method_16887", "toInitialChunkDataNbt", "m_5995_"), "(Ljo$a;)Lub;");
    }

    static jobject toInitialChunkDataNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toInitialChunkDataNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isExtending() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isExtending", "method_11501", "isExtending", "m_60387_"), "()Z");
    }

    static jboolean isExtending(const jobject& obj) {
                
       const auto methodID = methodID_isExtending();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFacing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getDirection", "method_11498", "getFacing", "m_60392_"), "()Lji;");
    }

    static jobject getFacing(const jobject& obj) {
                
       const auto methodID = methodID_getFacing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isSourcePiston", "method_11515", "isSource", "m_60397_"), "()Z");
    }

    static jboolean isSource(const jobject& obj) {
                
       const auto methodID = methodID_isSource();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getProgress", "method_11499", "getProgress", "m_60350_"), "(F)F");
    }

    static jfloat getProgress(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getProgress();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRenderOffsetX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getXOff", "method_11494", "getRenderOffsetX", "m_60380_"), "(F)F");
    }

    static jfloat getRenderOffsetX(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getRenderOffsetX();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRenderOffsetY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getYOff", "method_11511", "getRenderOffsetY", "m_60385_"), "(F)F");
    }

    static jfloat getRenderOffsetY(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getRenderOffsetY();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getRenderOffsetZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getZOff", "method_11507", "getRenderOffsetZ", "m_60388_"), "(F)F");
    }

    static jfloat getRenderOffsetZ(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getRenderOffsetZ();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getAmountExtended() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getExtendedProgress", "method_11504", "getAmountExtended", "m_60390_"), "(F)F");
    }

    static jfloat getAmountExtended(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_getAmountExtended();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getHeadBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "getCollisionRelatedBlockState", "method_11496", "getHeadBlockState", "m_60403_"), "()Ldtc;");
    }

    static jobject getHeadBlockState(const jobject& obj) {
                
       const auto methodID = methodID_getHeadBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_pushEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "moveCollidedEntities", "method_11503", "pushEntities", "m_155910_"), "(Ldcw;Ljd;FLdsy;)V");
    }

    static void pushEntities(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_pushEntities();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_moveEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "moveEntityByPiston", "method_23672", "moveEntity", "m_60371_"), "(Lji;Lbsr;DLji;)V");
    }

    static void moveEntity(const jobject& arg0, const jobject& arg1, const jdouble& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_moveEntity();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_moveEntitiesInHoneyBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "moveStuckEntities", "method_23674", "moveEntitiesInHoneyBlock", "m_155931_"), "(Ldcw;Ljd;FLdsy;)V");
    }

    static void moveEntitiesInHoneyBlock(const jobject& arg0, const jobject& arg1, const jfloat& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_moveEntitiesInHoneyBlock();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canMoveEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "matchesStickyCritera", "method_23671", "canMoveEntity", "m_287216_"), "(Lewx;Lbsr;Ljd;)Z");
    }

    static jboolean canMoveEntity(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_canMoveEntity();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isPushingHoneyBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "isStickyForEntities", "method_23364", "isPushingHoneyBlock", "m_60404_"), "()Z");
    }

    static jboolean isPushingHoneyBlock(const jobject& obj) {
                
       const auto methodID = methodID_isPushingHoneyBlock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMovementDirection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getMovementDirection", "method_11506", "getMovementDirection", "m_60399_"), "()Lji;");
    }

    static jobject getMovementDirection(const jobject& obj) {
                
       const auto methodID = methodID_getMovementDirection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getIntersectionSize() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getMovement", "method_11497", "getIntersectionSize", "m_60367_"), "(Lewx;Lji;Lewx;)D");
    }

    static jdouble getIntersectionSize(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getIntersectionSize();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_offsetHeadBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "moveByPositionAndProgress", "method_11500", "offsetHeadBox", "m_155925_"), "(Ljd;Lewx;Ldsy;)Lewx;");
    }

    static jobject offsetHeadBox(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_offsetHeadBox();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_push() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fixEntityWithinPistonBase", "method_11514", "push", "m_155920_"), "(Ljd;Lbsr;Lji;D)V");
    }

    static void push(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jdouble& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_push();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getPushedBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getMovedState", "method_11495", "getPushedBlock", "m_60400_"), "()Ldtc;");
    }

    static jobject getPushedBlock(const jobject& obj) {
                
       const auto methodID = methodID_getPushedBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_finish() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "finalTick", "method_11513", "finish", "m_60401_"), "()V");
    }

    static void finish(const jobject& obj) {
                
       const auto methodID = methodID_finish();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "tick", "method_31707", "tick", "m_155915_"), "(Ldcw;Ljd;Ldtc;Ldsy;)V");
    }

    static void tick(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadAdditional", "method_11014", "readNbt", "m_318667_"), "(Lub;Ljo$a;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "saveAdditional", "method_11007", "writeNbt", "m_183515_"), "(Lub;Ljo$a;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getCollisionShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCollisionShape", "method_11512", "getCollisionShape", "m_60356_"), "(Ldcc;Ljd;)Lexv;");
    }

    static jobject getCollisionShape(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getCollisionShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSavedWorldTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getLastTicked", "method_11508", "getSavedWorldTime", "m_60402_"), "()J");
    }

    static jlong getSavedWorldTime(const jobject& obj) {
                
       const auto methodID = methodID_getSavedWorldTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_setWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setLevel", "method_31662", "setWorld", "m_142339_"), "(Ldcw;)V");
    }

    static void setWorld(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setWorld();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_PISTONBLOCKENTITY_HPP