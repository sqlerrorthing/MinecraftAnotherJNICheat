// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_TRUNK_LARGEOAKTRUNKPLACER$BRANCHPOSITION_HPP
#define NET_MINECRAFT_WORLD_GEN_TRUNK_LARGEOAKTRUNKPLACER$BRANCHPOSITION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.trunk.LargeOakTrunkPlacer$BranchPosition
 * Remapped: ehh$a
 */
namespace LargeOakTrunkPlacer$BranchPosition {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ehh$a", "net/minecraft/world/level/levelgen/feature/trunkplacers/FancyTrunkPlacer$FoliageCoords", "net/minecraft/class_5212$class_5213", "net/minecraft/world/gen/trunk/LargeOakTrunkPlacer$BranchPosition", "net/minecraft/src/C_2420_$C_2421_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer$BranchPosition#node
    static jobject get_field_node(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "attachment", "field_24169", "node", "f_70137_"), "Lefu$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer$BranchPosition#node
    static void set_field_node(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "attachment", "field_24169", "node", "f_70137_"), "Lefu$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer$BranchPosition#endY
    static jint get_field_endY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "branchBase", "field_24170", "endY", "f_70138_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.LargeOakTrunkPlacer$BranchPosition#endY
    static void set_field_endY(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "branchBase", "field_24170", "endY", "f_70138_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    static jmethodID methodID_getEndY() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBranchBase", "method_27397", "getEndY", "m_70142_"), "()I");
    }

    static jint getEndY(const jobject& obj) {
                
       const auto methodID = methodID_getEndY();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_TRUNK_LARGEOAKTRUNKPLACER$BRANCHPOSITION_HPP