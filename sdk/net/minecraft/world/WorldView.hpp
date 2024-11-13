// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_WORLDVIEW_HPP
#define NET_MINECRAFT_WORLD_WORLDVIEW_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.WorldView
 * Remapped: dcz
 */
namespace WorldView {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcz", "net/minecraft/world/level/LevelReader", "net/minecraft/class_4538", "net/minecraft/world/WorldView", "net/minecraft/src/C_1599_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getChunk", "method_8402", "getChunk", "m_6522_"), "(IILdvz;Z)Lduy;");
    }

    static jobject getChunk(const jobject& obj, const jint& arg0, const jint& arg1, const jobject& arg2, const jboolean& arg3) {
                
       const auto methodID = methodID_getChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_isChunkLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasChunk", "method_8393", "isChunkLoaded", "m_7232_"), "(II)Z");
    }

    static jboolean isChunkLoaded(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_isChunkLoaded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getTopY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeight", "method_8624", "getTopY", "m_6924_"), "(Ldyy$a;II)I");
    }

    static jint getTopY(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getTopY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getAmbientDarkness() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B_", "getSkyDarken", "method_8594", "getAmbientDarkness", "m_7445_"), "()I");
    }

    static jint getAmbientDarkness(const jobject& obj) {
                
       const auto methodID = methodID_getAmbientDarkness();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBiomeAccess() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("F_", "getBiomeManager", "method_22385", "getBiomeAccess", "m_7062_"), "()Lddy;");
    }

    static jobject getBiomeAccess(const jobject& obj) {
                
       const auto methodID = methodID_getBiomeAccess();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getBiome", "method_23753", "getBiome", "m_204166_"), "(Ljd;)Ljm;");
    }

    static jobject getBiome(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStatesInBoxIfLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getBlockStatesIfLoaded", "method_29556", "getStatesInBoxIfLoaded", "m_46847_"), "(Lewx;)Ljava/util/stream/Stream;");
    }

    static jobject getStatesInBoxIfLoaded(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStatesInBoxIfLoaded();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockTint", "method_23752", "getColor", "m_6171_"), "(Ljd;Ldch;)I");
    }

    static jint getColor(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBiomeForNoiseGen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getNoiseBiome", "getNoiseBiome", "method_16359", "getBiomeForNoiseGen", "m_203495_"), "(III)Ljm;");
    }

    static jobject getBiomeForNoiseGen(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getBiomeForNoiseGen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getGeneratorStoredBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUncachedNoiseBiome", "method_22387", "getGeneratorStoredBiome", "m_203675_"), "(III)Ljm;");
    }

    static jobject getGeneratorStoredBiome(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getGeneratorStoredBiome();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isClient() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x_", "isClientSide", "method_8608", "isClient", "m_5776_"), "()Z");
    }

    static jboolean isClient(const jobject& obj) {
                
       const auto methodID = methodID_isClient();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSeaLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("z_", "getSeaLevel", "method_8615", "getSeaLevel", "m_5736_"), "()I");
    }

    static jint getSeaLevel(const jobject& obj) {
                
       const auto methodID = methodID_getSeaLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDimension() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("D_", "dimensionType", "method_8597", "getDimension", "m_6042_"), "()Ldwy;");
    }

    static jobject getDimension(const jobject& obj) {
                
       const auto methodID = methodID_getDimension();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBottomY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("I_", "getMinBuildHeight", "method_31607", "getBottomY", "m_141937_"), "()I");
    }

    static jint getBottomY(const jobject& obj) {
                
       const auto methodID = methodID_getBottomY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J_", "getHeight", "method_31605", "getHeight", "m_141928_"), "()I");
    }

    static jint getHeight(const jobject& obj) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTopPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeightmapPos", "method_8598", "getTopPosition", "m_5452_"), "(Ldyy$a;Ljd;)Ljd;");
    }

    static jobject getTopPosition(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getTopPosition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isAir() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("u", "isEmptyBlock", "method_22347", "isAir", "m_46859_"), "(Ljd;)Z");
    }

    static jboolean isAir(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isAir();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isSkyVisibleAllowingSea() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "canSeeSkyFromBelowWater", "method_22348", "isSkyVisibleAllowingSea", "m_46861_"), "(Ljd;)Z");
    }

    static jboolean isSkyVisibleAllowingSea(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isSkyVisibleAllowingSea();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPhototaxisFavor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("w", "getPathfindingCostFromLightLevels", "method_42309", "getPhototaxisFavor", "m_220419_"), "(Ljd;)F");
    }

    static jfloat getPhototaxisFavor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getPhototaxisFavor();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBrightness() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("x", "getLightLevelDependentMagicValue", "method_22349", "getBrightness", "m_220417_"), "(Ljd;)F");
    }

    static jfloat getBrightness(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBrightness();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("y", "getChunk", "method_22350", "getChunk", "m_46865_"), "(Ljd;)Lduy;");
    }

    static jobject _getChunk(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___getChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getChunk", "method_8392", "getChunk", "m_6325_"), "(II)Lduy;");
    }

    static jobject __getChunk(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID___getChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID____getChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getChunk", "method_22342", "getChunk", "m_46819_"), "(IILdvz;)Lduy;");
    }

    static jobject ___getChunk(const jobject& obj, const jint& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID____getChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getChunkAsView() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getChunkForCollisions", "method_22338", "getChunkAsView", "m_7925_"), "(II)Ldcc;");
    }

    static jobject getChunkAsView(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_getChunkAsView();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isWater() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("z", "isWaterAt", "method_22351", "isWater", "m_46801_"), "(Ljd;)Z");
    }

    static jboolean isWater(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isWater();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_containsFluid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "containsAnyLiquid", "method_22345", "containsFluid", "m_46855_"), "(Lewx;)Z");
    }

    static jboolean containsFluid(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_containsFluid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLightLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A", "getMaxLocalRawBrightness", "method_22339", "getLightLevel", "m_46803_"), "(Ljd;)I");
    }

    static jint getLightLevel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLightLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getLightLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getMaxLocalRawBrightness", "method_22346", "getLightLevel", "m_46849_"), "(Ljd;I)I");
    }

    static jint _getLightLevel(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID__getLightLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isPosLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "hasChunkAt", "method_33598", "isPosLoaded", "m_151577_"), "(II)Z");
    }

    static jboolean isPosLoaded(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_isPosLoaded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__isChunkLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "hasChunkAt", "method_22340", "isChunkLoaded", "m_46805_"), "(Ljd;)Z");
    }

    static jboolean _isChunkLoaded(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__isChunkLoaded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isRegionLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasChunksAt", "method_22343", "isRegionLoaded", "m_46832_"), "(Ljd;Ljd;)Z");
    }

    static jboolean isRegionLoaded(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_isRegionLoaded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__isRegionLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasChunksAt", "method_22341", "isRegionLoaded", "m_46812_"), "(IIIIII)Z");
    }

    static jboolean _isRegionLoaded(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jint& arg5) {
                
       const auto methodID = methodID__isRegionLoaded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID___isRegionLoaded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasChunksAt", "method_33597", "isRegionLoaded", "m_151572_"), "(IIII)Z");
    }

    static jboolean __isRegionLoaded(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
                
       const auto methodID = methodID___isRegionLoaded();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getRegistryManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("H_", "registryAccess", "method_30349", "getRegistryManager", "m_9598_"), "()Lka;");
    }

    static jobject getRegistryManager(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEnabledFeatures() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("J", "enabledFeatures", "method_45162", "getEnabledFeatures", "m_246046_"), "()Lcpl;");
    }

    static jobject getEnabledFeatures(const jobject& obj) {
                
       const auto methodID = methodID_getEnabledFeatures();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createCommandRegistryWrapper() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "holderLookup", "method_45448", "createCommandRegistryWrapper", "m_246945_"), "(Lakq;)Ljo;");
    }

    static jobject createCommandRegistryWrapper(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_createCommandRegistryWrapper();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_WORLDVIEW_HPP