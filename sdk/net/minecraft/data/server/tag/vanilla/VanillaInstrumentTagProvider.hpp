// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_TAG_VANILLA_VANILLAINSTRUMENTTAGPROVIDER_HPP
#define NET_MINECRAFT_DATA_SERVER_TAG_VANILLA_VANILLAINSTRUMENTTAGPROVIDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.tag.vanilla.VanillaInstrumentTagProvider
 * Remapped: pt
 */
namespace VanillaInstrumentTagProvider {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("pt", "net/minecraft/data/tags/InstrumentTagsProvider", "net/minecraft/class_7459", "net/minecraft/data/server/tag/vanilla/VanillaInstrumentTagProvider", "net/minecraft/src/C_213484_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_configure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addTags", "method_10514", "configure", "m_6577_"), "(Ljo$a;)V");
    }

    static void configure(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_configure();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_TAG_VANILLA_VANILLAINSTRUMENTTAGPROVIDER_HPP