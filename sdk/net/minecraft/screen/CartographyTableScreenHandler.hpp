// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_CARTOGRAPHYTABLESCREENHANDLER_HPP
#define NET_MINECRAFT_SCREEN_CARTOGRAPHYTABLESCREENHANDLER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.CartographyTableScreenHandler
 * Remapped: cqb
 */
namespace CartographyTableScreenHandler {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqb", "net/minecraft/world/inventory/CartographyTableMenu", "net/minecraft/class_3910", "net/minecraft/screen/CartographyTableScreenHandler", "net/minecraft/src/C_1238_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.screen.CartographyTableScreenHandler#MAP_SLOT_INDEX
    [[maybe_unused]] static jint get_field_MAP_SLOT_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "MAP_SLOT", "field_30773", "MAP_SLOT_INDEX", "f_150501_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.CartographyTableScreenHandler#MAP_SLOT_INDEX
    [[maybe_unused]] static void set_field_MAP_SLOT_INDEX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "MAP_SLOT", "field_30773", "MAP_SLOT_INDEX", "f_150501_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.CartographyTableScreenHandler#MATERIAL_SLOT_INDEX
    [[maybe_unused]] static jint get_field_MATERIAL_SLOT_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ADDITIONAL_SLOT", "field_30774", "MATERIAL_SLOT_INDEX", "f_150502_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.CartographyTableScreenHandler#MATERIAL_SLOT_INDEX
    [[maybe_unused]] static void set_field_MATERIAL_SLOT_INDEX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "ADDITIONAL_SLOT", "field_30774", "MATERIAL_SLOT_INDEX", "f_150502_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.screen.CartographyTableScreenHandler#RESULT_SLOT_INDEX
    [[maybe_unused]] static jint get_field_RESULT_SLOT_INDEX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "RESULT_SLOT", "field_30775", "RESULT_SLOT_INDEX", "f_150503_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.screen.CartographyTableScreenHandler#RESULT_SLOT_INDEX
    [[maybe_unused]] static void set_field_RESULT_SLOT_INDEX(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "RESULT_SLOT", "field_30775", "RESULT_SLOT_INDEX", "f_150503_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.CartographyTableScreenHandler#INVENTORY_START
    [[maybe_unused]] static jint get_field_INVENTORY_START() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "INV_SLOT_START", "field_30776", "INVENTORY_START", "f_150504_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.CartographyTableScreenHandler#INVENTORY_START
    [[maybe_unused]] static void set_field_INVENTORY_START(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "INV_SLOT_START", "field_30776", "INVENTORY_START", "f_150504_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.CartographyTableScreenHandler#INVENTORY_END
    [[maybe_unused]] static jint get_field_INVENTORY_END() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "INV_SLOT_END", "field_30777", "INVENTORY_END", "f_150505_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.CartographyTableScreenHandler#INVENTORY_END
    [[maybe_unused]] static void set_field_INVENTORY_END(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "INV_SLOT_END", "field_30777", "INVENTORY_END", "f_150505_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.CartographyTableScreenHandler#HOTBAR_START
    [[maybe_unused]] static jint get_field_HOTBAR_START() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "USE_ROW_SLOT_START", "field_30778", "HOTBAR_START", "f_150506_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.CartographyTableScreenHandler#HOTBAR_START
    [[maybe_unused]] static void set_field_HOTBAR_START(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "USE_ROW_SLOT_START", "field_30778", "HOTBAR_START", "f_150506_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.screen.CartographyTableScreenHandler#HOTBAR_END
    [[maybe_unused]] static jint get_field_HOTBAR_END() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "USE_ROW_SLOT_END", "field_30779", "HOTBAR_END", "f_150507_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.screen.CartographyTableScreenHandler#HOTBAR_END
    [[maybe_unused]] static void set_field_HOTBAR_END(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "USE_ROW_SLOT_END", "field_30779", "HOTBAR_END", "f_150507_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.screen.CartographyTableScreenHandler#context
    static jobject get_field_context(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "access", "field_17294", "context", "f_39136_"), "Lcqg;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.CartographyTableScreenHandler#context
    static void set_field_context(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("s", "access", "field_17294", "context", "f_39136_"), "Lcqg;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.screen.CartographyTableScreenHandler#lastTakeResultTime
    static jlong get_field_lastTakeResultTime(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "lastSoundTime", "field_20382", "lastTakeResultTime", "f_39137_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static default field net.minecraft.screen.CartographyTableScreenHandler#lastTakeResultTime
    static void set_field_lastTakeResultTime(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("t", "lastSoundTime", "field_20382", "lastTakeResultTime", "f_39137_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.screen.CartographyTableScreenHandler#inventory
    static jobject get_field_inventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "container", "field_17293", "inventory", "f_39135_"), "Lbqk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.screen.CartographyTableScreenHandler#inventory
    static void set_field_inventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "container", "field_17293", "inventory", "f_39135_"), "Lbqk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.CartographyTableScreenHandler#resultInventory
    static jobject get_field_resultInventory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "resultContainer", "field_19272", "resultInventory", "f_39138_"), "Lcrl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.CartographyTableScreenHandler#resultInventory
    static void set_field_resultInventory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("u", "resultContainer", "field_19272", "resultInventory", "f_39138_"), "Lcrl;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_canUse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stillValid", "method_7597", "canUse", "m_6875_"), "(Lcmx;)Z");
    }

    static jboolean canUse(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_canUse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onContentChanged() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotsChanged", "method_7609", "onContentChanged", "m_6199_"), "(Lbqk;)V");
    }

    static void onContentChanged(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onContentChanged();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updateResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setupResultSlot", "method_17381", "updateResult", "m_39162_"), "(Lcuq;Lcuq;Lcuq;)V");
    }

    static void updateResult(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_updateResult();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_canInsertIntoSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canTakeItemForPickAll", "method_7613", "canInsertIntoSlot", "m_5882_"), "(Lcuq;Lcrq;)Z");
    }

    static jboolean canInsertIntoSlot(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canInsertIntoSlot();
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
    
    static jmethodID methodID_onClosed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "removed", "method_7595", "onClosed", "m_6877_"), "(Lcmx;)V");
    }

    static void onClosed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onClosed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_CARTOGRAPHYTABLESCREENHANDLER_HPP