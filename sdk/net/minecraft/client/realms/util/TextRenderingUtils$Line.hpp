// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_UTIL_TEXTRENDERINGUTILS$LINE_HPP
#define NET_MINECRAFT_CLIENT_REALMS_UTIL_TEXTRENDERINGUTILS$LINE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.util.TextRenderingUtils$Line
 * Remapped: ffe$a
 */
namespace TextRenderingUtils$Line {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ffe$a", "com/mojang/realmsclient/util/TextRenderingUtils$Line", "net/minecraft/class_4450$class_4451", "net/minecraft/client/realms/util/TextRenderingUtils$Line", "net/minecraft/src/C_3353_$C_3354_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.realms.util.TextRenderingUtils$Line#segments
    static jobject get_field_segments(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "segments", "field_20266", "segments", "f_90262_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.util.TextRenderingUtils$Line#segments
    static void set_field_segments(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "segments", "field_20266", "segments", "f_90262_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_REALMS_UTIL_TEXTRENDERINGUTILS$LINE_HPP