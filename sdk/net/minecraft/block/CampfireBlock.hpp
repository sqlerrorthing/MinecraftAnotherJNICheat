// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_CAMPFIREBLOCK_HPP
#define NET_MINECRAFT_BLOCK_CAMPFIREBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.CampfireBlock
 * Remapped: dgm
 */
namespace CampfireBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dgm", "net/minecraft/world/level/block/CampfireBlock", "net/minecraft/class_3922", "net/minecraft/block/CampfireBlock", "net/minecraft/src/C_1720_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.CampfireBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46297", "CODEC", "f_302592_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CampfireBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46297", "CODEC", "f_302592_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.CampfireBlock#SHAPE
    [[maybe_unused]] static jobject get_field_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SHAPE", "field_17351", "SHAPE", "f_51226_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.CampfireBlock#SHAPE
    [[maybe_unused]] static void set_field_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SHAPE", "field_17351", "SHAPE", "f_51226_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.CampfireBlock#LIT
    [[maybe_unused]] static jobject get_field_LIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LIT", "field_17352", "LIT", "f_51227_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CampfireBlock#LIT
    [[maybe_unused]] static void set_field_LIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "LIT", "field_17352", "LIT", "f_51227_"), "Ldtt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.CampfireBlock#SIGNAL_FIRE
    [[maybe_unused]] static jobject get_field_SIGNAL_FIRE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SIGNAL_FIRE", "field_17353", "SIGNAL_FIRE", "f_51228_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CampfireBlock#SIGNAL_FIRE
    [[maybe_unused]] static void set_field_SIGNAL_FIRE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SIGNAL_FIRE", "field_17353", "SIGNAL_FIRE", "f_51228_"), "Ldtt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.CampfireBlock#WATERLOGGED
    [[maybe_unused]] static jobject get_field_WATERLOGGED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WATERLOGGED", "field_17354", "WATERLOGGED", "f_51229_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CampfireBlock#WATERLOGGED
    [[maybe_unused]] static void set_field_WATERLOGGED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "WATERLOGGED", "field_17354", "WATERLOGGED", "f_51229_"), "Ldtt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.CampfireBlock#FACING
    [[maybe_unused]] static jobject get_field_FACING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FACING", "field_17564", "FACING", "f_51230_"), "Ldtw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.CampfireBlock#FACING
    [[maybe_unused]] static void set_field_FACING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FACING", "field_17564", "FACING", "f_51230_"), "Ldtw;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.CampfireBlock#SMOKEY_SHAPE
    [[maybe_unused]] static jobject get_field_SMOKEY_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "VIRTUAL_FENCE_POST", "field_21580", "SMOKEY_SHAPE", "f_51231_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.CampfireBlock#SMOKEY_SHAPE
    [[maybe_unused]] static void set_field_SMOKEY_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "VIRTUAL_FENCE_POST", "field_21580", "SMOKEY_SHAPE", "f_51231_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.CampfireBlock#field_31049
    [[maybe_unused]] static jint get_field_field_31049() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SMOKE_DISTANCE", "field_31049", "field_31049", "f_152748_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.CampfireBlock#field_31049
    [[maybe_unused]] static void set_field_field_31049(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "SMOKE_DISTANCE", "field_31049", "field_31049", "f_152748_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.CampfireBlock#emitsParticles
    static jboolean get_field_emitsParticles(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "spawnParticles", "field_23881", "emitsParticles", "f_51232_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.CampfireBlock#emitsParticles
    static void set_field_emitsParticles(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "spawnParticles", "field_23881", "emitsParticles", "f_51232_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.CampfireBlock#fireDamage
    static jint get_field_fireDamage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "fireDamage", "field_25182", "fireDamage", "f_51233_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.CampfireBlock#fireDamage
    static void set_field_fireDamage(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "fireDamage", "field_25182", "fireDamage", "f_51233_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_onUseWithItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "useItemOn", "method_55765", "onUseWithItem", "m_51273_"), "(Lcuq;Ldtc;Ldcw;Ljd;Lcmx;Lbqq;Lewy;)Lbqt;");
    }

    static jobject onUseWithItem(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_onUseWithItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_onEntityCollision() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "entityInside", "method_9548", "onEntityCollision", "m_7892_"), "(Ldtc;Ldcw;Ljd;Lbsr;)V");
    }

    static void onEntityCollision(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onEntityCollision();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onStateReplaced() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onRemove", "method_9536", "onStateReplaced", "m_6810_"), "(Ldtc;Ldcw;Ljd;Ldtc;Z)V");
    }

    static void onStateReplaced(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_onStateReplaced();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getPlacementState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStateForPlacement", "method_9605", "getPlacementState", "m_5573_"), "(Lcyd;)Ldtc;");
    }

    static jobject getPlacementState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPlacementState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStateForNeighborUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateShape", "method_9559", "getStateForNeighborUpdate", "m_7417_"), "(Ldtc;Lji;Ldtc;Ldcx;Ljd;Ljd;)Ldtc;");
    }

    static jobject getStateForNeighborUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_getStateForNeighborUpdate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_isSignalFireBaseBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "isSmokeSource", "method_17456", "isSignalFireBaseBlock", "m_51323_"), "(Ldtc;)Z");
    }

    static jboolean isSignalFireBaseBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isSignalFireBaseBlock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOutlineShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getShape", "method_9530", "getOutlineShape", "m_5940_"), "(Ldtc;Ldcc;Ljd;Lexh;)Lexv;");
    }

    static jobject getOutlineShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getOutlineShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getRenderType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getRenderShape", "method_9604", "getRenderType", "m_7514_"), "(Ldtc;)Ldmf;");
    }

    static jobject getRenderType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRenderType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_randomDisplayTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "animateTick", "method_9496", "randomDisplayTick", "m_214162_"), "(Ldtc;Ldcw;Ljd;Layw;)V");
    }

    static void randomDisplayTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_randomDisplayTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_extinguish() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "dowse", "method_29288", "extinguish", "m_152749_"), "(Lbsr;Ldcx;Ljd;Ldtc;)V");
    }

    static void extinguish(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_extinguish();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_tryFillWithFluid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeLiquid", "method_10311", "tryFillWithFluid", "m_7361_"), "(Ldcx;Ljd;Ldtc;Lepe;)Z");
    }

    static jboolean tryFillWithFluid(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_tryFillWithFluid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onProjectileHit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onProjectileHit", "method_19286", "onProjectileHit", "m_5581_"), "(Ldcw;Ldtc;Lewy;Lcnp;)V");
    }

    static void onProjectileHit(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onProjectileHit();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_spawnSmokeParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "makeParticles", "method_17455", "spawnSmokeParticle", "m_51251_"), "(Ldcw;Ljd;ZZ)V");
    }

    static void spawnSmokeParticle(const jobject& arg0, const jobject& arg1, const jboolean& arg2, const jboolean& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_spawnSmokeParticle();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_isLitCampfireInRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isSmokeyPos", "method_23895", "isLitCampfireInRange", "m_51248_"), "(Ldcw;Ljd;)Z");
    }

    static jboolean isLitCampfireInRange(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_isLitCampfireInRange();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isLitCampfire() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("g", "isLitCampfire", "method_23896", "isLitCampfire", "m_51319_"), "(Ldtc;)Z");
    }

    static jboolean isLitCampfire(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isLitCampfire();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getFluidState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b_", "getFluidState", "method_9545", "getFluidState", "m_5888_"), "(Ldtc;)Lepe;");
    }

    static jobject getFluidState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFluidState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_rotate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rotate", "method_9598", "rotate", "m_6843_"), "(Ldtc;Ldmm;)Ldtc;");
    }

    static jobject rotate(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_rotate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_mirror() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mirror", "method_9569", "mirror", "m_6943_"), "(Ldtc;Ldkv;)Ldtc;");
    }

    static jobject mirror(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_mirror();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createBlockStateDefinition", "method_9515", "appendProperties", "m_7926_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_createBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "newBlockEntity", "method_10123", "createBlockEntity", "m_142194_"), "(Ljd;Ldtc;)Ldqh;");
    }

    static jobject createBlockEntity(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getTicker() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTicker", "method_31645", "getTicker", "m_142354_"), "(Ldcw;Ldtc;Ldqj;)Ldqi;");
    }

    static jobject getTicker(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getTicker();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_canPathfindThrough() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isPathfindable", "method_9516", "canPathfindThrough", "m_7357_"), "(Ldtc;Lept;)Z");
    }

    static jboolean canPathfindThrough(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canPathfindThrough();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canBeLit() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("h", "canLight", "method_30035", "canBeLit", "m_51321_"), "(Ldtc;)Z");
    }

    static jboolean canBeLit(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_canBeLit();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_CAMPFIREBLOCK_HPP