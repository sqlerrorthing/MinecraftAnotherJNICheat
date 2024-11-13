// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSUBSCRIPTIONINFOSCREEN_HPP
#define NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSUBSCRIPTIONINFOSCREEN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen
 * Remapped: feq
 */
namespace RealmsSubscriptionInfoScreen {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("feq", "com/mojang/realmsclient/gui/screens/RealmsSubscriptionInfoScreen", "net/minecraft/class_4425", "net/minecraft/client/realms/gui/screen/RealmsSubscriptionInfoScreen", "net/minecraft/src/C_3337_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_20146", "LOGGER", "f_89963_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_20146", "LOGGER", "f_89963_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#SUBSCRIPTION_TITLE
    [[maybe_unused]] static jobject get_field_SUBSCRIPTION_TITLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SUBSCRIPTION_TITLE", "field_20153", "SUBSCRIPTION_TITLE", "f_89964_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#SUBSCRIPTION_TITLE
    [[maybe_unused]] static void set_field_SUBSCRIPTION_TITLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SUBSCRIPTION_TITLE", "field_20153", "SUBSCRIPTION_TITLE", "f_89964_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#SUBSCRIPTION_START_LABEL_TEXT
    [[maybe_unused]] static jobject get_field_SUBSCRIPTION_START_LABEL_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SUBSCRIPTION_START_LABEL", "field_20154", "SUBSCRIPTION_START_LABEL_TEXT", "f_89965_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#SUBSCRIPTION_START_LABEL_TEXT
    [[maybe_unused]] static void set_field_SUBSCRIPTION_START_LABEL_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SUBSCRIPTION_START_LABEL", "field_20154", "SUBSCRIPTION_START_LABEL_TEXT", "f_89965_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#TIME_LEFT_LABEL_TEXT
    [[maybe_unused]] static jobject get_field_TIME_LEFT_LABEL_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "TIME_LEFT_LABEL", "field_20155", "TIME_LEFT_LABEL_TEXT", "f_89966_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#TIME_LEFT_LABEL_TEXT
    [[maybe_unused]] static void set_field_TIME_LEFT_LABEL_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("B", "TIME_LEFT_LABEL", "field_20155", "TIME_LEFT_LABEL_TEXT", "f_89966_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#DAYS_LEFT_LABEL_TEXT
    [[maybe_unused]] static jobject get_field_DAYS_LEFT_LABEL_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "DAYS_LEFT_LABEL", "field_20156", "DAYS_LEFT_LABEL_TEXT", "f_89967_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#DAYS_LEFT_LABEL_TEXT
    [[maybe_unused]] static void set_field_DAYS_LEFT_LABEL_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("C", "DAYS_LEFT_LABEL", "field_20156", "DAYS_LEFT_LABEL_TEXT", "f_89967_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#EXPIRED_TEXT
    [[maybe_unused]] static jobject get_field_EXPIRED_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "SUBSCRIPTION_EXPIRED_TEXT", "field_26517", "EXPIRED_TEXT", "f_89968_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#EXPIRED_TEXT
    [[maybe_unused]] static void set_field_EXPIRED_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("D", "SUBSCRIPTION_EXPIRED_TEXT", "field_26517", "EXPIRED_TEXT", "f_89968_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#EXPIRES_IN_LESS_THAN_A_DAY_TEXT
    [[maybe_unused]] static jobject get_field_EXPIRES_IN_LESS_THAN_A_DAY_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "SUBSCRIPTION_LESS_THAN_A_DAY_TEXT", "field_26518", "EXPIRES_IN_LESS_THAN_A_DAY_TEXT", "f_89969_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#EXPIRES_IN_LESS_THAN_A_DAY_TEXT
    [[maybe_unused]] static void set_field_EXPIRES_IN_LESS_THAN_A_DAY_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("E", "SUBSCRIPTION_LESS_THAN_A_DAY_TEXT", "field_26518", "EXPIRES_IN_LESS_THAN_A_DAY_TEXT", "f_89969_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#UNKNOWN_TEXT
    [[maybe_unused]] static jobject get_field_UNKNOWN_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "UNKNOWN", "field_34033", "UNKNOWN_TEXT", "f_182537_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#UNKNOWN_TEXT
    [[maybe_unused]] static void set_field_UNKNOWN_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("F", "UNKNOWN", "field_34033", "UNKNOWN_TEXT", "f_182537_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#RECURRING_INFO_TEXT
    [[maybe_unused]] static jobject get_field_RECURRING_INFO_TEXT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "RECURRING_INFO", "field_43152", "RECURRING_INFO_TEXT", "f_276373_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#RECURRING_INFO_TEXT
    [[maybe_unused]] static void set_field_RECURRING_INFO_TEXT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("G", "RECURRING_INFO", "field_43152", "RECURRING_INFO_TEXT", "f_276373_"), "Lwz;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#parent
    static jobject get_field_parent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "lastScreen", "field_20147", "parent", "f_89974_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#parent
    static void set_field_parent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("H", "lastScreen", "field_20147", "parent", "f_89974_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#serverData
    static jobject get_field_serverData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "serverData", "field_20148", "serverData", "f_89975_"), "Lfcp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#serverData
    static void set_field_serverData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("I", "serverData", "field_20148", "serverData", "f_89975_"), "Lfcp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#mainScreen
    static jobject get_field_mainScreen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "mainScreen", "field_20149", "mainScreen", "f_89976_"), "Lfod;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#mainScreen
    static void set_field_mainScreen(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("J", "mainScreen", "field_20149", "mainScreen", "f_89976_"), "Lfod;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#daysLeft
    static jobject get_field_daysLeft(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "daysLeft", "field_20157", "daysLeft", "f_89960_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#daysLeft
    static void set_field_daysLeft(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("K", "daysLeft", "field_20157", "daysLeft", "f_89960_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#startDate
    static jobject get_field_startDate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("L", "startDate", "field_20158", "startDate", "f_89961_"), "Lwz;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#startDate
    static void set_field_startDate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("L", "startDate", "field_20158", "startDate", "f_89961_"), "Lwz;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("M", "type", "field_20159", "type", "f_89962_"), "Lfda$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.gui.screen.RealmsSubscriptionInfoScreen#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("M", "type", "field_20159", "type", "f_89962_"), "Lfda$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("aT_", "init", "method_25426", "init", "m_7856_"), "()V");
    }

    static void init(const jobject& obj) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getNarratedTitle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getNarrationMessage", "method_25435", "getNarratedTitle", "m_142562_"), "()Lwz;");
    }

    static jobject getNarratedTitle(const jobject& obj) {
                
       const auto methodID = methodID_getNarratedTitle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_onDeletionConfirmed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("C", "deleteRealm", "method_25271", "onDeletionConfirmed", "m_90011_"), "()V");
    }

    static void onDeletionConfirmed(const jobject& obj) {
                
       const auto methodID = methodID_onDeletionConfirmed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSubscription() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getSubscription", "method_21500", "getSubscription", "m_89989_"), "(J)V");
    }

    static void getSubscription(const jobject& obj, const jlong& arg0) {
                
       const auto methodID = methodID_getSubscription();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_localPresentation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "localPresentation", "method_21502", "localPresentation", "m_182538_"), "(J)Lwz;");
    }

    static jobject localPresentation(const jlong& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_localPresentation();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "onClose", "method_25419", "close", "m_7379_"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_render() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "render", "method_25394", "render", "m_88315_"), "(Lfhz;IIF)V");
    }

    static void render(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jfloat& arg3) {
                
       const auto methodID = methodID_render();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_daysLeftPresentation() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "daysLeftPresentation", "method_21499", "daysLeftPresentation", "m_89983_"), "(I)Lwz;");
    }

    static jobject daysLeftPresentation(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_daysLeftPresentation();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_GUI_SCREEN_REALMSSUBSCRIPTIONINFOSCREEN_HPP