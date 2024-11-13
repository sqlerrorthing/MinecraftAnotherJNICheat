// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_NETWORK_PENDINGUPDATEMANAGER$PENDINGUPDATE_HPP
#define NET_MINECRAFT_CLIENT_NETWORK_PENDINGUPDATEMANAGER$PENDINGUPDATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.network.PendingUpdateManager$PendingUpdate
 * Remapped: gas$a
 */
namespace PendingUpdateManager$PendingUpdate {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gas$a", "net/minecraft/client/multiplayer/prediction/BlockStatePredictionHandler$ServerVerifiedState", "net/minecraft/class_7202$class_7203", "net/minecraft/client/network/PendingUpdateManager$PendingUpdate", "net/minecraft/src/C_213404_$C_213405_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.client.network.PendingUpdateManager$PendingUpdate#playerPos
    static jobject get_field_playerPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "playerPos", "field_37956", "playerPos", "f_233874_"), "Lexc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.network.PendingUpdateManager$PendingUpdate#playerPos
    static void set_field_playerPos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "playerPos", "field_37956", "playerPos", "f_233874_"), "Lexc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.network.PendingUpdateManager$PendingUpdate#sequence
    static jint get_field_sequence(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sequence", "field_37957", "sequence", "f_233875_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.network.PendingUpdateManager$PendingUpdate#sequence
    static void set_field_sequence(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "sequence", "field_37957", "sequence", "f_233875_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.network.PendingUpdateManager$PendingUpdate#blockState
    static jobject get_field_blockState(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockState", "field_37958", "blockState", "f_233876_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.network.PendingUpdateManager$PendingUpdate#blockState
    static void set_field_blockState(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "blockState", "field_37958", "blockState", "f_233876_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_withSequence() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSequence", "method_41944", "withSequence", "m_233881_"), "(I)Lgas$a;");
    }

    static jobject withSequence(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_withSequence();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setBlockState", "method_41945", "setBlockState", "m_233883_"), "(Ldtc;)V");
    }

    static void setBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBlockState();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_NETWORK_PENDINGUPDATEMANAGER$PENDINGUPDATE_HPP