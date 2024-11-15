// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTEMODIFIER$OPERATION_HPP
#define NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTEMODIFIER$OPERATION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.attribute.EntityAttributeModifier$Operation
 * Remapped: buu$a
 */
namespace EntityAttributeModifier$Operation {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("buu$a", "net/minecraft/world/entity/ai/attributes/AttributeModifier$Operation", "net/minecraft/class_1322$class_1323", "net/minecraft/entity/attribute/EntityAttributeModifier$Operation", "net/minecraft/src/C_555_$C_556_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#ADD_VALUE
    [[maybe_unused]] static jobject get_field_ADD_VALUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ADD_VALUE", "field_6328", "ADD_VALUE", "ADD_VALUE"), "Lbuu$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#ADD_VALUE
    [[maybe_unused]] static void set_field_ADD_VALUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ADD_VALUE", "field_6328", "ADD_VALUE", "ADD_VALUE"), "Lbuu$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#ADD_MULTIPLIED_BASE
    [[maybe_unused]] static jobject get_field_ADD_MULTIPLIED_BASE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ADD_MULTIPLIED_BASE", "field_6330", "ADD_MULTIPLIED_BASE", "ADD_MULTIPLIED_BASE"), "Lbuu$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#ADD_MULTIPLIED_BASE
    [[maybe_unused]] static void set_field_ADD_MULTIPLIED_BASE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ADD_MULTIPLIED_BASE", "field_6330", "ADD_MULTIPLIED_BASE", "ADD_MULTIPLIED_BASE"), "Lbuu$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#ADD_MULTIPLIED_TOTAL
    [[maybe_unused]] static jobject get_field_ADD_MULTIPLIED_TOTAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ADD_MULTIPLIED_TOTAL", "field_6331", "ADD_MULTIPLIED_TOTAL", "ADD_MULTIPLIED_TOTAL"), "Lbuu$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#ADD_MULTIPLIED_TOTAL
    [[maybe_unused]] static void set_field_ADD_MULTIPLIED_TOTAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ADD_MULTIPLIED_TOTAL", "field_6331", "ADD_MULTIPLIED_TOTAL", "ADD_MULTIPLIED_TOTAL"), "Lbuu$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#ID_TO_VALUE
    [[maybe_unused]] static jobject get_field_ID_TO_VALUE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_ID", "field_48325", "ID_TO_VALUE", "f_314520_"), "Ljava/util/function/IntFunction;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#ID_TO_VALUE
    [[maybe_unused]] static void set_field_ID_TO_VALUE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "BY_ID", "field_48325", "ID_TO_VALUE", "f_314520_"), "Ljava/util/function/IntFunction;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "STREAM_CODEC", "field_48326", "PACKET_CODEC", "f_314272_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "STREAM_CODEC", "field_48326", "PACKET_CODEC", "f_314272_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CODEC", "field_45742", "CODEC", "f_290595_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "CODEC", "field_45742", "CODEC", "f_290595_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "name", "field_45743", "name", "f_291294_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "name", "field_45743", "name", "f_291294_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#id
    static jint get_field_id(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "id", "field_6329", "id", "f_316785_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.attribute.EntityAttributeModifier$Operation#id
    static void set_field_id(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "id", "field_6329", "id", "f_316785_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Lbuu$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Lbuu$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "id", "method_56082", "getId", "m_324661_"), "()I");
    }

    static jint getId(const jobject& obj) {
                
       const auto methodID = methodID_getId();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
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

#endif // NET_MINECRAFT_ENTITY_ATTRIBUTE_ENTITYATTRIBUTEMODIFIER$OPERATION_HPP