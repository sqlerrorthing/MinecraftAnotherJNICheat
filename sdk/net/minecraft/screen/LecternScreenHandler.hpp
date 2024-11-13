// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_LECTERNSCREENHANDLER_HPP
#define NET_MINECRAFT_SCREEN_LECTERNSCREENHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.LecternScreenHandler
 * Remapped: cqz
 */
namespace LecternScreenHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqz", "net/minecraft/world/inventory/LecternMenu", "net/minecraft/class_3916", "net/minecraft/screen/LecternScreenHandler", "net/minecraft/src/C_1281_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.screen.LecternScreenHandler#field_30824
    [[maybe_unused]] static jint get_field_field_30824() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DATA_COUNT", "field_30824", "field_30824", "f_150610_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.LecternScreenHandler#field_30824
    [[maybe_unused]] static void set_field_field_30824(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "DATA_COUNT", "field_30824", "field_30824", "f_150610_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.LecternScreenHandler#field_30825
    [[maybe_unused]] static jint get_field_field_30825() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SLOT_COUNT", "field_30825", "field_30825", "f_150611_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.LecternScreenHandler#field_30825
    [[maybe_unused]] static void set_field_field_30825(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "SLOT_COUNT", "field_30825", "field_30825", "f_150611_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.LecternScreenHandler#PREVIOUS_PAGE_BUTTON_ID
    [[maybe_unused]] static jint get_field_PREVIOUS_PAGE_BUTTON_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BUTTON_PREV_PAGE", "field_30820", "PREVIOUS_PAGE_BUTTON_ID", "f_150606_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.LecternScreenHandler#PREVIOUS_PAGE_BUTTON_ID
    [[maybe_unused]] static void set_field_PREVIOUS_PAGE_BUTTON_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "BUTTON_PREV_PAGE", "field_30820", "PREVIOUS_PAGE_BUTTON_ID", "f_150606_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.LecternScreenHandler#NEXT_PAGE_BUTTON_ID
    [[maybe_unused]] static jint get_field_NEXT_PAGE_BUTTON_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BUTTON_NEXT_PAGE", "field_30821", "NEXT_PAGE_BUTTON_ID", "f_150607_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.LecternScreenHandler#NEXT_PAGE_BUTTON_ID
    [[maybe_unused]] static void set_field_NEXT_PAGE_BUTTON_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "BUTTON_NEXT_PAGE", "field_30821", "NEXT_PAGE_BUTTON_ID", "f_150607_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.LecternScreenHandler#TAKE_BOOK_BUTTON_ID
    [[maybe_unused]] static jint get_field_TAKE_BOOK_BUTTON_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "BUTTON_TAKE_BOOK", "field_30822", "TAKE_BOOK_BUTTON_ID", "f_150608_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.LecternScreenHandler#TAKE_BOOK_BUTTON_ID
    [[maybe_unused]] static void set_field_TAKE_BOOK_BUTTON_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "BUTTON_TAKE_BOOK", "field_30822", "TAKE_BOOK_BUTTON_ID", "f_150608_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.LecternScreenHandler#BASE_JUMP_TO_PAGE_BUTTON_ID
    [[maybe_unused]] static jint get_field_BASE_JUMP_TO_PAGE_BUTTON_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "BUTTON_PAGE_JUMP_RANGE_START", "field_30823", "BASE_JUMP_TO_PAGE_BUTTON_ID", "f_150609_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.LecternScreenHandler#BASE_JUMP_TO_PAGE_BUTTON_ID
    [[maybe_unused]] static void set_field_BASE_JUMP_TO_PAGE_BUTTON_ID(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "BUTTON_PAGE_JUMP_RANGE_START", "field_30823", "BASE_JUMP_TO_PAGE_BUTTON_ID", "f_150609_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.screen.LecternScreenHandler#inventory
    static jobject get_field_inventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "lectern", "field_17313", "inventory", "f_39819_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.LecternScreenHandler#inventory
    static void set_field_inventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "lectern", "field_17313", "inventory", "f_39819_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.LecternScreenHandler#propertyDelegate
    static jobject get_field_propertyDelegate(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "lecternData", "field_17314", "propertyDelegate", "f_39820_"), "Lcqf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.LecternScreenHandler#propertyDelegate
    static void set_field_propertyDelegate(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "lecternData", "field_17314", "propertyDelegate", "f_39820_"), "Lcqf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_onButtonClick() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clickMenuButton", "method_7604", "onButtonClick", "m_6366_"), "(Lcmx;I)Z");
    }

    static jboolean onButtonClick(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_onButtonClick();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_quickMove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "quickMoveStack", "method_7601", "quickMove", "m_7648_"), "(Lcmx;I)Lcuq;");
    }

    static jobject quickMove(const jobject& obj, const jobject& arg0, const jint& arg1) {
                
       const auto methodID = methodID_quickMove();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setProperty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setData", "method_7606", "setProperty", "m_7511_"), "(II)V");
    }

    static void setProperty(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_setProperty();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_canUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stillValid", "method_7597", "canUse", "m_6875_"), "(Lcmx;)Z");
    }

    static jboolean canUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBookItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getBook", "method_17418", "getBookItem", "m_39835_"), "()Lcuq;");
    }

    static jobject getBookItem(const jobject& obj) {
                
       const auto methodID = methodID_getBookItem();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getPage", "method_17419", "getPage", "m_39836_"), "()I");
    }

    static jint getPage(const jobject& obj) {
                
       const auto methodID = methodID_getPage();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_LECTERNSCREENHANDLER_HPP