// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$PORTALROOM_HPP
#define NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$PORTALROOM_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StrongholdGenerator$PortalRoom
 * Remapped: emj$g
 */
namespace StrongholdGenerator$PortalRoom {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emj$g", "net/minecraft/world/level/levelgen/structure/structures/StrongholdPieces$PortalRoom", "net/minecraft/class_3421$class_3428", "net/minecraft/structure/StrongholdGenerator$PortalRoom", "net/minecraft/src/C_213268_$C_213278_"));
        }
        return cachedClass;
    };

    // getter for static protected field net.minecraft.structure.StrongholdGenerator$PortalRoom#SIZE_X
    [[maybe_unused]] static jint get_field_SIZE_X() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WIDTH", "field_31639", "SIZE_X", "f_229624_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.structure.StrongholdGenerator$PortalRoom#SIZE_X
    [[maybe_unused]] static void set_field_SIZE_X(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "WIDTH", "field_31639", "SIZE_X", "f_229624_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.structure.StrongholdGenerator$PortalRoom#SIZE_Y
    [[maybe_unused]] static jint get_field_SIZE_Y() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HEIGHT", "field_31640", "SIZE_Y", "f_229625_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.structure.StrongholdGenerator$PortalRoom#SIZE_Y
    [[maybe_unused]] static void set_field_SIZE_Y(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "HEIGHT", "field_31640", "SIZE_Y", "f_229625_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static protected field net.minecraft.structure.StrongholdGenerator$PortalRoom#SIZE_Z
    [[maybe_unused]] static jint get_field_SIZE_Z() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEPTH", "field_31641", "SIZE_Z", "f_229626_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static protected field net.minecraft.structure.StrongholdGenerator$PortalRoom#SIZE_Z
    [[maybe_unused]] static void set_field_SIZE_Z(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "DEPTH", "field_31641", "SIZE_Z", "f_229626_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.structure.StrongholdGenerator$PortalRoom#spawnerPlaced
    static jboolean get_field_spawnerPlaced(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "hasPlacedSpawner", "field_15279", "spawnerPlaced", "f_229627_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.structure.StrongholdGenerator$PortalRoom#spawnerPlaced
    static void set_field_spawnerPlaced(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "hasPlacedSpawner", "field_15279", "spawnerPlaced", "f_229627_"), "Z");
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
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "createPiece", "method_14863", "create", "m_229646_"), "(Lejw;IIILji;I)Lemj$g;");
    }

    static jobject create(const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4, const jint& arg5) {
       const auto clazz = self();
       const auto methodID = methodID_create();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
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

#endif // NET_MINECRAFT_STRUCTURE_STRONGHOLDGENERATOR$PORTALROOM_HPP