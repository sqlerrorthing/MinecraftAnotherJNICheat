// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_TRUNK_BENDINGTRUNKPLACER_HPP
#define NET_MINECRAFT_WORLD_GEN_TRUNK_BENDINGTRUNKPLACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.trunk.BendingTrunkPlacer
 * Remapped: ehe
 */
namespace BendingTrunkPlacer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ehe", "net/minecraft/world/level/levelgen/feature/trunkplacers/BendingTrunkPlacer", "net/minecraft/class_5930", "net/minecraft/world/gen/trunk/BendingTrunkPlacer", "net/minecraft/src/C_141399_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.trunk.BendingTrunkPlacer#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_29306", "CODEC", "f_161765_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.trunk.BendingTrunkPlacer#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_29306", "CODEC", "f_161765_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.trunk.BendingTrunkPlacer#minHeightForLeaves
    static jint get_field_minHeightForLeaves(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minHeightForLeaves", "field_29307", "minHeightForLeaves", "f_161766_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.BendingTrunkPlacer#minHeightForLeaves
    static void set_field_minHeightForLeaves(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "minHeightForLeaves", "field_29307", "minHeightForLeaves", "f_161766_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.trunk.BendingTrunkPlacer#bendLength
    static jobject get_field_bendLength(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "bendLength", "field_29308", "bendLength", "f_161767_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.BendingTrunkPlacer#bendLength
    static void set_field_bendLength(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "bendLength", "field_29308", "bendLength", "f_161767_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_28903", "getType", "m_7362_"), "()Lehn;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeTrunk", "method_26991", "generate", "m_213934_"), "(Lddc;Ljava/util/function/BiConsumer;Layw;ILjd;Lefe;)Ljava/util/List;");
    }

    static jobject generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_TRUNK_BENDINGTRUNKPLACER_HPP