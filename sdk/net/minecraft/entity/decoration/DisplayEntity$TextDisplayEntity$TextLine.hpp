// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$TEXTLINE_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$TEXTLINE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextLine
 * Remapped: bsq$l$c
 */
namespace DisplayEntity$TextDisplayEntity$TextLine {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsq$l$c", "net/minecraft/world/entity/Display$TextDisplay$CachedLine", "net/minecraft/class_8113$class_8123$class_8126", "net/minecraft/entity/decoration/DisplayEntity$TextDisplayEntity$TextLine", "net/minecraft/src/C_268383_$C_268409_$C_268399_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextLine#contents
    static jobject get_field_contents(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "contents", "comp_1249", "contents", "f_268516_"), "Laya;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextLine#contents
    static void set_field_contents(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "contents", "comp_1249", "contents", "f_268516_"), "Laya;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextLine#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "width", "comp_1250", "width", "f_268443_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextLine#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "width", "comp_1250", "width", "f_268443_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID__contents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "contents", "comp_1249", "contents", "f_268516_"), "()Laya;");
    }

    static jobject _contents(const jobject& obj) {
                
       const auto methodID = methodID__contents();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__width() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "width", "comp_1250", "width", "f_268443_"), "()I");
    }

    static jint _width(const jobject& obj) {
                
       const auto methodID = methodID__width();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$TEXTLINE_HPP