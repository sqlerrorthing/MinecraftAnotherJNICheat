// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_RENDERTICKCOUNTER$DYNAMIC_HPP
#define NET_MINECRAFT_CLIENT_RENDER_RENDERTICKCOUNTER$DYNAMIC_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.RenderTickCounter$Dynamic
 * Remapped: fgf$b
 */
namespace RenderTickCounter$Dynamic {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgf$b", "net/minecraft/client/DeltaTracker$Timer", "net/minecraft/class_9779$class_9781", "net/minecraft/client/render/RenderTickCounter$Dynamic", "net/minecraft/src/C_336468_$C_336554_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#lastFrameDuration
    static jfloat get_field_lastFrameDuration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "deltaTicks", "field_51958", "lastFrameDuration", "f_336900_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#lastFrameDuration
    static void set_field_lastFrameDuration(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "deltaTicks", "field_51958", "lastFrameDuration", "f_336900_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#tickDelta
    static jfloat get_field_tickDelta(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "deltaTickResidual", "field_51959", "tickDelta", "f_337227_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#tickDelta
    static void set_field_tickDelta(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "deltaTickResidual", "field_51959", "tickDelta", "f_337227_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#lastDuration
    static jfloat get_field_lastDuration(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "realtimeDeltaTicks", "field_51960", "lastDuration", "f_337386_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#lastDuration
    static void set_field_lastDuration(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "realtimeDeltaTicks", "field_51960", "lastDuration", "f_337386_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#tickDeltaBeforePause
    static jfloat get_field_tickDeltaBeforePause(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "pausedDeltaTickResidual", "field_51961", "tickDeltaBeforePause", "f_336901_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#tickDeltaBeforePause
    static void set_field_tickDeltaBeforePause(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "pausedDeltaTickResidual", "field_51961", "tickDeltaBeforePause", "f_336901_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#prevTimeMillis
    static jlong get_field_prevTimeMillis(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lastMs", "field_51962", "prevTimeMillis", "f_337122_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#prevTimeMillis
    static void set_field_prevTimeMillis(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "lastMs", "field_51962", "prevTimeMillis", "f_337122_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#timeMillis
    static jlong get_field_timeMillis(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "lastUiMs", "field_51963", "timeMillis", "f_336924_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#timeMillis
    static void set_field_timeMillis(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "lastUiMs", "field_51963", "timeMillis", "f_336924_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#tickTime
    static jfloat get_field_tickTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "msPerTick", "field_51964", "tickTime", "f_336794_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#tickTime
    static void set_field_tickTime(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "msPerTick", "field_51964", "tickTime", "f_336794_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#targetMillisPerTick
    static jobject get_field_targetMillisPerTick(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "targetMsptProvider", "field_51965", "targetMillisPerTick", "f_337649_"), "Lit/unimi/dsi/fastutil/floats/FloatUnaryOperator;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#targetMillisPerTick
    static void set_field_targetMillisPerTick(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "targetMsptProvider", "field_51965", "targetMillisPerTick", "f_337649_"), "Lit/unimi/dsi/fastutil/floats/FloatUnaryOperator;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#paused
    static jboolean get_field_paused(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "paused", "field_51966", "paused", "f_337507_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#paused
    static void set_field_paused(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "paused", "field_51966", "paused", "f_337507_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.render.RenderTickCounter$Dynamic#tickFrozen
    static jboolean get_field_tickFrozen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "frozen", "field_51967", "tickFrozen", "f_337127_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.render.RenderTickCounter$Dynamic#tickFrozen
    static void set_field_tickFrozen(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "frozen", "field_51967", "tickFrozen", "f_337127_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_beginRenderTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "advanceTime", "method_60640", "beginRenderTick", "m_339365_"), "(JZ)I");
    }

    static jint beginRenderTick(const jobject& obj, const jlong& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_beginRenderTick();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__beginRenderTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "advanceGameTime", "method_60639", "beginRenderTick", "m_338837_"), "(J)I");
    }

    static jint _beginRenderTick(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID__beginRenderTick();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setTimeMillis() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "advanceRealTime", "method_60641", "setTimeMillis", "m_339862_"), "(J)V");
    }

    static void setTimeMillis(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_setTimeMillis();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "updatePauseState", "method_60642", "tick", "m_339047_"), "(Z)V");
    }

    static void tick(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_tick();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tickPaused() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "pause", "method_60643", "tickPaused", "m_338729_"), "()V");
    }

    static void tickPaused(const jobject& obj) {
                
       const auto methodID = methodID_tickPaused();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_tickUnpaused() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "unPause", "method_60645", "tickUnpaused", "m_338681_"), "()V");
    }

    static void tickUnpaused(const jobject& obj) {
                
       const auto methodID = methodID_tickUnpaused();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_setTickFrozen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "updateFrozenState", "method_60644", "setTickFrozen", "m_340449_"), "(Z)V");
    }

    static void setTickFrozen(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setTickFrozen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLastFrameDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getGameTimeDeltaTicks", "method_60636", "getLastFrameDuration", "m_339005_"), "()F");
    }

    static jfloat getLastFrameDuration(const jobject& obj) {
                
       const auto methodID = methodID_getLastFrameDuration();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTickDelta() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getGameTimeDeltaPartialTick", "method_60637", "getTickDelta", "m_338527_"), "(Z)F");
    }

    static jfloat getTickDelta(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_getTickDelta();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLastDuration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRealtimeDeltaTicks", "method_60638", "getLastDuration", "m_338557_"), "()F");
    }

    static jfloat getLastDuration(const jobject& obj) {
                
       const auto methodID = methodID_getLastDuration();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RENDER_RENDERTICKCOUNTER$DYNAMIC_HPP