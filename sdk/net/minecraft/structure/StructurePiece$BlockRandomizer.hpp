// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRUCTUREPIECE$BLOCKRANDOMIZER_HPP
#define NET_MINECRAFT_STRUCTURE_STRUCTUREPIECE$BLOCKRANDOMIZER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StructurePiece$BlockRandomizer
 * Remapped: ejv$a
 */
namespace StructurePiece$BlockRandomizer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ejv$a", "net/minecraft/world/level/levelgen/structure/StructurePiece$BlockSelector", "net/minecraft/class_3443$class_3444", "net/minecraft/structure/StructurePiece$BlockRandomizer", "net/minecraft/src/C_2585_$C_2587_"));
        }
        return cachedClass;
    };

    // getter for protected field net.minecraft.structure.StructurePiece$BlockRandomizer#block
    static jobject get_field_block(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "next", "field_15317", "block", "f_73553_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static protected field net.minecraft.structure.StructurePiece$BlockRandomizer#block
    static void set_field_block(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "next", "field_15317", "block", "f_73553_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_setBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "next", "method_14948", "setBlock", "m_213766_"), "(Layw;IIIZ)V");
    }

    static void setBlock(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_setBlock();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_getBlock() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getNext", "method_14947", "getBlock", "m_73555_"), "()Ldtc;");
    }

    static jobject getBlock(const jobject& obj) {
                
       const auto methodID = methodID_getBlock();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_STRUCTUREPIECE$BLOCKRANDOMIZER_HPP