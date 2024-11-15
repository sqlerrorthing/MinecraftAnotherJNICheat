// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_WRAPPERPROTOCHUNK_HPP
#define NET_MINECRAFT_WORLD_CHUNK_WRAPPERPROTOCHUNK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.WrapperProtoChunk
 * Remapped: dvh
 */
namespace WrapperProtoChunk {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dvh", "net/minecraft/world/level/chunk/ImposterProtoChunk", "net/minecraft/class_2821", "net/minecraft/world/chunk/WrapperProtoChunk", "net/minecraft/src/C_2136_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.chunk.WrapperProtoChunk#wrapped
    static jobject get_field_wrapped(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "wrapped", "field_12866", "wrapped", "f_62685_"), "Ldvi;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.WrapperProtoChunk#wrapped
    static void set_field_wrapped(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "wrapped", "field_12866", "wrapped", "f_62685_"), "Ldvi;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.chunk.WrapperProtoChunk#propagateToWrapped
    static jboolean get_field_propagateToWrapped(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "allowWrites", "field_34554", "propagateToWrapped", "f_187918_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.chunk.WrapperProtoChunk#propagateToWrapped
    static void set_field_propagateToWrapped(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "allowWrites", "field_34554", "propagateToWrapped", "f_187918_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_getBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c_", "getBlockEntity", "method_8321", "getBlockEntity", "m_7702_"), "(Ljd;)Ldqh;");
    }

    static jobject getBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getBlockState", "method_8320", "getBlockState", "m_8055_"), "(Ljd;)Ldtc;");
    }

    static jobject getBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFluidState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b_", "getFluidState", "method_8316", "getFluidState", "m_6425_"), "(Ljd;)Lepe;");
    }

    static jobject getFluidState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFluidState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMaxLightLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("Q", "getMaxLightLevel", "method_8315", "getMaxLightLevel", "m_7469_"), "()I");
    }

    static jint getMaxLightLevel(const jobject& obj) {
                
       const auto methodID = methodID_getMaxLightLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSection() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSection", "method_38259", "getSection", "m_183278_"), "(I)Ldvj;");
    }

    static jobject getSection(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getSection();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlockState", "method_12010", "setBlockState", "m_6978_"), "(Ljd;Ldtc;Z)Ldtc;");
    }

    static jobject setBlockState(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID_setBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlockEntity", "method_12007", "setBlockEntity", "m_142169_"), "(Ldqh;)V");
    }

    static void setBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBlockEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addEntity", "method_12002", "addEntity", "m_6286_"), "(Lbsr;)V");
    }

    static void addEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setPersistedStatus", "method_12308", "setStatus", "m_7150_"), "(Ldvz;)V");
    }

    static void setStatus(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setStatus();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSectionArray() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getSections", "method_12006", "getSectionArray", "m_7103_"), "()[Ldvj;");
    }

    static jobject getSectionArray(const jobject& obj) {
                
       const auto methodID = methodID_getSectionArray();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setHeightmap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setHeightmap", "method_12037", "setHeightmap", "m_6511_"), "(Ldyy$a;[J)V");
    }

    static void setHeightmap(const jobject& obj, const jobject& arg0, const jarray& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_setHeightmap();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_transformHeightmapType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "fixType", "method_12239", "transformHeightmapType", "m_62741_"), "(Ldyy$a;)Ldyy$a;");
    }

    static jobject transformHeightmapType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_transformHeightmapType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getHeightmap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOrCreateHeightmapUnprimed", "method_12032", "getHeightmap", "m_6005_"), "(Ldyy$a;)Ldyy;");
    }

    static jobject getHeightmap(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getHeightmap();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sampleHeightmap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeight", "method_12005", "sampleHeightmap", "m_5885_"), "(Ldyy$a;II)I");
    }

    static jint sampleHeightmap(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_sampleHeightmap();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getBiomeForNoiseGen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("getNoiseBiome", "getNoiseBiome", "method_16359", "getBiomeForNoiseGen", "m_203495_"), "(III)Ljm;");
    }

    static jobject getBiomeForNoiseGen(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_getBiomeForNoiseGen();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getPos", "method_12004", "getPos", "m_7697_"), "()Ldcd;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStructureStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getStartForStructure", "method_12181", "getStructureStart", "m_213652_"), "(Lejr;)Lejz;");
    }

    static jobject getStructureStart(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStructureStart();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setStructureStart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setStartForStructure", "method_12184", "setStructureStart", "m_213792_"), "(Lejr;Lejz;)V");
    }

    static void setStructureStart(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setStructureStart();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getStructureStarts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getAllStarts", "method_12016", "getStructureStarts", "m_6633_"), "()Ljava/util/Map;");
    }

    static jobject getStructureStarts(const jobject& obj) {
                
       const auto methodID = methodID_getStructureStarts();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setStructureStarts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setAllStarts", "method_12034", "setStructureStarts", "m_8040_"), "(Ljava/util/Map;)V");
    }

    static void setStructureStarts(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setStructureStarts();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStructureReferences() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getReferencesForStructure", "method_12180", "getStructureReferences", "m_213649_"), "(Lejr;)Lit/unimi/dsi/fastutil/longs/LongSet;");
    }

    static jobject getStructureReferences(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStructureReferences();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addStructureReference() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addReferenceForStructure", "method_12182", "addStructureReference", "m_213843_"), "(Lejr;J)V");
    }

    static void addStructureReference(const jobject& obj, const jobject& arg0, const jlong& arg1) {
                
       const auto methodID = methodID_addStructureReference();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getStructureReferences() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getAllReferences", "method_12179", "getStructureReferences", "m_62769_"), "()Ljava/util/Map;");
    }

    static jobject _getStructureReferences(const jobject& obj) {
                
       const auto methodID = methodID__getStructureReferences();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setStructureReferences() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setAllReferences", "method_12183", "setStructureReferences", "m_62737_"), "(Ljava/util/Map;)V");
    }

    static void setStructureReferences(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setStructureReferences();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setNeedsSaving() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setUnsaved", "method_12008", "setNeedsSaving", "m_8092_"), "(Z)V");
    }

    static void setNeedsSaving(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setNeedsSaving();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_needsSaving() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "isUnsaved", "method_12044", "needsSaving", "m_6344_"), "()Z");
    }

    static jboolean needsSaving(const jobject& obj) {
                
       const auto methodID = methodID_needsSaving();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStatus() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getPersistedStatus", "method_12009", "getStatus", "m_6415_"), "()Ldvz;");
    }

    static jobject getStatus(const jobject& obj) {
                
       const auto methodID = methodID_getStatus();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_removeBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "removeBlockEntity", "method_12041", "removeBlockEntity", "m_8114_"), "(Ljd;)V");
    }

    static void removeBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_removeBlockEntity();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_markBlockForPostProcessing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "markPosForPostprocessing", "method_12039", "markBlockForPostProcessing", "m_8113_"), "(Ljd;)V");
    }

    static void markBlockForPostProcessing(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_markBlockForPostProcessing();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_addPendingBlockEntityNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlockEntityNbt", "method_12042", "addPendingBlockEntityNbt", "m_5604_"), "(Lub;)V");
    }

    static void addPendingBlockEntityNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addPendingBlockEntityNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBlockEntityNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getBlockEntityNbt", "method_12024", "getBlockEntityNbt", "m_8049_"), "(Ljd;)Lub;");
    }

    static jobject getBlockEntityNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockEntityNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPackedBlockEntityNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockEntityNbtForSaving", "method_20598", "getPackedBlockEntityNbt", "m_8051_"), "(Ljd;Ljo$a;)Lub;");
    }

    static jobject getPackedBlockEntityNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getPackedBlockEntityNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_forEachBlockMatchingPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findBlocks", "method_51525", "forEachBlockMatchingPredicate", "m_284478_"), "(Ljava/util/function/Predicate;Ljava/util/function/BiConsumer;)V");
    }

    static void forEachBlockMatchingPredicate(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_forEachBlockMatchingPredicate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBlockTickScheduler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getBlockTicks", "method_12013", "getBlockTickScheduler", "m_183531_"), "()Leyw;");
    }

    static jobject getBlockTickScheduler(const jobject& obj) {
                
       const auto methodID = methodID_getBlockTickScheduler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFluidTickScheduler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getFluidTicks", "method_12014", "getFluidTickScheduler", "m_183526_"), "()Leyw;");
    }

    static jobject getFluidTickScheduler(const jobject& obj) {
                
       const auto methodID = methodID_getFluidTickScheduler();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTickSchedulers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "getTicksForSerialization", "method_39296", "getTickSchedulers", "m_183568_"), "()Lduy$a;");
    }

    static jobject getTickSchedulers(const jobject& obj) {
                
       const auto methodID = methodID_getTickSchedulers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlendingData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("t", "getBlendingData", "method_39299", "getBlendingData", "m_183407_"), "()Leab;");
    }

    static jobject getBlendingData(const jobject& obj) {
                
       const auto methodID = methodID_getBlendingData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setBlendingData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlendingData", "method_39294", "setBlendingData", "m_183400_"), "(Leab;)V");
    }

    static void setBlendingData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBlendingData();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCarvingMask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCarvingMask", "method_12025", "getCarvingMask", "m_183612_"), "(Ldyu$a;)Ldux;");
    }

    static jobject getCarvingMask(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getCarvingMask();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getOrCreateCarvingMask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getOrCreateCarvingMask", "method_28510", "getOrCreateCarvingMask", "m_183613_"), "(Ldyu$a;)Ldux;");
    }

    static jobject getOrCreateCarvingMask(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getOrCreateCarvingMask();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getWrappedChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "getWrapped", "method_12240", "getWrappedChunk", "m_62768_"), "()Ldvi;");
    }

    static jobject getWrappedChunk(const jobject& obj) {
                
       const auto methodID = methodID_getWrappedChunk();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isLightOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("v", "isLightCorrect", "method_12038", "isLightOn", "m_6332_"), "()Z");
    }

    static jboolean isLightOn(const jobject& obj) {
                
       const auto methodID = methodID_isLightOn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setLightOn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setLightCorrect", "method_12020", "setLightOn", "m_8094_"), "(Z)V");
    }

    static void setLightOn(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setLightOn();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_populateBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "fillBiomesFromNoise", "method_38257", "populateBiomes", "m_183442_"), "(Lddz;Ldef$f;)V");
    }

    static void populateBiomes(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_populateBiomes();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_refreshSurfaceY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("A", "initializeLightSources", "method_51522", "refreshSurfaceY", "m_284190_"), "()V");
    }

    static void refreshSurfaceY(const jobject& obj) {
                
       const auto methodID = methodID_refreshSurfaceY();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getChunkSkyLight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("B", "getSkyLightSources", "method_12018", "getChunkSkyLight", "m_284400_"), "()Leoo;");
    }

    static jobject getChunkSkyLight(const jobject& obj) {
                
       const auto methodID = methodID_getChunkSkyLight();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_WRAPPERPROTOCHUNK_HPP