// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NBT_NBTBYTE$CACHE_HPP
#define NET_MINECRAFT_NBT_NBTBYTE$CACHE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.nbt.NbtByte$Cache
 * Remapped: tz$a
 */
namespace NbtByte$Cache {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("tz$a", "net/minecraft/nbt/ByteTag$Cache", "net/minecraft/class_2481$class_4610", "net/minecraft/nbt/NbtByte$Cache", "net/minecraft/src/C_4913_$C_4915_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.nbt.NbtByte$Cache#VALUES
    [[maybe_unused]] static jobject get_field_VALUES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "cache", "field_21028", "VALUES", "f_128301_"), "[Ltz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.nbt.NbtByte$Cache#VALUES
    [[maybe_unused]] static void set_field_VALUES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "cache", "field_21028", "VALUES", "f_128301_"), "[Ltz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

};

#endif // NET_MINECRAFT_NBT_NBTBYTE$CACHE_HPP