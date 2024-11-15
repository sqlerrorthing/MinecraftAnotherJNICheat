// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_CLIENT_FONT_FONTMANAGER_HPP
#define NET_MINECRAFT_CLIENT_FONT_FONTMANAGER_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.client.font.FontManager
 * Remapped: flb
 */
namespace FontManager {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("flb", "net/minecraft/client/gui/font/FontManager", "net/minecraft/class_378", "net/minecraft/client/font/FontManager", "net/minecraft/src/C_3509_"));
        }
        return cachedClass;
    };

    // getter for static default field net.minecraft.client.font.FontManager#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_2261", "LOGGER", "f_94997_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static default field net.minecraft.client.font.FontManager#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "LOGGER", "field_2261", "LOGGER", "f_94997_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.FontManager#FONTS_JSON
    [[maybe_unused]] static jobject get_field_FONTS_JSON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FONTS_PATH", "field_32226", "FONTS_JSON", "f_169089_"), "Ljava/lang/String;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontManager#FONTS_JSON
    [[maybe_unused]] static void set_field_FONTS_JSON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "FONTS_PATH", "field_32226", "FONTS_JSON", "f_169089_"), "Ljava/lang/String;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.client.font.FontManager#MISSING_STORAGE_ID
    [[maybe_unused]] static jobject get_field_MISSING_STORAGE_ID() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MISSING_FONT", "field_24254", "MISSING_STORAGE_ID", "f_94996_"), "Lakr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.client.font.FontManager#MISSING_STORAGE_ID
    [[maybe_unused]] static void set_field_MISSING_STORAGE_ID(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "MISSING_FONT", "field_24254", "MISSING_STORAGE_ID", "f_94996_"), "Lakr;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.FontManager#FINDER
    [[maybe_unused]] static jobject get_field_FINDER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FONT_DEFINITIONS", "field_40409", "FINDER", "f_244245_"), "Lakk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontManager#FINDER
    [[maybe_unused]] static void set_field_FINDER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "FONT_DEFINITIONS", "field_40409", "FINDER", "f_244245_"), "Lakk;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.client.font.FontManager#GSON
    [[maybe_unused]] static jobject get_field_GSON() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GSON", "field_44757", "GSON", "f_283881_"), "Lcom/google/gson/Gson;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontManager#GSON
    [[maybe_unused]] static void set_field_GSON(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "GSON", "field_44757", "GSON", "f_283881_"), "Lcom/google/gson/Gson;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.FontManager#missingStorage
    static jobject get_field_missingStorage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "missingFontSet", "field_24255", "missingStorage", "f_94998_"), "Lfld;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontManager#missingStorage
    static void set_field_missingStorage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "missingFontSet", "field_24255", "missingStorage", "f_94998_"), "Lfld;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.FontManager#fonts
    static jobject get_field_fonts(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "providersToClose", "field_44758", "fonts", "f_283839_"), "Ljava/util/List;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontManager#fonts
    static void set_field_fonts(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "providersToClose", "field_44758", "fonts", "f_283839_"), "Ljava/util/List;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.FontManager#fontStorages
    static jobject get_field_fontStorages(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "fontSets", "field_2259", "fontStorages", "f_94999_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontManager#fontStorages
    static void set_field_fontStorages(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "fontSets", "field_2259", "fontStorages", "f_94999_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.FontManager#textureManager
    static jobject get_field_textureManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "textureManager", "field_2260", "textureManager", "f_95000_"), "Lgqm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontManager#textureManager
    static void set_field_textureManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "textureManager", "field_2260", "textureManager", "f_95000_"), "Lgqm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.client.font.FontManager#currentStorage
    static jobject get_field_currentStorage(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "lastFontSetCache", "field_49111", "currentStorage", "f_316373_"), "Lfld;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.client.font.FontManager#currentStorage
    static void set_field_currentStorage(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "lastFontSetCache", "field_49111", "currentStorage", "f_316373_"), "Lfld;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createEmptyFont() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("d", "createFallbackProvider", "method_57027", "createEmptyFont", "m_322949_"), "()Lezm$a;");
    }

    static jobject createEmptyFont() {
       const auto clazz = self();
       const auto methodID = methodID_createEmptyFont();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID);
    };
    
    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "reload", "method_25931", "reload", "m_5540_"), "(Laty$a;Laue;Lbnf;Lbnf;Ljava/util/concurrent/Executor;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject reload(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jobject& arg5) {
                
       const auto methodID = methodID_reload();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3, arg4, arg5);
    };
    
    static jmethodID methodID_loadIndex() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "prepare", "method_51608", "loadIndex", "m_284410_"), "(Laue;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject loadIndex(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_loadIndex();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_load() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "safeLoad", "method_51613", "load", "m_284357_"), "(Lflb$a;Lflo$b;Laue;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject load(const jobject& obj, const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3) {
                
       const auto methodID = methodID_load();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0, arg1, arg2, arg3);
    };
    
    static jmethodID methodID_getRequiredFontProviders() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "resolveProviders", "method_51617", "getRequiredFontProviders", "m_284517_"), "(Ljava/util/List;)Ljava/util/Map;");
    }

    static jobject getRequiredFontProviders(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getRequiredFontProviders();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_insertFont() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finalizeProviderLoading", "method_51620", "insertFont", "m_284489_"), "(Ljava/util/List;Lezm$a;)V");
    }

    static void insertFont(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID_insertFont();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getActiveFilters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getFontOptions", "method_57026", "getActiveFilters", "m_323936_"), "(Lfgs;)Ljava/util/Set;");
    }

    static jobject getActiveFilters(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getActiveFilters();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "apply", "method_51614", "reload", "m_284460_"), "(Lflb$d;Lbnf;)V");
    }

    static void _reload(const jobject& obj, const jobject& arg0, const jobject& arg1) {
                
       const auto methodID = methodID__reload();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_setActiveFilters() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "updateOptions", "method_57024", "setActiveFilters", "m_324236_"), "(Lfgs;)V");
    }

    static void setActiveFilters(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_setActiveFilters();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_loadFontProviders() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "loadResourceStack", "method_51619", "loadFontProviders", "m_284270_"), "(Ljava/util/List;Lakr;)Ljava/util/List;");
    }

    static jobject loadFontProviders(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_loadFontProviders();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_createTextRenderer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "createFont", "method_27539", "createTextRenderer", "m_95006_"), "()Lfhx;");
    }

    static jobject createTextRenderer(const jobject& obj) {
                
       const auto methodID = methodID_createTextRenderer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_createAdvanceValidatingTextRenderer() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "createFontFilterFishy", "method_45078", "createAdvanceValidatingTextRenderer", "m_243082_"), "()Lfhx;");
    }

    static jobject createAdvanceValidatingTextRenderer(const jobject& obj) {
                
       const auto methodID = methodID_createAdvanceValidatingTextRenderer();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getStorageInternal() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFontSetRaw", "method_57023", "getStorageInternal", "m_321594_"), "(Lakr;)Lfld;");
    }

    static jobject getStorageInternal(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStorageInternal();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getStorage() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "getFontSetCached", "method_57025", "getStorage", "m_322106_"), "(Lakr;)Lfld;");
    }

    static jobject getStorage(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_getStorage();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_close() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("close", "close", "", "", "close"), "()V");
    }

    static void close(const jobject& obj) {
                
       const auto methodID = methodID_close();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_CLIENT_FONT_FONTMANAGER_HPP