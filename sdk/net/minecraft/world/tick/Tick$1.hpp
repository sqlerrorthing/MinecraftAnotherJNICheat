// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_TICK_TICK$1_HPP
#define NET_MINECRAFT_WORLD_TICK_TICK$1_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.tick.Tick$1
 * Remapped: eys$1
 */
namespace Tick$1 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eys$1", "net/minecraft/world/ticks/SavedTick$1", "net/minecraft/class_6759$1", "net/minecraft/world/tick/Tick$1", "net/minecraft/src/C_183045_$C_183046_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_hashCode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hashCode", "method_39407", "hashCode", "hashCode"), "(Leys;)I");
    }

    static jint hashCode(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_hashCode();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_equals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "equals", "method_39408", "equals", "equals"), "(Leys;Leys;)Z");
    }

    static jboolean equals(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_equals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_TICK_TICK$1_HPP