// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ITEMSTEERABLE_HPP
#define NET_MINECRAFT_ENTITY_ITEMSTEERABLE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.ItemSteerable
 * Remapped: btj
 */
namespace ItemSteerable {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("btj", "net/minecraft/world/entity/ItemSteerable", "net/minecraft/class_4981", "net/minecraft/entity/ItemSteerable", "net/minecraft/src/C_522_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_consumeOnAStickItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "boost", "method_6577", "consumeOnAStickItem", "m_6746_"), "()Z");
    }

    static jboolean consumeOnAStickItem(const jobject& obj) {
                
       const auto methodID = methodID_consumeOnAStickItem();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_ITEMSTEERABLE_HPP