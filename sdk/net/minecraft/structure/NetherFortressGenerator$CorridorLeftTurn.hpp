// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_NETHERFORTRESSGENERATOR$CORRIDORLEFTTURN_HPP
#define NET_MINECRAFT_STRUCTURE_NETHERFORTRESSGENERATOR$CORRIDORLEFTTURN_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn
 * Remapped: elx$h
 */
namespace NetherFortressGenerator$CorridorLeftTurn {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("elx$h", "net/minecraft/world/level/levelgen/structure/structures/NetherFortressPieces$CastleSmallCorridorLeftTurnPiece", "net/minecraft/class_3390$class_3398", "net/minecraft/structure/NetherFortressGenerator$CorridorLeftTurn", "net/minecraft/src/C_213207_$C_213216_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn#SIZE_X
    [[maybe_unused]] static jint get_field_SIZE_X() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WIDTH", "field_31580", "SIZE_X", "f_228227_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn#SIZE_X
    [[maybe_unused]] static void set_field_SIZE_X(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WIDTH", "field_31580", "SIZE_X", "f_228227_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn#SIZE_Y
    [[maybe_unused]] static jint get_field_SIZE_Y() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HEIGHT", "field_31581", "SIZE_Y", "f_228228_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn#SIZE_Y
    [[maybe_unused]] static void set_field_SIZE_Y(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HEIGHT", "field_31581", "SIZE_Y", "f_228228_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn#SIZE_Z
    [[maybe_unused]] static jint get_field_SIZE_Z() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEPTH", "field_31582", "SIZE_Z", "f_228229_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn#SIZE_Z
    [[maybe_unused]] static void set_field_SIZE_Z(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEPTH", "field_31582", "SIZE_Z", "f_228229_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn#containsChest
    static jboolean get_field_containsChest(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isNeedingChest", "field_14496", "containsChest", "f_228230_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.NetherFortressGenerator$CorridorLeftTurn#containsChest
    static void set_field_containsChest(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "isNeedingChest", "field_14496", "containsChest", "f_228230_"), "Z");
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
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createPiece", "method_14803", "create", "m_228250_"), "(Lejw;Layw;IIILji;I)Lelx$h;");
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

#endif // NET_MINECRAFT_STRUCTURE_NETHERFORTRESSGENERATOR$CORRIDORLEFTTURN_HPP