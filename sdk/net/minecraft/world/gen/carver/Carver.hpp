// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CARVER_CARVER_HPP
#define NET_MINECRAFT_WORLD_GEN_CARVER_CARVER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.carver.Carver
 * Remapped: ebe
 */
namespace Carver {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ebe", "net/minecraft/world/level/levelgen/carver/WorldCarver", "net/minecraft/class_2939", "net/minecraft/world/gen/carver/Carver", "net/minecraft/src/C_2212_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.carver.Carver#CAVE
    [[maybe_unused]] static jobject get_field_CAVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CAVE", "field_29060", "CAVE", "f_64974_"), "Lebe;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.Carver#CAVE
    [[maybe_unused]] static void set_field_CAVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CAVE", "field_29060", "CAVE", "f_64974_"), "Lebe;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.carver.Carver#NETHER_CAVE
    [[maybe_unused]] static jobject get_field_NETHER_CAVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NETHER_CAVE", "field_13297", "NETHER_CAVE", "f_64975_"), "Lebe;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.Carver#NETHER_CAVE
    [[maybe_unused]] static void set_field_NETHER_CAVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NETHER_CAVE", "field_13297", "NETHER_CAVE", "f_64975_"), "Lebe;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.carver.Carver#RAVINE
    [[maybe_unused]] static jobject get_field_RAVINE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CANYON", "field_13295", "RAVINE", "f_64976_"), "Lebe;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.carver.Carver#RAVINE
    [[maybe_unused]] static void set_field_RAVINE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CANYON", "field_13295", "RAVINE", "f_64976_"), "Lebe;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.carver.Carver#AIR
    [[maybe_unused]] static jobject get_field_AIR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AIR", "field_13301", "AIR", "f_64979_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.carver.Carver#AIR
    [[maybe_unused]] static void set_field_AIR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "AIR", "field_13301", "AIR", "f_64979_"), "Ldtc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.carver.Carver#CAVE_AIR
    [[maybe_unused]] static jobject get_field_CAVE_AIR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CAVE_AIR", "field_13294", "CAVE_AIR", "f_64980_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.carver.Carver#CAVE_AIR
    [[maybe_unused]] static void set_field_CAVE_AIR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CAVE_AIR", "field_13294", "CAVE_AIR", "f_64980_"), "Ldtc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.carver.Carver#WATER
    [[maybe_unused]] static jobject get_field_WATER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "WATER", "field_13305", "WATER", "f_64981_"), "Lepe;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.carver.Carver#WATER
    [[maybe_unused]] static void set_field_WATER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "WATER", "field_13305", "WATER", "f_64981_"), "Lepe;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.world.gen.carver.Carver#LAVA
    [[maybe_unused]] static jobject get_field_LAVA() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LAVA", "field_13296", "LAVA", "f_64982_"), "Lepe;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.carver.Carver#LAVA
    [[maybe_unused]] static void set_field_LAVA(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "LAVA", "field_13296", "LAVA", "f_64982_"), "Lepe;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.carver.Carver#carvableFluids
    static jobject get_field_carvableFluids(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "liquids", "field_13298", "carvableFluids", "f_64984_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.carver.Carver#carvableFluids
    static void set_field_carvableFluids(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "liquids", "field_13298", "carvableFluids", "f_64984_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.carver.Carver#codec
    static jobject get_field_codec(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "configuredCodec", "field_24831", "codec", "f_64986_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.carver.Carver#codec
    static void set_field_codec(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "configuredCodec", "field_24831", "codec", "f_64986_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_12704", "register", "m_65065_"), "(Ljava/lang/String;Lebe;)Lebe;");
    }

    static jobject register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_configure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "configured", "method_28614", "configure", "m_65063_"), "(Leax;)Lebc;");
    }

    static jobject configure(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_configure();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "configuredCodec", "method_28616", "getCodec", "m_65072_"), "()Lcom/mojang/serialization/MapCodec;");
    }

    static jobject getCodec(const jobject& obj) {
                
       const auto methodID = methodID_getCodec();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBranchFactor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getRange", "method_12710", "getBranchFactor", "m_65073_"), "()I");
    }

    static jint getBranchFactor(const jobject& obj) {
                
       const auto methodID = methodID_getBranchFactor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_carveRegion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "carveEllipsoid", "method_33978", "carveRegion", "m_190753_"), "(Leaz;Leax;Lduy;Ljava/util/function/Function;Ldyk;DDDDDLdux;Lebe$a;)Z");
    }

    static jboolean carveRegion(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jdouble& arg5, const jdouble& arg6, const jdouble& arg7, const jdouble& arg8, const jdouble& arg9, const jobject& arg10, const jobject& arg11) {
                
       const auto methodID = methodID_carveRegion();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    };
    
    static jmethodID methodID_carveAtPoint() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "carveBlock", "method_16581", "carveAtPoint", "m_183633_"), "(Leaz;Leax;Lduy;Ljava/util/function/Function;Ldux;Ljd$a;Ljd$a;Ldyk;Lorg/apache/commons/lang3/mutable/MutableBoolean;)Z");
    }

    static jboolean carveAtPoint(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jobject& arg8) {
                
       const auto methodID = methodID_carveAtPoint();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID_getState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getCarveState", "method_36418", "getState", "m_159418_"), "(Leaz;Leax;Ljd;Ldyk;)Ldtc;");
    }

    static jobject getState(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getDebugState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getDebugState", "method_36417", "getDebugState", "m_159381_"), "(Leax;Ldtc;)Ldtc;");
    }

    static jobject getDebugState(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getDebugState();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_carve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "carve", "method_12702", "carve", "m_213788_"), "(Leaz;Leax;Lduy;Ljava/util/function/Function;Layw;Ldyk;Ldcd;Ldux;)Z");
    }

    static jboolean carve(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7) {
                
       const auto methodID = methodID_carve();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_shouldCarve() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isStartChunk", "method_12705", "shouldCarve", "m_214133_"), "(Leax;Layw;)Z");
    }

    static jboolean shouldCarve(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_shouldCarve();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canAlwaysCarveBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canReplaceBlock", "method_12709", "canAlwaysCarveBlock", "m_224910_"), "(Leax;Ldtc;)Z");
    }

    static jboolean canAlwaysCarveBlock(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canAlwaysCarveBlock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canCarveBranch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "canReach", "method_33976", "canCarveBranch", "m_159367_"), "(Ldcd;DDIIF)Z");
    }

    static jboolean canCarveBranch(const jobject& arg0, const jdouble& arg1, const jdouble& arg2, const jint& arg3, const jint& arg4, const jfloat& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_canCarveBranch();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_isDebug() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "isDebugEnabled", "method_33980", "isDebug", "m_159423_"), "(Leax;)Z");
    }

    static jboolean isDebug(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_isDebug();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CARVER_CARVER_HPP