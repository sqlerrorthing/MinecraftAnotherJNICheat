// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_UTIL_NARRATORMANAGER$INACTIVENARRATORLIBRARYEXCEPTION_HPP
#define NET_MINECRAFT_CLIENT_UTIL_NARRATORMANAGER$INACTIVENARRATORLIBRARYEXCEPTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.util.NarratorManager$InactiveNarratorLibraryException
 * Remapped: fgg$a
 */
namespace NarratorManager$InactiveNarratorLibraryException {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgg$a", "net/minecraft/client/GameNarrator$NarratorInitException", "net/minecraft/class_333$class_8571", "net/minecraft/client/util/NarratorManager$InactiveNarratorLibraryException", "net/minecraft/src/C_3437_$C_287783_"));
        }
        return cachedClass;
    };

};

#endif // NET_MINECRAFT_CLIENT_UTIL_NARRATORMANAGER$INACTIVENARRATORLIBRARYEXCEPTION_HPP