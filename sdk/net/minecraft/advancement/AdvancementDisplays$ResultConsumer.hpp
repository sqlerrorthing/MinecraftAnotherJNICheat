// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTDISPLAYS$RESULTCONSUMER_HPP
#define NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTDISPLAYS$RESULTCONSUMER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.AdvancementDisplays$ResultConsumer
 * Remapped: alq$a
 */
namespace AdvancementDisplays$ResultConsumer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alq$a", "net/minecraft/server/advancements/AdvancementVisibilityEvaluator$Output", "net/minecraft/class_8005$class_8006", "net/minecraft/advancement/AdvancementDisplays$ResultConsumer", "net/minecraft/src/C_263609_$C_263584_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_264135_"), "(Lah;Z)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTDISPLAYS$RESULTCONSUMER_HPP