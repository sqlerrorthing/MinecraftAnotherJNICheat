// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_STRUCTURETEMPLATE$STRUCTUREBLOCKINFO_HPP
#define NET_MINECRAFT_STRUCTURE_STRUCTURETEMPLATE$STRUCTUREBLOCKINFO_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.StructureTemplate$StructureBlockInfo
 * Remapped: ent$c
 */
namespace StructureTemplate$StructureBlockInfo {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ent$c", "net/minecraft/world/level/levelgen/structure/templatesystem/StructureTemplate$StructureBlockInfo", "net/minecraft/class_3499$class_3501", "net/minecraft/structure/StructureTemplate$StructureBlockInfo", "net/minecraft/src/C_2634_$C_2638_"));
        }
        return cachedClass;
    };

    // getter for default field net.minecraft.structure.StructureTemplate$StructureBlockInfo#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pos", "comp_1341", "pos", "f_74675_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.StructureTemplate$StructureBlockInfo#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pos", "comp_1341", "pos", "f_74675_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.StructureTemplate$StructureBlockInfo#state
    static jobject get_field_state(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "state", "comp_1342", "state", "f_74676_"), "Ldtc;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.StructureTemplate$StructureBlockInfo#state
    static void set_field_state(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "state", "comp_1342", "state", "f_74676_"), "Ldtc;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.structure.StructureTemplate$StructureBlockInfo#nbt
    static jobject get_field_nbt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nbt", "comp_1343", "nbt", "f_74677_"), "Lub;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.structure.StructureTemplate$StructureBlockInfo#nbt
    static void set_field_nbt(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "nbt", "comp_1343", "nbt", "f_74677_"), "Lub;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__pos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "pos", "comp_1341", "pos", "f_74675_"), "()Ljd;");
    }

    static jobject _pos(const jobject& obj) {
                
       const auto methodID = methodID__pos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__state() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "state", "comp_1342", "state", "f_74676_"), "()Ldtc;");
    }

    static jobject _state(const jobject& obj) {
                
       const auto methodID = methodID__state();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__nbt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "nbt", "comp_1343", "nbt", "f_74677_"), "()Lub;");
    }

    static jobject _nbt(const jobject& obj) {
                
       const auto methodID = methodID__nbt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_STRUCTURETEMPLATE$STRUCTUREBLOCKINFO_HPP