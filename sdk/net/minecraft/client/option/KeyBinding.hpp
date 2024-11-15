// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_OPTION_KEYBINDING_HPP
#define NET_MINECRAFT_CLIENT_OPTION_KEYBINDING_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.option.CKeyBinding
 * Remapped: fgm
 */
namespace CKeyBinding {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fgm", "net/minecraft/client/KeyMapping", "net/minecraft/class_304", "net/minecraft/client/option/CKeyBinding", "net/minecraft/src/C_3387_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.client.option.CKeyBinding#KEYS_BY_ID
    [[maybe_unused]] static jobject get_field_KEYS_BY_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ALL", "field_1657", "KEYS_BY_ID", "f_90809_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#KEYS_BY_ID
    [[maybe_unused]] static void set_field_KEYS_BY_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "ALL", "field_1657", "KEYS_BY_ID", "f_90809_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.option.CKeyBinding#KEY_TO_BINDINGS
    [[maybe_unused]] static jobject get_field_KEY_TO_BINDINGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAP", "field_1658", "KEY_TO_BINDINGS", "f_90810_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#KEY_TO_BINDINGS
    [[maybe_unused]] static void set_field_KEY_TO_BINDINGS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "MAP", "field_1658", "KEY_TO_BINDINGS", "f_90810_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.option.CKeyBinding#KEY_CATEGORIES
    [[maybe_unused]] static jobject get_field_KEY_CATEGORIES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "CATEGORIES", "field_1652", "KEY_CATEGORIES", "f_90811_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#KEY_CATEGORIES
    [[maybe_unused]] static void set_field_KEY_CATEGORIES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "CATEGORIES", "field_1652", "KEY_CATEGORIES", "f_90811_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.CKeyBinding#MOVEMENT_CATEGORY
    [[maybe_unused]] static jobject get_field_MOVEMENT_CATEGORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CATEGORY_MOVEMENT", "field_32136", "MOVEMENT_CATEGORY", "f_167805_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.CKeyBinding#MOVEMENT_CATEGORY
    [[maybe_unused]] static void set_field_MOVEMENT_CATEGORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CATEGORY_MOVEMENT", "field_32136", "MOVEMENT_CATEGORY", "f_167805_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.CKeyBinding#MISC_CATEGORY
    [[maybe_unused]] static jobject get_field_MISC_CATEGORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CATEGORY_MISC", "field_32137", "MISC_CATEGORY", "f_167806_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.CKeyBinding#MISC_CATEGORY
    [[maybe_unused]] static void set_field_MISC_CATEGORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CATEGORY_MISC", "field_32137", "MISC_CATEGORY", "f_167806_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.CKeyBinding#MULTIPLAYER_CATEGORY
    [[maybe_unused]] static jobject get_field_MULTIPLAYER_CATEGORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CATEGORY_MULTIPLAYER", "field_32138", "MULTIPLAYER_CATEGORY", "f_167807_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.CKeyBinding#MULTIPLAYER_CATEGORY
    [[maybe_unused]] static void set_field_MULTIPLAYER_CATEGORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CATEGORY_MULTIPLAYER", "field_32138", "MULTIPLAYER_CATEGORY", "f_167807_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.CKeyBinding#GAMEPLAY_CATEGORY
    [[maybe_unused]] static jobject get_field_GAMEPLAY_CATEGORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CATEGORY_GAMEPLAY", "field_32139", "GAMEPLAY_CATEGORY", "f_167808_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.CKeyBinding#GAMEPLAY_CATEGORY
    [[maybe_unused]] static void set_field_GAMEPLAY_CATEGORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CATEGORY_GAMEPLAY", "field_32139", "GAMEPLAY_CATEGORY", "f_167808_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.CKeyBinding#INVENTORY_CATEGORY
    [[maybe_unused]] static jobject get_field_INVENTORY_CATEGORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CATEGORY_INVENTORY", "field_32140", "INVENTORY_CATEGORY", "f_167809_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.CKeyBinding#INVENTORY_CATEGORY
    [[maybe_unused]] static void set_field_INVENTORY_CATEGORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CATEGORY_INVENTORY", "field_32140", "INVENTORY_CATEGORY", "f_167809_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.CKeyBinding#UI_CATEGORY
    [[maybe_unused]] static jobject get_field_UI_CATEGORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CATEGORY_INTERFACE", "field_32141", "UI_CATEGORY", "f_167810_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.CKeyBinding#UI_CATEGORY
    [[maybe_unused]] static void set_field_UI_CATEGORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CATEGORY_INTERFACE", "field_32141", "UI_CATEGORY", "f_167810_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.option.CKeyBinding#CREATIVE_CATEGORY
    [[maybe_unused]] static jobject get_field_CREATIVE_CATEGORY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CATEGORY_CREATIVE", "field_32142", "CREATIVE_CATEGORY", "f_167811_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.option.CKeyBinding#CREATIVE_CATEGORY
    [[maybe_unused]] static void set_field_CREATIVE_CATEGORY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "CATEGORY_CREATIVE", "field_32142", "CREATIVE_CATEGORY", "f_167811_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.option.CKeyBinding#CATEGORY_ORDER_MAP
    [[maybe_unused]] static jobject get_field_CATEGORY_ORDER_MAP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CATEGORY_SORT_ORDER", "field_1656", "CATEGORY_ORDER_MAP", "f_90812_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#CATEGORY_ORDER_MAP
    [[maybe_unused]] static void set_field_CATEGORY_ORDER_MAP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "CATEGORY_SORT_ORDER", "field_1656", "CATEGORY_ORDER_MAP", "f_90812_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.CKeyBinding#translationKey
    static jobject get_field_translationKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "name", "field_1660", "translationKey", "f_90813_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#translationKey
    static void set_field_translationKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "name", "field_1660", "translationKey", "f_90813_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.CKeyBinding#defaultKey
    static jobject get_field_defaultKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "defaultKey", "field_1654", "defaultKey", "f_90814_"), "Lfae$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#defaultKey
    static void set_field_defaultKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "defaultKey", "field_1654", "defaultKey", "f_90814_"), "Lfae$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.CKeyBinding#category
    static jobject get_field_category(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "category", "field_1659", "category", "f_90815_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#category
    static void set_field_category(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "category", "field_1659", "category", "f_90815_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.CKeyBinding#boundKey
    static jobject get_field_boundKey(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "key", "field_1655", "boundKey", "f_90816_"), "Lfae$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#boundKey
    static void set_field_boundKey(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "key", "field_1655", "boundKey", "f_90816_"), "Lfae$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.CKeyBinding#pressed
    static jboolean get_field_pressed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "isDown", "field_1653", "pressed", "f_90817_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#pressed
    static void set_field_pressed(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "isDown", "field_1653", "pressed", "f_90817_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.option.CKeyBinding#timesPressed
    static jint get_field_timesPressed(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "clickCount", "field_1661", "timesPressed", "f_90818_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.option.CKeyBinding#timesPressed
    static void set_field_timesPressed(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "clickCount", "field_1661", "timesPressed", "f_90818_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_onKeyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "click", "method_1420", "onKeyPressed", "m_90835_"), "(Lfae$a;)V");
    }

    static void onKeyPressed(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_onKeyPressed();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_setKeyPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "set", "method_1416", "setKeyPressed", "m_90837_"), "(Lfae$a;Z)V");
    }

    static void setKeyPressed(const jobject& arg0, const jboolean& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_setKeyPressed();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_updatePressedStates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setAll", "method_1424", "updatePressedStates", "m_90829_"), "()V");
    }

    static void updatePressedStates() {
       const auto clazz = self();
       const auto methodID = methodID_updatePressedStates();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_unpressAll() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "releaseAll", "method_1437", "unpressAll", "m_90847_"), "()V");
    }

    static void unpressAll() {
       const auto clazz = self();
       const auto methodID = methodID_unpressAll();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_untoggleStickyKeys() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "resetToggleKeys", "method_52231", "untoggleStickyKeys", "m_289723_"), "()V");
    }

    static void untoggleStickyKeys() {
       const auto clazz = self();
       const auto methodID = methodID_untoggleStickyKeys();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_updateKeysByCode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "resetMapping", "method_1426", "updateKeysByCode", "m_90854_"), "()V");
    }

    static void updateKeysByCode() {
       const auto clazz = self();
       const auto methodID = methodID_updateKeysByCode();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID);
    };
    
    static jmethodID methodID_isPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isDown", "method_1434", "isPressed", "m_90857_"), "()Z");
    }

    static jboolean isPressed(const jobject& obj) {
                
       const auto methodID = methodID_isPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCategory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getCategory", "method_1423", "getCategory", "m_90858_"), "()Ljava/lang/String;");
    }

    static jobject getCategory(const jobject& obj) {
                
       const auto methodID = methodID_getCategory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_wasPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "consumeClick", "method_1436", "wasPressed", "m_90859_"), "()Z");
    }

    static jboolean wasPressed(const jobject& obj) {
                
       const auto methodID = methodID_wasPressed();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_reset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "release", "method_1425", "reset", "m_90866_"), "()V");
    }

    static void reset(const jobject& obj) {
                
       const auto methodID = methodID_reset();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "getName", "method_1431", "getTranslationKey", "m_90860_"), "()Ljava/lang/String;");
    }

    static jobject getTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDefaultKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getDefaultKey", "method_1429", "getDefaultKey", "m_90861_"), "()Lfae$a;");
    }

    static jobject getDefaultKey(const jobject& obj) {
                
       const auto methodID = methodID_getDefaultKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setBoundKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "setKey", "method_1422", "setBoundKey", "m_90848_"), "(Lfae$a;)V");
    }

    static void setBoundKey(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setBoundKey();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_compareTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compareTo", "method_1430", "compareTo", "compareTo"), "(Lfgm;)I");
    }

    static jint compareTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_compareTo();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLocalizedName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createNameSupplier", "method_1419", "getLocalizedName", "m_90842_"), "(Ljava/lang/String;)Ljava/util/function/Supplier;");
    }

    static jobject getLocalizedName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getLocalizedName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_equals() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "same", "method_1435", "equals", "m_90850_"), "(Lfgm;)Z");
    }

    static jboolean equals(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_equals();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isUnbound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "isUnbound", "method_1415", "isUnbound", "m_90862_"), "()Z");
    }

    static jboolean isUnbound(const jobject& obj) {
                
       const auto methodID = methodID_isUnbound();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_matchesKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matches", "method_1417", "matchesKey", "m_90832_"), "(II)Z");
    }

    static jboolean matchesKey(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_matchesKey();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_matchesMouse() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "matchesMouse", "method_1433", "matchesMouse", "m_90830_"), "(I)Z");
    }

    static jboolean matchesMouse(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_matchesMouse();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBoundKeyLocalizedText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getTranslatedKeyMessage", "method_16007", "getBoundKeyLocalizedText", "m_90863_"), "()Lwz;");
    }

    static jobject getBoundKeyLocalizedText(const jobject& obj) {
                
       const auto methodID = methodID_getBoundKeyLocalizedText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isDefault() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "isDefault", "method_1427", "isDefault", "m_90864_"), "()Z");
    }

    static jboolean isDefault(const jobject& obj) {
                
       const auto methodID = methodID_isDefault();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBoundKeyTranslationKey() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "saveString", "method_1428", "getBoundKeyTranslationKey", "m_90865_"), "()Ljava/lang/String;");
    }

    static jobject getBoundKeyTranslationKey(const jobject& obj) {
                
       const auto methodID = methodID_getBoundKeyTranslationKey();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_setPressed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "setDown", "method_23481", "setPressed", "m_7249_"), "(Z)V");
    }

    static void setPressed(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_setPressed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_OPTION_KEYBINDING_HPP