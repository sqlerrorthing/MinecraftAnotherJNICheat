// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_MODEL_MODELPARTDATA_HPP
#define NET_MINECRAFT_CLIENT_MODEL_MODELPARTDATA_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.model.ModelPartData
 * Remapped: fyt
 */
namespace ModelPartData {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fyt", "net/minecraft/client/model/geom/builders/PartDefinition", "net/minecraft/class_5610", "net/minecraft/client/model/ModelPartData", "net/minecraft/src/C_141666_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.model.ModelPartData#cuboidData
    static jobject get_field_cuboidData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cubes", "field_27728", "cuboidData", "f_171577_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.model.ModelPartData#cuboidData
    static void set_field_cuboidData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "cubes", "field_27728", "cuboidData", "f_171577_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.model.ModelPartData#rotationData
    static jobject get_field_rotationData(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "partPose", "field_27729", "rotationData", "f_171578_"), "Lfym;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.model.ModelPartData#rotationData
    static void set_field_rotationData(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "partPose", "field_27729", "rotationData", "f_171578_"), "Lfym;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.model.ModelPartData#children
    static jobject get_field_children(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "children", "field_27730", "children", "f_171579_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.model.ModelPartData#children
    static void set_field_children(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "children", "field_27730", "children", "f_171579_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_addChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "addOrReplaceChild", "method_32117", "addChild", "m_171599_"), "(Ljava/lang/String;Lfyp;Lfym;)Lfyt;");
    }

    static jobject addChild(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_addChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_createPart() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "bake", "method_32112", "createPart", "m_171583_"), "(II)Lfyk;");
    }

    static jobject createPart(const jobject& obj, const jint& arg0, const jint& arg1) {
                
       const auto methodID = methodID_createPart();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getChild() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getChild", "method_32116", "getChild", "m_171597_"), "(Ljava/lang/String;)Lfyt;");
    }

    static jobject getChild(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getChild();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_MODEL_MODELPARTDATA_HPP