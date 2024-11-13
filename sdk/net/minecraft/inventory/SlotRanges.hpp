// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_INVENTORY_SLOTRANGES_HPP
#define NET_MINECRAFT_INVENTORY_SLOTRANGES_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.inventory.SlotRanges
 * Remapped: crs
 */
namespace SlotRanges {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("crs", "net/minecraft/world/inventory/SlotRanges", "net/minecraft/class_9349", "net/minecraft/inventory/SlotRanges", "net/minecraft/src/C_313289_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.inventory.SlotRanges#SLOT_RANGES
    [[maybe_unused]] static jobject get_field_SLOT_RANGES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SLOTS", "field_49745", "SLOT_RANGES", "f_315983_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.inventory.SlotRanges#SLOT_RANGES
    [[maybe_unused]] static void set_field_SLOT_RANGES(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SLOTS", "field_49745", "SLOT_RANGES", "f_315983_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.inventory.SlotRanges#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_49744", "CODEC", "f_314179_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.inventory.SlotRanges#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_49744", "CODEC", "f_314179_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.inventory.SlotRanges#FROM_NAME
    [[maybe_unused]] static jobject get_field_FROM_NAME() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NAME_LOOKUP", "field_49746", "FROM_NAME", "f_314499_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.inventory.SlotRanges#FROM_NAME
    [[maybe_unused]] static void set_field_FROM_NAME(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NAME_LOOKUP", "field_49746", "FROM_NAME", "f_314499_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_58081", "create", "m_322348_"), "(Ljava/lang/String;I)Lcrr;");
    }

    static jobject create(const jobject& arg0, const jint& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_58082", "create", "m_320805_"), "(Ljava/lang/String;Lit/unimi/dsi/fastutil/ints/IntList;)Lcrr;");
    }

    static jobject _create(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID___create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_58083", "create", "m_321881_"), "(Ljava/lang/String;[I)Lcrr;");
    }

    static jobject __create(const jobject& arg0, const jarray& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID___create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createAndAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addSingleSlot", "method_58085", "createAndAdd", "m_323062_"), "(Ljava/util/List;Ljava/lang/String;I)V");
    }

    static void createAndAdd(const jobject& arg0, const jobject& arg1, const jint& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_createAndAdd();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__createAndAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addSlotRange", "method_58086", "createAndAdd", "m_322310_"), "(Ljava/util/List;Ljava/lang/String;II)V");
    }

    static void _createAndAdd(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID__createAndAdd();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID___createAndAdd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addSlots", "method_58087", "createAndAdd", "m_321475_"), "(Ljava/util/List;Ljava/lang/String;[I)V");
    }

    static void __createAndAdd(const jobject& arg0, const jobject& arg1, const jarray& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID___createAndAdd();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_fromName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "nameToIds", "method_58080", "fromName", "m_323685_"), "(Ljava/lang/String;)Lcrr;");
    }

    static jobject fromName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_streamNames() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "allNames", "method_58078", "streamNames", "m_321260_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamNames() {
       const auto clazz = self();
       const auto methodID = methodID_streamNames();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_streamSingleSlotNames() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "singleSlotNames", "method_58088", "streamSingleSlotNames", "m_322944_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamSingleSlotNames() {
       const auto clazz = self();
       const auto methodID = methodID_streamSingleSlotNames();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
};

#endif // NET_MINECRAFT_INVENTORY_SLOTRANGES_HPP