// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSELECTWORLDTEMPLATESCREEN$WORLDTEMPLATEOBJECTSELECTIONLIST_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSELECTWORLDTEMPLATESCREEN$WORLDTEMPLATEOBJECTSELECTIONLIST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsSelectWorldTemplateScreen$WorldTemplateObjectSelectionList
 * Remapped: fen$b
 */
namespace RealmsSelectWorldTemplateScreen$WorldTemplateObjectSelectionList {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fen$b", "com/mojang/realmsclient/gui/screens/RealmsSelectWorldTemplateScreen$WorldTemplateList", "net/minecraft/class_4419$class_4420", "net/minecraft/client/realms/gui/screen/RealmsSelectWorldTemplateScreen$WorldTemplateObjectSelectionList", "net/minecraft/src/C_3330_$C_3333_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_addEntry() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addEntry", "method_21448", "addEntry", "m_89804_"), "(Lfde;)V");
    }

    static void addEntry(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_addEntry();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_mouseClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mouseClicked", "method_25402", "mouseClicked", "m_6375_"), "(DDI)Z");
    }

    static jboolean mouseClicked(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jint& arg2) {
                
       const auto methodID = methodID_mouseClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_setSelected() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setSelected", "method_25249", "setSelected", "m_6987_"), "(Lfen$a;)V");
    }

    static void setSelected(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setSelected();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "isEmpty", "method_21446", "isEmpty", "m_89817_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getValues() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getTemplates", "method_21450", "getValues", "m_89818_"), "()Ljava/util/List;");
    }

    static jobject getValues(const jobject& obj) {
                
       const auto methodID = methodID_getValues();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSELECTWORLDTEMPLATESCREEN$WORLDTEMPLATEOBJECTSELECTIONLIST_HPP