// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_BLOCKENTITYTYPE$BUILDER_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_BLOCKENTITYTYPE$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.BlockEntityType$Builder
 * Remapped: dqj$b
 */
namespace BlockEntityType$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dqj$b", "net/minecraft/world/level/block/entity/BlockEntityType$Builder", "net/minecraft/class_2591$class_2592", "net/minecraft/block/entity/BlockEntityType$Builder", "net/minecraft/src/C_1992_$C_1993_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.entity.BlockEntityType$Builder#factory
    static jobject get_field_factory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "factory", "field_11915", "factory", "f_58959_"), "Ldqj$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.BlockEntityType$Builder#factory
    static void set_field_factory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "factory", "field_11915", "factory", "f_58959_"), "Ldqj$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.block.entity.BlockEntityType$Builder#blocks
    static jobject get_field_blocks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "validBlocks", "field_19316", "blocks", "f_58960_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.block.entity.BlockEntityType$Builder#blocks
    static void set_field_blocks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "validBlocks", "field_19316", "blocks", "f_58960_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_20528", "create", "m_155273_"), "(Ldqj$a;[Ldfy;)Ldqj$b;");
    }

    static jobject create(const jobject& arg0, const jarray& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "build", "method_11034", "build", "m_58966_"), "(Lcom/mojang/datafixers/types/Type;)Ldqj;");
    }

    static jobject build(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_BLOCKENTITYTYPE$BUILDER_HPP