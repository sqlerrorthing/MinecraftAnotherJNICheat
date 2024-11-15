// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_UPLOADRESULT_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_UPLOADRESULT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.UploadResult
 * Remapped: fet
 */
namespace UploadResult {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fet", "com/mojang/realmsclient/gui/screens/UploadResult", "net/minecraft/class_4429", "net/minecraft/client/realms/gui/screen/UploadResult", "net/minecraft/src/C_3341_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.client.realms.gui.screen.UploadResult#statusCode
    static jint get_field_statusCode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "statusCode", "field_20205", "statusCode", "f_90133_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.screen.UploadResult#statusCode
    static void set_field_statusCode(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "statusCode", "field_20205", "statusCode", "f_90133_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.client.realms.gui.screen.UploadResult#errorMessage
    static jobject get_field_errorMessage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "errorMessage", "field_20206", "errorMessage", "f_90134_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.client.realms.gui.screen.UploadResult#errorMessage
    static void set_field_errorMessage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "errorMessage", "field_20206", "errorMessage", "f_90134_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_UPLOADRESULT_HPP