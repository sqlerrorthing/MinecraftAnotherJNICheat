// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$MCOSERVERCOMPARATOR_HPP
#define NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$MCOSERVERCOMPARATOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.realms.dto.RealmsServer$McoServerComparator
 * Remapped: fcp$b
 */
namespace RealmsServer$McoServerComparator {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fcp$b", "com/mojang/realmsclient/dto/RealmsServer$McoServerComparator", "net/minecraft/class_4877$class_4319", "net/minecraft/client/realms/dto/RealmsServer$McoServerComparator", "net/minecraft/src/C_3244_$C_3245_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.realms.dto.RealmsServer$McoServerComparator#refOwner
    static jobject get_field_refOwner(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "refOwner", "field_19432", "refOwner", "f_87532_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.realms.dto.RealmsServer$McoServerComparator#refOwner
    static void set_field_refOwner(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "refOwner", "field_19432", "refOwner", "f_87532_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_compare() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compare", "method_20830", "compare", "compare"), "(Lfcp;Lfcp;)I");
    }

    static jint compare(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_compare();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_REALMS_DTO_REALMSSERVER$MCOSERVERCOMPARATOR_HPP