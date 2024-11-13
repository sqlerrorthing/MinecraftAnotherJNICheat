// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_NETHERPORTALBLOCK_HPP
#define NET_MINECRAFT_BLOCK_NETHERPORTALBLOCK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.NetherPortalBlock
 * Remapped: dlc
 */
namespace NetherPortalBlock {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dlc", "net/minecraft/world/level/block/NetherPortalBlock", "net/minecraft/class_2423", "net/minecraft/block/NetherPortalBlock", "net/minecraft/src/C_1842_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.NetherPortalBlock#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46401", "CODEC", "f_302228_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.NetherPortalBlock#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46401", "CODEC", "f_302228_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.NetherPortalBlock#AXIS
    [[maybe_unused]] static jobject get_field_AXIS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "AXIS", "field_11310", "AXIS", "f_54904_"), "Ldua;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.NetherPortalBlock#AXIS
    [[maybe_unused]] static void set_field_AXIS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "AXIS", "field_11310", "AXIS", "f_54904_"), "Ldua;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.block.NetherPortalBlock#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_52060", "LOGGER", "f_337005_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.NetherPortalBlock#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "LOGGER", "field_52060", "LOGGER", "f_337005_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.NetherPortalBlock#field_31196
    [[maybe_unused]] static jint get_field_field_31196() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "AABB_OFFSET", "field_31196", "field_31196", "f_153985_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.NetherPortalBlock#field_31196
    [[maybe_unused]] static void set_field_field_31196(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "AABB_OFFSET", "field_31196", "field_31196", "f_153985_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.NetherPortalBlock#X_SHAPE
    [[maybe_unused]] static jobject get_field_X_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "X_AXIS_AABB", "field_11309", "X_SHAPE", "f_54905_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.NetherPortalBlock#X_SHAPE
    [[maybe_unused]] static void set_field_X_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "X_AXIS_AABB", "field_11309", "X_SHAPE", "f_54905_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.block.NetherPortalBlock#Z_SHAPE
    [[maybe_unused]] static jobject get_field_Z_SHAPE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "Z_AXIS_AABB", "field_11308", "Z_SHAPE", "f_54906_"), "Lexv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.block.NetherPortalBlock#Z_SHAPE
    [[maybe_unused]] static void set_field_Z_SHAPE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "Z_AXIS_AABB", "field_11308", "Z_SHAPE", "f_54906_"), "Lexv;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_53969", "getCodec", "m_304657_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getOutlineShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getShape", "method_9530", "getOutlineShape", "m_5940_"), "(Ldtc;Ldcc;Ljd;Lexh;)Lexv;");
    }

    static jobject getOutlineShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getOutlineShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_randomTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "randomTick", "method_9514", "randomTick", "m_213898_"), "(Ldtc;Laqu;Ljd;Layw;)V");
    }

    static void randomTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_randomTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getStateForNeighborUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateShape", "method_9559", "getStateForNeighborUpdate", "m_7417_"), "(Ldtc;Lji;Ldtc;Ldcx;Ljd;Ljd;)Ldtc;");
    }

    static jobject getStateForNeighborUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_getStateForNeighborUpdate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_onEntityCollision() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "entityInside", "method_9548", "onEntityCollision", "m_7892_"), "(Ldtc;Ldcw;Ljd;Lbsr;)V");
    }

    static void onEntityCollision(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onEntityCollision();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getPortalDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPortalTransitionTime", "method_60772", "getPortalDelay", "m_340341_"), "(Laqu;Lbsr;)I");
    }

    static jint getPortalDelay(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getPortalDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createTeleportTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPortalDestination", "method_60770", "createTeleportTarget", "m_339314_"), "(Laqu;Lbsr;Ljd;)Leqc;");
    }

    static jobject createTeleportTarget(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_createTeleportTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getOrCreateExitPortalTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getExitPortal", "method_60773", "getOrCreateExitPortalTarget", "m_339642_"), "(Laqu;Lbsr;Ljd;Ljd;ZLdut;)Leqc;");
    }

    static jobject getOrCreateExitPortalTarget(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_getOrCreateExitPortalTarget();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getExitPortalTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDimensionTransitionFromExit", "method_60777", "getExitPortalTarget", "m_338542_"), "(Lbsr;Ljd;Ll$a;Laqu;Leqc$a;)Leqc;");
    }

    static jobject getExitPortalTarget(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_getExitPortalTarget();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID__getExitPortalTarget() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createDimensionTransition", "method_60774", "getExitPortalTarget", "m_339541_"), "(Laqu;Ll$a;Lji$a;Lexc;Lbsr;Lexc;FFLeqc$a;)Leqc;");
    }

    static jobject _getExitPortalTarget(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jfloat& arg6, const jfloat& arg7, const jobject& arg8) {
       const auto clazz = self();
       const auto methodID = methodID__getExitPortalTarget();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID_getPortalEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getLocalTransition", "method_60778", "getPortalEffect", "m_338747_"), "()Ldlr$a;");
    }

    static jobject getPortalEffect(const jobject& obj) {
                
       const auto methodID = methodID_getPortalEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_randomDisplayTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "animateTick", "method_9496", "randomDisplayTick", "m_214162_"), "(Ldtc;Ldcw;Ljd;Layw;)V");
    }

    static void randomDisplayTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_randomDisplayTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getPickStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCloneItemStack", "method_9574", "getPickStack", "m_7397_"), "(Ldcz;Ljd;Ldtc;)Lcuq;");
    }

    static jobject getPickStack(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getPickStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_rotate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "rotate", "method_9598", "rotate", "m_6843_"), "(Ldtc;Ldmm;)Ldtc;");
    }

    static jobject rotate(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_rotate();
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
    
};

#endif // NET_MINECRAFT_BLOCK_NETHERPORTALBLOCK_HPP