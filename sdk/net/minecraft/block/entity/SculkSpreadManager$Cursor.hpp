// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_SCULKSPREADMANAGER$CURSOR_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_SCULKSPREADMANAGER$CURSOR_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.SculkSpreadManager$Cursor
 * Remapped: dmu$a
 */
namespace SculkSpreadManager$Cursor {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dmu$a", "net/minecraft/world/level/block/SculkSpreader$ChargeCursor", "net/minecraft/class_7128$class_7129", "net/minecraft/block/entity/SculkSpreadManager$Cursor", "net/minecraft/src/C_213114_$C_213115_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.block.entity.SculkSpreadManager$Cursor#OFFSETS
    [[maybe_unused]] static jobject get_field_OFFSETS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NON_CORNER_NEIGHBOURS", "field_37624", "OFFSETS", "f_222287_"), "Lit/unimi/dsi/fastutil/objects/ObjectArrayList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkSpreadManager$Cursor#OFFSETS
    [[maybe_unused]] static void set_field_OFFSETS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "NON_CORNER_NEIGHBOURS", "field_37624", "OFFSETS", "f_222287_"), "Lit/unimi/dsi/fastutil/objects/ObjectArrayList;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.SculkSpreadManager$Cursor#field_37622
    [[maybe_unused]] static jint get_field_field_37622() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_CURSOR_DECAY_DELAY", "field_37622", "field_37622", "f_222285_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.SculkSpreadManager$Cursor#field_37622
    [[maybe_unused]] static void set_field_field_37622(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_CURSOR_DECAY_DELAY", "field_37622", "field_37622", "f_222285_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkSpreadManager$Cursor#pos
    static jobject get_field_pos(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pos", "field_37625", "pos", "f_222288_"), "Ljd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkSpreadManager$Cursor#pos
    static void set_field_pos(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "pos", "field_37625", "pos", "f_222288_"), "Ljd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.block.entity.SculkSpreadManager$Cursor#charge
    static jint get_field_charge(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "charge", "field_37626", "charge", "f_222289_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static default field net.minecraft.block.entity.SculkSpreadManager$Cursor#charge
    static void set_field_charge(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "charge", "field_37626", "charge", "f_222289_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkSpreadManager$Cursor#update
    static jint get_field_update(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "updateDelay", "field_37627", "update", "f_222290_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkSpreadManager$Cursor#update
    static void set_field_update(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "updateDelay", "field_37627", "update", "f_222290_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkSpreadManager$Cursor#decay
    static jint get_field_decay(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "decayDelay", "field_37628", "decay", "f_222291_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkSpreadManager$Cursor#decay
    static void set_field_decay(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "decayDelay", "field_37628", "decay", "f_222291_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.SculkSpreadManager$Cursor#faces
    static jobject get_field_faces(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "facings", "field_37629", "faces", "f_222292_"), "Ljava/util/Set;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkSpreadManager$Cursor#faces
    static void set_field_faces(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "facings", "field_37629", "faces", "f_222292_"), "Ljava/util/Set;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for static private field net.minecraft.block.entity.SculkSpreadManager$Cursor#DIRECTION_SET_CODEC
    [[maybe_unused]] static jobject get_field_DIRECTION_SET_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DIRECTION_SET", "field_37630", "DIRECTION_SET_CODEC", "f_222293_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.SculkSpreadManager$Cursor#DIRECTION_SET_CODEC
    [[maybe_unused]] static void set_field_DIRECTION_SET_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "DIRECTION_SET", "field_37630", "DIRECTION_SET_CODEC", "f_222293_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.SculkSpreadManager$Cursor#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_37623", "CODEC", "f_222286_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.SculkSpreadManager$Cursor#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CODEC", "field_37623", "CODEC", "f_222286_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_getPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getPos", "method_41495", "getPos", "m_222304_"), "()Ljd;");
    }

    static jobject getPos(const jobject& obj) {
                
       const auto methodID = methodID_getPos();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCharge() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getCharge", "method_41508", "getCharge", "m_222341_"), "()I");
    }

    static jint getCharge(const jobject& obj) {
                
       const auto methodID = methodID_getCharge();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDecay() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getDecayDelay", "method_41510", "getDecay", "m_222344_"), "()I");
    }

    static jint getDecay(const jobject& obj) {
                
       const auto methodID = methodID_getDecay();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getFaces() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getFacingData", "method_41512", "getFaces", "m_222347_"), "()Ljava/util/Set;");
    }

    static jobject getFaces(const jobject& obj) {
                
       const auto methodID = methodID_getFaces();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canSpread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldUpdate", "method_41500", "canSpread", "m_222325_"), "(Ldcx;Ljd;Z)Z");
    }

    static jboolean canSpread(const jobject& obj, const jobject& arg0, const jobject& arg1, const jboolean& arg2) {
                
       const auto methodID = methodID_canSpread();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_spread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "update", "method_41499", "spread", "m_222311_"), "(Ldcx;Ljd;Layw;Ldmu;Z)V");
    }

    static void spread(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4) {
                
       const auto methodID = methodID_spread();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_merge() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "mergeWith", "method_41501", "merge", "m_222331_"), "(Ldmu$a;)V");
    }

    static void merge(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_merge();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getSpreadable() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getBlockBehaviour", "method_41503", "getSpreadable", "m_222333_"), "(Ldtc;)Ldmp;");
    }

    static jobject getSpreadable(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getSpreadable();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_shuffleOffsets() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getRandomizedNonCornerNeighbourOffsets", "method_41507", "shuffleOffsets", "m_222305_"), "(Layw;)Ljava/util/List;");
    }

    static jobject shuffleOffsets(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_shuffleOffsets();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getSpreadPos() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getValidMovementPos", "method_41498", "getSpreadPos", "m_222307_"), "(Ldcx;Ljd;Layw;)Ljd;");
    }

    static jobject getSpreadPos(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_getSpreadPos();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID__canSpread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isMovementUnobstructed", "method_41496", "canSpread", "m_222317_"), "(Ldcx;Ljd;Ljd;)Z");
    }

    static jboolean _canSpread(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID__canSpread();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID___canSpread() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "isUnobstructed", "method_41497", "canSpread", "m_222321_"), "(Ldcx;Ljd;Lji;)Z");
    }

    static jboolean __canSpread(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID___canSpread();
       return MinecraftSDK::env->CallStaticBooleanMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_SCULKSPREADMANAGER$CURSOR_HPP