// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SCREEN_SLOT_FORGINGSLOTSMANAGER$FORGINGSLOT_HPP
#define NET_MINECRAFT_SCREEN_SLOT_FORGINGSLOTSMANAGER$FORGINGSLOT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot
 * Remapped: cqy$b
 */
namespace ForgingSlotsManager$ForgingSlot {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cqy$b", "net/minecraft/world/inventory/ItemCombinerMenuSlotDefinition$SlotDefinition", "net/minecraft/class_8047$class_8049", "net/minecraft/screen/slot/ForgingSlotsManager$ForgingSlot", "net/minecraft/src/C_265801_$C_265829_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#slotId
    static jint get_field_slotId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "slotIndex", "comp_1204", "slotId", "f_266086_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#slotId
    static void set_field_slotId(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "slotIndex", "comp_1204", "slotId", "f_266086_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#x
    static jint get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "comp_1205", "x", "f_266065_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#x
    static void set_field_x(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "x", "comp_1205", "x", "f_266065_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#y
    static jint get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "comp_1206", "y", "f_265926_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#y
    static void set_field_y(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "y", "comp_1206", "y", "f_265926_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#mayPlace
    static jobject get_field_mayPlace(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "mayPlace", "comp_1207", "mayPlace", "f_265897_"), "Ljava/util/function/Predicate;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#mayPlace
    static void set_field_mayPlace(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "mayPlace", "comp_1207", "mayPlace", "f_265897_"), "Ljava/util/function/Predicate;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static default field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "EMPTY", "field_41911", "DEFAULT", "f_266077_"), "Lcqy$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.screen.slot.ForgingSlotsManager$ForgingSlot#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "EMPTY", "field_41911", "DEFAULT", "f_266077_"), "Lcqy$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID__slotId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "slotIndex", "comp_1204", "slotId", "f_266086_"), "()I");
    }

    static jint _slotId(const jobject& obj) {
                
       const auto methodID = methodID__slotId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__x() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "x", "comp_1205", "x", "f_266065_"), "()I");
    }

    static jint _x(const jobject& obj) {
                
       const auto methodID = methodID__x();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__y() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "y", "comp_1206", "y", "f_265926_"), "()I");
    }

    static jint _y(const jobject& obj) {
                
       const auto methodID = methodID__y();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__mayPlace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "mayPlace", "comp_1207", "mayPlace", "f_265897_"), "()Ljava/util/function/Predicate;");
    }

    static jobject _mayPlace(const jobject& obj) {
                
       const auto methodID = methodID__mayPlace();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_SCREEN_SLOT_FORGINGSLOTSMANAGER$FORGINGSLOT_HPP