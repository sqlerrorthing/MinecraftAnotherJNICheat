// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SLOT_FORGINGSLOTSMANAGER_HPP
#define NET_MINECRAFT_SCREEN_SLOT_FORGINGSLOTSMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.slot.ForgingSlotsManager
 * Remapped: cqy
 */
namespace ForgingSlotsManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqy", "net/minecraft/world/inventory/ItemCombinerMenuSlotDefinition", "net/minecraft/class_8047", "net/minecraft/screen/slot/ForgingSlotsManager", "net/minecraft/src/C_265801_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.screen.slot.ForgingSlotsManager#inputSlots
    static jobject get_field_inputSlots(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "slots", "field_41907", "inputSlots", "f_266033_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.ForgingSlotsManager#inputSlots
    static void set_field_inputSlots(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "slots", "field_41907", "inputSlots", "f_266033_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.slot.ForgingSlotsManager#resultSlot
    static jobject get_field_resultSlot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "resultSlot", "field_41908", "resultSlot", "f_265921_"), "Lcqy$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.ForgingSlotsManager#resultSlot
    static void set_field_resultSlot(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "resultSlot", "field_41908", "resultSlot", "f_265921_"), "Lcqy$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_48364", "create", "m_266303_"), "()Lcqy$a;");
    }

    static jobject create() {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_hasSlotIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasSlot", "method_48365", "hasSlotIndex", "m_266229_"), "(I)Z");
    }

    static jboolean hasSlotIndex(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_hasSlotIndex();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getInputSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getSlot", "method_48367", "getInputSlot", "m_266322_"), "(I)Lcqy$b;");
    }

    static jobject getInputSlot(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID_getInputSlot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getResultSlot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getResultSlot", "method_48366", "getResultSlot", "m_266349_"), "()Lcqy$b;");
    }

    static jobject getResultSlot(const jobject& obj) {
                
       const auto methodID = methodID_getResultSlot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getInputSlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSlots", "method_48368", "getInputSlots", "m_266233_"), "()Ljava/util/List;");
    }

    static jobject getInputSlots(const jobject& obj) {
                
       const auto methodID = methodID_getInputSlots();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getInputSlotCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getNumOfInputSlots", "method_48369", "getInputSlotCount", "m_266578_"), "()I");
    }

    static jint getInputSlotCount(const jobject& obj) {
                
       const auto methodID = methodID_getInputSlotCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getResultSlotIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getResultSlotIndex", "method_48370", "getResultSlotIndex", "m_266388_"), "()I");
    }

    static jint getResultSlotIndex(const jobject& obj) {
                
       const auto methodID = methodID_getResultSlotIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getInputSlotIndices() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getInputSlotIndexes", "method_48371", "getInputSlotIndices", "m_266517_"), "()Ljava/util/List;");
    }

    static jobject getInputSlotIndices(const jobject& obj) {
                
       const auto methodID = methodID_getInputSlotIndices();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SLOT_FORGINGSLOTSMANAGER_HPP