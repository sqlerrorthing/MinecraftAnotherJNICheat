// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_UPDATER_WORLDUPDATER$POIUPDATE_HPP
#define NET_MINECRAFT_WORLD_UPDATER_WORLDUPDATER$POIUPDATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.updater.WorldUpdater$PoiUpdate
 * Remapped: bqf$f
 */
namespace WorldUpdater$PoiUpdate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bqf$f", "net/minecraft/util/worldupdate/WorldUpgrader$PoiUpgrader", "net/minecraft/class_1257$class_9166", "net/minecraft/world/updater/WorldUpdater$PoiUpdate", "net/minecraft/src/C_458_$C_313267_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_updateNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "upgradeTag", "method_56550", "updateNbt", "m_320157_"), "(Ldwu;Lub;)Lub;");
    }

    static jobject updateNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_updateNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_UPDATER_WORLDUPDATER$POIUPDATE_HPP