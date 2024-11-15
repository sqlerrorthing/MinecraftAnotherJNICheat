// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_SCULKSENSORBLOCKENTITY$VIBRATIONCALLBACK_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_SCULKSENSORBLOCKENTITY$VIBRATIONCALLBACK_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.SculkSensorBlockEntity$VibrationCallback
 * Remapped: drp$a
 */
namespace SculkSensorBlockEntity$VibrationCallback {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("drp$a", "net/minecraft/world/level/block/entity/SculkSensorBlockEntity$VibrationUser", "net/minecraft/class_5704$class_8241", "net/minecraft/block/entity/SculkSensorBlockEntity$VibrationCallback", "net/minecraft/src/C_141250_$C_279498_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.entity.SculkSensorBlockEntity$VibrationCallback#RANGE
    [[maybe_unused]] static jint get_field_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LISTENER_RANGE", "field_43292", "RANGE", "f_279624_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.SculkSensorBlockEntity$VibrationCallback#RANGE
    [[maybe_unused]] static void set_field_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LISTENER_RANGE", "field_43292", "RANGE", "f_279624_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.block.entity.SculkSensorBlockEntity$VibrationCallback#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockPos", "field_44617", "pos", "f_279654_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.block.entity.SculkSensorBlockEntity$VibrationCallback#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockPos", "field_44617", "pos", "f_279654_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkSensorBlockEntity$VibrationCallback#positionSource
    static jobject get_field_positionSource(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "positionSource", "field_44616", "positionSource", "f_279659_"), "Ldyd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkSensorBlockEntity$VibrationCallback#positionSource
    static void set_field_positionSource(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "positionSource", "field_44616", "positionSource", "f_279659_"), "Ldyd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getRange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getListenerRadius", "method_49797", "getRange", "m_280351_"), "()I");
    }

    static jint getRange(const jobject& obj) {
                
       const auto methodID = methodID_getRange();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPositionSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getPositionSource", "method_51300", "getPositionSource", "m_280010_"), "()Ldyd;");
    }

    static jobject getPositionSource(const jobject& obj) {
                
       const auto methodID = methodID_getPositionSource();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_triggersAvoidCriterion() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "canTriggerAvoidVibration", "method_43695", "triggersAvoidCriterion", "m_280076_"), "()Z");
    }

    static jboolean triggersAvoidCriterion(const jobject& obj) {
                
       const auto methodID = methodID_triggersAvoidCriterion();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_accepts() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canReceiveVibration", "method_32970", "accepts", "m_280080_"), "(Laqu;Ljd;Ljm;Ldxz$a;)Z");
    }

    static jboolean accepts(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_accepts();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onReceiveVibration", "method_32969", "accept", "m_280271_"), "(Laqu;Ljd;Ljm;Lbsr;Lbsr;F)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jfloat& arg5) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_onListen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "onDataChanged", "method_42672", "onListen", "m_280022_"), "()V");
    }

    static void onListen(const jobject& obj) {
                
       const auto methodID = methodID_onListen();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_requiresTickingChunksAround() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "requiresAdjacentChunksToBeTicking", "method_51363", "requiresTickingChunksAround", "m_280215_"), "()Z");
    }

    static jboolean requiresTickingChunksAround(const jobject& obj) {
                
       const auto methodID = methodID_requiresTickingChunksAround();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_SCULKSENSORBLOCKENTITY$VIBRATIONCALLBACK_HPP