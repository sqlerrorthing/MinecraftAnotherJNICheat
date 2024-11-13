// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMMAND_DATACOMMANDSTORAGE$PERSISTENTSTATE_HPP
#define NET_MINECRAFT_COMMAND_DATACOMMANDSTORAGE$PERSISTENTSTATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.command.DataCommandStorage$PersistentState
 * Remapped: eqw$a
 */
namespace DataCommandStorage$PersistentState {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqw$a", "net/minecraft/world/level/storage/CommandStorage$Container", "net/minecraft/class_4565$class_4566", "net/minecraft/command/DataCommandStorage$PersistentState", "net/minecraft/src/C_2778_$C_2779_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.command.DataCommandStorage$PersistentState#CONTENTS_KEY
    [[maybe_unused]] static jobject get_field_CONTENTS_KEY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAG_CONTENTS", "field_31835", "CONTENTS_KEY", "f_164847_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.command.DataCommandStorage$PersistentState#CONTENTS_KEY
    [[maybe_unused]] static void set_field_CONTENTS_KEY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TAG_CONTENTS", "field_31835", "CONTENTS_KEY", "f_164847_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.command.DataCommandStorage$PersistentState#map
    static jobject get_field_map(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "storage", "field_20749", "map", "f_78055_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.command.DataCommandStorage$PersistentState#map
    static void set_field_map(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "storage", "field_20749", "map", "f_78055_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_readNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "load", "method_32383", "readNbt", "m_164849_"), "(Lub;)Leqw$a;");
    }

    static jobject readNbt(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_readNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "save", "method_75", "writeNbt", "m_7176_"), "(Lub;Ljo$a;)Lub;");
    }

    static jobject writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get", "method_22550", "get", "m_78058_"), "(Ljava/lang/String;)Lub;");
    }

    static jobject get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_set() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "put", "method_22552", "set", "m_78063_"), "(Ljava/lang/String;Lub;)V");
    }

    static void set(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_set();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getIds() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getKeys", "method_22554", "getIds", "m_78072_"), "(Ljava/lang/String;)Ljava/util/stream/Stream;");
    }

    static jobject getIds(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getIds();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_COMMAND_DATACOMMANDSTORAGE$PERSISTENTSTATE_HPP