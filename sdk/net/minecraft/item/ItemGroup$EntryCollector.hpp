// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ITEMGROUP$ENTRYCOLLECTOR_HPP
#define NET_MINECRAFT_ITEM_ITEMGROUP$ENTRYCOLLECTOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.ItemGroup$EntryCollector
 * Remapped: cta$b
 */
namespace ItemGroup$EntryCollector {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cta$b", "net/minecraft/world/item/CreativeModeTab$DisplayItemsGenerator", "net/minecraft/class_1761$class_7914", "net/minecraft/item/ItemGroup$EntryCollector", "net/minecraft/src/C_1336_$C_256703_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_accept() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("accept", "accept", "accept", "accept", "m_257865_"), "(Lcta$d;Lcta$e;)V");
    }

    static void accept(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_accept();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ITEMGROUP$ENTRYCOLLECTOR_HPP