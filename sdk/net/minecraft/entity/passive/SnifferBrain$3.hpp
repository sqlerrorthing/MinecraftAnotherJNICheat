// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERBRAIN$3_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERBRAIN$3_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.SnifferBrain$3
 * Remapped: chw$3
 */
namespace SnifferBrain$3 {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chw$3", "net/minecraft/world/entity/animal/sniffer/SnifferAi$3", "net/minecraft/class_8155$3", "net/minecraft/entity/passive/SnifferBrain$3", "net/minecraft/src/C_271043_$C_278357_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_run() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "start", "method_33197", "run", "m_6735_"), "(Laqu;Lbtw;J)V");
    }

    static void run(const jobject& obj, const jobject& arg0, const jobject& arg1, const jlong& arg2) {
                
       const auto methodID = methodID_run();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERBRAIN$3_HPP