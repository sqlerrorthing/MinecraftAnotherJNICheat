// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_SCREEN_CREDITSSCREEN$CREDITSREADER_HPP
#define NET_MINECRAFT_CLIENT_GUI_SCREEN_CREDITSSCREEN$CREDITSREADER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.screen.CreditsScreen$CreditsReader
 * Remapped: fog$a
 */
namespace CreditsScreen$CreditsReader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fog$a", "net/minecraft/client/gui/screens/WinScreen$CreditsReader", "net/minecraft/class_445$class_6824", "net/minecraft/client/gui/screen/CreditsScreen$CreditsReader", "net/minecraft/src/C_3593_$C_196116_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("read", "read", "read", "read", "m_232821_"), "(Ljava/io/Reader;)V");
    }

    static void read(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_read();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_SCREEN_CREDITSSCREEN$CREDITSREADER_HPP