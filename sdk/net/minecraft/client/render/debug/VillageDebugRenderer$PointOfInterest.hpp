// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_RENDER_DEBUG_VILLAGEDEBUGRENDERER$POINTOFINTEREST_HPP
#define NET_MINECRAFT_CLIENT_RENDER_DEBUG_VILLAGEDEBUGRENDERER$POINTOFINTEREST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.render.debug.VillageDebugRenderer$PointOfInterest
 * Remapped: gih$a
 */
namespace VillageDebugRenderer$PointOfInterest {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("gih$a", "net/minecraft/client/renderer/debug/BrainDebugRenderer$PoiInfo", "net/minecraft/class_4207$class_4233", "net/minecraft/client/render/debug/VillageDebugRenderer$PointOfInterest", "net/minecraft/src/C_4278_$C_4280_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.render.debug.VillageDebugRenderer$PointOfInterest#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pos", "field_18931", "pos", "f_113333_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.debug.VillageDebugRenderer$PointOfInterest#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pos", "field_18931", "pos", "f_113333_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.debug.VillageDebugRenderer$PointOfInterest#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "field_18932", "type", "f_113334_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.debug.VillageDebugRenderer$PointOfInterest#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "type", "field_18932", "type", "f_113334_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.render.debug.VillageDebugRenderer$PointOfInterest#freeTicketCount
    static jint get_field_freeTicketCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "freeTicketCount", "field_18933", "freeTicketCount", "f_113335_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.render.debug.VillageDebugRenderer$PointOfInterest#freeTicketCount
    static void set_field_freeTicketCount(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "freeTicketCount", "field_18933", "freeTicketCount", "f_113335_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_RENDER_DEBUG_VILLAGEDEBUGRENDERER$POINTOFINTEREST_HPP