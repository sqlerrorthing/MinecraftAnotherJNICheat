// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$TEXTALIGNMENT_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$TEXTALIGNMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment
 * Remapped: bsq$l$a
 */
namespace DisplayEntity$TextDisplayEntity$TextAlignment {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsq$l$a", "net/minecraft/world/entity/Display$TextDisplay$Align", "net/minecraft/class_8113$class_8123$class_8124", "net/minecraft/entity/decoration/DisplayEntity$TextDisplayEntity$TextAlignment", "net/minecraft/src/C_268383_$C_268409_$C_268398_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#CENTER
    [[maybe_unused]] static jobject get_field_CENTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CENTER", "field_42450", "CENTER", "CENTER"), "Lbsq$l$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#CENTER
    [[maybe_unused]] static void set_field_CENTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CENTER", "field_42450", "CENTER", "CENTER"), "Lbsq$l$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#LEFT
    [[maybe_unused]] static jobject get_field_LEFT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEFT", "field_42451", "LEFT", "LEFT"), "Lbsq$l$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#LEFT
    [[maybe_unused]] static void set_field_LEFT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LEFT", "field_42451", "LEFT", "LEFT"), "Lbsq$l$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#RIGHT
    [[maybe_unused]] static jobject get_field_RIGHT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RIGHT", "field_42452", "RIGHT", "RIGHT"), "Lbsq$l$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#RIGHT
    [[maybe_unused]] static void set_field_RIGHT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "RIGHT", "field_42452", "RIGHT", "RIGHT"), "Lbsq$l$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_42453", "CODEC", "f_268461_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_42453", "CODEC", "f_268461_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_42454", "name", "f_268523_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$TextDisplayEntity$TextAlignment#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "name", "field_42454", "name", "f_268523_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbsq$l$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbsq$l$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$TEXTDISPLAYENTITY$TEXTALIGNMENT_HPP