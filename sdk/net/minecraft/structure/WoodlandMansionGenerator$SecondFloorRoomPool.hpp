// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$SECONDFLOORROOMPOOL_HPP
#define NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$SECONDFLOORROOMPOOL_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.structure.WoodlandMansionGenerator$SecondFloorRoomPool
 * Remapped: emn$f
 */
namespace WoodlandMansionGenerator$SecondFloorRoomPool {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("emn$f", "net/minecraft/world/level/levelgen/structure/structures/WoodlandMansionPieces$SecondFloorRoomCollection", "net/minecraft/class_3471$class_3477", "net/minecraft/structure/WoodlandMansionGenerator$SecondFloorRoomPool", "net/minecraft/src/C_213293_$C_213299_"));
        }
        return cachedClass;
    };

    static jmethodID methodID_getSmallRoom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get1x1", "method_15037", "getSmallRoom", "m_214126_"), "(Layw;)Ljava/lang/String;");
    }

    static jobject getSmallRoom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSmallRoom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSmallSecretRoom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get1x1Secret", "method_15032", "getSmallSecretRoom", "m_214127_"), "(Layw;)Ljava/lang/String;");
    }

    static jobject getSmallSecretRoom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getSmallSecretRoom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getMediumFunctionalRoom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "get1x2SideEntrance", "method_15033", "getMediumFunctionalRoom", "m_213986_"), "(Layw;Z)Ljava/lang/String;");
    }

    static jobject getMediumFunctionalRoom(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_getMediumFunctionalRoom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMediumGenericRoom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "get1x2FrontEntrance", "method_15031", "getMediumGenericRoom", "m_213985_"), "(Layw;Z)Ljava/lang/String;");
    }

    static jobject getMediumGenericRoom(const jobject& obj, const jobject& arg0, const jboolean& arg1) {
                
       const auto methodID = methodID_getMediumGenericRoom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getMediumSecretRoom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "get1x2Secret", "method_15035", "getMediumSecretRoom", "m_214128_"), "(Layw;)Ljava/lang/String;");
    }

    static jobject getMediumSecretRoom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getMediumSecretRoom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBigRoom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "get2x2", "method_15034", "getBigRoom", "m_214124_"), "(Layw;)Ljava/lang/String;");
    }

    static jobject getBigRoom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBigRoom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getBigSecretRoom() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "get2x2Secret", "method_15036", "getBigSecretRoom", "m_214125_"), "(Layw;)Ljava/lang/String;");
    }

    static jobject getBigSecretRoom(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getBigSecretRoom();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_STRUCTURE_WOODLANDMANSIONGENERATOR$SECONDFLOORROOMPOOL_HPP