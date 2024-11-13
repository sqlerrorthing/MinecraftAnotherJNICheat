// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$UNARYOPERATION$TYPE_HPP
#define NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$UNARYOPERATION$TYPE_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type
 * Remapped: dys$k$a
 */
namespace DensityFunctionTypes$UnaryOperation$Type {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dys$k$a", "net/minecraft/world/level/levelgen/DensityFunctions$Mapped$Type", "net/minecraft/class_6916$class_6925$class_6926", "net/minecraft/world/gen/densityfunction/DensityFunctionTypes$UnaryOperation$Type", "net/minecraft/src/C_206968_$C_206983_$C_206984_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#ABS
    [[maybe_unused]] static jobject get_field_ABS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ABS", "field_36555", "ABS", "ABS"), "Ldys$k$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#ABS
    [[maybe_unused]] static void set_field_ABS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "ABS", "field_36555", "ABS", "ABS"), "Ldys$k$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#SQUARE
    [[maybe_unused]] static jobject get_field_SQUARE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SQUARE", "field_36556", "SQUARE", "SQUARE"), "Ldys$k$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#SQUARE
    [[maybe_unused]] static void set_field_SQUARE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "SQUARE", "field_36556", "SQUARE", "SQUARE"), "Ldys$k$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#CUBE
    [[maybe_unused]] static jobject get_field_CUBE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CUBE", "field_36557", "CUBE", "CUBE"), "Ldys$k$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#CUBE
    [[maybe_unused]] static void set_field_CUBE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "CUBE", "field_36557", "CUBE", "CUBE"), "Ldys$k$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#HALF_NEGATIVE
    [[maybe_unused]] static jobject get_field_HALF_NEGATIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HALF_NEGATIVE", "field_36558", "HALF_NEGATIVE", "HALF_NEGATIVE"), "Ldys$k$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#HALF_NEGATIVE
    [[maybe_unused]] static void set_field_HALF_NEGATIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "HALF_NEGATIVE", "field_36558", "HALF_NEGATIVE", "HALF_NEGATIVE"), "Ldys$k$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#QUARTER_NEGATIVE
    [[maybe_unused]] static jobject get_field_QUARTER_NEGATIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "QUARTER_NEGATIVE", "field_36559", "QUARTER_NEGATIVE", "QUARTER_NEGATIVE"), "Ldys$k$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#QUARTER_NEGATIVE
    [[maybe_unused]] static void set_field_QUARTER_NEGATIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "QUARTER_NEGATIVE", "field_36559", "QUARTER_NEGATIVE", "QUARTER_NEGATIVE"), "Ldys$k$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#SQUEEZE
    [[maybe_unused]] static jobject get_field_SQUEEZE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SQUEEZE", "field_36560", "SQUEEZE", "SQUEEZE"), "Ldys$k$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#SQUEEZE
    [[maybe_unused]] static void set_field_SQUEEZE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "SQUEEZE", "field_36560", "SQUEEZE", "SQUEEZE"), "Ldys$k$a;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#name
    static jobject get_field_name(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "name", "field_37086", "name", "f_208690_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#name
    static void set_field_name(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "name", "field_37086", "name", "f_208690_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for default field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#codecHolder
    static jobject get_field_codecHolder(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "codec", "field_37087", "codecHolder", "f_208691_"), "Layh;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static default field net.minecraft.world.gen.densityfunction.DensityFunctionTypes$UnaryOperation$Type#codecHolder
    static void set_field_codecHolder(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "codec", "field_37087", "codecHolder", "f_208691_"), "Layh;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("values", "values", "values", "values", "values"), "()[Ldys$k$a;");
    }

    static jobject values() {
       const auto clazz = self();
       const auto methodID = methodID_values();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_valueOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("valueOf", "valueOf", "valueOf", "valueOf", "valueOf"), "(Ljava/lang/String;)Ldys$k$a;");
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
    
};

#endif // NET_MINECRAFT_WORLD_GEN_DENSITYFUNCTION_DENSITYFUNCTIONTYPES$UNARYOPERATION$TYPE_HPP