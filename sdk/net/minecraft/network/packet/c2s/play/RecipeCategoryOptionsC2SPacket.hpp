// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_RECIPECATEGORYOPTIONSC2SPACKET_HPP
#define NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_RECIPECATEGORYOPTIONSC2SPACKET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket
 * Remapped: ahp
 */
namespace RecipeCategoryOptionsC2SPacket {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ahp", "net/minecraft/network/protocol/game/ServerboundRecipeBookChangeSettingsPacket", "net/minecraft/class_5427", "net/minecraft/network/packet/c2s/play/RecipeCategoryOptionsC2SPacket", "net/minecraft/src/C_5180_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48210", "CODEC", "f_316483_"), "Lyx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "STREAM_CODEC", "field_48210", "CODEC", "f_316483_"), "Lyx;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket#category
    static jobject get_field_category(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "bookType", "field_25798", "category", "f_134361_"), "Lcrj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket#category
    static void set_field_category(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "bookType", "field_25798", "category", "f_134361_"), "Lcrj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket#guiOpen
    static jboolean get_field_guiOpen(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "isOpen", "field_25799", "guiOpen", "f_134362_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket#guiOpen
    static void set_field_guiOpen(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "isOpen", "field_25799", "guiOpen", "f_134362_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket#filteringCraftable
    static jboolean get_field_filteringCraftable(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isFiltering", "field_25800", "filteringCraftable", "f_134363_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.network.packet.c2s.play.RecipeCategoryOptionsC2SPacket#filteringCraftable
    static void set_field_filteringCraftable(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isFiltering", "field_25800", "filteringCraftable", "f_134363_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_write() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "write", "method_55991", "write", "m_134376_"), "(Lvw;)V");
    }

    static void write(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_write();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
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
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "handle", "method_30304", "apply", "m_5797_"), "(Lagi;)V");
    }

    static void apply(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_apply();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getCategory() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getBookType", "method_30305", "getCategory", "m_134375_"), "()Lcrj;");
    }

    static jobject getCategory(const jobject& obj) {
                
       const auto methodID = methodID_getCategory();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isGuiOpen() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isOpen", "method_30306", "isGuiOpen", "m_134378_"), "()Z");
    }

    static jboolean isGuiOpen(const jobject& obj) {
                
       const auto methodID = methodID_isGuiOpen();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isFilteringCraftable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "isFiltering", "method_30307", "isFilteringCraftable", "m_134379_"), "()Z");
    }

    static jboolean isFilteringCraftable(const jobject& obj) {
                
       const auto methodID = methodID_isFilteringCraftable();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_NETWORK_PACKET_C2S_PLAY_RECIPECATEGORYOPTIONSC2SPACKET_HPP