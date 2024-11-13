// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_TRUNK_CHERRYTRUNKPLACER_HPP
#define NET_MINECRAFT_WORLD_GEN_TRUNK_CHERRYTRUNKPLACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.trunk.CherryTrunkPlacer
 * Remapped: ehf
 */
namespace CherryTrunkPlacer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ehf", "net/minecraft/world/level/levelgen/feature/trunkplacers/CherryTrunkPlacer", "net/minecraft/class_8180", "net/minecraft/world/gen/trunk/CherryTrunkPlacer", "net/minecraft/src/C_271046_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#BRANCH_START_OFFSET_FROM_TOP_CODEC
    [[maybe_unused]] static jobject get_field_BRANCH_START_OFFSET_FROM_TOP_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BRANCH_START_CODEC", "field_42849", "BRANCH_START_OFFSET_FROM_TOP_CODEC", "f_271464_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#BRANCH_START_OFFSET_FROM_TOP_CODEC
    [[maybe_unused]] static void set_field_BRANCH_START_OFFSET_FROM_TOP_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "BRANCH_START_CODEC", "field_42849", "BRANCH_START_OFFSET_FROM_TOP_CODEC", "f_271464_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.trunk.CherryTrunkPlacer#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42848", "CODEC", "f_271475_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.trunk.CherryTrunkPlacer#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42848", "CODEC", "f_271475_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#branchCount
    static jobject get_field_branchCount(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "branchCount", "field_42850", "branchCount", "f_271342_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#branchCount
    static void set_field_branchCount(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "branchCount", "field_42850", "branchCount", "f_271342_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#branchHorizontalLength
    static jobject get_field_branchHorizontalLength(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "branchHorizontalLength", "field_42851", "branchHorizontalLength", "f_271384_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#branchHorizontalLength
    static void set_field_branchHorizontalLength(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "branchHorizontalLength", "field_42851", "branchHorizontalLength", "f_271384_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#branchStartOffsetFromTop
    static jobject get_field_branchStartOffsetFromTop(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "branchStartOffsetFromTop", "field_42852", "branchStartOffsetFromTop", "f_271473_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#branchStartOffsetFromTop
    static void set_field_branchStartOffsetFromTop(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "branchStartOffsetFromTop", "field_42852", "branchStartOffsetFromTop", "f_271473_"), "Lbqc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#secondBranchStartOffsetFromTop
    static jobject get_field_secondBranchStartOffsetFromTop(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "secondBranchStartOffsetFromTop", "field_42853", "secondBranchStartOffsetFromTop", "f_271407_"), "Lbqc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#secondBranchStartOffsetFromTop
    static void set_field_secondBranchStartOffsetFromTop(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "secondBranchStartOffsetFromTop", "field_42853", "secondBranchStartOffsetFromTop", "f_271407_"), "Lbqc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#branchEndOffsetFromTop
    static jobject get_field_branchEndOffsetFromTop(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "branchEndOffsetFromTop", "field_42854", "branchEndOffsetFromTop", "f_271123_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.trunk.CherryTrunkPlacer#branchEndOffsetFromTop
    static void set_field_branchEndOffsetFromTop(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "branchEndOffsetFromTop", "field_42854", "branchEndOffsetFromTop", "f_271123_"), "Lbpw;");
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
    
    static jmethodID methodID_generateBranch() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "generateBranch", "method_49249", "generateBranch", "m_271969_"), "(Lddc;Ljava/util/function/BiConsumer;Layw;ILjd;Lefe;Ljava/util/function/Function;Lji;IZLjd$a;)Lefu$a;");
    }

    static jobject generateBranch(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6, const jobject& arg7, const jint& arg8, const jboolean& arg9, const jobject& arg10) {
                
       const auto methodID = methodID_generateBranch();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_TRUNK_CHERRYTRUNKPLACER_HPP