// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_BLOCKVIEW_HPP
#define NET_MINECRAFT_WORLD_BLOCKVIEW_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.BlockView
 * Remapped: dcc
 */
namespace BlockView {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dcc", "net/minecraft/world/level/BlockGetter", "net/minecraft/class_1922", "net/minecraft/world/BlockView", "net/minecraft/src/C_1559_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c_", "getBlockEntity", "method_8321", "getBlockEntity", "m_7702_"), "(Ljd;)Ldqh;");
    }

    static jobject getBlockEntity(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__getBlockEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockEntity", "method_35230", "getBlockEntity", "m_141902_"), "(Ljd;Ldqj;)Ljava/util/Optional;");
    }

    static jobject _getBlockEntity(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__getBlockEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getBlockState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a_", "getBlockState", "method_8320", "getBlockState", "m_8055_"), "(Ljd;)Ldtc;");
    }

    static jobject getBlockState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBlockState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFluidState() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b_", "getFluidState", "method_8316", "getFluidState", "m_6425_"), "(Ljd;)Lepe;");
    }

    static jobject getFluidState(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFluidState();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getLuminance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getLightEmission", "method_8317", "getLuminance", "m_7146_"), "(Ljd;)I");
    }

    static jint getLuminance(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getLuminance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMaxLightLevel() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("Q", "getMaxLightLevel", "method_8315", "getMaxLightLevel", "m_7469_"), "()I");
    }

    static jint getMaxLightLevel(const jobject& obj) {
                
       const auto methodID = methodID_getMaxLightLevel();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStatesInBox() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockStates", "method_29546", "getStatesInBox", "m_45556_"), "(Lewx;)Ljava/util/stream/Stream;");
    }

    static jobject getStatesInBox(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStatesInBox();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_raycast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isBlockInLine", "method_32880", "raycast", "m_151353_"), "(Ldce;)Lewy;");
    }

    static jobject raycast(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_raycast();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__raycast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clip", "method_17742", "raycast", "m_45547_"), "(Ldcf;)Lewy;");
    }

    static jobject _raycast(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__raycast();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_raycastBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "clipWithInteractionOverride", "method_17745", "raycastBlock", "m_45558_"), "(Lexc;Lexc;Ljd;Lexv;Ldtc;)Lewy;");
    }

    static jobject raycastBlock(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
                
       const auto methodID = methodID_raycastBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getDismountHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockFloorHeight", "method_30346", "getDismountHeight", "m_45564_"), "(Lexv;Ljava/util/function/Supplier;)D");
    }

    static jdouble getDismountHeight(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getDismountHeight();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getDismountHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getBlockFloorHeight", "method_30347", "getDismountHeight", "m_45573_"), "(Ljd;)D");
    }

    static jdouble _getDismountHeight(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getDismountHeight();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___raycast() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "traverseBlocks", "method_17744", "raycast", "m_151361_"), "(Lexc;Lexc;Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/function/Function;)Ljava/lang/Object;");
    }

    static jobject __raycast(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4) {
       const auto clazz = self();
       const auto methodID = methodID___raycast();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
};

#endif // NET_MINECRAFT_WORLD_BLOCKVIEW_HPP