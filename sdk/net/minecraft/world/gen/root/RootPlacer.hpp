// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_ROOT_ROOTPLACER_HPP
#define NET_MINECRAFT_WORLD_GEN_ROOT_ROOTPLACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.root.RootPlacer
 * Remapped: egg
 */
namespace RootPlacer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("egg", "net/minecraft/world/level/levelgen/feature/rootplacers/RootPlacer", "net/minecraft/class_7387", "net/minecraft/world/gen/root/RootPlacer", "net/minecraft/src/C_213149_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.root.RootPlacer#TYPE_CODEC
    [[maybe_unused]] static jobject get_field_TYPE_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_38779", "TYPE_CODEC", "f_225859_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.root.RootPlacer#TYPE_CODEC
    [[maybe_unused]] static void set_field_TYPE_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CODEC", "field_38779", "TYPE_CODEC", "f_225859_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.root.RootPlacer#trunkOffsetY
    static jobject get_field_trunkOffsetY(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "trunkOffsetY", "field_38868", "trunkOffsetY", "f_225860_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.root.RootPlacer#trunkOffsetY
    static void set_field_trunkOffsetY(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "trunkOffsetY", "field_38868", "trunkOffsetY", "f_225860_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.root.RootPlacer#rootProvider
    static jobject get_field_rootProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "rootProvider", "field_38780", "rootProvider", "f_225861_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.root.RootPlacer#rootProvider
    static void set_field_rootProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "rootProvider", "field_38780", "rootProvider", "f_225861_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for protected field net.minecraft.world.gen.root.RootPlacer#aboveRootPlacement
    static jobject get_field_aboveRootPlacement(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "aboveRootPlacement", "field_38869", "aboveRootPlacement", "f_225862_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.world.gen.root.RootPlacer#aboveRootPlacement
    static void set_field_aboveRootPlacement(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "aboveRootPlacement", "field_38869", "aboveRootPlacement", "f_225862_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_method_43182() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "rootPlacerParts", "method_43182", "method_43182", "m_225885_"), "(Lcom/mojang/serialization/codecs/RecordCodecBuilder$Instance;)Lcom/mojang/datafixers/Products$P3;");
    }

    static jobject method_43182(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_method_43182();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_43165", "getType", "m_213745_"), "()Legh;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "placeRoots", "method_43168", "generate", "m_213684_"), "(Lddc;Ljava/util/function/BiConsumer;Layw;Ljd;Ljd;Lefe;)Z");
    }

    static jboolean generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_generate();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
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
    
    static jmethodID methodID_applyWaterlogging() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPotentiallyWaterloggedState", "method_43181", "applyWaterlogging", "m_225870_"), "(Lddc;Ljd;Ldtc;)Ldtc;");
    }

    static jobject applyWaterlogging(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_applyWaterlogging();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_trunkOffset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTrunkOrigin", "method_43309", "trunkOffset", "m_225891_"), "(Ljd;Layw;)Ljd;");
    }

    static jobject trunkOffset(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_trunkOffset();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_ROOT_ROOTPLACER_HPP