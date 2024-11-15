// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FOLIAGE_MEGAPINEFOLIAGEPLACER_HPP
#define NET_MINECRAFT_WORLD_GEN_FOLIAGE_MEGAPINEFOLIAGEPLACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.foliage.MegaPineFoliagePlacer
 * Remapped: efx
 */
namespace MegaPineFoliagePlacer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efx", "net/minecraft/world/level/levelgen/feature/foliageplacers/MegaPineFoliagePlacer", "net/minecraft/class_5210", "net/minecraft/world/gen/foliage/MegaPineFoliagePlacer", "net/minecraft/src/C_2383_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.foliage.MegaPineFoliagePlacer#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24934", "CODEC", "f_68642_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.MegaPineFoliagePlacer#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_24934", "CODEC", "f_68642_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.foliage.MegaPineFoliagePlacer#crownHeight
    static jobject get_field_crownHeight(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "crownHeight", "field_24168", "crownHeight", "f_68643_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.foliage.MegaPineFoliagePlacer#crownHeight
    static void set_field_crownHeight(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "crownHeight", "field_24168", "crownHeight", "f_68643_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_28843", "getType", "m_5897_"), "()Lefv;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createFoliage", "method_23448", "generate", "m_213633_"), "(Lddc;Lefu$b;Layw;Lefe;ILefu$a;III)V");
    }

    static void generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jobject& arg5, const jint& arg6, const jint& arg7, const jint& arg8) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID_getRandomHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "foliageHeight", "method_26989", "getRandomHeight", "m_214116_"), "(Layw;ILefe;)I");
    }

    static jint getRandomHeight(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getRandomHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isInvalidForLeaves() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldSkipLocation", "method_23451", "isInvalidForLeaves", "m_214203_"), "(Layw;IIIIZ)Z");
    }

    static jboolean isInvalidForLeaves(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jboolean& arg5) {
                
       const auto methodID = methodID_isInvalidForLeaves();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FOLIAGE_MEGAPINEFOLIAGEPLACER_HPP