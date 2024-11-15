// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$FLOATLERPERIMPL_HPP
#define NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$FLOATLERPERIMPL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.entity.decoration.DisplayEntity$FloatLerperImpl
 * Remapped: bsq$h
 */
namespace DisplayEntity$FloatLerperImpl {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bsq$h", "net/minecraft/world/entity/Display$LinearFloatInterpolator", "net/minecraft/class_8113$class_8227", "net/minecraft/entity/decoration/DisplayEntity$FloatLerperImpl", "net/minecraft/src/C_268383_$C_276384_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$FloatLerperImpl#previous
    static jfloat get_field_previous(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "previous", "comp_1324", "previous", "f_276496_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$FloatLerperImpl#previous
    static void set_field_previous(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "previous", "comp_1324", "previous", "f_276496_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.entity.decoration.DisplayEntity$FloatLerperImpl#current
    static jfloat get_field_current(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "current", "comp_1325", "current", "f_276689_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.entity.decoration.DisplayEntity$FloatLerperImpl#current
    static void set_field_current(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "current", "comp_1325", "current", "f_276689_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_lerp() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("get", "get", "method_48886", "lerp", "m_269229_"), "(F)F");
    }

    static jfloat lerp(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID_lerp();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__previous() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "previous", "comp_1324", "previous", "f_276496_"), "()F");
    }

    static jfloat _previous(const jobject& obj) {
                
       const auto methodID = methodID__previous();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID__current() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "current", "comp_1325", "current", "f_276689_"), "()F");
    }

    static jfloat _current(const jobject& obj) {
                
       const auto methodID = methodID__current();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_ENTITY_DECORATION_DISPLAYENTITY$FLOATLERPERIMPL_HPP