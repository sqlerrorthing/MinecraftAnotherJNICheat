// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_JUKEBOX_JUKEBOXMANAGER$CHANGENOTIFIER_HPP
#define NET_MINECRAFT_BLOCK_JUKEBOX_JUKEBOXMANAGER$CHANGENOTIFIER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.jukebox.JukeboxManager$ChangeNotifier
 * Remapped: cuw$a
 */
namespace JukeboxManager$ChangeNotifier {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cuw$a", "net/minecraft/world/item/JukeboxSongPlayer$OnSongChanged", "net/minecraft/class_9794$class_9795", "net/minecraft/block/jukebox/JukeboxManager$ChangeNotifier", "net/minecraft/src/C_336461_$C_336580_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_notifyChange() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("notifyChange", "notifyChange", "", "", "m_340453_"), "()V");
    }

    static void notifyChange(const jobject& obj) {
                
       const auto methodID = methodID_notifyChange();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_JUKEBOX_JUKEBOXMANAGER$CHANGENOTIFIER_HPP