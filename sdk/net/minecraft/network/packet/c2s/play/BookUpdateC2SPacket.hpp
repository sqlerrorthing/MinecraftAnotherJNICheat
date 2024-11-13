// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_BOOKUPDATEC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_BOOKUPDATEC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket
 * Remapped: ahb
 */
namespace BookUpdateC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ahb", "net/minecraft/network/protocol/game/ServerboundEditBookPacket", "net/minecraft/class_2820", "net/minecraft/network/packet/c2s/play/BookUpdateC2SPacket", "net/minecraft/src/C_5159_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#slot
    static jint get_field_slot(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "slot", "comp_2285", "slot", "f_133997_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#slot
    static void set_field_slot(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "slot", "comp_2285", "slot", "f_133997_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#pages
    static jobject get_field_pages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pages", "comp_2286", "pages", "f_182746_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#pages
    static void set_field_pages(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pages", "comp_2286", "pages", "f_182746_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#title
    static jobject get_field_title(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "title", "comp_2287", "title", "f_182747_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#title
    static void set_field_title(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "title", "comp_2287", "title", "f_182747_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#field_34038
    [[maybe_unused]] static jint get_field_field_34038() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_BYTES_PER_CHAR", "field_34038", "field_34038", "f_182742_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#field_34038
    [[maybe_unused]] static void set_field_field_34038(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_BYTES_PER_CHAR", "field_34038", "field_34038", "f_182742_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#MAX_TITLE_LENGTH
    [[maybe_unused]] static jint get_field_MAX_TITLE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TITLE_MAX_CHARS", "field_34039", "MAX_TITLE_LENGTH", "f_182743_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#MAX_TITLE_LENGTH
    [[maybe_unused]] static void set_field_MAX_TITLE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "TITLE_MAX_CHARS", "field_34039", "MAX_TITLE_LENGTH", "f_182743_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#MAX_PAGE_LENGTH
    [[maybe_unused]] static jint get_field_MAX_PAGE_LENGTH() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "PAGE_MAX_CHARS", "field_34040", "MAX_PAGE_LENGTH", "f_182744_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#MAX_PAGE_LENGTH
    [[maybe_unused]] static void set_field_MAX_PAGE_LENGTH(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "PAGE_MAX_CHARS", "field_34040", "MAX_PAGE_LENGTH", "f_182744_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#MAX_PAGES
    [[maybe_unused]] static jint get_field_MAX_PAGES() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MAX_PAGES_COUNT", "field_34046", "MAX_PAGES", "f_182745_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#MAX_PAGES
    [[maybe_unused]] static void set_field_MAX_PAGES(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "MAX_PAGES_COUNT", "field_34046", "MAX_PAGES", "f_182745_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48193", "CODEC", "f_316818_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.BookUpdateC2SPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "STREAM_CODEC", "field_48193", "CODEC", "f_316818_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getPacketId() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_55846", "getPacketId", "m_5779_"), "()Lzi;");
    }

    static jobject getPacketId(const jobject& obj) {
                
       const auto methodID = methodID_getPacketId();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_apply() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_12236", "apply", "m_5797_"), "(Lagi;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__slot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "slot", "comp_2285", "slot", "f_133997_"), "()I");
    }

    static jint _slot(const jobject& obj) {
                
       const auto methodID = methodID__slot();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID__pages() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "pages", "comp_2286", "pages", "f_182746_"), "()Ljava/util/List;");
    }

    static jobject _pages(const jobject& obj) {
                
       const auto methodID = methodID__pages();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__title() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "title", "comp_2287", "title", "f_182747_"), "()Ljava/util/Optional;");
    }

    static jobject _title(const jobject& obj) {
                
       const auto methodID = methodID__title();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_BOOKUPDATEC2SPACKET_HPP