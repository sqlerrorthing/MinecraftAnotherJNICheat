// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FOLIAGE_CHERRYFOLIAGEPLACER_HPP
#define NET_MINECRAFT_WORLD_GEN_FOLIAGE_CHERRYFOLIAGEPLACER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.foliage.CherryFoliagePlacer
 * Remapped: efr
 */
namespace CherryFoliagePlacer {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efr", "net/minecraft/world/level/levelgen/feature/foliageplacers/CherryFoliagePlacer", "net/minecraft/class_8178", "net/minecraft/world/gen/foliage/CherryFoliagePlacer", "net/minecraft/src/C_271071_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.foliage.CherryFoliagePlacer#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42841", "CODEC", "f_271259_"), "Lcom/mojang/serialization/MapCodec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.foliage.CherryFoliagePlacer#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_42841", "CODEC", "f_271259_"), "Lcom/mojang/serialization/MapCodec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#height
    static jobject get_field_height(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "field_42842", "height", "f_271102_"), "Lbpw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#height
    static void set_field_height(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "height", "field_42842", "height", "f_271102_"), "Lbpw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#wideBottomLayerHoleChance
    static jfloat get_field_wideBottomLayerHoleChance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "wideBottomLayerHoleChance", "field_42843", "wideBottomLayerHoleChance", "f_271179_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#wideBottomLayerHoleChance
    static void set_field_wideBottomLayerHoleChance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "wideBottomLayerHoleChance", "field_42843", "wideBottomLayerHoleChance", "f_271179_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#cornerHoleChance
    static jfloat get_field_cornerHoleChance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "cornerHoleChance", "field_42844", "cornerHoleChance", "f_271392_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#cornerHoleChance
    static void set_field_cornerHoleChance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "cornerHoleChance", "field_42844", "cornerHoleChance", "f_271392_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#hangingLeavesChance
    static jfloat get_field_hangingLeavesChance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "hangingLeavesChance", "field_42845", "hangingLeavesChance", "f_271143_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#hangingLeavesChance
    static void set_field_hangingLeavesChance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "hangingLeavesChance", "field_42845", "hangingLeavesChance", "f_271143_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#hangingLeavesExtensionChance
    static jfloat get_field_hangingLeavesExtensionChance(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "hangingLeavesExtensionChance", "field_42846", "hangingLeavesExtensionChance", "f_271510_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.foliage.CherryFoliagePlacer#hangingLeavesExtensionChance
    static void set_field_hangingLeavesExtensionChance(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "hangingLeavesExtensionChance", "field_42846", "hangingLeavesExtensionChance", "f_271510_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    static jmethodID methodID_getType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "type", "method_28843", "getType", "m_5897_"), "()Lefv;");
    }

    static jobject getType(const jobject& obj) {
                
       const auto methodID = methodID_getType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_generate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createFoliage", "method_23448", "generate", "m_213633_"), "(Lddc;Lefu$b;Layw;Lefe;ILefu$a;III)V");
    }

    static void generate(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jobject& arg5, const jint& arg6, const jint& arg7, const jint& arg8) {
                
       const auto methodID = methodID_generate();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    };
    
    static jmethodID methodID_getRandomHeight() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "foliageHeight", "method_26989", "getRandomHeight", "m_214116_"), "(Layw;ILefe;)I");
    }

    static jint getRandomHeight(const jobject& obj, const jobject& arg0, const jint& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_getRandomHeight();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_isInvalidForLeaves() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "shouldSkipLocation", "method_23451", "isInvalidForLeaves", "m_214203_"), "(Layw;IIIIZ)Z");
    }

    static jboolean isInvalidForLeaves(const jobject& obj, const jobject& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jint& arg4, const jboolean& arg5) {
                
       const auto methodID = methodID_isInvalidForLeaves();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FOLIAGE_CHERRYFOLIAGEPLACER_HPP