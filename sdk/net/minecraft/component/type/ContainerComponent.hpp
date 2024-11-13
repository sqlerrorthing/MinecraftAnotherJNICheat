// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_TYPE_CONTAINERCOMPONENT_HPP
#define NET_MINECRAFT_COMPONENT_TYPE_CONTAINERCOMPONENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.type.ContainerComponent
 * Remapped: cxo
 */
namespace ContainerComponent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cxo", "net/minecraft/world/item/component/ItemContainerContents", "net/minecraft/class_9288", "net/minecraft/component/type/ContainerComponent", "net/minecraft/src/C_313365_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.component.type.ContainerComponent#ALL_SLOTS_EMPTY
    [[maybe_unused]] static jint get_field_ALL_SLOTS_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NO_SLOT", "field_51410", "ALL_SLOTS_EMPTY", "f_315580_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.component.type.ContainerComponent#ALL_SLOTS_EMPTY
    [[maybe_unused]] static void set_field_ALL_SLOTS_EMPTY(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "NO_SLOT", "field_51410", "ALL_SLOTS_EMPTY", "f_315580_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.component.type.ContainerComponent#MAX_SLOTS
    [[maybe_unused]] static jint get_field_MAX_SLOTS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_SIZE", "field_49337", "MAX_SLOTS", "f_316430_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.component.type.ContainerComponent#MAX_SLOTS
    [[maybe_unused]] static void set_field_MAX_SLOTS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "MAX_SIZE", "field_49337", "MAX_SLOTS", "f_316430_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.ContainerComponent#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_49334", "DEFAULT", "f_316619_"), "Lcxo;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.ContainerComponent#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_49334", "DEFAULT", "f_316619_"), "Lcxo;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.ContainerComponent#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_49335", "CODEC", "f_315263_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.ContainerComponent#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_49335", "CODEC", "f_315263_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.ContainerComponent#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_49336", "PACKET_CODEC", "f_315529_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.ContainerComponent#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_49336", "PACKET_CODEC", "f_315529_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.ContainerComponent#stacks
    static jobject get_field_stacks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "items", "field_49338", "stacks", "f_315560_"), "Ljv;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.ContainerComponent#stacks
    static void set_field_stacks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "items", "field_49338", "stacks", "f_315560_"), "Ljv;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.ContainerComponent#hashCode
    static jint get_field_hashCode(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "hashCode", "field_51511", "hashCode", "f_316776_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.ContainerComponent#hashCode
    static void set_field_hashCode(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "hashCode", "field_51511", "hashCode", "f_316776_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_fromSlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fromSlots", "method_57496", "fromSlots", "m_323974_"), "(Ljava/util/List;)Lcxo;");
    }

    static jobject fromSlots(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromSlots();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_fromStacks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromItems", "method_57493", "fromStacks", "m_320241_"), "(Ljava/util/List;)Lcxo;");
    }

    static jobject fromStacks(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromStacks();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_findFirstNonEmptyIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("c", "findLastNonEmptySlot", "method_59713", "findFirstNonEmptyIndex", "m_321762_"), "(Ljava/util/List;)I");
    }

    static jint findFirstNonEmptyIndex(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_findFirstNonEmptyIndex();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_collectSlots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "asSlots", "method_57494", "collectSlots", "m_323947_"), "()Ljava/util/List;");
    }

    static jobject collectSlots(const jobject& obj) {
                
       const auto methodID = methodID_collectSlots();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_copyTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copyInto", "method_57492", "copyTo", "m_322022_"), "(Ljv;)V");
    }

    static void copyTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_copyTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_copyFirstStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "copyOne", "method_58114", "copyFirstStack", "m_322549_"), "()Lcuq;");
    }

    static jobject copyFirstStack(const jobject& obj) {
                
       const auto methodID = methodID_copyFirstStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "stream", "method_57489", "stream", "m_324244_"), "()Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_streamNonEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "nonEmptyStream", "method_59712", "streamNonEmpty", "m_320494_"), "()Ljava/util/stream/Stream;");
    }

    static jobject streamNonEmpty(const jobject& obj) {
                
       const auto methodID = methodID_streamNonEmpty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_iterateNonEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "nonEmptyItems", "method_59714", "iterateNonEmpty", "m_318832_"), "()Ljava/lang/Iterable;");
    }

    static jobject iterateNonEmpty(const jobject& obj) {
                
       const auto methodID = methodID_iterateNonEmpty();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_iterateNonEmptyCopy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "nonEmptyItemsCopy", "method_59715", "iterateNonEmptyCopy", "m_324961_"), "()Ljava/lang/Iterable;");
    }

    static jobject iterateNonEmptyCopy(const jobject& obj) {
                
       const auto methodID = methodID_iterateNonEmptyCopy();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_TYPE_CONTAINERCOMPONENT_HPP