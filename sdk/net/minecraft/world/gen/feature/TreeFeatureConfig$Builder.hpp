// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_TREEFEATURECONFIG$BUILDER_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_TREEFEATURECONFIG$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.TreeFeatureConfig$Builder
 * Remapped: efe$a
 */
namespace TreeFeatureConfig$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("efe$a", "net/minecraft/world/level/levelgen/feature/configurations/TreeConfiguration$TreeConfigurationBuilder", "net/minecraft/class_4643$class_4644", "net/minecraft/world/gen/feature/TreeFeatureConfig$Builder", "net/minecraft/src/C_2366_$C_2367_"));
        }
        return cachedClass;
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#trunkProvider
    static jobject get_field_trunkProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "trunkProvider", "field_21292", "trunkProvider", "f_68229_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#trunkProvider
    static void set_field_trunkProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "trunkProvider", "field_21292", "trunkProvider", "f_68229_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#trunkPlacer
    static jobject get_field_trunkPlacer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "trunkPlacer", "field_24141", "trunkPlacer", "f_68232_"), "Lehm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#trunkPlacer
    static void set_field_trunkPlacer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "trunkPlacer", "field_24141", "trunkPlacer", "f_68232_"), "Lehm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#foliageProvider
    static jobject get_field_foliageProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "foliageProvider", "field_29282", "foliageProvider", "f_161249_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#foliageProvider
    static void set_field_foliageProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "foliageProvider", "field_29282", "foliageProvider", "f_161249_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#foliagePlacer
    static jobject get_field_foliagePlacer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "foliagePlacer", "field_24140", "foliagePlacer", "f_68231_"), "Lefu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#foliagePlacer
    static void set_field_foliagePlacer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "foliagePlacer", "field_24140", "foliagePlacer", "f_68231_"), "Lefu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#rootPlacer
    static jobject get_field_rootPlacer(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "rootPlacer", "field_38768", "rootPlacer", "f_225479_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#rootPlacer
    static void set_field_rootPlacer(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "rootPlacer", "field_38768", "rootPlacer", "f_225479_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#dirtProvider
    static jobject get_field_dirtProvider(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "dirtProvider", "field_29283", "dirtProvider", "f_161251_"), "Legj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#dirtProvider
    static void set_field_dirtProvider(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "dirtProvider", "field_29283", "dirtProvider", "f_161251_"), "Legj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#minimumSize
    static jobject get_field_minimumSize(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "minimumSize", "field_24142", "minimumSize", "f_68233_"), "Lefj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#minimumSize
    static void set_field_minimumSize(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "minimumSize", "field_24142", "minimumSize", "f_68233_"), "Lefj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#decorators
    static jobject get_field_decorators(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "decorators", "field_21294", "decorators", "f_68234_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#decorators
    static void set_field_decorators(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "decorators", "field_21294", "decorators", "f_68234_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#ignoreVines
    static jboolean get_field_ignoreVines(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ignoreVines", "field_24143", "ignoreVines", "f_68236_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#ignoreVines
    static void set_field_ignoreVines(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "ignoreVines", "field_24143", "ignoreVines", "f_68236_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#forceDirt
    static jboolean get_field_forceDirt(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "forceDirt", "field_29284", "forceDirt", "f_161252_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.gen.feature.TreeFeatureConfig$Builder#forceDirt
    static void set_field_forceDirt(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "forceDirt", "field_29284", "forceDirt", "f_161252_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID__dirtProvider() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "dirt", "method_34346", "dirtProvider", "m_161260_"), "(Legj;)Lefe$a;");
    }

    static jobject _dirtProvider(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__dirtProvider();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__decorators() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "decorators", "method_27376", "decorators", "m_68249_"), "(Ljava/util/List;)Lefe$a;");
    }

    static jobject _decorators(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__decorators();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__ignoreVines() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "ignoreVines", "method_27374", "ignoreVines", "m_68244_"), "()Lefe$a;");
    }

    static jobject _ignoreVines(const jobject& obj) {
                
       const auto methodID = methodID__ignoreVines();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID__forceDirt() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "forceDirt", "method_34347", "forceDirt", "m_161262_"), "()Lefe$a;");
    }

    static jobject _forceDirt(const jobject& obj) {
                
       const auto methodID = methodID__forceDirt();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "build", "method_23445", "build", "m_68251_"), "()Lefe;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_TREEFEATURECONFIG$BUILDER_HPP