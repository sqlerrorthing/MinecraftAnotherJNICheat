// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_MODEL_MODELPART$CUBOIDCONSUMER_HPP
#define NET_MINECRAFT_CLIENT_MODEL_MODELPART$CUBOIDCONSUMER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.model.ModelPart$CuboidConsumer
 * Remapped: fyk$d
 */
namespace ModelPart$CuboidConsumer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fyk$d", "net/minecraft/client/model/geom/ModelPart$Visitor", "net/minecraft/class_630$class_6229", "net/minecraft/client/model/ModelPart$CuboidConsumer", "net/minecraft/src/C_3889_$C_141657_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("visit", "visit", "method_35748", "accept", "m_171341_"), "(Lfbi$a;Ljava/lang/String;ILfyk$a;)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jobject& arg1, const jint& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_MODEL_MODELPART$CUBOIDCONSUMER_HPP