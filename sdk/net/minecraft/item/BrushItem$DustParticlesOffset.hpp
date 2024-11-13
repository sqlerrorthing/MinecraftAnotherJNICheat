// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ITEM_BRUSHITEM$DUSTPARTICLESOFFSET_HPP
#define NET_MINECRAFT_ITEM_BRUSHITEM$DUSTPARTICLESOFFSET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.item.BrushItem$DustParticlesOffset
 * Remapped: csu$a
 */
namespace BrushItem$DustParticlesOffset {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("csu$a", "net/minecraft/world/item/BrushItem$DustParticlesDelta", "net/minecraft/class_8162$class_8163", "net/minecraft/item/BrushItem$DustParticlesOffset", "net/minecraft/src/C_271073_$C_271054_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.item.BrushItem$DustParticlesOffset#xd
    static jdouble get_field_xd(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "xd", "comp_1286", "xd", "f_271456_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.BrushItem$DustParticlesOffset#xd
    static void set_field_xd(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "xd", "comp_1286", "xd", "f_271456_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.BrushItem$DustParticlesOffset#yd
    static jdouble get_field_yd(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "yd", "comp_1287", "yd", "f_271284_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.BrushItem$DustParticlesOffset#yd
    static void set_field_yd(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "yd", "comp_1287", "yd", "f_271284_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.item.BrushItem$DustParticlesOffset#zd
    static jdouble get_field_zd(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "zd", "comp_1288", "zd", "f_271522_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.item.BrushItem$DustParticlesOffset#zd
    static void set_field_zd(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "zd", "comp_1288", "zd", "f_271522_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.item.BrushItem$DustParticlesOffset#field_42685
    [[maybe_unused]] static jdouble get_field_field_42685() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ALONG_SIDE_DELTA", "field_42685", "field_42685", "f_271382_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.item.BrushItem$DustParticlesOffset#field_42685
    [[maybe_unused]] static void set_field_field_42685(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ALONG_SIDE_DELTA", "field_42685", "field_42685", "f_271382_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.item.BrushItem$DustParticlesOffset#field_42686
    [[maybe_unused]] static jdouble get_field_field_42686() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OUT_FROM_SIDE_DELTA", "field_42686", "field_42686", "f_271440_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticDoubleField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.item.BrushItem$DustParticlesOffset#field_42686
    [[maybe_unused]] static void set_field_field_42686(const jdouble &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "OUT_FROM_SIDE_DELTA", "field_42686", "field_42686", "f_271440_"), "D");
        return MinecraftSDK::env->SetStaticDoubleField(clazz, fieldID, value);
    };

    static jmethodID methodID_fromSide() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "fromDirection", "method_49185", "fromSide", "m_271695_"), "(Lexc;Lji;)Lcsu$a;");
    }

    static jobject fromSide(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_fromSide();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__xd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "xd", "comp_1286", "xd", "f_271456_"), "()D");
    }

    static jdouble _xd(const jobject& obj) {
                
       const auto methodID = methodID__xd();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__yd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "yd", "comp_1287", "yd", "f_271284_"), "()D");
    }

    static jdouble _yd(const jobject& obj) {
                
       const auto methodID = methodID__yd();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
    static jmethodID methodID__zd() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "zd", "comp_1288", "zd", "f_271522_"), "()D");
    }

    static jdouble _zd(const jobject& obj) {
                
       const auto methodID = methodID__zd();
       return MinecraftSDK::env->CallDoubleMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ITEM_BRUSHITEM$DUSTPARTICLESOFFSET_HPP