// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_POI_POINTOFINTERESTSET_HPP
#define NET_MINECRAFT_WORLD_POI_POINTOFINTERESTSET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.poi.PointOfInterestSet
 * Remapped: ceu
 */
namespace PointOfInterestSet {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ceu", "net/minecraft/world/entity/ai/village/poi/PoiSection", "net/minecraft/class_4157", "net/minecraft/world/poi/PointOfInterestSet", "net/minecraft/src/C_791_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.poi.PointOfInterestSet#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_18496", "LOGGER", "f_27260_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterestSet#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_18496", "LOGGER", "f_27260_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.poi.PointOfInterestSet#pointsOfInterestByPos
    static jobject get_field_pointsOfInterestByPos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "records", "field_18497", "pointsOfInterestByPos", "f_27261_"), "Lit/unimi/dsi/fastutil/shorts/Short2ObjectMap;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterestSet#pointsOfInterestByPos
    static void set_field_pointsOfInterestByPos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "records", "field_18497", "pointsOfInterestByPos", "f_27261_"), "Lit/unimi/dsi/fastutil/shorts/Short2ObjectMap;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.poi.PointOfInterestSet#pointsOfInterestByType
    static jobject get_field_pointsOfInterestByType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "byType", "field_18498", "pointsOfInterestByType", "f_27262_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterestSet#pointsOfInterestByType
    static void set_field_pointsOfInterestByType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "byType", "field_18498", "pointsOfInterestByType", "f_27262_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.poi.PointOfInterestSet#updateListener
    static jobject get_field_updateListener(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "setDirty", "field_18499", "updateListener", "f_27263_"), "Ljava/lang/Runnable;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterestSet#updateListener
    static void set_field_updateListener(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "setDirty", "field_18499", "updateListener", "f_27263_"), "Ljava/lang/Runnable;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.poi.PointOfInterestSet#valid
    static jboolean get_field_valid(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "isValid", "field_19226", "valid", "f_27264_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.poi.PointOfInterestSet#valid
    static void set_field_valid(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "isValid", "field_19226", "valid", "f_27264_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID_createCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "codec", "method_28364", "createCodec", "m_27295_"), "(Ljava/lang/Runnable;)Lcom/mojang/serialization/Codec;");
    }

    static jobject createCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_createCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getRecords", "method_19150", "get", "m_27304_"), "(Ljava/util/function/Predicate;Lces$b;)Ljava/util/stream/Stream;");
    }

    static jobject get(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_19146", "add", "m_218021_"), "(Ljd;Ljm;)V");
    }

    static void add(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_add();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__add() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "add", "method_20350", "add", "m_27273_"), "(Lcet;)Z");
    }

    static jboolean _add(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__add();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_remove() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "remove", "method_19145", "remove", "m_27279_"), "(Ljd;)V");
    }

    static void remove(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_remove();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getFreeTickets() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getFreeTickets", "method_35157", "getFreeTickets", "m_148682_"), "(Ljd;)I");
    }

    static jint getFreeTickets(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getFreeTickets();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_releaseTicket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "release", "method_19153", "releaseTicket", "m_27317_"), "(Ljd;)Z");
    }

    static jboolean releaseTicket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_releaseTicket();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_test() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "exists", "method_19147", "test", "m_27288_"), "(Ljd;Ljava/util/function/Predicate;)Z");
    }

    static jboolean test(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_test();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getType", "method_19154", "getType", "m_27319_"), "(Ljd;)Ljava/util/Optional;");
    }

    static jobject getType(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__get() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getPoiRecord", "method_33584", "get", "m_148684_"), "(Ljd;)Ljava/util/Optional;");
    }

    static jobject _get(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__get();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_updatePointsOfInterest() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "refresh", "method_20353", "updatePointsOfInterest", "m_27302_"), "(Ljava/util/function/Consumer;)V");
    }

    static void updatePointsOfInterest(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_updatePointsOfInterest();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_clear() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "clear", "method_20395", "clear", "m_27310_"), "()V");
    }

    static void clear(const jobject& obj) {
                
       const auto methodID = methodID_clear();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_isValid() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isValid", "method_22444", "isValid", "m_27272_"), "()Z");
    }

    static jboolean isValid(const jobject& obj) {
                
       const auto methodID = methodID_isValid();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_POI_POINTOFINTERESTSET_HPP