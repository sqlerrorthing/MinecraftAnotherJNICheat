// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCE$SPRITEREGION_HPP
#define NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCE$SPRITEREGION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.texture.atlas.AtlasSource$SpriteRegion
 * Remapped: gqp$b
 */
namespace AtlasSource$SpriteRegion {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gqp$b", "net/minecraft/client/renderer/texture/atlas/SpriteSource$SpriteSupplier", "net/minecraft/class_7948$class_7950", "net/minecraft/client/texture/atlas/AtlasSource$SpriteRegion", "net/minecraft/src/C_260369_$C_260402_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "discard", "method_47676", "close", "m_260986_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_TEXTURE_ATLAS_ATLASSOURCE$SPRITEREGION_HPP