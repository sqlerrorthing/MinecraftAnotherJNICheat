// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_TRUNK_LARGEOAKTRUNKPLACER_HPP
#define NET_MINECRAFT_WORLD_GEN_TRUNK_LARGEOAKTRUNKPLACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.trunk.LargeOakTrunkPlacer
 * Remapped: ehh
 */
namespace LargeOakTrunkPlacer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ehh", "net/minecraft/world/level/levelgen/feature/trunkplacers/FancyTrunkPlacer", "net/minecraft/class_5212", "net/minecraft/world/gen/trunk/LargeOakTrunkPlacer", "net/minecraft/src/C_2420_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24967", "CODEC", "f_70091_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24967", "CODEC", "f_70091_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#field_31524
    [[maybe_unused]] static jdouble get_field_field_31524() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TRUNK_HEIGHT_SCALE", "field_31524", "field_31524", "f_161796_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#field_31524
    [[maybe_unused]] static void set_field_field_31524(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TRUNK_HEIGHT_SCALE", "field_31524", "field_31524", "f_161796_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#field_31525
    [[maybe_unused]] static jdouble get_field_field_31525() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CLUSTER_DENSITY_MAGIC", "field_31525", "field_31525", "f_161797_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#field_31525
    [[maybe_unused]] static void set_field_field_31525(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "CLUSTER_DENSITY_MAGIC", "field_31525", "field_31525", "f_161797_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#field_31526
    [[maybe_unused]] static jdouble get_field_field_31526() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BRANCH_SLOPE", "field_31526", "field_31526", "f_161798_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#field_31526
    [[maybe_unused]] static void set_field_field_31526(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BRANCH_SLOPE", "field_31526", "field_31526", "f_161798_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#field_31527
    [[maybe_unused]] static jdouble get_field_field_31527() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "BRANCH_LENGTH_MAGIC", "field_31527", "field_31527", "f_161799_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer#field_31527
    [[maybe_unused]] static void set_field_field_31527(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "BRANCH_LENGTH_MAGIC", "field_31527", "field_31527", "f_161799_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_28903", "getType", "m_7362_"), "()Lehn;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeTrunk", "method_26991", "generate", "m_213934_"), "(Lddc;Ljava/util/function/BiConsumer;Layw;ILjd;Lefe;)Ljava/util/List;");
    }

    static jobject generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_makeOrCheckBranch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "makeLimb", "method_27393", "makeOrCheckBranch", "m_226107_"), "(Lddc;Ljava/util/function/BiConsumer;Layw;Ljd;Ljd;ZLefe;)Z");
    }

    static jboolean makeOrCheckBranch(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_makeOrCheckBranch();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_getLongestSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSteps", "method_27394", "getLongestSide", "m_70127_"), "(Ljd;)I");
    }

    static jint getLongestSide(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLongestSide();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLogAxis() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getLogAxis", "method_27395", "getLogAxis", "m_70129_"), "(Ljd;Ljd;)Lji$a;");
    }

    static jobject getLogAxis(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getLogAxis();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isHighEnough() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "trimBranches", "method_27391", "isHighEnough", "m_70098_"), "(II)Z");
    }

    static jboolean isHighEnough(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_isHighEnough();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_makeBranches() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "makeBranches", "method_27392", "makeBranches", "m_226099_"), "(Lddc;Ljava/util/function/BiConsumer;Layw;ILjd;Ljava/util/List;Lefe;)V");
    }

    static void makeBranches(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_makeBranches();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_shouldGenerateBranch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "treeShape", "method_27396", "shouldGenerateBranch", "m_70132_"), "(II)F");
    }

    static jfloat shouldGenerateBranch(const jint& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_shouldGenerateBranch();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_TRUNK_LARGEOAKTRUNKPLACER_HPP