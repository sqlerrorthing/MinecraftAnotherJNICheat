// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_ENTITY_JIGSAWBLOCKENTITY$JOINT_HPP
#define NET_MINECRAFT_BLOCK_ENTITY_JIGSAWBLOCKENTITY$JOINT_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.entity.JigsawBlockEntity$Joint
 * Remapped: dri$a
 */
namespace JigsawBlockEntity$Joint {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dri$a", "net/minecraft/world/level/block/entity/JigsawBlockEntity$JointType", "net/minecraft/class_3751$class_4991", "net/minecraft/block/entity/JigsawBlockEntity$Joint", "net/minecraft/src/C_2011_$C_2012_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity$Joint#ROLLABLE
    [[maybe_unused]] static jobject get_field_ROLLABLE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ROLLABLE", "field_23329", "ROLLABLE", "ROLLABLE"), "Ldri$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity$Joint#ROLLABLE
    [[maybe_unused]] static void set_field_ROLLABLE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ROLLABLE", "field_23329", "ROLLABLE", "ROLLABLE"), "Ldri$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.entity.JigsawBlockEntity$Joint#ALIGNED
    [[maybe_unused]] static jobject get_field_ALIGNED() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ALIGNED", "field_23330", "ALIGNED", "ALIGNED"), "Ldri$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.entity.JigsawBlockEntity$Joint#ALIGNED
    [[maybe_unused]] static void set_field_ALIGNED(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ALIGNED", "field_23330", "ALIGNED", "ALIGNED"), "Ldri$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.block.entity.JigsawBlockEntity$Joint#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "field_23331", "name", "f_59449_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.block.entity.JigsawBlockEntity$Joint#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "name", "field_23331", "name", "f_59449_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldri$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldri$a;");
    }

    static jobject valueOf(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_valueOf();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asString() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getSerializedName", "method_15434", "asString", "m_7912_"), "()Ljava/lang/String;");
    }

    static jobject asString(const jobject& obj) {
                
       const auto methodID = methodID_asString();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_byName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "byName", "method_26401", "byName", "m_59457_"), "(Ljava/lang/String;)Ljava/util/Optional;");
    }

    static jobject byName(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_byName();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_asText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getTranslatedName", "method_32357", "asText", "m_155610_"), "()Lwz;");
    }

    static jobject asText(const jobject& obj) {
                
       const auto methodID = methodID_asText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_ENTITY_JIGSAWBLOCKENTITY$JOINT_HPP