// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_MOBSPAWNERBLOCKENTITY_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_MOBSPAWNERBLOCKENTITY_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.MobSpawnerBlockEntity
 * Remapped: drw
 */
namespace MobSpawnerBlockEntity {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("drw", "net/minecraft/world/level/block/entity/SpawnerBlockEntity", "net/minecraft/class_2636", "net/minecraft/block/entity/MobSpawnerBlockEntity", "net/minecraft/src/C_2027_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.block.entity.MobSpawnerBlockEntity#logic
    static jobject get_field_logic(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "spawner", "field_12114", "logic", "f_59788_"), "Ldby;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.MobSpawnerBlockEntity#logic
    static void set_field_logic(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "spawner", "field_12114", "logic", "f_59788_"), "Ldby;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "loadAdditional", "method_11014", "readNbt", "m_318667_"), "(Lub;Ljo$a;)V");
    }

    static void readNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_readNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "saveAdditional", "method_11007", "writeNbt", "m_183515_"), "(Lub;Ljo$a;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_clientTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "clientTick", "method_31696", "clientTick", "m_155754_"), "(Ldcw;Ljd;Ldtc;Ldrw;)V");
    }

    static void clientTick(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_clientTick();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_serverTick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "serverTick", "method_31697", "serverTick", "m_155761_"), "(Ldcw;Ljd;Ldtc;Ldrw;)V");
    }

    static void serverTick(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_serverTick();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_toUpdatePacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getUpdatePacket", "method_38251", "toUpdatePacket", "m_58483_"), "()Lacb;");
    }

    static jobject toUpdatePacket(const jobject& obj) {
                
       const auto methodID = methodID_toUpdatePacket();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_toInitialChunkDataNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUpdateTag", "method_16887", "toInitialChunkDataNbt", "m_5995_"), "(Ljo$a;)Lub;");
    }

    static jobject toInitialChunkDataNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toInitialChunkDataNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onSyncedBlockEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "triggerEvent", "method_11004", "onSyncedBlockEvent", "m_7531_"), "(II)Z");
    }

    static jboolean onSyncedBlockEvent(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_onSyncedBlockEvent();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_copyItemDataRequiresOperator() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "onlyOpCanSetNbt", "method_11011", "copyItemDataRequiresOperator", "m_6326_"), "()Z");
    }

    static jboolean copyItemDataRequiresOperator(const jobject& obj) {
                
       const auto methodID = methodID_copyItemDataRequiresOperator();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_setEntityType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setEntityId", "method_46408", "setEntityType", "m_252803_"), "(Lbsx;Layw;)V");
    }

    static void setEntityType(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_setEntityType();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getLogic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSpawner", "method_11390", "getLogic", "m_59801_"), "()Ldby;");
    }

    static jobject getLogic(const jobject& obj) {
                
       const auto methodID = methodID_getLogic();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_MOBSPAWNERBLOCKENTITY_HPP