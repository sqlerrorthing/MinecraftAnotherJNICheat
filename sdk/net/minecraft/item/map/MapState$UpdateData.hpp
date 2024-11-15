// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_MAP_MAPSTATE$UPDATEDATA_HPP
#define NET_MINECRAFT_ITEM_MAP_MAPSTATE$UPDATEDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.map.MapState$UpdateData
 * Remapped: eqt$b
 */
namespace MapState$UpdateData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqt$b", "net/minecraft/world/level/saveddata/maps/MapItemSavedData$MapPatch", "net/minecraft/class_22$class_5637", "net/minecraft/item/map/MapState$UpdateData", "net/minecraft/src/C_2771_$C_141451_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.map.MapState$UpdateData#startX
    static jint get_field_startX(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "startX", "comp_2316", "startX", "f_164821_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapState$UpdateData#startX
    static void set_field_startX(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "startX", "comp_2316", "startX", "f_164821_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.map.MapState$UpdateData#startZ
    static jint get_field_startZ(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "startY", "comp_2317", "startZ", "f_164822_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapState$UpdateData#startZ
    static void set_field_startZ(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "startY", "comp_2317", "startZ", "f_164822_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.map.MapState$UpdateData#width
    static jint get_field_width(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "width", "comp_2318", "width", "f_164823_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapState$UpdateData#width
    static void set_field_width(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "width", "comp_2318", "width", "f_164823_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.map.MapState$UpdateData#height
    static jint get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "height", "comp_2319", "height", "f_164824_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapState$UpdateData#height
    static void set_field_height(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "height", "comp_2319", "height", "f_164824_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.map.MapState$UpdateData#colors
    static jbyte get_field_colors(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "mapColors", "comp_2320", "colors", "f_164825_"), "[B");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetByteField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapState$UpdateData#colors
    static void set_field_colors(const jobject &obj, const jbyte &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "mapColors", "comp_2320", "colors", "f_164825_"), "[B");
        return MinecraftSDK::env->SetByteField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.item.map.MapState$UpdateData#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48925", "CODEC", "f_315636_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.map.MapState$UpdateData#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48925", "CODEC", "f_315636_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_encode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_56817", "encode", "m_319573_"), "(Lio/netty/buffer/ByteBuf;Ljava/util/Optional;)V");
    }

    static void encode(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_encode();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_decode() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "read", "method_56816", "decode", "m_322032_"), "(Lio/netty/buffer/ByteBuf;)Ljava/util/Optional;");
    }

    static jobject decode(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_decode();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_setColorsTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "applyToMap", "method_32380", "setColorsTo", "m_164832_"), "(Leqt;)V");
    }

    static void setColorsTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setColorsTo();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__startX() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "startX", "comp_2316", "startX", "f_164821_"), "()I");
    }

    static jint _startX(const jobject& obj) {
                
       const auto methodID = methodID__startX();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__startZ() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "startY", "comp_2317", "startZ", "f_164822_"), "()I");
    }

    static jint _startZ(const jobject& obj) {
                
       const auto methodID = methodID__startZ();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__width() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "width", "comp_2318", "width", "f_164823_"), "()I");
    }

    static jint _width(const jobject& obj) {
                
       const auto methodID = methodID__width();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__height() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "height", "comp_2319", "height", "f_164824_"), "()I");
    }

    static jint _height(const jobject& obj) {
                
       const auto methodID = methodID__height();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__colors() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "mapColors", "comp_2320", "colors", "f_164825_"), "()[B");
    }

    static jbyte _colors(const jobject& obj) {
                
       const auto methodID = methodID__colors();
       return MinecraftSDK::env->CallByteMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_MAP_MAPSTATE$UPDATEDATA_HPP