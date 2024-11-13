// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_DATA_FAMILY_BLOCKFAMILY$BUILDER_HPP
#define NET_MINECRAFT_DATA_FAMILY_BLOCKFAMILY$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.data.family.BlockFamily$Builder
 * Remapped: lx$a
 */
namespace BlockFamily$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("lx$a", "net/minecraft/data/BlockFamily$Builder", "net/minecraft/class_5794$class_5795", "net/minecraft/data/family/BlockFamily$Builder", "net/minecraft/src/C_141796_$C_141797_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.data.family.BlockFamily$Builder#family
    static jobject get_field_family(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "family", "field_28532", "family", "f_175959_"), "Llx;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.data.family.BlockFamily$Builder#family
    static void set_field_family(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "family", "field_28532", "family", "f_175959_"), "Llx;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFamily", "method_33481", "build", "m_175962_"), "()Llx;");
    }

    static jobject build(const jobject& obj) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_button() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "button", "method_33482", "button", "m_175963_"), "(Ldfy;)Llx$a;");
    }

    static jobject button(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_button();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_chiseled() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "chiseled", "method_33486", "chiseled", "m_175971_"), "(Ldfy;)Llx$a;");
    }

    static jobject chiseled(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_chiseled();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_mosaic() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "mosaic", "method_45965", "mosaic", "m_245388_"), "(Ldfy;)Llx$a;");
    }

    static jobject mosaic(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_mosaic();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_cracked() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "cracked", "method_34593", "cracked", "m_175976_"), "(Ldfy;)Llx$a;");
    }

    static jobject cracked(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_cracked();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_cut() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "cut", "method_36544", "cut", "m_175978_"), "(Ldfy;)Llx$a;");
    }

    static jobject cut(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_cut();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_door() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "door", "method_33489", "door", "m_175980_"), "(Ldfy;)Llx$a;");
    }

    static jobject door(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_door();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_customFence() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "customFence", "method_45966", "customFence", "m_246792_"), "(Ldfy;)Llx$a;");
    }

    static jobject customFence(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_customFence();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fence() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "fence", "method_33490", "fence", "m_175982_"), "(Ldfy;)Llx$a;");
    }

    static jobject fence(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fence();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_customFenceGate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "customFenceGate", "method_45967", "customFenceGate", "m_247314_"), "(Ldfy;)Llx$a;");
    }

    static jobject customFenceGate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_customFenceGate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fenceGate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "fenceGate", "method_33491", "fenceGate", "m_175984_"), "(Ldfy;)Llx$a;");
    }

    static jobject fenceGate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_fenceGate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_sign() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "sign", "method_33483", "sign", "m_175965_"), "(Ldfy;Ldfy;)Llx$a;");
    }

    static jobject sign(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_sign();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_slab() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "slab", "method_33492", "slab", "m_175986_"), "(Ldfy;)Llx$a;");
    }

    static jobject slab(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_slab();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_stairs() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "stairs", "method_33493", "stairs", "m_175988_"), "(Ldfy;)Llx$a;");
    }

    static jobject stairs(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_stairs();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_pressurePlate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "pressurePlate", "method_33494", "pressurePlate", "m_175990_"), "(Ldfy;)Llx$a;");
    }

    static jobject pressurePlate(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_pressurePlate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_polished() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "polished", "method_33495", "polished", "m_175992_"), "(Ldfy;)Llx$a;");
    }

    static jobject polished(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_polished();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_trapdoor() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("o", "trapdoor", "method_33496", "trapdoor", "m_175994_"), "(Ldfy;)Llx$a;");
    }

    static jobject trapdoor(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_trapdoor();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_wall() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("p", "wall", "method_33497", "wall", "m_175996_"), "(Ldfy;)Llx$a;");
    }

    static jobject wall(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_wall();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_noGenerateModels() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "dontGenerateModel", "method_33485", "noGenerateModels", "m_175970_"), "()Llx$a;");
    }

    static jobject noGenerateModels(const jobject& obj) {
                
       const auto methodID = methodID_noGenerateModels();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_noGenerateRecipes() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "dontGenerateRecipe", "method_33488", "noGenerateRecipes", "m_175975_"), "()Llx$a;");
    }

    static jobject noGenerateRecipes(const jobject& obj) {
                
       const auto methodID = methodID_noGenerateRecipes();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_group() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "recipeGroupPrefix", "method_33484", "group", "m_175968_"), "(Ljava/lang/String;)Llx$a;");
    }

    static jobject group(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_group();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_unlockCriterionName() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "recipeUnlockedBy", "method_33487", "unlockCriterionName", "m_175973_"), "(Ljava/lang/String;)Llx$a;");
    }

    static jobject unlockCriterionName(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_unlockCriterionName();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_DATA_FAMILY_BLOCKFAMILY$BUILDER_HPP