// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPLAYERSCREEN$INVITEDOBJECTSELECTIONLIST_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPLAYERSCREEN$INVITEDOBJECTSELECTIONLIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsPlayerScreen$InvitedObjectSelectionList
 * Remapped: fei$b
 */
namespace RealmsPlayerScreen$InvitedObjectSelectionList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fei$b", "com/mojang/realmsclient/gui/screens/RealmsPlayerScreen$InvitedObjectSelectionList", "net/minecraft/class_4406$class_4407", "net/minecraft/client/realms/gui/screen/RealmsPlayerScreen$InvitedObjectSelectionList", "net/minecraft/src/C_3315_$C_3317_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsPlayerScreen$InvitedObjectSelectionList#field_49472
    [[maybe_unused]] static jint get_field_field_49472() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ITEM_HEIGHT", "field_49472", "field_49472", "f_314843_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsPlayerScreen$InvitedObjectSelectionList#field_49472
    [[maybe_unused]] static void set_field_field_49472(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "ITEM_HEIGHT", "field_49472", "field_49472", "f_314843_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_renderHeader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "renderHeader", "method_25312", "renderHeader", "m_7415_"), "(Lfhz;II)V");
    }

    static void renderHeader(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_renderHeader();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getMaxPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getMaxPosition", "method_25317", "getMaxPosition", "m_5775_"), "()I");
    }

    static jint getMaxPosition(const jobject& obj) {
                
       const auto methodID = methodID_getMaxPosition();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRowWidth() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getRowWidth", "method_25322", "getRowWidth", "m_5759_"), "()I");
    }

    static jint getRowWidth(const jobject& obj) {
                
       const auto methodID = methodID_getRowWidth();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSPLAYERSCREEN$INVITEDOBJECTSELECTIONLIST_HPP