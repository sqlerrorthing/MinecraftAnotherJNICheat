// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_COMPONENT_TYPE_FOODCOMPONENT$BUILDER_HPP
#define NET_MINECRAFT_COMPONENT_TYPE_FOODCOMPONENT$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.component.type.FoodComponent$Builder
 * Remapped: cpr$a
 */
namespace FoodComponent$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cpr$a", "net/minecraft/world/food/FoodProperties$Builder", "net/minecraft/class_4174$class_4175", "net/minecraft/component/type/FoodComponent$Builder", "net/minecraft/src/C_1220_$C_1222_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.component.type.FoodComponent$Builder#nutrition
    static jint get_field_nutrition(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "nutrition", "field_18620", "nutrition", "f_38750_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.FoodComponent$Builder#nutrition
    static void set_field_nutrition(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "nutrition", "field_18620", "nutrition", "f_38750_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.FoodComponent$Builder#saturationModifier
    static jfloat get_field_saturationModifier(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "saturationModifier", "field_18621", "saturationModifier", "f_38751_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.FoodComponent$Builder#saturationModifier
    static void set_field_saturationModifier(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "saturationModifier", "field_18621", "saturationModifier", "f_38751_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.FoodComponent$Builder#canAlwaysEat
    static jboolean get_field_canAlwaysEat(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "canAlwaysEat", "field_18623", "canAlwaysEat", "f_38753_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.FoodComponent$Builder#canAlwaysEat
    static void set_field_canAlwaysEat(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "canAlwaysEat", "field_18623", "canAlwaysEat", "f_38753_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.FoodComponent$Builder#eatSeconds
    static jfloat get_field_eatSeconds(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "eatSeconds", "field_49995", "eatSeconds", "f_316145_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.FoodComponent$Builder#eatSeconds
    static void set_field_eatSeconds(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "eatSeconds", "field_49995", "eatSeconds", "f_316145_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.FoodComponent$Builder#usingConvertsTo
    static jobject get_field_usingConvertsTo(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "usingConvertsTo", "field_51895", "usingConvertsTo", "f_337517_"), "Ljava/util/Optional;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.FoodComponent$Builder#usingConvertsTo
    static void set_field_usingConvertsTo(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "usingConvertsTo", "field_51895", "usingConvertsTo", "f_337517_"), "Ljava/util/Optional;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.component.type.FoodComponent$Builder#effects
    static jobject get_field_effects(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "effects", "field_18625", "effects", "f_38755_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.component.type.FoodComponent$Builder#effects
    static void set_field_effects(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "effects", "field_18625", "effects", "f_38755_"), "Lcom/google/common/collect/ImmutableList$Builder;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID__nutrition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "nutrition", "method_19238", "nutrition", "m_38760_"), "(I)Lcpr$a;");
    }

    static jobject _nutrition(const jobject& obj, const jint& arg0) {
                
       const auto methodID = methodID__nutrition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID__saturationModifier() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "saturationModifier", "method_19237", "saturationModifier", "m_38758_"), "(F)Lcpr$a;");
    }

    static jobject _saturationModifier(const jobject& obj, const jfloat& arg0) {
                
       const auto methodID = methodID__saturationModifier();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_alwaysEdible() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "alwaysEdible", "method_19240", "alwaysEdible", "m_38765_"), "()Lcpr$a;");
    }

    static jobject alwaysEdible(const jobject& obj) {
                
       const auto methodID = methodID_alwaysEdible();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_snack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fast", "method_19241", "snack", "m_38766_"), "()Lcpr$a;");
    }

    static jobject snack(const jobject& obj) {
                
       const auto methodID = methodID_snack();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_statusEffect() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "effect", "method_19239", "statusEffect", "m_38762_"), "(Lbrz;F)Lcpr$a;");
    }

    static jobject statusEffect(const jobject& obj, const jobject& arg0, const jfloat& arg1) {
                
       const auto methodID = methodID_statusEffect();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__usingConvertsTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "usingConvertsTo", "method_60500", "usingConvertsTo", "m_338825_"), "(Ldcv;)Lcpr$a;");
    }

    static jobject _usingConvertsTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__usingConvertsTo();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "build", "method_19242", "build", "m_38767_"), "()Lcpr;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_COMPONENT_TYPE_FOODCOMPONENT$BUILDER_HPP