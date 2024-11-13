// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_STRUCTUREPLACEMENT_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_STRUCTUREPLACEMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.placement.StructurePlacement
 * Remapped: eko
 */
namespace StructurePlacement {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eko", "net/minecraft/world/level/levelgen/structure/placement/StructurePlacement", "net/minecraft/class_6874", "net/minecraft/world/gen/chunk/placement/StructurePlacement", "net/minecraft/src/C_203222_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.chunk.placement.StructurePlacement#TYPE_CODEC
    [[maybe_unused]] static jobject get_field_TYPE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_36428", "TYPE_CODEC", "f_205036_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.placement.StructurePlacement#TYPE_CODEC
    [[maybe_unused]] static void set_field_TYPE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_36428", "TYPE_CODEC", "f_205036_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement#ARBITRARY_SALT
    [[maybe_unused]] static jint get_field_ARBITRARY_SALT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HIGHLY_ARBITRARY_RANDOM_SALT", "field_37775", "ARBITRARY_SALT", "f_227021_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement#ARBITRARY_SALT
    [[maybe_unused]] static void set_field_ARBITRARY_SALT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "HIGHLY_ARBITRARY_RANDOM_SALT", "field_37775", "ARBITRARY_SALT", "f_227021_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.StructurePlacement#locateOffset
    static jobject get_field_locateOffset(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "locateOffset", "field_37776", "locateOffset", "f_227022_"), "Lkh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement#locateOffset
    static void set_field_locateOffset(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "locateOffset", "field_37776", "locateOffset", "f_227022_"), "Lkh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.StructurePlacement#frequencyReductionMethod
    static jobject get_field_frequencyReductionMethod(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "frequencyReductionMethod", "field_37777", "frequencyReductionMethod", "f_227023_"), "Leko$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement#frequencyReductionMethod
    static void set_field_frequencyReductionMethod(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "frequencyReductionMethod", "field_37777", "frequencyReductionMethod", "f_227023_"), "Leko$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.StructurePlacement#frequency
    static jfloat get_field_frequency(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "frequency", "field_37778", "frequency", "f_227024_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement#frequency
    static void set_field_frequency(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "frequency", "field_37778", "frequency", "f_227024_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.StructurePlacement#salt
    static jint get_field_salt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "salt", "field_37779", "salt", "f_227025_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement#salt
    static void set_field_salt(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "salt", "field_37779", "salt", "f_227025_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.StructurePlacement#exclusionZone
    static jobject get_field_exclusionZone(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "exclusionZone", "field_37780", "exclusionZone", "f_227026_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.StructurePlacement#exclusionZone
    static void set_field_exclusionZone(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "exclusionZone", "field_37780", "exclusionZone", "f_227026_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_buildCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "placementCodec", "method_41637", "buildCodec", "m_227041_"), "(Lcom/mojang/serialization/codecs/RecordCodecBuilder$Instance;)Lcom/mojang/datafixers/Products$P5;");
    }

    static jobject buildCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_buildCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getLocateOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "locateOffset", "method_41642", "getLocateOffset", "m_227072_"), "()Lkh;");
    }

    static jobject getLocateOffset(const jobject& obj) {
                
       const auto methodID = methodID_getLocateOffset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFrequencyReductionMethod() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "frequencyReductionMethod", "method_41643", "getFrequencyReductionMethod", "m_227073_"), "()Leko$c;");
    }

    static jobject getFrequencyReductionMethod(const jobject& obj) {
                
       const auto methodID = methodID_getFrequencyReductionMethod();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFrequency() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "frequency", "method_41644", "getFrequency", "m_227074_"), "()F");
    }

    static jfloat getFrequency(const jobject& obj) {
                
       const auto methodID = methodID_getFrequency();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSalt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "salt", "method_41645", "getSalt", "m_227075_"), "()I");
    }

    static jint getSalt(const jobject& obj) {
                
       const auto methodID = methodID_getSalt();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getExclusionZone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "exclusionZone", "method_41646", "getExclusionZone", "m_227076_"), "()Ljava/util/Optional;");
    }

    static jobject getExclusionZone(const jobject& obj) {
                
       const auto methodID = methodID_getExclusionZone();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isStructureChunk", "method_41639", "shouldGenerate", "m_255071_"), "(Ldva;II)Z");
    }

    static jboolean shouldGenerate(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_shouldGenerate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_applyFrequencyReduction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyAdditionalChunkRestrictions", "method_56575", "applyFrequencyReduction", "m_318660_"), "(IIJ)Z");
    }

    static jboolean applyFrequencyReduction(const jobject& obj, const jint& arg0, const jint& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_applyFrequencyReduction();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_applyExclusionZone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "applyInteractionsWithOtherStructures", "method_56576", "applyExclusionZone", "m_319583_"), "(Ldva;II)Z");
    }

    static jboolean applyExclusionZone(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_applyExclusionZone();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isStartChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isPlacementChunk", "method_40168", "isStartChunk", "m_214090_"), "(Ldva;II)Z");
    }

    static jboolean isStartChunk(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_isStartChunk();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getLocatePos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLocatePos", "method_41636", "getLocatePos", "m_227039_"), "(Ldcd;)Ljd;");
    }

    static jobject getLocatePos(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLocatePos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "type", "method_40166", "getType", "m_203443_"), "()Lekp;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_defaultShouldGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "probabilityReducer", "method_41635", "defaultShouldGenerate", "m_227033_"), "(JIIIF)Z");
    }

    static jboolean defaultShouldGenerate(const jlong& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jfloat& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_defaultShouldGenerate();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_legacyType3ShouldGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "legacyProbabilityReducerWithDouble", "method_41638", "legacyType3ShouldGenerate", "m_227048_"), "(JIIIF)Z");
    }

    static jboolean legacyType3ShouldGenerate(const jlong& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jfloat& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_legacyType3ShouldGenerate();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_legacyType2ShouldGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "legacyArbitrarySaltProbabilityReducer", "method_41640", "legacyType2ShouldGenerate", "m_227060_"), "(JIIIF)Z");
    }

    static jboolean legacyType2ShouldGenerate(const jlong& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jfloat& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_legacyType2ShouldGenerate();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_legacyType1ShouldGenerate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "legacyPillagerOutpostReducer", "method_41641", "legacyType1ShouldGenerate", "m_227066_"), "(JIIIF)Z");
    }

    static jboolean legacyType1ShouldGenerate(const jlong& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jfloat& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_legacyType1ShouldGenerate();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_STRUCTUREPLACEMENT_HPP