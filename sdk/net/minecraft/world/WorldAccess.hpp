// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_WORLDACCESS_HPP
#define NET_MINECRAFT_WORLD_WORLDACCESS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.WorldAccess
 * Remapped: dcx
 */
namespace WorldAccess {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcx", "net/minecraft/world/level/LevelAccessor", "net/minecraft/class_1936", "net/minecraft/world/WorldAccess", "net/minecraft/src/C_1598_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getLunarTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ak", "dayTime", "method_30271", "getLunarTime", "m_8044_"), "()J");
    }

    static jlong getLunarTime(const jobject& obj) {
                
       const auto methodID = methodID_getLunarTime();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTickOrder() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("G_", "nextSubTickCount", "method_39224", "getTickOrder", "m_183596_"), "()J");
    }

    static jlong getTickOrder(const jobject& obj) {
                
       const auto methodID = methodID_getTickOrder();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockTickScheduler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("P", "getBlockTicks", "method_8397", "getBlockTickScheduler", "m_183326_"), "()Leyp;");
    }

    static jobject getBlockTickScheduler(const jobject& obj) {
                
       const auto methodID = methodID_getBlockTickScheduler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createOrderedTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createTick", "method_39284", "createOrderedTick", "m_186482_"), "(Ljd;Ljava/lang/Object;ILeyx;)Leyt;");
    }

    static jobject createOrderedTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_createOrderedTick();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__createOrderedTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createTick", "method_39283", "createOrderedTick", "m_186478_"), "(Ljd;Ljava/lang/Object;I)Leyt;");
    }

    static jobject _createOrderedTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID__createOrderedTick();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_scheduleBlockTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scheduleTick", "method_39280", "scheduleBlockTick", "m_186464_"), "(Ljd;Ldfy;ILeyx;)V");
    }

    static void scheduleBlockTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_scheduleBlockTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__scheduleBlockTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scheduleTick", "method_39279", "scheduleBlockTick", "m_186460_"), "(Ljd;Ldfy;I)V");
    }

    static void _scheduleBlockTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID__scheduleBlockTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getFluidTickScheduler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("O", "getFluidTicks", "method_8405", "getFluidTickScheduler", "m_183324_"), "()Leyp;");
    }

    static jobject getFluidTickScheduler(const jobject& obj) {
                
       const auto methodID = methodID_getFluidTickScheduler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_scheduleFluidTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scheduleTick", "method_39282", "scheduleFluidTick", "m_186473_"), "(Ljd;Lepd;ILeyx;)V");
    }

    static void scheduleFluidTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_scheduleFluidTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__scheduleFluidTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "scheduleTick", "method_39281", "scheduleFluidTick", "m_186469_"), "(Ljd;Lepd;I)V");
    }

    static void _scheduleFluidTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID__scheduleFluidTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getLevelProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A_", "getLevelData", "method_8401", "getLevelProperties", "m_6106_"), "()Lerb;");
    }

    static jobject getLevelProperties(const jobject& obj) {
                
       const auto methodID = methodID_getLevelProperties();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getLocalDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d_", "getCurrentDifficultyAt", "method_8404", "getLocalDifficulty", "m_6436_"), "(Ljd;)Lbqp;");
    }

    static jobject getLocalDifficulty(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLocalDifficulty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getServer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getServer", "method_8503", "getServer", "m_7654_"), "()Lnet/minecraft/server/MinecraftServer;");
    }

    static jobject getServer(const jobject& obj) {
                
       const auto methodID = methodID_getServer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDifficulty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("al", "getDifficulty", "method_8407", "getDifficulty", "m_46791_"), "()Lbqo;");
    }

    static jobject getDifficulty(const jobject& obj) {
                
       const auto methodID = methodID_getDifficulty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChunkManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("N", "getChunkSource", "method_8398", "getChunkManager", "m_7726_"), "()Ldvc;");
    }

    static jobject getChunkManager(const jobject& obj) {
                
       const auto methodID = methodID_getChunkManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isChunkLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasChunk", "method_8393", "isChunkLoaded", "m_7232_"), "(II)Z");
    }

    static jboolean isChunkLoaded(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_isChunkLoaded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getRandom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("E_", "getRandom", "method_8409", "getRandom", "m_213780_"), "()Layw;");
    }

    static jobject getRandom(const jobject& obj) {
                
       const auto methodID = methodID_getRandom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_updateNeighbors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "blockUpdated", "method_8408", "updateNeighbors", "m_6289_"), "(Ljd;Ldfy;)V");
    }

    static void updateNeighbors(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_updateNeighbors();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_replaceWithStateForNeighborUpdate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "neighborShapeChanged", "method_42308", "replaceWithStateForNeighborUpdate", "m_213683_"), "(Lji;Ldtc;Ljd;Ljd;II)V");
    }

    static void replaceWithStateForNeighborUpdate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID_replaceWithStateForNeighborUpdate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_playSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playSound", "method_45447", "playSound", "m_247517_"), "(Lcmx;Ljd;Lavo;Lavq;)V");
    }

    static void playSound(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_playSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__playSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playSound", "method_8396", "playSound", "m_5594_"), "(Lcmx;Ljd;Lavo;Lavq;FF)V");
    }

    static void _playSound(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jfloat& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID__playSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_addParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addParticle", "method_8406", "addParticle", "m_7106_"), "(Llk;DDDDDD)V");
    }

    static void addParticle(const jobject& obj, const jobject& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5, const jdouble& arg6) {
                
       const auto methodID = methodID_addParticle();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_syncWorldEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "levelEvent", "method_8444", "syncWorldEvent", "m_5898_"), "(Lcmx;ILjd;I)V");
    }

    static void syncWorldEvent(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2, const jint& arg3) {
                
       const auto methodID = methodID_syncWorldEvent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID__syncWorldEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "levelEvent", "method_20290", "syncWorldEvent", "m_46796_"), "(ILjd;I)V");
    }

    static void _syncWorldEvent(const jobject& obj, const jint& arg0, const jobject& arg1, const jint& arg2) {
                
       const auto methodID = methodID__syncWorldEvent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_emitGameEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gameEvent", "method_32888", "emitGameEvent", "m_214171_"), "(Ljm;Lexc;Ldxz$a;)V");
    }

    static void emitGameEvent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_emitGameEvent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__emitGameEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gameEvent", "method_43275", "emitGameEvent", "m_220400_"), "(Lbsr;Ljm;Lexc;)V");
    }

    static void _emitGameEvent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID__emitGameEvent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID___emitGameEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gameEvent", "method_33596", "emitGameEvent", "m_142346_"), "(Lbsr;Ljm;Ljd;)V");
    }

    static void __emitGameEvent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID___emitGameEvent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID____emitGameEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gameEvent", "method_43276", "emitGameEvent", "m_322719_"), "(Ljm;Ljd;Ldxz$a;)V");
    }

    static void ___emitGameEvent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID____emitGameEvent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_____emitGameEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "gameEvent", "method_55764", "emitGameEvent", "m_220407_"), "(Lakq;Ljd;Ldxz$a;)V");
    }

    static void ____emitGameEvent(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_____emitGameEvent();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_WORLDACCESS_HPP