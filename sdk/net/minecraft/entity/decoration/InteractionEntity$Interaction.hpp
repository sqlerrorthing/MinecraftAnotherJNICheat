// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_INTERACTIONENTITY$INTERACTION_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_INTERACTIONENTITY$INTERACTION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.InteractionEntity$Interaction
 * Remapped: bth$a
 */
namespace InteractionEntity$Interaction {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bth$a", "net/minecraft/world/entity/Interaction$PlayerAction", "net/minecraft/class_8150$class_8151", "net/minecraft/entity/decoration/InteractionEntity$Interaction", "net/minecraft/src/C_271063_$C_271076_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.decoration.InteractionEntity$Interaction#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_1284", "player", "f_271379_"), "Ljava/util/UUID;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.InteractionEntity$Interaction#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "player", "comp_1284", "player", "f_271379_"), "Ljava/util/UUID;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.InteractionEntity$Interaction#timestamp
    static jlong get_field_timestamp(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "timestamp", "comp_1285", "timestamp", "f_271492_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.InteractionEntity$Interaction#timestamp
    static void set_field_timestamp(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "timestamp", "comp_1285", "timestamp", "f_271492_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.decoration.InteractionEntity$Interaction#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42635", "CODEC", "f_271433_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.decoration.InteractionEntity$Interaction#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42635", "CODEC", "f_271433_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__player() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "player", "comp_1284", "player", "f_271379_"), "()Ljava/util/UUID;");
    }

    static jobject _player(const jobject& obj) {
                
       const auto methodID = methodID__player();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__timestamp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "timestamp", "comp_1285", "timestamp", "f_271492_"), "()J");
    }

    static jlong _timestamp(const jobject& obj) {
                
       const auto methodID = methodID__timestamp();
       return MinecraftSDK::env->CallLongMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_INTERACTIONENTITY$INTERACTION_HPP