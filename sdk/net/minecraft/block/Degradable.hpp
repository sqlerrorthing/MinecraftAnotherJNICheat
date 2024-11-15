// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_DEGRADABLE_HPP
#define NET_MINECRAFT_BLOCK_DEGRADABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.Degradable
 * Remapped: dgz
 */
namespace Degradable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dgz", "net/minecraft/world/level/block/ChangeOverTimeBlock", "net/minecraft/class_5547", "net/minecraft/block/Degradable", "net/minecraft/src/C_141201_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.Degradable#DEGRADING_RANGE
    [[maybe_unused]] static jint get_field_DEGRADING_RANGE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y_", "SCAN_DISTANCE", "field_31056", "DEGRADING_RANGE", "f_153035_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.Degradable#DEGRADING_RANGE
    [[maybe_unused]] static void set_field_DEGRADING_RANGE(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("y_", "SCAN_DISTANCE", "field_31056", "DEGRADING_RANGE", "f_153035_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getDegradationResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i_", "getNext", "method_31639", "getDegradationResult", "m_142123_"), "(Ldtc;)Ljava/util/Optional;");
    }

    static jobject getDegradationResult(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getDegradationResult();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getDegradationChanceMultiplier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("ay_", "getChanceModifier", "method_33620", "getDegradationChanceMultiplier", "m_142377_"), "()F");
    }

    static jfloat getDegradationChanceMultiplier(const jobject& obj) {
                
       const auto methodID = methodID_getDegradationChanceMultiplier();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_tickDegradation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "changeOverTime", "method_54764", "tickDegradation", "m_306166_"), "(Ldtc;Laqu;Ljd;Layw;)V");
    }

    static void tickDegradation(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_tickDegradation();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getDegradationLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getAge", "method_33622", "getDegradationLevel", "m_142297_"), "()Ljava/lang/Enum;");
    }

    static jobject getDegradationLevel(const jobject& obj) {
                
       const auto methodID = methodID_getDegradationLevel();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_tryDegrade() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getNextState", "method_54765", "tryDegrade", "m_305709_"), "(Ldtc;Laqu;Ljd;Layw;)Ljava/util/Optional;");
    }

    static jobject tryDegrade(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_tryDegrade();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_DEGRADABLE_HPP