// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_DIMENSION_PORTALFORCER_HPP
#define NET_MINECRAFT_WORLD_DIMENSION_PORTALFORCER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.dimension.PortalForcer
 * Remapped: eqd
 */
namespace PortalForcer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eqd", "net/minecraft/world/level/portal/PortalForcer", "net/minecraft/class_1946", "net/minecraft/world/dimension/PortalForcer", "net/minecraft/src/C_2760_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.dimension.PortalForcer#field_31810
    [[maybe_unused]] static jint get_field_field_31810() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TICKET_RADIUS", "field_31810", "field_31810", "f_164734_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.dimension.PortalForcer#field_31810
    [[maybe_unused]] static void set_field_field_31810(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "TICKET_RADIUS", "field_31810", "field_31810", "f_164734_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_52248
    [[maybe_unused]] static jint get_field_field_52248() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NETHER_PORTAL_RADIUS", "field_52248", "field_52248", "f_336646_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_52248
    [[maybe_unused]] static void set_field_field_52248(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "NETHER_PORTAL_RADIUS", "field_52248", "field_52248", "f_336646_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_52249
    [[maybe_unused]] static jint get_field_field_52249() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OVERWORLD_PORTAL_RADIUS", "field_52249", "field_52249", "f_337513_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_52249
    [[maybe_unused]] static void set_field_field_52249(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OVERWORLD_PORTAL_RADIUS", "field_52249", "field_52249", "f_337513_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31813
    [[maybe_unused]] static jint get_field_field_31813() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FRAME_HEIGHT", "field_31813", "field_31813", "f_164737_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31813
    [[maybe_unused]] static void set_field_field_31813(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FRAME_HEIGHT", "field_31813", "field_31813", "f_164737_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31814
    [[maybe_unused]] static jint get_field_field_31814() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "FRAME_WIDTH", "field_31814", "field_31814", "f_164738_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31814
    [[maybe_unused]] static void set_field_field_31814(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "FRAME_WIDTH", "field_31814", "field_31814", "f_164738_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31815
    [[maybe_unused]] static jint get_field_field_31815() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FRAME_BOX", "field_31815", "field_31815", "f_164739_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31815
    [[maybe_unused]] static void set_field_field_31815(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "FRAME_BOX", "field_31815", "field_31815", "f_164739_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31816
    [[maybe_unused]] static jint get_field_field_31816() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FRAME_HEIGHT_START", "field_31816", "field_31816", "f_164740_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31816
    [[maybe_unused]] static void set_field_field_31816(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "FRAME_HEIGHT_START", "field_31816", "field_31816", "f_164740_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31817
    [[maybe_unused]] static jint get_field_field_31817() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FRAME_HEIGHT_END", "field_31817", "field_31817", "f_164741_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31817
    [[maybe_unused]] static void set_field_field_31817(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "FRAME_HEIGHT_END", "field_31817", "field_31817", "f_164741_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31818
    [[maybe_unused]] static jint get_field_field_31818() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FRAME_WIDTH_START", "field_31818", "field_31818", "f_164742_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31818
    [[maybe_unused]] static void set_field_field_31818(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "FRAME_WIDTH_START", "field_31818", "field_31818", "f_164742_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31819
    [[maybe_unused]] static jint get_field_field_31819() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "FRAME_WIDTH_END", "field_31819", "field_31819", "f_164743_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31819
    [[maybe_unused]] static void set_field_field_31819(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "FRAME_WIDTH_END", "field_31819", "field_31819", "f_164743_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31820
    [[maybe_unused]] static jint get_field_field_31820() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FRAME_BOX_START", "field_31820", "field_31820", "f_164744_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31820
    [[maybe_unused]] static void set_field_field_31820(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "FRAME_BOX_START", "field_31820", "field_31820", "f_164744_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31821
    [[maybe_unused]] static jint get_field_field_31821() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FRAME_BOX_END", "field_31821", "field_31821", "f_164745_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31821
    [[maybe_unused]] static void set_field_field_31821(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "FRAME_BOX_END", "field_31821", "field_31821", "f_164745_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.dimension.PortalForcer#field_31822
    [[maybe_unused]] static jint get_field_field_31822() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "NOTHING_FOUND", "field_31822", "field_31822", "f_164746_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#field_31822
    [[maybe_unused]] static void set_field_field_31822(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "NOTHING_FOUND", "field_31822", "field_31822", "f_164746_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.dimension.PortalForcer#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "level", "field_9286", "world", "f_77648_"), "Laqu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.dimension.PortalForcer#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "level", "field_9286", "world", "f_77648_"), "Laqu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPortalPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "findClosestPortalPosition", "method_30483", "getPortalPos", "m_338892_"), "(Ljd;ZLdut;)Ljava/util/Optional;");
    }

    static jobject getPortalPos(const jobject& obj, const jobject& arg0, const jboolean& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getPortalPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createPortal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createPortal", "method_30482", "createPortal", "m_77666_"), "(Ljd;Lji$a;)Ljava/util/Optional;");
    }

    static jobject createPortal(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_createPortal();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_isBlockStateValid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canPortalReplaceBlock", "method_45550", "isBlockStateValid", "m_245373_"), "(Ljd$a;)Z");
    }

    static jboolean isBlockStateValid(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isBlockStateValid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isValidPortalPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canHostFrame", "method_30481", "isValidPortalPos", "m_77661_"), "(Ljd;Ljd$a;Lji;I)Z");
    }

    static jboolean isValidPortalPos(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3) {
                
       const auto methodID = methodID_isValidPortalPos();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_WORLD_DIMENSION_PORTALFORCER_HPP