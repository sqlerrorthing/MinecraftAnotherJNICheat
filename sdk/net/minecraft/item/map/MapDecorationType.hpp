// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_MAP_MAPDECORATIONTYPE_HPP
#define NET_MINECRAFT_ITEM_MAP_MAPDECORATIONTYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.map.MapDecorationType
 * Remapped: eqo
 */
namespace MapDecorationType {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqo", "net/minecraft/world/level/saveddata/maps/MapDecorationType", "net/minecraft/class_9428", "net/minecraft/item/map/MapDecorationType", "net/minecraft/src/C_313592_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.map.MapDecorationType#assetId
    static jobject get_field_assetId(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "assetId", "comp_2514", "assetId", "f_315068_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapDecorationType#assetId
    static void set_field_assetId(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "assetId", "comp_2514", "assetId", "f_315068_"), "Lakr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.map.MapDecorationType#showOnItemFrame
    static jboolean get_field_showOnItemFrame(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "showOnItemFrame", "comp_2515", "showOnItemFrame", "f_315585_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapDecorationType#showOnItemFrame
    static void set_field_showOnItemFrame(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "showOnItemFrame", "comp_2515", "showOnItemFrame", "f_315585_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.map.MapDecorationType#mapColor
    static jint get_field_mapColor(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "mapColor", "comp_2516", "mapColor", "f_315023_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapDecorationType#mapColor
    static void set_field_mapColor(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "mapColor", "comp_2516", "mapColor", "f_315023_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.map.MapDecorationType#explorationMapElement
    static jboolean get_field_explorationMapElement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "explorationMapElement", "comp_2517", "explorationMapElement", "f_314518_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapDecorationType#explorationMapElement
    static void set_field_explorationMapElement(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "explorationMapElement", "comp_2517", "explorationMapElement", "f_314518_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.map.MapDecorationType#trackCount
    static jboolean get_field_trackCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "trackCount", "comp_2518", "trackCount", "f_314463_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.map.MapDecorationType#trackCount
    static void set_field_trackCount(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "trackCount", "comp_2518", "trackCount", "f_314463_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.item.map.MapDecorationType#NO_MAP_COLOR
    [[maybe_unused]] static jint get_field_NO_MAP_COLOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NO_MAP_COLOR", "field_50016", "NO_MAP_COLOR", "f_316633_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.map.MapDecorationType#NO_MAP_COLOR
    [[maybe_unused]] static void set_field_NO_MAP_COLOR(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "NO_MAP_COLOR", "field_50016", "NO_MAP_COLOR", "f_316633_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.map.MapDecorationType#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_50017", "CODEC", "f_316487_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.map.MapDecorationType#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_50017", "CODEC", "f_316487_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.item.map.MapDecorationType#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_50018", "PACKET_CODEC", "f_315859_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.item.map.MapDecorationType#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "STREAM_CODEC", "field_50018", "PACKET_CODEC", "f_315859_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_hasMapColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "hasMapColor", "method_58452", "hasMapColor", "m_324003_"), "()Z");
    }

    static jboolean hasMapColor(const jobject& obj) {
                
       const auto methodID = methodID_hasMapColor();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__assetId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "assetId", "comp_2514", "assetId", "f_315068_"), "()Lakr;");
    }

    static jobject _assetId(const jobject& obj) {
                
       const auto methodID = methodID__assetId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__showOnItemFrame() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "showOnItemFrame", "comp_2515", "showOnItemFrame", "f_315585_"), "()Z");
    }

    static jboolean _showOnItemFrame(const jobject& obj) {
                
       const auto methodID = methodID__showOnItemFrame();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__mapColor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "mapColor", "comp_2516", "mapColor", "f_315023_"), "()I");
    }

    static jint _mapColor(const jobject& obj) {
                
       const auto methodID = methodID__mapColor();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__explorationMapElement() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "explorationMapElement", "comp_2517", "explorationMapElement", "f_314518_"), "()Z");
    }

    static jboolean _explorationMapElement(const jobject& obj) {
                
       const auto methodID = methodID__explorationMapElement();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID__trackCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "trackCount", "comp_2518", "trackCount", "f_314463_"), "()Z");
    }

    static jboolean _trackCount(const jobject& obj) {
                
       const auto methodID = methodID__trackCount();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_MAP_MAPDECORATIONTYPE_HPP