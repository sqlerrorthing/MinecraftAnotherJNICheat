// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_CONCENTRICRINGSSTRUCTUREPLACEMENT_HPP
#define NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_CONCENTRICRINGSSTRUCTUREPLACEMENT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement
 * Remapped: ekl
 */
namespace ConcentricRingsStructurePlacement {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ekl", "net/minecraft/world/level/levelgen/structure/placement/ConcentricRingsStructurePlacement", "net/minecraft/class_6871", "net/minecraft/world/gen/chunk/placement/ConcentricRingsStructurePlacement", "net/minecraft/src/C_203218_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_36419", "CODEC", "f_204949_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_36419", "CODEC", "f_204949_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#distance
    static jint get_field_distance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "distance", "field_37768", "distance", "f_204950_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#distance
    static void set_field_distance(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "distance", "field_37768", "distance", "f_204950_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#spread
    static jint get_field_spread(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "spread", "field_37769", "spread", "f_204951_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#spread
    static void set_field_spread(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "spread", "field_37769", "spread", "f_204951_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#count
    static jint get_field_count(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "count", "field_37770", "count", "f_204952_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#count
    static void set_field_count(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "count", "field_37770", "count", "f_204952_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#preferredBiomes
    static jobject get_field_preferredBiomes(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "preferredBiomes", "field_37771", "preferredBiomes", "f_226974_"), "Ljq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.chunk.placement.ConcentricRingsStructurePlacement#preferredBiomes
    static void set_field_preferredBiomes(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "preferredBiomes", "field_37771", "preferredBiomes", "f_226974_"), "Ljq;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_buildConcentricRingsCodec() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "codec", "method_41629", "buildConcentricRingsCodec", "m_226996_"), "(Lcom/mojang/serialization/codecs/RecordCodecBuilder$Instance;)Lcom/mojang/datafixers/Products$P9;");
    }

    static jobject buildConcentricRingsCodec(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_buildConcentricRingsCodec();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "distance", "method_41627", "getDistance", "m_204965_"), "()I");
    }

    static jint getDistance(const jobject& obj) {
                
       const auto methodID = methodID_getDistance();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSpread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "spread", "method_41628", "getSpread", "m_204966_"), "()I");
    }

    static jint getSpread(const jobject& obj) {
                
       const auto methodID = methodID_getSpread();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCount() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "count", "method_41630", "getCount", "m_204967_"), "()I");
    }

    static jint getCount(const jobject& obj) {
                
       const auto methodID = methodID_getCount();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPreferredBiomes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "preferredBiomes", "method_41631", "getPreferredBiomes", "m_226998_"), "()Ljq;");
    }

    static jobject getPreferredBiomes(const jobject& obj) {
                
       const auto methodID = methodID_getPreferredBiomes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_isStartChunk() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isPlacementChunk", "method_40168", "isStartChunk", "m_214090_"), "(Ldva;II)Z");
    }

    static jboolean isStartChunk(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2) {
                
       const auto methodID = methodID_isStartChunk();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "type", "method_40166", "getType", "m_203443_"), "()Lekp;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_CHUNK_PLACEMENT_CONCENTRICRINGSSTRUCTUREPLACEMENT_HPP