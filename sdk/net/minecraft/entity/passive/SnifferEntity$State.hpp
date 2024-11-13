// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERENTITY$STATE_HPP
#define NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERENTITY$STATE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.passive.SnifferEntity$State
 * Remapped: chv$a
 */
namespace SnifferEntity$State {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("chv$a", "net/minecraft/world/entity/animal/sniffer/Sniffer$State", "net/minecraft/class_8153$class_8154", "net/minecraft/entity/passive/SnifferEntity$State", "net/minecraft/src/C_271078_$C_271037_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#IDLING
    [[maybe_unused]] static jobject get_field_IDLING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "IDLING", "field_42665", "IDLING", "IDLING"), "Lchv$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#IDLING
    [[maybe_unused]] static void set_field_IDLING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "IDLING", "field_42665", "IDLING", "IDLING"), "Lchv$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#FEELING_HAPPY
    [[maybe_unused]] static jobject get_field_FEELING_HAPPY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FEELING_HAPPY", "field_42666", "FEELING_HAPPY", "FEELING_HAPPY"), "Lchv$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#FEELING_HAPPY
    [[maybe_unused]] static void set_field_FEELING_HAPPY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "FEELING_HAPPY", "field_42666", "FEELING_HAPPY", "FEELING_HAPPY"), "Lchv$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#SCENTING
    [[maybe_unused]] static jobject get_field_SCENTING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SCENTING", "field_42667", "SCENTING", "SCENTING"), "Lchv$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#SCENTING
    [[maybe_unused]] static void set_field_SCENTING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "SCENTING", "field_42667", "SCENTING", "SCENTING"), "Lchv$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#SNIFFING
    [[maybe_unused]] static jobject get_field_SNIFFING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SNIFFING", "field_42668", "SNIFFING", "SNIFFING"), "Lchv$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#SNIFFING
    [[maybe_unused]] static void set_field_SNIFFING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "SNIFFING", "field_42668", "SNIFFING", "SNIFFING"), "Lchv$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#SEARCHING
    [[maybe_unused]] static jobject get_field_SEARCHING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SEARCHING", "field_42669", "SEARCHING", "SEARCHING"), "Lchv$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#SEARCHING
    [[maybe_unused]] static void set_field_SEARCHING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "SEARCHING", "field_42669", "SEARCHING", "SEARCHING"), "Lchv$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#DIGGING
    [[maybe_unused]] static jobject get_field_DIGGING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DIGGING", "field_42670", "DIGGING", "DIGGING"), "Lchv$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#DIGGING
    [[maybe_unused]] static void set_field_DIGGING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "DIGGING", "field_42670", "DIGGING", "DIGGING"), "Lchv$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#RISING
    [[maybe_unused]] static jobject get_field_RISING() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "RISING", "field_42671", "RISING", "RISING"), "Lchv$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#RISING
    [[maybe_unused]] static void set_field_RISING(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "RISING", "field_42671", "RISING", "RISING"), "Lchv$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#INDEX_TO_VALUE
    [[maybe_unused]] static jobject get_field_INDEX_TO_VALUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BY_ID", "field_48340", "INDEX_TO_VALUE", "f_316716_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#INDEX_TO_VALUE
    [[maybe_unused]] static void set_field_INDEX_TO_VALUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BY_ID", "field_48340", "INDEX_TO_VALUE", "f_316716_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.passive.SnifferEntity$State#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "STREAM_CODEC", "field_48341", "PACKET_CODEC", "f_313997_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.passive.SnifferEntity$State#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "STREAM_CODEC", "field_48341", "PACKET_CODEC", "f_313997_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.passive.SnifferEntity$State#index
    static jint get_field_index(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "id", "field_48342", "index", "f_315359_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.passive.SnifferEntity$State#index
    static void set_field_index(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "id", "field_48342", "index", "f_315359_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lchv$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lchv$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "method_56085", "getIndex", "m_324429_"), "()I");
    }

    static jint getIndex(const jobject& obj) {
                
       const auto methodID = methodID_getIndex();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_PASSIVE_SNIFFERENTITY$STATE_HPP