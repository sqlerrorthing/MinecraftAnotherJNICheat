// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATAFIXER_FIX_POINTOFINTERESTRENAMEFIX_HPP
#define NET_MINECRAFT_DATAFIXER_FIX_POINTOFINTERESTRENAMEFIX_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.datafixer.fix.PointOfInterestRenameFix
 * Remapped: bgk
 */
namespace PointOfInterestRenameFix {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("bgk", "net/minecraft/util/datafix/fixes/PoiTypeRenameFix", "net/minecraft/class_7507", "net/minecraft/datafixer/fix/PointOfInterestRenameFix", "net/minecraft/src/C_212997_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.datafixer.fix.PointOfInterestRenameFix#renamer
    static jobject get_field_renamer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "renamer", "field_39406", "renamer", "f_216708_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.datafixer.fix.PointOfInterestRenameFix#renamer
    static void set_field_renamer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "renamer", "field_39406", "renamer", "f_216708_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_update() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "processRecords", "method_44186", "update", "m_213759_"), "(Ljava/util/stream/Stream;)Ljava/util/stream/Stream;");
    }

    static jobject update(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_update();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATAFIXER_FIX_POINTOFINTERESTRENAMEFIX_HPP