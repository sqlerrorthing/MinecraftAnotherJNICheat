// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ENTITY$POSITIONUPDATER_HPP
#define NET_MINECRAFT_ENTITY_ENTITY$POSITIONUPDATER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.Entity$PositionUpdater
 * Remapped: bsr$a
 */
namespace Entity$PositionUpdater {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsr$a", "net/minecraft/world/entity/Entity$MoveFunction", "net/minecraft/class_1297$class_4738", "net/minecraft/entity/Entity$PositionUpdater", "net/minecraft/src/C_507_$C_509_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_20372_"), "(Lbsr;DDD)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_ENTITY$POSITIONUPDATER_HPP