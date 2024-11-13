// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BLOCK_CHAINRESTRICTEDNEIGHBORUPDATER$STATEFULENTRY_HPP
#define NET_MINECRAFT_WORLD_BLOCK_CHAINRESTRICTEDNEIGHBORUPDATER$STATEFULENTRY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry
 * Remapped: eqg$a
 */
namespace ChainRestrictedNeighborUpdater$StatefulEntry {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqg$a", "net/minecraft/world/level/redstone/CollectingNeighborUpdater$FullNeighborUpdate", "net/minecraft/class_7159$class_7160", "net/minecraft/world/block/ChainRestrictedNeighborUpdater$StatefulEntry", "net/minecraft/src/C_213310_$C_213311_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "state", "comp_584", "state", "f_230670_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "state", "comp_584", "state", "f_230670_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "pos", "comp_585", "pos", "f_230671_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "pos", "comp_585", "pos", "f_230671_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#sourceBlock
    static jobject get_field_sourceBlock(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "block", "comp_586", "sourceBlock", "f_230672_"), "Ldfy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#sourceBlock
    static void set_field_sourceBlock(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "block", "comp_586", "sourceBlock", "f_230672_"), "Ldfy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#sourcePos
    static jobject get_field_sourcePos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "neighborPos", "comp_587", "sourcePos", "f_230673_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#sourcePos
    static void set_field_sourcePos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "neighborPos", "comp_587", "sourcePos", "f_230673_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#movedByPiston
    static jboolean get_field_movedByPiston(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "movedByPiston", "comp_588", "movedByPiston", "f_230674_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.block.ChainRestrictedNeighborUpdater$StatefulEntry#movedByPiston
    static void set_field_movedByPiston(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "movedByPiston", "comp_588", "movedByPiston", "f_230674_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "runNext", "method_41707", "update", "m_213563_"), "(Ldcw;)Z");
    }

    static jboolean update(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_update();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__state() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "state", "comp_584", "state", "f_230670_"), "()Ldtc;");
    }

    static jobject _state(const jobject& obj) {
                
       const auto methodID = methodID__state();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__pos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "pos", "comp_585", "pos", "f_230671_"), "()Ljd;");
    }

    static jobject _pos(const jobject& obj) {
                
       const auto methodID = methodID__pos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__sourceBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "block", "comp_586", "sourceBlock", "f_230672_"), "()Ldfy;");
    }

    static jobject _sourceBlock(const jobject& obj) {
                
       const auto methodID = methodID__sourceBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__sourcePos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "neighborPos", "comp_587", "sourcePos", "f_230673_"), "()Ljd;");
    }

    static jobject _sourcePos(const jobject& obj) {
                
       const auto methodID = methodID__sourcePos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__movedByPiston() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "movedByPiston", "comp_588", "movedByPiston", "f_230674_"), "()Z");
    }

    static jboolean _movedByPiston(const jobject& obj) {
                
       const auto methodID = methodID__movedByPiston();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BLOCK_CHAINRESTRICTEDNEIGHBORUPDATER$STATEFULENTRY_HPP