// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_TYPE_WRITABLEBOOKCONTENTCOMPONENT_HPP
#define NET_MINECRAFT_COMPONENT_TYPE_WRITABLEBOOKCONTENTCOMPONENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.type.WritableBookContentComponent
 * Remapped: cya
 */
namespace WritableBookContentComponent {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cya", "net/minecraft/world/item/component/WritableBookContent", "net/minecraft/class_9301", "net/minecraft/component/type/WritableBookContentComponent", "net/minecraft/src/C_313850_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.component.type.WritableBookContentComponent#pages
    static jobject get_field_pages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "pages", "comp_2418", "pages", "f_314930_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.WritableBookContentComponent#pages
    static void set_field_pages(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "pages", "comp_2418", "pages", "f_314930_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.WritableBookContentComponent#DEFAULT
    [[maybe_unused]] static jobject get_field_DEFAULT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_49369", "DEFAULT", "f_314124_"), "Lcya;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.WritableBookContentComponent#DEFAULT
    [[maybe_unused]] static void set_field_DEFAULT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EMPTY", "field_49369", "DEFAULT", "f_314124_"), "Lcya;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.WritableBookContentComponent#MAX_PAGE_LENGTH
    [[maybe_unused]] static jint get_field_MAX_PAGE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PAGE_EDIT_LENGTH", "field_49370", "MAX_PAGE_LENGTH", "f_314989_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.WritableBookContentComponent#MAX_PAGE_LENGTH
    [[maybe_unused]] static void set_field_MAX_PAGE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "PAGE_EDIT_LENGTH", "field_49370", "MAX_PAGE_LENGTH", "f_314989_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.WritableBookContentComponent#MAX_PAGE_COUNT
    [[maybe_unused]] static jint get_field_MAX_PAGE_COUNT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_PAGES", "field_51411", "MAX_PAGE_COUNT", "f_315128_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.WritableBookContentComponent#MAX_PAGE_COUNT
    [[maybe_unused]] static void set_field_MAX_PAGE_COUNT(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "MAX_PAGES", "field_51411", "MAX_PAGE_COUNT", "f_315128_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.component.type.WritableBookContentComponent#PAGE_CODEC
    [[maybe_unused]] static jobject get_field_PAGE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "PAGE_CODEC", "field_49373", "PAGE_CODEC", "f_316974_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.component.type.WritableBookContentComponent#PAGE_CODEC
    [[maybe_unused]] static void set_field_PAGE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "PAGE_CODEC", "field_49373", "PAGE_CODEC", "f_316974_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.WritableBookContentComponent#PAGES_CODEC
    [[maybe_unused]] static jobject get_field_PAGES_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PAGES_CODEC", "field_49374", "PAGES_CODEC", "f_313981_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.WritableBookContentComponent#PAGES_CODEC
    [[maybe_unused]] static void set_field_PAGES_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "PAGES_CODEC", "field_49374", "PAGES_CODEC", "f_313981_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.WritableBookContentComponent#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_49371", "CODEC", "f_316245_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.WritableBookContentComponent#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "CODEC", "field_49371", "CODEC", "f_316245_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.component.type.WritableBookContentComponent#PACKET_CODEC
    [[maybe_unused]] static jobject get_field_PACKET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "STREAM_CODEC", "field_49372", "PACKET_CODEC", "f_316228_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.component.type.WritableBookContentComponent#PACKET_CODEC
    [[maybe_unused]] static void set_field_PACKET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "STREAM_CODEC", "field_49372", "PACKET_CODEC", "f_316228_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_stream() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPages", "method_57517", "stream", "m_320046_"), "(Z)Ljava/util/stream/Stream;");
    }

    static jobject stream(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_stream();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_withPages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "withReplacedPages", "method_58187", "withPages", "m_319955_"), "(Ljava/util/List;)Lcya;");
    }

    static jobject withPages(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_withPages();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__pages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pages", "comp_2422", "pages", "m_319402_"), "()Ljava/util/List;");
    }

    static jobject _pages(const jobject& obj) {
                
       const auto methodID = methodID__pages();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_TYPE_WRITABLEBOOKCONTENTCOMPONENT_HPP