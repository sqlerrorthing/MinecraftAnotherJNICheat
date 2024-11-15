// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATURESET_HPP
#define NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATURESET_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.resource.featuretoggle.FeatureSet
 * Remapped: cpl
 */
namespace FeatureSet {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpl", "net/minecraft/world/flag/FeatureFlagSet", "net/minecraft/class_7699", "net/minecraft/resource/featuretoggle/FeatureSet", "net/minecraft/src/C_243488_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.resource.featuretoggle.FeatureSet#EMPTY
    [[maybe_unused]] static jobject get_field_EMPTY() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_40173", "EMPTY", "f_244513_"), "Lcpl;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.resource.featuretoggle.FeatureSet#EMPTY
    [[maybe_unused]] static void set_field_EMPTY(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "EMPTY", "field_40173", "EMPTY", "f_244513_"), "Lcpl;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.resource.featuretoggle.FeatureSet#MAX_FEATURE_FLAGS
    [[maybe_unused]] static jint get_field_MAX_FEATURE_FLAGS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_CONTAINER_SIZE", "field_40172", "MAX_FEATURE_FLAGS", "f_244635_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.resource.featuretoggle.FeatureSet#MAX_FEATURE_FLAGS
    [[maybe_unused]] static void set_field_MAX_FEATURE_FLAGS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MAX_CONTAINER_SIZE", "field_40172", "MAX_FEATURE_FLAGS", "f_244635_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.resource.featuretoggle.FeatureSet#universe
    static jobject get_field_universe(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "universe", "field_40174", "universe", "f_243923_"), "Lcpm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.featuretoggle.FeatureSet#universe
    static void set_field_universe(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "universe", "field_40174", "universe", "f_243923_"), "Lcpm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.resource.featuretoggle.FeatureSet#featuresMask
    static jlong get_field_featuresMask(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "mask", "field_40175", "featuresMask", "f_243922_"), "J");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetLongField(obj, fieldID);
    };

    // setter for static private field net.minecraft.resource.featuretoggle.FeatureSet#featuresMask
    static void set_field_featuresMask(const jobject &obj, const jlong &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "mask", "field_40175", "featuresMask", "f_243922_"), "J");
        return MinecraftSDK::env->SetLongField(obj, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_45402", "of", "m_247438_"), "(Lcpm;Ljava/util/Collection;)Lcpl;");
    }

    static jobject of(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_empty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_45397", "empty", "m_246902_"), "()Lcpl;");
    }

    static jobject empty() {
       const auto clazz = self();
       const auto methodID = methodID_empty();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID__of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_45398", "of", "m_247091_"), "(Lcpj;)Lcpl;");
    }

    static jobject _of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID__of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID___of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "of", "method_45399", "of", "m_245702_"), "(Lcpj;[Lcpj;)Lcpl;");
    }

    static jobject __of(const jobject& arg0, const jarray& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID___of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_combineMask() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "computeMask", "method_45401", "combineMask", "m_245120_"), "(Lcpm;JLjava/lang/Iterable;)J");
    }

    static jlong combineMask(const jobject& arg0, const jlong& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_combineMask();
       return MinecraftSDK::env->CallStaticLongMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_contains() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "contains", "method_45403", "contains", "m_245372_"), "(Lcpj;)Z");
    }

    static jboolean contains(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_contains();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isEmpty() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "isEmpty", "method_58398", "isEmpty", "m_324434_"), "()Z");
    }

    static jboolean isEmpty(const jobject& obj) {
                
       const auto methodID = methodID_isEmpty();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isSubsetOf() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isSubsetOf", "method_45400", "isSubsetOf", "m_247715_"), "(Lcpl;)Z");
    }

    static jboolean isSubsetOf(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isSubsetOf();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_intersects() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "intersects", "method_59819", "intersects", "m_320961_"), "(Lcpl;)Z");
    }

    static jboolean intersects(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_intersects();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_combine() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "join", "method_45404", "combine", "m_246699_"), "(Lcpl;)Lcpl;");
    }

    static jobject combine(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_combine();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_subtract() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "subtract", "method_59820", "subtract", "m_323244_"), "(Lcpl;)Lcpl;");
    }

    static jobject subtract(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_subtract();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_RESOURCE_FEATURETOGGLE_FEATURESET_HPP