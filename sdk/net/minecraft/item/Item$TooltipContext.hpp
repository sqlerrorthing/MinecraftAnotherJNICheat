// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_ITEM$TOOLTIPCONTEXT_HPP
#define NET_MINECRAFT_ITEM_ITEM$TOOLTIPCONTEXT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.Item$TooltipContext
 * Remapped: cul$b
 */
namespace Item$TooltipContext {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cul$b", "net/minecraft/world/item/Item$TooltipContext", "net/minecraft/class_1792$class_9635", "net/minecraft/item/Item$TooltipContext", "net/minecraft/src/C_1381_$C_313602_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.item.Item$TooltipContext#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_51353", "DEFAULT", "f_314080_"), "Lcul$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.Item$TooltipContext#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_51353", "DEFAULT", "f_314080_"), "Lcul$b;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getRegistryLookup() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "registries", "method_59527", "getRegistryLookup", "m_320287_"), "()Ljo$a;");
    }

    static jobject getRegistryLookup(const jobject& obj) {
                
       const auto methodID = methodID_getRegistryLookup();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getUpdateTickRate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "tickRate", "method_59531", "getUpdateTickRate", "m_319443_"), "()F");
    }

    static jfloat getUpdateTickRate(const jobject& obj) {
                
       const auto methodID = methodID_getUpdateTickRate();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getMapState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mapData", "method_59529", "getMapState", "m_319467_"), "(Leqr;)Leqt;");
    }

    static jobject getMapState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMapState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_59528", "create", "m_324510_"), "(Ldcw;)Lcul$b;");
    }

    static jobject create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_59530", "create", "m_322396_"), "(Ljo$a;)Lcul$b;");
    }

    static jobject _create(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ITEM_ITEM$TOOLTIPCONTEXT_HPP