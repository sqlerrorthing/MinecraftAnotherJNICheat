// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_DATAPACKCONTENTS_HPP
#define NET_MINECRAFT_SERVER_DATAPACKCONTENTS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.DataPackContents
 * Remapped: alc
 */
namespace DataPackContents {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("alc", "net/minecraft/server/ReloadableServerResources", "net/minecraft/class_5350", "net/minecraft/server/DataPackContents", "net/minecraft/src/C_203256_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.DataPackContents#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_36491", "LOGGER", "f_206845_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_36491", "LOGGER", "f_206845_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.DataPackContents#COMPLETED_UNIT
    [[maybe_unused]] static jobject get_field_COMPLETED_UNIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DATA_RELOAD_INITIAL_TASK", "field_25334", "COMPLETED_UNIT", "f_206846_"), "Ljava/util/concurrent/CompletableFuture;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#COMPLETED_UNIT
    [[maybe_unused]] static void set_field_COMPLETED_UNIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "DATA_RELOAD_INITIAL_TASK", "field_25334", "COMPLETED_UNIT", "f_206846_"), "Ljava/util/concurrent/CompletableFuture;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.server.DataPackContents#reloadableRegistries
    static jobject get_field_reloadableRegistries(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fullRegistryHolder", "field_49921", "reloadableRegistries", "f_316081_"), "Lalb$b;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#reloadableRegistries
    static void set_field_reloadableRegistries(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fullRegistryHolder", "field_49921", "reloadableRegistries", "f_316081_"), "Lalb$b;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.DataPackContents#registryLookup
    static jobject get_field_registryLookup(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "registryLookup", "field_48785", "registryLookup", "f_314787_"), "Lalc$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#registryLookup
    static void set_field_registryLookup(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "registryLookup", "field_48785", "registryLookup", "f_314787_"), "Lalc$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.DataPackContents#commandManager
    static jobject get_field_commandManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "commands", "field_25336", "commandManager", "f_206847_"), "Leu;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#commandManager
    static void set_field_commandManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "commands", "field_25336", "commandManager", "f_206847_"), "Leu;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.DataPackContents#recipeManager
    static jobject get_field_recipeManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "recipes", "field_25337", "recipeManager", "f_206848_"), "Lczd;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#recipeManager
    static void set_field_recipeManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "recipes", "field_25337", "recipeManager", "f_206848_"), "Lczd;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.DataPackContents#registryTagManager
    static jobject get_field_registryTagManager(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "tagManager", "field_25338", "registryTagManager", "f_206849_"), "Laww;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#registryTagManager
    static void set_field_registryTagManager(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "tagManager", "field_25338", "registryTagManager", "f_206849_"), "Laww;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.DataPackContents#serverAdvancementLoader
    static jobject get_field_serverAdvancementLoader(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "advancements", "field_25341", "serverAdvancementLoader", "f_206853_"), "Lale;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#serverAdvancementLoader
    static void set_field_serverAdvancementLoader(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "advancements", "field_25341", "serverAdvancementLoader", "f_206853_"), "Lale;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.server.DataPackContents#functionLoader
    static jobject get_field_functionLoader(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "functionLibrary", "field_25342", "functionLoader", "f_206854_"), "Lalf;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.server.DataPackContents#functionLoader
    static void set_field_functionLoader(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "functionLibrary", "field_25342", "functionLoader", "f_206854_"), "Lalf;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_getFunctionLoader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "getFunctionLibrary", "method_29465", "getFunctionLoader", "m_206860_"), "()Lalf;");
    }

    static jobject getFunctionLoader(const jobject& obj) {
                
       const auto methodID = methodID_getFunctionLoader();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getReloadableRegistries() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "fullRegistries", "method_58297", "getReloadableRegistries", "m_322920_"), "()Lalb$b;");
    }

    static jobject getReloadableRegistries(const jobject& obj) {
                
       const auto methodID = methodID_getReloadableRegistries();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getRecipeManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "getRecipeManager", "method_29471", "getRecipeManager", "m_206887_"), "()Lczd;");
    }

    static jobject getRecipeManager(const jobject& obj) {
                
       const auto methodID = methodID_getRecipeManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCommandManager() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "getCommands", "method_29472", "getCommandManager", "m_206888_"), "()Leu;");
    }

    static jobject getCommandManager(const jobject& obj) {
                
       const auto methodID = methodID_getCommandManager();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getServerAdvancementLoader() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getAdvancements", "method_29473", "getServerAdvancementLoader", "m_206889_"), "()Lale;");
    }

    static jobject getServerAdvancementLoader(const jobject& obj) {
                
       const auto methodID = methodID_getServerAdvancementLoader();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getContents() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "listeners", "method_40427", "getContents", "m_206890_"), "()Ljava/util/List;");
    }

    static jobject getContents(const jobject& obj) {
                
       const auto methodID = methodID_getContents();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_reload() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "loadResources", "method_29466", "reload", "m_247740_"), "(Laue;Ljt;Lcpl;Leu$a;ILjava/util/concurrent/Executor;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;");
    }

    static jobject reload(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jint& arg4, const jobject& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_reload();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_refresh() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "updateRegistryTags", "method_40421", "refresh", "m_206868_"), "()V");
    }

    static void refresh(const jobject& obj) {
                
       const auto methodID = methodID_refresh();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_repopulateTags() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "updateRegistryTags", "method_40422", "repopulateTags", "m_206870_"), "(Lka;Laww$a;)V");
    }

    static void repopulateTags(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_repopulateTags();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
};

#endif // NET_MINECRAFT_SERVER_DATAPACKCONTENTS_HPP