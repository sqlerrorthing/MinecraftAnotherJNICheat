// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_BUNDLEITEM_HPP
#define NET_MINECRAFT_ITEM_BUNDLEITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.BundleItem
 * Remapped: csw
 */
namespace BundleItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("csw", "net/minecraft/world/item/BundleItem", "net/minecraft/class_5537", "net/minecraft/item/BundleItem", "net/minecraft/src/C_141169_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.item.BundleItem#ITEM_BAR_COLOR
    [[maybe_unused]] static jint get_field_ITEM_BAR_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BAR_COLOR", "field_27016", "ITEM_BAR_COLOR", "f_150723_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.item.BundleItem#ITEM_BAR_COLOR
    [[maybe_unused]] static void set_field_ITEM_BAR_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "BAR_COLOR", "field_27016", "ITEM_BAR_COLOR", "f_150723_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.item.BundleItem#field_51352
    [[maybe_unused]] static jint get_field_field_51352() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TOOLTIP_MAX_WEIGHT", "field_51352", "field_51352", "f_316822_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.item.BundleItem#field_51352
    [[maybe_unused]] static void set_field_field_51352(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "TOOLTIP_MAX_WEIGHT", "field_51352", "field_51352", "f_316822_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_getAmountFilled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "getFullnessDisplay", "method_31561", "getAmountFilled", "m_150766_"), "(Lcuq;)F");
    }

    static jfloat getAmountFilled(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getAmountFilled();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_onStackClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "overrideStackedOnOther", "method_31565", "onStackClicked", "m_142207_"), "(Lcuq;Lcrq;Lcqd;Lcmx;)Z");
    }

    static jboolean onStackClicked(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_onStackClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onClicked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "overrideOtherStackedOnMe", "method_31566", "onClicked", "m_142305_"), "(Lcuq;Lcuq;Lcrq;Lcqd;Lcmx;Lbug;)Z");
    }

    static jboolean onClicked(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_onClicked();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_use() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "use", "method_7836", "use", "m_7203_"), "(Ldcw;Lcmx;Lbqq;)Lbqs;");
    }

    static jobject use(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_use();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isItemBarVisible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isBarVisible", "method_31567", "isItemBarVisible", "m_142522_"), "(Lcuq;)Z");
    }

    static jboolean isItemBarVisible(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isItemBarVisible();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getItemBarStep() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getBarWidth", "method_31569", "getItemBarStep", "m_142158_"), "(Lcuq;)I");
    }

    static jint getItemBarStep(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getItemBarStep();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getItemBarColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getBarColor", "method_31571", "getItemBarColor", "m_142159_"), "(Lcuq;)I");
    }

    static jint getItemBarColor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getItemBarColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_dropAllBundledItems() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "dropContents", "method_32757", "dropAllBundledItems", "m_150729_"), "(Lcuq;Lcmx;)Z");
    }

    static jboolean dropAllBundledItems(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_dropAllBundledItems();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getTooltipData() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getTooltipImage", "method_32346", "getTooltipData", "m_142422_"), "(Lcuq;)Ljava/util/Optional;");
    }

    static jobject getTooltipData(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTooltipData();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_appendTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "appendHoverText", "method_7851", "appendTooltip", "m_7373_"), "(Lcuq;Lcul$b;Ljava/util/List;Lcwm;)V");
    }

    static void appendTooltip(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_appendTooltip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_onItemEntityDestroyed() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "onDestroyed", "method_33261", "onItemEntityDestroyed", "m_142023_"), "(Lcjh;)V");
    }

    static void onItemEntityDestroyed(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onItemEntityDestroyed();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playRemoveOneSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "playRemoveOneSound", "method_38074", "playRemoveOneSound", "m_186342_"), "(Lbsr;)V");
    }

    static void playRemoveOneSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playRemoveOneSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playInsertSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "playInsertSound", "method_38076", "playInsertSound", "m_186351_"), "(Lbsr;)V");
    }

    static void playInsertSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playInsertSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playDropContentsSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "playDropContentsSound", "method_38077", "playDropContentsSound", "m_186353_"), "(Lbsr;)V");
    }

    static void playDropContentsSound(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_playDropContentsSound();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_BUNDLEITEM_HPP