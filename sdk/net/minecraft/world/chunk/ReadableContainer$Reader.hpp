// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_CHUNK_READABLECONTAINER$READER_HPP
#define NET_MINECRAFT_WORLD_CHUNK_READABLECONTAINER$READER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.chunk.ReadableContainer$Reader
 * Remapped: dvr$b
 */
namespace ReadableContainer$Reader {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dvr$b", "net/minecraft/world/level/chunk/PalettedContainerRO$Unpacker", "net/minecraft/class_7522$class_7523", "net/minecraft/world/chunk/ReadableContainer$Reader", "net/minecraft/src/C_238161_$C_238164_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_read() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("read", "read", "read", "read", "m_238363_"), "(Ljr;Ldvq$d;Ldvr$a;)Lcom/mojang/serialization/DataResult;");
    }

    static jobject read(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_read();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_WORLD_CHUNK_READABLECONTAINER$READER_HPP