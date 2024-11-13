// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_FLUID_FLUID_HPP
#define NET_MINECRAFT_FLUID_FLUID_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.fluid.Fluid
 * Remapped: epd
 */
namespace Fluid {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("epd", "net/minecraft/world/level/material/Fluid", "net/minecraft/class_3611", "net/minecraft/fluid/Fluid", "net/minecraft/src/C_2690_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.fluid.Fluid#STATE_IDS
    [[maybe_unused]] static jobject get_field_STATE_IDS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FLUID_STATE_REGISTRY", "field_15904", "STATE_IDS", "f_76104_"), "Ljs;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.fluid.Fluid#STATE_IDS
    [[maybe_unused]] static void set_field_STATE_IDS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FLUID_STATE_REGISTRY", "field_15904", "STATE_IDS", "f_76104_"), "Ljs;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.fluid.Fluid#stateManager
    static jobject get_field_stateManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "stateDefinition", "field_15905", "stateManager", "f_76105_"), "Ldtd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.fluid.Fluid#stateManager
    static void set_field_stateManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "stateDefinition", "field_15905", "stateManager", "f_76105_"), "Ldtd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.fluid.Fluid#defaultState
    static jobject get_field_defaultState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "defaultFluidState", "field_15903", "defaultState", "f_76103_"), "Lepe;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.fluid.Fluid#defaultState
    static void set_field_defaultState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "defaultFluidState", "field_15903", "defaultState", "f_76103_"), "Lepe;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.fluid.Fluid#registryEntry
    static jobject get_field_registryEntry(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "builtInRegistryHolder", "field_36431", "registryEntry", "f_205066_"), "Ljm$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.fluid.Fluid#registryEntry
    static void set_field_registryEntry(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "builtInRegistryHolder", "field_36431", "registryEntry", "f_205066_"), "Ljm$c;");
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
    
    static jmethodID methodID_getStateManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getStateDefinition", "method_15783", "getStateManager", "m_76144_"), "()Ldtd;");
    }

    static jobject getStateManager(const jobject& obj) {
                
       const auto methodID = methodID_getStateManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setDefaultState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "registerDefaultState", "method_15781", "setDefaultState", "m_76142_"), "(Lepe;)V");
    }

    static void setDefaultState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setDefaultState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDefaultState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "defaultFluidState", "method_15785", "getDefaultState", "m_76145_"), "()Lepe;");
    }

    static jobject getDefaultState(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBucketItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBucket", "method_15774", "getBucketItem", "m_6859_"), "()Lcul;");
    }

    static jobject getBucketItem(const jobject& obj) {
                
       const auto methodID = methodID_getBucketItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_randomDisplayTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "animateTick", "method_15776", "randomDisplayTick", "m_213811_"), "(Ldcw;Ljd;Lepe;Layw;)V");
    }

    static void randomDisplayTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_randomDisplayTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onScheduledTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tick", "method_15778", "onScheduledTick", "m_6292_"), "(Ldcw;Ljd;Lepe;)V");
    }

    static void onScheduledTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_onScheduledTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_onRandomTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "randomTick", "method_15792", "onRandomTick", "m_213812_"), "(Ldcw;Ljd;Lepe;Layw;)V");
    }

    static void onRandomTick(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onRandomTick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getDripParticle", "method_15787", "getParticle", "m_7792_"), "()Llk;");
    }

    static jobject getParticle(const jobject& obj) {
                
       const auto methodID = methodID_getParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canBeReplacedWith() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canBeReplacedWith", "method_15777", "canBeReplacedWith", "m_5486_"), "(Lepe;Ldcc;Ljd;Lepd;Lji;)Z");
    }

    static jboolean canBeReplacedWith(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_canBeReplacedWith();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getVelocity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFlow", "method_15782", "getVelocity", "m_7000_"), "(Ldcc;Ljd;Lepe;)Lexc;");
    }

    static jobject getVelocity(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getVelocity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getTickRate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTickDelay", "method_15789", "getTickRate", "m_6718_"), "(Ldcz;)I");
    }

    static jint getTickRate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTickRate();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_hasRandomTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "isRandomlyTicking", "method_15795", "hasRandomTicks", "m_6685_"), "()Z");
    }

    static jboolean hasRandomTicks(const jobject& obj) {
                
       const auto methodID = methodID_hasRandomTicks();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isEmpty", "method_15794", "isEmpty", "m_6759_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlastResistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getExplosionResistance", "method_15784", "getBlastResistance", "m_6752_"), "()F");
    }

    static jfloat getBlastResistance(const jobject& obj) {
                
       const auto methodID = methodID_getBlastResistance();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
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
    
    static jmethodID methodID_toBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createLegacyBlock", "method_15790", "toBlockState", "m_5804_"), "(Lepe;)Ldtc;");
    }

    static jobject toBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isStill() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isSource", "method_15793", "isStill", "m_7444_"), "(Lepe;)Z");
    }

    static jboolean isStill(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isStill();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getAmount", "method_15779", "getLevel", "m_7430_"), "(Lepe;)I");
    }

    static jint getLevel(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_matchesType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isSame", "method_15780", "matchesType", "m_6212_"), "(Lepd;)Z");
    }

    static jboolean matchesType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_matchesType();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isIn() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "is", "method_15791", "isIn", "m_205067_"), "(Lawu;)Z");
    }

    static jboolean isIn(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isIn();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getShape() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getShape", "method_17775", "getShape", "m_7999_"), "(Lepe;Ldcc;Ljd;)Lexv;");
    }

    static jobject getShape(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getShape();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getBucketFillSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getPickupSound", "method_32359", "getBucketFillSound", "m_142520_"), "()Ljava/util/Optional;");
    }

    static jobject getBucketFillSound(const jobject& obj) {
                
       const auto methodID = methodID_getBucketFillSound();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRegistryEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "builtInRegistryHolder", "method_40178", "getRegistryEntry", "m_205069_"), "()Ljm$c;");
    }

    static jobject getRegistryEntry(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryEntry();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_FLUID_FLUID_HPP