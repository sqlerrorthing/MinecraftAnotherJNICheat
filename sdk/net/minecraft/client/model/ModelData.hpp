// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_MODEL_MODELDATA_HPP
#define NET_MINECRAFT_CLIENT_MODEL_MODELDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.model.ModelData
 * Remapped: fys
 */
namespace ModelData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fys", "net/minecraft/client/model/geom/builders/MeshDefinition", "net/minecraft/class_5609", "net/minecraft/client/model/ModelData", "net/minecraft/src/C_141665_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.model.ModelData#data
    static jobject get_field_data(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "root", "field_27727", "data", "f_171574_"), "Lfyt;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.model.ModelData#data
    static void set_field_data(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "root", "field_27727", "data", "f_171574_"), "Lfyt;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getRoot() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRoot", "method_32111", "getRoot", "m_171576_"), "()Lfyt;");
    }

    static jobject getRoot(const jobject& obj) {
                
       const auto methodID = methodID_getRoot();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_MODEL_MODELDATA_HPP