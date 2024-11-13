// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTPROGRESS_HPP
#define NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTPROGRESS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.advancement.AdvancementProgress
 * Remapped: ai
 */
namespace AdvancementProgress {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ai", "net/minecraft/advancements/AdvancementProgress", "net/minecraft/class_167", "net/minecraft/advancement/AdvancementProgress", "net/minecraft/src/C_2_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.advancement.AdvancementProgress#TIME_FORMATTER
    [[maybe_unused]] static jobject get_field_TIME_FORMATTER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OBTAINED_TIME_FORMAT", "field_46081", "TIME_FORMATTER", "f_291415_"), "Ljava/time/format/DateTimeFormatter;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.advancement.AdvancementProgress#TIME_FORMATTER
    [[maybe_unused]] static void set_field_TIME_FORMATTER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "OBTAINED_TIME_FORMAT", "field_46081", "TIME_FORMATTER", "f_291415_"), "Ljava/time/format/DateTimeFormatter;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.advancement.AdvancementProgress#TIME_CODEC
    [[maybe_unused]] static jobject get_field_TIME_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OBTAINED_TIME_CODEC", "field_46082", "TIME_CODEC", "f_291732_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.advancement.AdvancementProgress#TIME_CODEC
    [[maybe_unused]] static void set_field_TIME_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "OBTAINED_TIME_CODEC", "field_46082", "TIME_CODEC", "f_291732_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.advancement.AdvancementProgress#MAP_CODEC
    [[maybe_unused]] static jobject get_field_MAP_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CRITERIA_CODEC", "field_46083", "MAP_CODEC", "f_291192_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.advancement.AdvancementProgress#MAP_CODEC
    [[maybe_unused]] static void set_field_MAP_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CRITERIA_CODEC", "field_46083", "MAP_CODEC", "f_291192_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.advancement.AdvancementProgress#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46080", "CODEC", "f_291693_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.advancement.AdvancementProgress#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_46080", "CODEC", "f_291693_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.AdvancementProgress#criteriaProgresses
    static jobject get_field_criteriaProgresses(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "criteria", "field_1160", "criteriaProgresses", "f_8190_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.AdvancementProgress#criteriaProgresses
    static void set_field_criteriaProgresses(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "criteria", "field_1160", "criteriaProgresses", "f_8190_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.advancement.AdvancementProgress#requirements
    static jobject get_field_requirements(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "requirements", "field_1161", "requirements", "f_8191_"), "Laj;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.advancement.AdvancementProgress#requirements
    static void set_field_requirements(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "requirements", "field_1161", "requirements", "f_8191_"), "Laj;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_init() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "update", "method_727", "init", "m_8198_"), "(Laj;)V");
    }

    static void init(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_init();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isDone() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "isDone", "method_740", "isDone", "m_8193_"), "()Z");
    }

    static jboolean isDone(const jobject& obj) {
                
       const auto methodID = methodID_isDone();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_isAnyObtained() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "hasProgress", "method_742", "isAnyObtained", "m_8206_"), "()Z");
    }

    static jboolean isAnyObtained(const jobject& obj) {
                
       const auto methodID = methodID_isAnyObtained();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_obtain() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "grantProgress", "method_743", "obtain", "m_8196_"), "(Ljava/lang/String;)Z");
    }

    static jboolean obtain(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_obtain();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_reset() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "revokeProgress", "method_729", "reset", "m_8209_"), "(Ljava/lang/String;)Z");
    }

    static jboolean reset(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_reset();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_toPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "serializeToNetwork", "method_733", "toPacket", "m_8204_"), "(Lvw;)V");
    }

    static void toPacket(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_toPacket();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_fromPacket() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "fromNetwork", "method_732", "fromPacket", "m_8211_"), "(Lvw;)Lai;");
    }

    static jobject fromPacket(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_fromPacket();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_getCriterionProgress() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getCriterion", "method_737", "getCriterionProgress", "m_8214_"), "(Ljava/lang/String;)Lap;");
    }

    static jobject getCriterionProgress(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getCriterionProgress();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_isCriterionObtained() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "isCriterionDone", "method_53663", "isCriterionObtained", "m_293648_"), "(Ljava/lang/String;)Z");
    }

    static jboolean isCriterionObtained(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_isCriterionObtained();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getProgressBarPercentage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getPercent", "method_735", "getProgressBarPercentage", "m_8213_"), "()F");
    }

    static jfloat getProgressBarPercentage(const jobject& obj) {
                
       const auto methodID = methodID_getProgressBarPercentage();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getProgressBarFraction() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getProgressText", "method_728", "getProgressBarFraction", "m_8218_"), "()Lwz;");
    }

    static jobject getProgressBarFraction(const jobject& obj) {
                
       const auto methodID = methodID_getProgressBarFraction();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_countObtainedRequirements() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "countCompletedRequirements", "method_736", "countObtainedRequirements", "m_8222_"), "()I");
    }

    static jint countObtainedRequirements(const jobject& obj) {
                
       const auto methodID = methodID_countObtainedRequirements();
       return MinecraftSDK::env->CallIntMethod(obj, methodID);
    };
    
    static jmethodID methodID_getUnobtainedCriteria() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getRemainingCriteria", "method_731", "getUnobtainedCriteria", "m_8219_"), "()Ljava/lang/Iterable;");
    }

    static jobject getUnobtainedCriteria(const jobject& obj) {
                
       const auto methodID = methodID_getUnobtainedCriteria();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getObtainedCriteria() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getCompletedCriteria", "method_734", "getObtainedCriteria", "m_8220_"), "()Ljava/lang/Iterable;");
    }

    static jobject getObtainedCriteria(const jobject& obj) {
                
       const auto methodID = methodID_getObtainedCriteria();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEarliestProgressObtainDate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getFirstProgressDate", "method_741", "getEarliestProgressObtainDate", "m_8221_"), "()Ljava/time/Instant;");
    }

    static jobject getEarliestProgressObtainDate(const jobject& obj) {
                
       const auto methodID = methodID_getEarliestProgressObtainDate();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_compareTo() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "compareTo", "method_738", "compareTo", "compareTo"), "(Lai;)I");
    }

    static jint compareTo(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_compareTo();
       return MinecraftSDK::env->CallIntMethod(obj, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_ADVANCEMENT_ADVANCEMENTPROGRESS_HPP