// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_UTIL_SHAPE_VOXELSHAPES$BOXCONSUMER_HPP
#define NET_MINECRAFT_UTIL_SHAPE_VOXELSHAPES$BOXCONSUMER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.util.shape.VoxelShapes$BoxConsumer
 * Remapped: exs$a
 */
namespace VoxelShapes$BoxConsumer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("exs$a", "net/minecraft/world/phys/shapes/Shapes$DoubleLineConsumer", "net/minecraft/class_259$class_260", "net/minecraft/util/shape/VoxelShapes$BoxConsumer", "net/minecraft/src/C_3068_$C_3069_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_consume() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("consume", "consume", "consume", "consume", "m_83161_"), "(DDDDDD)V");
    }

    static void consume(const jobject& obj, const jdouble& arg0, const jdouble& arg1, const jdouble& arg2, const jdouble& arg3, const jdouble& arg4, const jdouble& arg5) {
                
       const auto methodID = methodID_consume();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_UTIL_SHAPE_VOXELSHAPES$BOXCONSUMER_HPP