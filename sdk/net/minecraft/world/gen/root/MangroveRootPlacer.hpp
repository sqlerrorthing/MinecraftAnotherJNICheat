// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_ROOT_MANGROVEROOTPLACER_HPP
#define NET_MINECRAFT_WORLD_GEN_ROOT_MANGROVEROOTPLACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.root.MangroveRootPlacer
 * Remapped: egf
 */
namespace MangroveRootPlacer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("egf", "net/minecraft/world/level/levelgen/feature/rootplacers/MangroveRootPlacer", "net/minecraft/class_7386", "net/minecraft/world/gen/root/MangroveRootPlacer", "net/minecraft/src/C_213148_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.root.MangroveRootPlacer#field_38769
    [[maybe_unused]] static jint get_field_field_38769() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ROOT_WIDTH_LIMIT", "field_38769", "field_38769", "f_225811_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.root.MangroveRootPlacer#field_38769
    [[maybe_unused]] static void set_field_field_38769(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ROOT_WIDTH_LIMIT", "field_38769", "field_38769", "f_225811_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.root.MangroveRootPlacer#field_38770
    [[maybe_unused]] static jint get_field_field_38770() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ROOT_LENGTH_LIMIT", "field_38770", "field_38770", "f_225812_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.root.MangroveRootPlacer#field_38770
    [[maybe_unused]] static void set_field_field_38770(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ROOT_LENGTH_LIMIT", "field_38770", "field_38770", "f_225812_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.root.MangroveRootPlacer#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_38771", "CODEC", "f_225813_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.root.MangroveRootPlacer#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CODEC", "field_38771", "CODEC", "f_225813_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.root.MangroveRootPlacer#mangroveRootPlacement
    static jobject get_field_mangroveRootPlacement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "mangroveRootPlacement", "field_38867", "mangroveRootPlacement", "f_225814_"), "Lege;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.root.MangroveRootPlacer#mangroveRootPlacement
    static void set_field_mangroveRootPlacement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "mangroveRootPlacement", "field_38867", "mangroveRootPlacement", "f_225814_"), "Lege;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeRoots", "method_43168", "generate", "m_213684_"), "(Lddc;Ljava/util/function/BiConsumer;Layw;Ljd;Ljd;Lefe;)Z");
    }

    static jboolean generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_canGrow() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "simulateRoots", "method_43166", "canGrow", "m_225822_"), "(Lddc;Layw;Ljd;Lji;Ljd;Ljava/util/List;I)Z");
    }

    static jboolean canGrow(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jint& arg6) {
                
       const auto methodID = methodID_canGrow();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_getOffshootPositions() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "potentialRootPositions", "method_43171", "getOffshootPositions", "m_225850_"), "(Ljd;Lji;Layw;Ljd;)Ljava/util/List;");
    }

    static jobject getOffshootPositions(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_getOffshootPositions();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_canGrowThrough() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "canPlaceRoot", "method_43167", "canGrowThrough", "m_213551_"), "(Lddc;Ljd;)Z");
    }

    static jboolean canGrowThrough(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_canGrowThrough();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_placeRoots() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeRoot", "method_43172", "placeRoots", "m_213654_"), "(Lddc;Ljava/util/function/BiConsumer;Layw;Ljd;Lefe;)V");
    }

    static void placeRoots(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_placeRoots();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_43165", "getType", "m_213745_"), "()Legh;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_ROOT_MANGROVEROOTPLACER_HPP