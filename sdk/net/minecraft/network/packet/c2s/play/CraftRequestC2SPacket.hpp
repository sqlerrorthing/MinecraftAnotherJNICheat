// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_CRAFTREQUESTC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_CRAFTREQUESTC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket
 * Remapped: ahk
 */
namespace CraftRequestC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ahk", "net/minecraft/network/protocol/game/ServerboundPlaceRecipePacket", "net/minecraft/class_2840", "net/minecraft/network/packet/c2s/play/CraftRequestC2SPacket", "net/minecraft/src/C_5173_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48205", "CODEC", "f_316340_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48205", "CODEC", "f_316340_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket#syncId
    static jint get_field_syncId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "containerId", "field_12933", "syncId", "f_134235_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket#syncId
    static void set_field_syncId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "containerId", "field_12933", "syncId", "f_134235_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket#recipeId
    static jobject get_field_recipeId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "recipe", "field_12931", "recipeId", "f_134236_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket#recipeId
    static void set_field_recipeId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "recipe", "field_12931", "recipeId", "f_134236_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket#craftAll
    static jboolean get_field_craftAll(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "shiftDown", "field_12932", "craftAll", "f_134237_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.CraftRequestC2SPacket#craftAll
    static void set_field_craftAll(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "shiftDown", "field_12932", "craftAll", "f_134237_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55986", "write", "m_134250_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getPacketId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_55846", "getPacketId", "m_5779_"), "()Lzi;");
    }

    static jobject getPacketId(const jobject& obj) {
                
       const auto methodID = methodID_getPacketId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_12317", "apply", "m_5797_"), "(Lagi;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSyncId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getContainerId", "method_12318", "getSyncId", "m_134249_"), "()I");
    }

    static jint getSyncId(const jobject& obj) {
                
       const auto methodID = methodID_getSyncId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRecipeId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getRecipe", "method_12320", "getRecipeId", "m_134252_"), "()Lakr;");
    }

    static jobject getRecipeId(const jobject& obj) {
                
       const auto methodID = methodID_getRecipeId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldCraftAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isShiftDown", "method_12319", "shouldCraftAll", "m_134253_"), "()Z");
    }

    static jboolean shouldCraftAll(const jobject& obj) {
                
       const auto methodID = methodID_shouldCraftAll();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_CRAFTREQUESTC2SPACKET_HPP