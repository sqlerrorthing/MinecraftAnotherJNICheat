// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_FLUID_FLOWABLEFLUID_HPP
#define NET_MINECRAFT_FLUID_FLOWABLEFLUID_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.fluid.FlowableFluid
 * Remapped: epc
 */
namespace FlowableFluid {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("epc", "net/minecraft/world/level/material/FlowingFluid", "net/minecraft/class_3609", "net/minecraft/fluid/FlowableFluid", "net/minecraft/src/C_2688_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.fluid.FlowableFluid#FALLING
    [[maybe_unused]] static jobject get_field_FALLING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FALLING", "field_15902", "FALLING", "f_75947_"), "Ldtt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.fluid.FlowableFluid#FALLING
    [[maybe_unused]] static void set_field_FALLING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FALLING", "field_15902", "FALLING", "f_75947_"), "Ldtt;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.fluid.FlowableFluid#LEVEL
    [[maybe_unused]] static jobject get_field_LEVEL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEVEL", "field_15900", "LEVEL", "f_75948_"), "Lduc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.fluid.FlowableFluid#LEVEL
    [[maybe_unused]] static void set_field_LEVEL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEVEL", "field_15900", "LEVEL", "f_75948_"), "Lduc;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.fluid.FlowableFluid#field_31726
    [[maybe_unused]] static jint get_field_field_31726() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CACHE_SIZE", "field_31726", "field_31726", "f_164507_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.fluid.FlowableFluid#field_31726
    [[maybe_unused]] static void set_field_field_31726(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CACHE_SIZE", "field_31726", "field_31726", "f_164507_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.fluid.FlowableFluid#field_15901
    [[maybe_unused]] static jobject get_field_field_15901() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "OCCLUSION_CACHE", "field_15901", "field_15901", "f_75949_"), "Ljava/lang/ThreadLocal;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.fluid.FlowableFluid#field_15901
    [[maybe_unused]] static void set_field_field_15901(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "OCCLUSION_CACHE", "field_15901", "field_15901", "f_75949_"), "Ljava/lang/ThreadLocal;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.fluid.FlowableFluid#shapeCache
    static jobject get_field_shapeCache(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "shapes", "field_17587", "shapeCache", "f_75950_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.fluid.FlowableFluid#shapeCache
    static void set_field_shapeCache(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "shapes", "field_17587", "shapeCache", "f_75950_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_appendProperties() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createFluidStateDefinition", "method_15775", "appendProperties", "m_7180_"), "(Ldtd$a;)V");
    }

    static void appendProperties(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_appendProperties();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFlow", "method_15782", "getVelocity", "m_7000_"), "(Ldcc;Ljd;Lepe;)Lexc;");
    }

    static jobject getVelocity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getVelocity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isEmptyOrThis() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "affectsFlow", "method_15748", "isEmptyOrThis", "m_76094_"), "(Lepe;)Z");
    }

    static jboolean isEmptyOrThis(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isEmptyOrThis();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isFlowBlocked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isSolidFace", "method_15749", "isFlowBlocked", "m_75990_"), "(Ldcc;Ljd;Lji;)Z");
    }

    static jboolean isFlowBlocked(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_isFlowBlocked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_tryFlow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "spread", "method_15725", "tryFlow", "m_76010_"), "(Ldcw;Ljd;Lepe;)V");
    }

    static void tryFlow(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_tryFlow();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_flowToSides() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "spreadToSides", "method_15744", "flowToSides", "m_76014_"), "(Ldcw;Ljd;Lepe;Ldtc;)V");
    }

    static void flowToSides(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_flowToSides();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getUpdatedState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNewLiquid", "method_15727", "getUpdatedState", "m_76035_"), "(Ldcw;Ljd;Ldtc;)Lepe;");
    }

    static jobject getUpdatedState(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getUpdatedState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_receivesFlow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canPassThroughWall", "method_15732", "receivesFlow", "m_76061_"), "(Lji;Ldcc;Ljd;Ldtc;Ljd;Ldtc;)Z");
    }

    static jboolean receivesFlow(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_receivesFlow();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_getFlowing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getFlowing", "method_15750", "getFlowing", "m_5615_"), "()Lepd;");
    }

    static jobject getFlowing(const jobject& obj) {
                
       const auto methodID = methodID_getFlowing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__getFlowing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFlowing", "method_15728", "getFlowing", "m_75953_"), "(IZ)Lepe;");
    }

    static jobject _getFlowing(const jobject& obj, const jint& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID__getFlowing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getStill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getSource", "method_15751", "getStill", "m_5613_"), "()Lepd;");
    }

    static jobject getStill(const jobject& obj) {
                
       const auto methodID = methodID_getStill();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__getStill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSource", "method_15729", "getStill", "m_76068_"), "(Z)Lepe;");
    }

    static jobject _getStill(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID__getStill();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isInfinite() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canConvertToSource", "method_15737", "isInfinite", "m_6760_"), "(Ldcw;)Z");
    }

    static jboolean isInfinite(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isInfinite();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_flow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "spreadTo", "method_15745", "flow", "m_6364_"), "(Ldcx;Ljd;Ldtc;Lji;Lepe;)V");
    }

    static void flow(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_flow();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_beforeBreakingBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "beforeDestroyingBlock", "method_15730", "beforeBreakingBlock", "m_7456_"), "(Ldcx;Ljd;Ldtc;)V");
    }

    static void beforeBreakingBlock(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_beforeBreakingBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_packXZOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getCacheKey", "method_15747", "packXZOffset", "m_76058_"), "(Ljd;Ljd;)S");
    }

    static jshort packXZOffset(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_packXZOffset();
       return MinecraftSDK::env->CallStaticShortMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getFlowSpeedBetween() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSlopeDistance", "method_15742", "getFlowSpeedBetween", "m_76026_"), "(Ldcz;Ljd;ILji;Ldtc;Ljd;Lit/unimi/dsi/fastutil/shorts/Short2ObjectMap;Lit/unimi/dsi/fastutil/shorts/Short2BooleanMap;)I");
    }

    static jint getFlowSpeedBetween(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7) {
                
       const auto methodID = methodID_getFlowSpeedBetween();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_canFlowDownTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isWaterHole", "method_15736", "canFlowDownTo", "m_75956_"), "(Ldcc;Lepd;Ljd;Ldtc;Ljd;Ldtc;)Z");
    }

    static jboolean canFlowDownTo(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_canFlowDownTo();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_canFlowThrough() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canPassThrough", "method_15746", "canFlowThrough", "m_75963_"), "(Ldcc;Lepd;Ljd;Ldtc;Lji;Ljd;Ldtc;Lepe;)Z");
    }

    static jboolean canFlowThrough(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7) {
                
       const auto methodID = methodID_canFlowThrough();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_isMatchingAndStill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "isSourceBlockOfThisType", "method_15752", "isMatchingAndStill", "m_76096_"), "(Lepe;)Z");
    }

    static jboolean isMatchingAndStill(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isMatchingAndStill();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFlowSpeed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSlopeFindDistance", "method_15733", "getFlowSpeed", "m_6719_"), "(Ldcz;)I");
    }

    static jint getFlowSpeed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFlowSpeed();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_countNeighboringSources() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sourceNeighborCount", "method_15740", "countNeighboringSources", "m_76019_"), "(Ldcz;Ljd;)I");
    }

    static jint countNeighboringSources(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_countNeighboringSources();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getSpread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSpread", "method_15726", "getSpread", "m_76079_"), "(Ldcw;Ljd;Ldtc;)Ljava/util/Map;");
    }

    static jobject getSpread(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getSpread();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_canFill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canHoldFluid", "method_15754", "canFill", "m_75972_"), "(Ldcc;Ljd;Ldtc;Lepd;)Z");
    }

    static jboolean canFill(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_canFill();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canFlow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canSpreadTo", "method_15738", "canFlow", "m_75977_"), "(Ldcc;Ljd;Ldtc;Lji;Ljd;Ldtc;Lepe;Lepd;)Z");
    }

    static jboolean canFlow(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7) {
                
       const auto methodID = methodID_canFlow();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    };
    
    static jmethodID methodID_getLevelDecreasePerBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getDropOff", "method_15739", "getLevelDecreasePerBlock", "m_6713_"), "(Ldcz;)I");
    }

    static jint getLevelDecreasePerBlock(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLevelDecreasePerBlock();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getNextTickDelay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSpreadDelay", "method_15753", "getNextTickDelay", "m_6886_"), "(Ldcw;Ljd;Lepe;Lepe;)I");
    }

    static jint getNextTickDelay(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getNextTickDelay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onScheduledTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tick", "method_15778", "onScheduledTick", "m_6292_"), "(Ldcw;Ljd;Lepe;)V");
    }

    static void onScheduledTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onScheduledTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getBlockStateLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("e", "getLegacyLevel", "method_15741", "getBlockStateLevel", "m_76092_"), "(Lepe;)I");
    }

    static jint getBlockStateLevel(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getBlockStateLevel();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_isFluidAboveEqual() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "hasSameAbove", "method_17774", "isFluidAboveEqual", "m_76088_"), "(Lepe;Ldcc;Ljd;)Z");
    }

    static jboolean isFluidAboveEqual(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_isFluidAboveEqual();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getHeight", "method_15788", "getHeight", "m_6098_"), "(Lepe;Ldcc;Ljd;)F");
    }

    static jfloat getHeight(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getHeight();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__getHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOwnHeight", "method_20784", "getHeight", "m_7427_"), "(Lepe;)F");
    }

    static jfloat _getHeight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getHeight();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getAmount", "method_15779", "getLevel", "m_7430_"), "(Lepe;)I");
    }

    static jint getLevel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getShape", "method_17775", "getShape", "m_7999_"), "(Lepe;Ldcc;Ljd;)Lexv;");
    }

    static jobject getShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_FLUID_FLOWABLEFLUID_HPP