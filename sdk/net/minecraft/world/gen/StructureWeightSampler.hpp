// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_STRUCTUREWEIGHTSAMPLER_HPP
#define NET_MINECRAFT_WORLD_GEN_STRUCTUREWEIGHTSAMPLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.StructureWeightSampler
 * Remapped: dyl
 */
namespace StructureWeightSampler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dyl", "net/minecraft/world/level/levelgen/Beardifier", "net/minecraft/class_5817", "net/minecraft/world/gen/StructureWeightSampler", "net/minecraft/src/C_141324_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.StructureWeightSampler#INDEX_OFFSET
    [[maybe_unused]] static jint get_field_INDEX_OFFSET() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BEARD_KERNEL_RADIUS", "field_31461", "INDEX_OFFSET", "f_158060_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.StructureWeightSampler#INDEX_OFFSET
    [[maybe_unused]] static void set_field_INDEX_OFFSET(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BEARD_KERNEL_RADIUS", "field_31461", "INDEX_OFFSET", "f_158060_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.StructureWeightSampler#EDGE_LENGTH
    [[maybe_unused]] static jint get_field_EDGE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BEARD_KERNEL_SIZE", "field_31462", "EDGE_LENGTH", "f_158061_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.StructureWeightSampler#EDGE_LENGTH
    [[maybe_unused]] static void set_field_EDGE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "BEARD_KERNEL_SIZE", "field_31462", "EDGE_LENGTH", "f_158061_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.StructureWeightSampler#STRUCTURE_WEIGHT_TABLE
    [[maybe_unused]] static jfloat get_field_STRUCTURE_WEIGHT_TABLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BEARD_KERNEL", "field_28741", "STRUCTURE_WEIGHT_TABLE", "f_158062_"), "[F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.StructureWeightSampler#STRUCTURE_WEIGHT_TABLE
    [[maybe_unused]] static void set_field_STRUCTURE_WEIGHT_TABLE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "BEARD_KERNEL", "field_28741", "STRUCTURE_WEIGHT_TABLE", "f_158062_"), "[F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.StructureWeightSampler#pieceIterator
    static jobject get_field_pieceIterator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "pieceIterator", "field_28744", "pieceIterator", "f_158065_"), "Lit/unimi/dsi/fastutil/objects/ObjectListIterator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.StructureWeightSampler#pieceIterator
    static void set_field_pieceIterator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "pieceIterator", "field_28744", "pieceIterator", "f_158065_"), "Lit/unimi/dsi/fastutil/objects/ObjectListIterator;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.StructureWeightSampler#junctionIterator
    static jobject get_field_junctionIterator(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "junctionIterator", "field_28745", "junctionIterator", "f_158066_"), "Lit/unimi/dsi/fastutil/objects/ObjectListIterator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.StructureWeightSampler#junctionIterator
    static void set_field_junctionIterator(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "junctionIterator", "field_28745", "junctionIterator", "f_158066_"), "Lit/unimi/dsi/fastutil/objects/ObjectListIterator;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createStructureWeightSampler() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "forStructuresInChunk", "method_42695", "createStructureWeightSampler", "m_223937_"), "(Lddq;Ldcd;)Ldyl;");
    }

    static jobject createStructureWeightSampler(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createStructureWeightSampler();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_sample() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compute", "method_40464", "sample", "m_207386_"), "(Ldyr$b;)D");
    }

    static jdouble sample(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_sample();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_minValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "minValue", "comp_377", "minValue", "m_207402_"), "()D");
    }

    static jdouble minValue(const jobject& obj) {
                
       const auto methodID = methodID_minValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_maxValue() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "maxValue", "comp_378", "maxValue", "m_207401_"), "()D");
    }

    static jdouble maxValue(const jobject& obj) {
                
       const auto methodID = methodID_maxValue();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMagnitudeWeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBuryContribution", "method_33832", "getMagnitudeWeight", "m_158083_"), "(DDD)D");
    }

    static jdouble getMagnitudeWeight(const jdouble& arg0, const jdouble& arg1, const jdouble& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getMagnitudeWeight();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getStructureWeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBeardContribution", "method_33641", "getStructureWeight", "m_223925_"), "(IIII)D");
    }

    static jdouble getStructureWeight(const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getStructureWeight();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_indexInBounds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isInKernelRange", "method_42692", "indexInBounds", "m_223919_"), "(I)Z");
    }

    static jboolean indexInBounds(const jint& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_indexInBounds();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_calculateStructureWeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "computeBeardContribution", "method_33642", "calculateStructureWeight", "m_158091_"), "(III)D");
    }

    static jdouble calculateStructureWeight(const jint& arg0, const jint& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_calculateStructureWeight();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_structureWeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "computeBeardContribution", "method_42693", "structureWeight", "m_223921_"), "(IDI)D");
    }

    static jdouble structureWeight(const jint& arg0, const jdouble& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_structureWeight();
       return MinecraftSDK::env->CallStaticDoubleMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_STRUCTUREWEIGHTSAMPLER_HPP