// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RESOURCE_METADATA_ANIMATIONRESOURCEMETADATA$FRAMECONSUMER_HPP
#define NET_MINECRAFT_CLIENT_RESOURCE_METADATA_ANIMATIONRESOURCEMETADATA$FRAMECONSUMER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.resource.metadata.AnimationResourceMetadata$FrameConsumer
 * Remapped: grw$a
 */
namespace AnimationResourceMetadata$FrameConsumer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("grw$a", "net/minecraft/client/resources/metadata/animation/AnimationMetadataSection$FrameOutput", "net/minecraft/class_1079$class_5792", "net/minecraft/client/resource/metadata/AnimationResourceMetadata$FrameConsumer", "net/minecraft/src/C_4518_$C_141760_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_174863_"), "(II)V");
    }

    static void accept(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_RESOURCE_METADATA_ANIMATIONRESOURCEMETADATA$FRAMECONSUMER_HPP