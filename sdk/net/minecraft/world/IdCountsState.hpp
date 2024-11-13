// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_IDCOUNTSSTATE_HPP
#define NET_MINECRAFT_WORLD_IDCOUNTSSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.IdCountsState
 * Remapped: eqs
 */
namespace IdCountsState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqs", "net/minecraft/world/level/saveddata/maps/MapIndex", "net/minecraft/class_3978", "net/minecraft/world/IdCountsState", "net/minecraft/src/C_2770_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.IdCountsState#IDCOUNTS_KEY
    [[maybe_unused]] static jobject get_field_IDCOUNTS_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FILE_NAME", "field_31830", "IDCOUNTS_KEY", "f_164761_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.IdCountsState#IDCOUNTS_KEY
    [[maybe_unused]] static void set_field_IDCOUNTS_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "FILE_NAME", "field_31830", "IDCOUNTS_KEY", "f_164761_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.IdCountsState#idCounts
    static jobject get_field_idCounts(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "usedAuxIds", "field_17662", "idCounts", "f_77878_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.IdCountsState#idCounts
    static void set_field_idCounts(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "usedAuxIds", "field_17662", "idCounts", "f_77878_"), "Lit/unimi/dsi/fastutil/objects/Object2IntMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPersistentStateType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "factory", "method_52610", "getPersistentStateType", "m_295019_"), "()Leql$a;");
    }

    static jobject getPersistentStateType() {
       const auto clazz = self();
       const auto methodID = methodID_getPersistentStateType();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_fromNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "load", "method_32360", "fromNbt", "m_164762_"), "(Lub;Ljo$a;)Leqs;");
    }

    static jobject fromNbt(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromNbt();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_75", "writeNbt", "m_7176_"), "(Lub;Ljo$a;)Lub;");
    }

    static jobject writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_increaseAndGetMapId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getFreeAuxValueForMap", "method_17920", "increaseAndGetMapId", "m_77880_"), "()Leqr;");
    }

    static jobject increaseAndGetMapId(const jobject& obj) {
                
       const auto methodID = methodID_increaseAndGetMapId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_IDCOUNTSSTATE_HPP