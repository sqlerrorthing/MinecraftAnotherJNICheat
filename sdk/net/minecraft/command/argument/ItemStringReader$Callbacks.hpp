// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTRINGREADER$CALLBACKS_HPP
#define NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTRINGREADER$CALLBACKS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.argument.ItemStringReader$Callbacks
 * Remapped: he$d
 */
namespace ItemStringReader$Callbacks {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("he$d", "net/minecraft/commands/arguments/item/ItemParser$Visitor", "net/minecraft/class_2291$class_9219", "net/minecraft/command/argument/ItemStringReader$Callbacks", "net/minecraft/src/C_4644_$C_313565_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_onItem() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitItem", "method_56853", "onItem", "m_320426_"), "(Ljm;)V");
    }

    static void onItem(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onItem();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_onComponentAdded() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitComponent", "method_57802", "onComponentAdded", "m_320689_"), "(Lkp;Ljava/lang/Object;)V");
    }

    static void onComponentAdded(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_onComponentAdded();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_onComponentRemoved() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitRemovedComponent", "method_60379", "onComponentRemoved", "m_338572_"), "(Lkp;)V");
    }

    static void onComponentRemoved(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_onComponentRemoved();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_setSuggestor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "visitSuggestions", "method_56880", "setSuggestor", "m_318806_"), "(Ljava/util/function/Function;)V");
    }

    static void setSuggestor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setSuggestor();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_ARGUMENT_ITEMSTRINGREADER$CALLBACKS_HPP