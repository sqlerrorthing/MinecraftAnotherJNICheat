// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TICK_TICKMANAGER_HPP
#define NET_MINECRAFT_WORLD_TICK_TICKMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.tick.TickManager
 * Remapped: brc
 */
namespace TickManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("brc", "net/minecraft/world/TickRateManager", "net/minecraft/class_8921", "net/minecraft/world/tick/TickManager", "net/minecraft/src/C_302051_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.tick.TickManager#MIN_TICK_RATE
    [[maybe_unused]] static jfloat get_field_MIN_TICK_RATE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_TICKRATE", "field_46960", "MIN_TICK_RATE", "f_302470_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticFloatField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.tick.TickManager#MIN_TICK_RATE
    [[maybe_unused]] static void set_field_MIN_TICK_RATE(const jfloat &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MIN_TICKRATE", "field_46960", "MIN_TICK_RATE", "f_302470_"), "F");
        return MinecraftSDK::env->SetStaticFloatField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.world.tick.TickManager#tickRate
    static jfloat get_field_tickRate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tickrate", "field_46961", "tickRate", "f_302740_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.tick.TickManager#tickRate
    static void set_field_tickRate(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "tickrate", "field_46961", "tickRate", "f_302740_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.tick.TickManager#nanosPerTick
    static jlong get_field_nanosPerTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nanosecondsPerTick", "field_46962", "nanosPerTick", "f_303856_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.tick.TickManager#nanosPerTick
    static void set_field_nanosPerTick(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nanosecondsPerTick", "field_46962", "nanosPerTick", "f_303856_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.tick.TickManager#stepTicks
    static jint get_field_stepTicks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "frozenTicksToRun", "field_46963", "stepTicks", "f_303482_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.tick.TickManager#stepTicks
    static void set_field_stepTicks(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "frozenTicksToRun", "field_46963", "stepTicks", "f_303482_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.tick.TickManager#shouldTick
    static jboolean get_field_shouldTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "runGameElements", "field_46964", "shouldTick", "f_302370_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.tick.TickManager#shouldTick
    static void set_field_shouldTick(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "runGameElements", "field_46964", "shouldTick", "f_302370_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.tick.TickManager#frozen
    static jboolean get_field_frozen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "isFrozen", "field_46965", "frozen", "f_303812_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.tick.TickManager#frozen
    static void set_field_frozen(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "isFrozen", "field_46965", "frozen", "f_303812_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_setTickRate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setTickRate", "method_54671", "setTickRate", "m_307254_"), "(F)V");
    }

    static void setTickRate(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_setTickRate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTickRate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "tickrate", "method_54748", "getTickRate", "m_306179_"), "()F");
    }

    static jfloat getTickRate(const jobject& obj) {
                
       const auto methodID = methodID_getTickRate();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMillisPerTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "millisecondsPerTick", "method_54749", "getMillisPerTick", "m_305111_"), "()F");
    }

    static jfloat getMillisPerTick(const jobject& obj) {
                
       const auto methodID = methodID_getMillisPerTick();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNanosPerTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "nanosecondsPerTick", "method_54750", "getNanosPerTick", "m_307289_"), "()J");
    }

    static jlong getNanosPerTick(const jobject& obj) {
                
       const auto methodID = methodID_getNanosPerTick();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
    static jmethodID methodID__shouldTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "runsNormally", "method_54751", "shouldTick", "m_305915_"), "()Z");
    }

    static jboolean _shouldTick(const jobject& obj) {
                
       const auto methodID = methodID__shouldTick();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isStepping() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "isSteppingForward", "method_54752", "isStepping", "m_307006_"), "()Z");
    }

    static jboolean isStepping(const jobject& obj) {
                
       const auto methodID = methodID_isStepping();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setStepTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "setFrozenTicksToRun", "method_54747", "setStepTicks", "m_307652_"), "(I)V");
    }

    static void setStepTicks(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_setStepTicks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStepTicks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "frozenTicksToRun", "method_54753", "getStepTicks", "m_306668_"), "()I");
    }

    static jint getStepTicks(const jobject& obj) {
                
       const auto methodID = methodID_getStepTicks();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_setFrozen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setFrozen", "method_54675", "setFrozen", "m_306419_"), "(Z)V");
    }

    static void setFrozen(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setFrozen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isFrozen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "isFrozen", "method_54754", "isFrozen", "m_306363_"), "()Z");
    }

    static jboolean isFrozen(const jobject& obj) {
                
       const auto methodID = methodID_isFrozen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_step() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "tick", "method_54755", "step", "m_306707_"), "()V");
    }

    static void step(const jobject& obj) {
                
       const auto methodID = methodID_step();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldSkipTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isEntityFrozen", "method_54746", "shouldSkipTick", "m_305579_"), "(Lbsr;)Z");
    }

    static jboolean shouldSkipTick(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_shouldSkipTick();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TICK_TICKMANAGER_HPP