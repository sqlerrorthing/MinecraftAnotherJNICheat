// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_POI_POINTOFINTEREST_HPP
#define NET_MINECRAFT_WORLD_POI_POINTOFINTEREST_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.poi.PointOfInterest
 * Remapped: cet
 */
namespace PointOfInterest {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cet", "net/minecraft/world/entity/ai/village/poi/PoiRecord", "net/minecraft/class_4156", "net/minecraft/world/poi/PointOfInterest", "net/minecraft/src/C_790_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.world.poi.PointOfInterest#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pos", "field_18492", "pos", "f_27227_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterest#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "pos", "field_18492", "pos", "f_27227_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.poi.PointOfInterest#type
    static jobject get_field_type(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "poiType", "field_18493", "type", "f_27228_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterest#type
    static void set_field_type(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "poiType", "field_18493", "type", "f_27228_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.poi.PointOfInterest#freeTickets
    static jint get_field_freeTickets(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "freeTickets", "field_18494", "freeTickets", "f_27229_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterest#freeTickets
    static void set_field_freeTickets(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "freeTickets", "field_18494", "freeTickets", "f_27229_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.poi.PointOfInterest#updateListener
    static jobject get_field_updateListener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "setDirty", "field_18495", "updateListener", "f_27230_"), "Ljava/lang/Runnable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterest#updateListener
    static void set_field_updateListener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "setDirty", "field_18495", "updateListener", "f_27230_"), "Ljava/lang/Runnable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_28359", "createCodec", "m_27242_"), "(Ljava/lang/Runnable;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getFreeTickets() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFreeTickets", "method_35156", "getFreeTickets", "m_148667_"), "()I");
    }

    static jint getFreeTickets(const jobject& obj) {
                
       const auto methodID = methodID_getFreeTickets();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_reserveTicket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "acquireTicket", "method_19137", "reserveTicket", "m_27247_"), "()Z");
    }

    static jboolean reserveTicket(const jobject& obj) {
                
       const auto methodID = methodID_reserveTicket();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_releaseTicket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "releaseTicket", "method_19138", "releaseTicket", "m_27250_"), "()Z");
    }

    static jboolean releaseTicket(const jobject& obj) {
                
       const auto methodID = methodID_releaseTicket();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_hasSpace() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "hasSpace", "method_19139", "hasSpace", "m_27253_"), "()Z");
    }

    static jboolean hasSpace(const jobject& obj) {
                
       const auto methodID = methodID_hasSpace();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isOccupied() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "isOccupied", "method_19140", "isOccupied", "m_27254_"), "()Z");
    }

    static jboolean isOccupied(const jobject& obj) {
                
       const auto methodID = methodID_isOccupied();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getPos", "method_19141", "getPos", "m_27257_"), "()Ljd;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getPoiType", "method_19142", "getType", "m_218018_"), "()Ljm;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_POI_POINTOFINTEREST_HPP