// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_DATAOUTPUT_HPP
#define NET_MINECRAFT_DATA_DATAOUTPUT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.DataOutput
 * Remapped: mc
 */
namespace DataOutput {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("mc", "net/minecraft/data/PackOutput", "net/minecraft/class_7784", "net/minecraft/data/DataOutput", "net/minecraft/src/C_243603_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.DataOutput#path
    static jobject get_field_path(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "outputFolder", "field_40597", "path", "f_243723_"), "Ljava/nio/file/Path;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.DataOutput#path
    static void set_field_path(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "outputFolder", "field_40597", "path", "f_243723_"), "Ljava/nio/file/Path;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getPath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOutputFolder", "method_45971", "getPath", "m_245114_"), "()Ljava/nio/file/Path;");
    }

    static jobject getPath(const jobject& obj) {
                
       const auto methodID = methodID_getPath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_resolvePath() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getOutputFolder", "method_45972", "resolvePath", "m_247566_"), "(Lmc$b;)Ljava/nio/file/Path;");
    }

    static jobject resolvePath(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_resolvePath();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getResolver() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createPathProvider", "method_45973", "getResolver", "m_245269_"), "(Lmc$b;Ljava/lang/String;)Lmc$a;");
    }

    static jobject getResolver(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_getResolver();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__getResolver() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createRegistryElementsPathProvider", "method_60917", "getResolver", "m_339483_"), "(Lakq;)Lmc$a;");
    }

    static jobject _getResolver(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__getResolver();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getTagResolver() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createRegistryTagsPathProvider", "method_60918", "getTagResolver", "m_340578_"), "(Lakq;)Lmc$a;");
    }

    static jobject getTagResolver(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getTagResolver();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_DATAOUTPUT_HPP