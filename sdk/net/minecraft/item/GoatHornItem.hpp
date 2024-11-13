// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_GOATHORNITEM_HPP
#define NET_MINECRAFT_ITEM_GOATHORNITEM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.GoatHornItem
 * Remapped: cuj
 */
namespace GoatHornItem {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cuj", "net/minecraft/world/item/InstrumentItem", "net/minecraft/class_7430", "net/minecraft/item/GoatHornItem", "net/minecraft/src/C_213080_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.GoatHornItem#instrumentTag
    static jobject get_field_instrumentTag(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "instruments", "field_39123", "instrumentTag", "f_220097_"), "Lawu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.GoatHornItem#instrumentTag
    static void set_field_instrumentTag(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "instruments", "field_39123", "instrumentTag", "f_220097_"), "Lawu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_appendTooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "appendHoverText", "method_7851", "appendTooltip", "m_7373_"), "(Lcuq;Lcul$b;Ljava/util/List;Lcwm;)V");
    }

    static void appendTooltip(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_appendTooltip();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getStackForInstrument() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_43558", "getStackForInstrument", "m_220107_"), "(Lcul;Ljm;)Lcuq;");
    }

    static jobject getStackForInstrument(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getStackForInstrument();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setRandomInstrumentFromTag() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "setRandom", "method_43562", "setRandomInstrumentFromTag", "m_220110_"), "(Lcuq;Lawu;Layw;)V");
    }

    static void setRandomInstrumentFromTag(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_setRandomInstrumentFromTag();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_use() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "use", "method_7836", "use", "m_7203_"), "(Ldcw;Lcmx;Lbqq;)Lbqs;");
    }

    static jobject use(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_use();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getMaxUseTime() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getUseDuration", "method_7881", "getMaxUseTime", "m_8105_"), "(Lcuq;Lbtn;)I");
    }

    static jint getMaxUseTime(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getMaxUseTime();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getInstrument() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getInstrument", "method_43711", "getInstrument", "m_220134_"), "(Lcuq;)Ljava/util/Optional;");
    }

    static jobject getInstrument(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getInstrument();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getUseAction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getUseAnimation", "method_7853", "getUseAction", "m_6164_"), "(Lcuq;)Lcwo;");
    }

    static jobject getUseAction(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getUseAction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_playSound() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "play", "method_43563", "playSound", "m_220126_"), "(Ldcw;Lcmx;Lcui;)V");
    }

    static void playSound(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_playSound();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_ITEM_GOATHORNITEM_HPP