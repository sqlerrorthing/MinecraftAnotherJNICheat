// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_CLIENT_MULTIPARTBLOCKSTATESUPPLIER$CONDITIONALMULTIPART_HPP
#define NET_MINECRAFT_DATA_CLIENT_MULTIPARTBLOCKSTATESUPPLIER$CONDITIONALMULTIPART_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.client.MultipartBlockStateSupplier$ConditionalMultipart
 * Remapped: nt$a
 */
namespace MultipartBlockStateSupplier$ConditionalMultipart {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("nt$a", "net/minecraft/data/models/blockstates/MultiPartGenerator$ConditionalEntry", "net/minecraft/class_4922$class_4923", "net/minecraft/data/client/MultipartBlockStateSupplier$ConditionalMultipart", "net/minecraft/src/C_4800_$C_4802_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.client.MultipartBlockStateSupplier$ConditionalMultipart#when
    static jobject get_field_when(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "condition", "field_22857", "when", "f_125224_"), "Lns;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.client.MultipartBlockStateSupplier$ConditionalMultipart#when
    static void set_field_when(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "condition", "field_22857", "when", "f_125224_"), "Lns;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_validate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "validate", "method_25767", "validate", "m_5848_"), "(Ldtd;)V");
    }

    static void validate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_validate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_extraToJson() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decorate", "method_25768", "extraToJson", "m_8000_"), "(Lcom/google/gson/JsonObject;)V");
    }

    static void extraToJson(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_extraToJson();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_CLIENT_MULTIPARTBLOCKSTATESUPPLIER$CONDITIONALMULTIPART_HPP