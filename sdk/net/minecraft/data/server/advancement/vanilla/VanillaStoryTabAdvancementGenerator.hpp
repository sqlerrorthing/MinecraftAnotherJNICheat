// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_VANILLA_VANILLASTORYTABADVANCEMENTGENERATOR_HPP
#define NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_VANILLA_VANILLASTORYTABADVANCEMENTGENERATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.server.advancement.vanilla.VanillaStoryTabAdvancementGenerator
 * Remapped: mk
 */
namespace VanillaStoryTabAdvancementGenerator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("mk", "net/minecraft/data/advancements/packs/VanillaStoryAdvancements", "net/minecraft/class_2417", "net/minecraft/data/server/advancement/vanilla/VanillaStoryTabAdvancementGenerator", "net/minecraft/src/C_243557_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "generate", "method_10335", "accept", "m_245571_"), "(Ljo$a;Ljava/util/function/Consumer;)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_DATA_SERVER_ADVANCEMENT_VANILLA_VANILLASTORYTABADVANCEMENTGENERATOR_HPP