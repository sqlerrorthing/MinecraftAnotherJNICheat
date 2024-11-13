// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$SPIRALSTAIRCASE_HPP
#define NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$SPIRALSTAIRCASE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StrongholdGenerator$SpiralStaircase
 * Remapped: emj$l
 */
namespace StrongholdGenerator$SpiralStaircase {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emj$l", "net/minecraft/world/level/levelgen/structure/structures/StrongholdPieces$StairsDown", "net/minecraft/class_3421$class_3433", "net/minecraft/structure/StrongholdGenerator$SpiralStaircase", "net/minecraft/src/C_213268_$C_213283_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.structure.StrongholdGenerator$SpiralStaircase#SIZE_X
    [[maybe_unused]] static jint get_field_SIZE_X() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WIDTH", "field_31648", "SIZE_X", "f_229754_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.StrongholdGenerator$SpiralStaircase#SIZE_X
    [[maybe_unused]] static void set_field_SIZE_X(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WIDTH", "field_31648", "SIZE_X", "f_229754_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.StrongholdGenerator$SpiralStaircase#SIZE_Y
    [[maybe_unused]] static jint get_field_SIZE_Y() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HEIGHT", "field_31649", "SIZE_Y", "f_229755_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.StrongholdGenerator$SpiralStaircase#SIZE_Y
    [[maybe_unused]] static void set_field_SIZE_Y(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HEIGHT", "field_31649", "SIZE_Y", "f_229755_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.StrongholdGenerator$SpiralStaircase#SIZE_Z
    [[maybe_unused]] static jint get_field_SIZE_Z() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEPTH", "field_31650", "SIZE_Z", "f_229756_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.StrongholdGenerator$SpiralStaircase#SIZE_Z
    [[maybe_unused]] static void set_field_SIZE_Z(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEPTH", "field_31650", "SIZE_Z", "f_229756_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.StrongholdGenerator$SpiralStaircase#isStructureStart
    static jboolean get_field_isStructureStart(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isSource", "field_15281", "isStructureStart", "f_229757_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.StrongholdGenerator$SpiralStaircase#isStructureStart
    static void set_field_isStructureStart(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isSource", "field_15281", "isStructureStart", "f_229757_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_writeNbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addAdditionalSaveData", "method_14943", "writeNbt", "m_183620_"), "(Lekh;Lub;)V");
    }

    static void writeNbt(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_writeNbt();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_fillOpenings() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addChildren", "method_14918", "fillOpenings", "m_214092_"), "(Lejv;Lejw;Layw;)V");
    }

    static void fillOpenings(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_fillOpenings();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_create() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createPiece", "method_14866", "create", "m_229786_"), "(Lejw;Layw;IIILji;I)Lemj$l;");
    }

    static jobject create(const jobject& arg0, const jobject& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jobject& arg5, const jint& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "postProcess", "method_14931", "generate", "m_213694_"), "(Ldds;Lddq;Lduz;Layw;Lejj;Ldcd;Ljd;)V");
    }

    static void generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5, const jobject& arg6) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$SPIRALSTAIRCASE_HPP