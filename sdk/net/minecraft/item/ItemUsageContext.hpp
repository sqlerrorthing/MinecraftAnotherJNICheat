// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ITEMUSAGECONTEXT_HPP
#define NET_MINECRAFT_ITEM_ITEMUSAGECONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.ItemUsageContext
 * Remapped: cyf
 */
namespace ItemUsageContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cyf", "net/minecraft/world/item/context/UseOnContext", "net/minecraft/class_1838", "net/minecraft/item/ItemUsageContext", "net/minecraft/src/C_1450_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.ItemUsageContext#player
    static jobject get_field_player(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "player", "field_8942", "player", "f_43703_"), "Lcmx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ItemUsageContext#player
    static void set_field_player(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "player", "field_8942", "player", "f_43703_"), "Lcmx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.ItemUsageContext#hand
    static jobject get_field_hand(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "hand", "field_19176", "hand", "f_43704_"), "Lbqq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ItemUsageContext#hand
    static void set_field_hand(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "hand", "field_19176", "hand", "f_43704_"), "Lbqq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.ItemUsageContext#hit
    static jobject get_field_hit(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hitResult", "field_17543", "hit", "f_43705_"), "Lewy;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ItemUsageContext#hit
    static void set_field_hit(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "hitResult", "field_17543", "hit", "f_43705_"), "Lewy;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.ItemUsageContext#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "level", "field_8945", "world", "f_43706_"), "Ldcw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ItemUsageContext#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "level", "field_8945", "world", "f_43706_"), "Ldcw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.ItemUsageContext#stack
    static jobject get_field_stack(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "itemStack", "field_8941", "stack", "f_43707_"), "Lcuq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.ItemUsageContext#stack
    static void set_field_stack(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "itemStack", "field_8941", "stack", "f_43707_"), "Lcuq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getHitResult() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getHitResult", "method_30344", "getHitResult", "m_43718_"), "()Lewy;");
    }

    static jobject getHitResult(const jobject& obj) {
                
       const auto methodID = methodID_getHitResult();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getBlockPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getClickedPos", "method_8037", "getBlockPos", "m_8083_"), "()Ljd;");
    }

    static jobject getBlockPos(const jobject& obj) {
                
       const auto methodID = methodID_getBlockPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getClickedFace", "method_8038", "getSide", "m_43719_"), "()Lji;");
    }

    static jobject getSide(const jobject& obj) {
                
       const auto methodID = methodID_getSide();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHitPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getClickLocation", "method_17698", "getHitPos", "m_43720_"), "()Lexc;");
    }

    static jobject getHitPos(const jobject& obj) {
                
       const auto methodID = methodID_getHitPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_hitsInsideBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "isInside", "method_17699", "hitsInsideBlock", "m_43721_"), "()Z");
    }

    static jboolean hitsInsideBlock(const jobject& obj) {
                
       const auto methodID = methodID_hitsInsideBlock();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "getItemInHand", "method_8041", "getStack", "m_43722_"), "()Lcuq;");
    }

    static jobject getStack(const jobject& obj) {
                
       const auto methodID = methodID_getStack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlayer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "getPlayer", "method_8036", "getPlayer", "m_43723_"), "()Lcmx;");
    }

    static jobject getPlayer(const jobject& obj) {
                
       const auto methodID = methodID_getPlayer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHand() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "getHand", "method_20287", "getHand", "m_43724_"), "()Lbqq;");
    }

    static jobject getHand(const jobject& obj) {
                
       const auto methodID = methodID_getHand();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("q", "getLevel", "method_8045", "getWorld", "m_43725_"), "()Ldcw;");
    }

    static jobject getWorld(const jobject& obj) {
                
       const auto methodID = methodID_getWorld();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getHorizontalPlayerFacing() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getHorizontalDirection", "method_8042", "getHorizontalPlayerFacing", "m_8125_"), "()Lji;");
    }

    static jobject getHorizontalPlayerFacing(const jobject& obj) {
                
       const auto methodID = methodID_getHorizontalPlayerFacing();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_shouldCancelInteraction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "isSecondaryUseActive", "method_8046", "shouldCancelInteraction", "m_7078_"), "()Z");
    }

    static jboolean shouldCancelInteraction(const jobject& obj) {
                
       const auto methodID = methodID_shouldCancelInteraction();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPlayerYaw() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getRotation", "method_8044", "getPlayerYaw", "m_7074_"), "()F");
    }

    static jfloat getPlayerYaw(const jobject& obj) {
                
       const auto methodID = methodID_getPlayerYaw();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ITEMUSAGECONTEXT_HPP