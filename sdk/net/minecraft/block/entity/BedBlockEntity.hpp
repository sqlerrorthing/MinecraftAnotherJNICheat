// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_BEDBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_BEDBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.BedBlockEntity
 * Remapped: dqd
 */
namespace BedBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dqd", "net/minecraft/world/level/block/entity/BedBlockEntity", "net/minecraft/class_2587", "net/minecraft/block/entity/BedBlockEntity", "net/minecraft/src/C_1984_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.entity.BedBlockEntity#color
    static jobject get_field_color(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "color", "field_11869", "color", "f_58724_"), "Lcti;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.BedBlockEntity#color
    static void set_field_color(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "color", "field_11869", "color", "f_58724_"), "Lcti;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_toUpdatePacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getUpdatePacket", "method_38237", "toUpdatePacket", "m_58483_"), "()Lacb;");
    }

    static jobject toUpdatePacket(const jobject& obj) {
                
       const auto methodID = methodID_toUpdatePacket();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getColor", "method_11018", "getColor", "m_58731_"), "()Lcti;");
    }

    static jobject getColor(const jobject& obj) {
                
       const auto methodID = methodID_getColor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setColor", "method_11019", "setColor", "m_58729_"), "(Lcti;)V");
    }

    static void setColor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setColor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_BEDBLOCKENTITY_HPP