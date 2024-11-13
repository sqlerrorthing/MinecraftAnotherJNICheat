// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_GUI_WIDGET_CYCLINGBUTTONWIDGET$BUILDER_HPP
#define NET_MINECRAFT_CLIENT_GUI_WIDGET_CYCLINGBUTTONWIDGET$BUILDER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.gui.widget.CyclingButtonWidget$Builder
 * Remapped: fit$a
 */
namespace CyclingButtonWidget$Builder {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("fit$a", "net/minecraft/client/gui/components/CycleButton$Builder", "net/minecraft/class_5676$class_5677", "net/minecraft/client/gui/widget/CyclingButtonWidget$Builder", "net/minecraft/src/C_141591_$C_141592_"));
        }
        return cachedClass;
    };

    // getter for private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#initialIndex
    static jint get_field_initialIndex(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "initialIndex", "field_27972", "initialIndex", "f_168920_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetIntField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#initialIndex
    static void set_field_initialIndex(const jobject &obj, const jint &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("a", "initialIndex", "field_27972", "initialIndex", "f_168920_"), "I");
        return MinecraftSDK::env->SetIntField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#value
    static jobject get_field_value(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "initialValue", "field_27973", "value", "f_168921_"), "Ljava/lang/Object;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#value
    static void set_field_value(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "initialValue", "field_27973", "value", "f_168921_"), "Ljava/lang/Object;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#valueToText
    static jobject get_field_valueToText(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "valueStringifier", "field_27974", "valueToText", "f_168922_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#valueToText
    static void set_field_valueToText(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "valueStringifier", "field_27974", "valueToText", "f_168922_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#tooltipFactory
    static jobject get_field_tooltipFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tooltipSupplier", "field_27975", "tooltipFactory", "f_168923_"), "Lfgr$l;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#tooltipFactory
    static void set_field_tooltipFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "tooltipSupplier", "field_27975", "tooltipFactory", "f_168923_"), "Lfgr$l;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#narrationMessageFactory
    static jobject get_field_narrationMessageFactory(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "narrationProvider", "field_27976", "narrationMessageFactory", "f_168924_"), "Ljava/util/function/Function;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#narrationMessageFactory
    static void set_field_narrationMessageFactory(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "narrationProvider", "field_27976", "narrationMessageFactory", "f_168924_"), "Ljava/util/function/Function;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#values
    static jobject get_field_values(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "values", "field_27977", "values", "f_168925_"), "Lfit$c;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#values
    static void set_field_values(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "values", "field_27977", "values", "f_168925_"), "Lfit$c;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#optionTextOmitted
    static jboolean get_field_optionTextOmitted(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "displayOnlyValue", "field_27978", "optionTextOmitted", "f_168926_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.gui.widget.CyclingButtonWidget$Builder#optionTextOmitted
    static void set_field_optionTextOmitted(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "displayOnlyValue", "field_27978", "optionTextOmitted", "f_168926_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    static jmethodID methodID__values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withValues", "method_32620", "values", "m_232502_"), "(Ljava/util/Collection;)Lfit$a;");
    }

    static jobject _values(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID__values();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID___values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withValues", "method_32624", "values", "m_168961_"), "([Ljava/lang/Object;)Lfit$a;");
    }

    static jobject __values(const jobject& obj, const jarray& arg0, const jobject& arg1) {
                
       const auto methodID = methodID___values();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID____values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withValues", "method_32621", "values", "m_168952_"), "(Ljava/util/List;Ljava/util/List;)Lfit$a;");
    }

    static jobject ___values(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID____values();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_____values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withValues", "method_32622", "values", "m_168955_"), "(Ljava/util/function/BooleanSupplier;Ljava/util/List;Ljava/util/List;)Lfit$a;");
    }

    static jobject ____values(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2) {
                
       const auto methodID = methodID_____values();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID______values() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withValues", "method_42729", "values", "m_232500_"), "(Lfit$c;)Lfit$a;");
    }

    static jobject _____values(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID______values();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tooltip() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withTooltip", "method_32618", "tooltip", "m_232498_"), "(Lfgr$l;)Lfit$a;");
    }

    static jobject tooltip(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_tooltip();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_initially() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withInitialValue", "method_32619", "initially", "m_168948_"), "(Ljava/lang/Object;)Lfit$a;");
    }

    static jobject initially(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_initially();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_narration() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "withCustomNarration", "method_32623", "narration", "m_168959_"), "(Ljava/util/function/Function;)Lfit$a;");
    }

    static jobject narration(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_narration();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_omitKeyText() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "displayOnlyValue", "method_32616", "omitKeyText", "m_168929_"), "()Lfit$a;");
    }

    static jobject omitKeyText(const jobject& obj) {
                
       const auto methodID = methodID_omitKeyText();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_57720", "build", "m_323445_"), "(Lwz;Lfit$b;)Lfit;");
    }

    static jobject build(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID__build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_35723", "build", "m_168930_"), "(IIIILwz;)Lfit;");
    }

    static jobject _build(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4) {
                
       const auto methodID = methodID__build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID___build() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_32617", "build", "m_168936_"), "(IIIILwz;Lfit$b;)Lfit;");
    }

    static jobject __build(const jobject& obj, const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID___build();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_GUI_WIDGET_CYCLINGBUTTONWIDGET$BUILDER_HPP