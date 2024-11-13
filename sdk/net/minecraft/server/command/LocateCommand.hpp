// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_SERVER_COMMAND_LOCATECOMMAND_HPP
#define NET_MINECRAFT_SERVER_COMMAND_LOCATECOMMAND_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.server.command.LocateCommand
 * Remapped: ani
 */
namespace LocateCommand {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("ani", "net/minecraft/server/commands/LocateCommand", "net/minecraft/class_3079", "net/minecraft/server/command/LocateCommand", "net/minecraft/src/C_5344_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#LOGGER
    [[maybe_unused]] static jobject get_field_LOGGER() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_41660", "LOGGER", "f_262750_"), "Lorg/slf4j/Logger;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#LOGGER
    [[maybe_unused]] static void set_field_LOGGER(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "LOGGER", "field_41660", "LOGGER", "f_262750_"), "Lorg/slf4j/Logger;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#STRUCTURE_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static jobject get_field_STRUCTURE_NOT_FOUND_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_STRUCTURE_NOT_FOUND", "field_39245", "STRUCTURE_NOT_FOUND_EXCEPTION", "f_214451_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#STRUCTURE_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static void set_field_STRUCTURE_NOT_FOUND_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "ERROR_STRUCTURE_NOT_FOUND", "field_39245", "STRUCTURE_NOT_FOUND_EXCEPTION", "f_214451_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#STRUCTURE_INVALID_EXCEPTION
    [[maybe_unused]] static jobject get_field_STRUCTURE_INVALID_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_STRUCTURE_INVALID", "field_39246", "STRUCTURE_INVALID_EXCEPTION", "f_214452_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#STRUCTURE_INVALID_EXCEPTION
    [[maybe_unused]] static void set_field_STRUCTURE_INVALID_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "ERROR_STRUCTURE_INVALID", "field_39246", "STRUCTURE_INVALID_EXCEPTION", "f_214452_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#BIOME_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static jobject get_field_BIOME_NOT_FOUND_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_BIOME_NOT_FOUND", "field_39247", "BIOME_NOT_FOUND_EXCEPTION", "f_214453_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#BIOME_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static void set_field_BIOME_NOT_FOUND_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "ERROR_BIOME_NOT_FOUND", "field_39247", "BIOME_NOT_FOUND_EXCEPTION", "f_214453_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#POI_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static jobject get_field_POI_NOT_FOUND_EXCEPTION() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_POI_NOT_FOUND", "field_39249", "POI_NOT_FOUND_EXCEPTION", "f_214455_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#POI_NOT_FOUND_EXCEPTION
    [[maybe_unused]] static void set_field_POI_NOT_FOUND_EXCEPTION(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "ERROR_POI_NOT_FOUND", "field_39249", "POI_NOT_FOUND_EXCEPTION", "f_214455_"), "Lcom/mojang/brigadier/exceptions/DynamicCommandExceptionType;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#LOCATE_STRUCTURE_RADIUS
    [[maybe_unused]] static jint get_field_LOCATE_STRUCTURE_RADIUS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_STRUCTURE_SEARCH_RADIUS", "field_39251", "LOCATE_STRUCTURE_RADIUS", "f_214457_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#LOCATE_STRUCTURE_RADIUS
    [[maybe_unused]] static void set_field_LOCATE_STRUCTURE_RADIUS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MAX_STRUCTURE_SEARCH_RADIUS", "field_39251", "LOCATE_STRUCTURE_RADIUS", "f_214457_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#LOCATE_BIOME_RADIUS
    [[maybe_unused]] static jint get_field_LOCATE_BIOME_RADIUS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_BIOME_SEARCH_RADIUS", "field_39252", "LOCATE_BIOME_RADIUS", "f_214458_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#LOCATE_BIOME_RADIUS
    [[maybe_unused]] static void set_field_LOCATE_BIOME_RADIUS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MAX_BIOME_SEARCH_RADIUS", "field_39252", "LOCATE_BIOME_RADIUS", "f_214458_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#LOCATE_BIOME_HORIZONTAL_BLOCK_CHECK_INTERVAL
    [[maybe_unused]] static jint get_field_LOCATE_BIOME_HORIZONTAL_BLOCK_CHECK_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BIOME_SAMPLE_RESOLUTION_HORIZONTAL", "field_39253", "LOCATE_BIOME_HORIZONTAL_BLOCK_CHECK_INTERVAL", "f_214459_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#LOCATE_BIOME_HORIZONTAL_BLOCK_CHECK_INTERVAL
    [[maybe_unused]] static void set_field_LOCATE_BIOME_HORIZONTAL_BLOCK_CHECK_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "BIOME_SAMPLE_RESOLUTION_HORIZONTAL", "field_39253", "LOCATE_BIOME_HORIZONTAL_BLOCK_CHECK_INTERVAL", "f_214459_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#LOCATE_BIOME_VERTICAL_BLOCK_CHECK_INTERVAL
    [[maybe_unused]] static jint get_field_LOCATE_BIOME_VERTICAL_BLOCK_CHECK_INTERVAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BIOME_SAMPLE_RESOLUTION_VERTICAL", "field_39254", "LOCATE_BIOME_VERTICAL_BLOCK_CHECK_INTERVAL", "f_214460_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#LOCATE_BIOME_VERTICAL_BLOCK_CHECK_INTERVAL
    [[maybe_unused]] static void set_field_LOCATE_BIOME_VERTICAL_BLOCK_CHECK_INTERVAL(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "BIOME_SAMPLE_RESOLUTION_VERTICAL", "field_39254", "LOCATE_BIOME_VERTICAL_BLOCK_CHECK_INTERVAL", "f_214460_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.server.command.LocateCommand#LOCATE_POI_RADIUS
    [[maybe_unused]] static jint get_field_LOCATE_POI_RADIUS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "POI_SEARCH_RADIUS", "field_39255", "LOCATE_POI_RADIUS", "f_214461_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.server.command.LocateCommand#LOCATE_POI_RADIUS
    [[maybe_unused]] static void set_field_LOCATE_POI_RADIUS(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "POI_SEARCH_RADIUS", "field_39255", "LOCATE_POI_RADIUS", "f_214461_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_13443", "register", "m_246116_"), "(Lcom/mojang/brigadier/CommandDispatcher;Lep;)V");
    }

    static void register(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getStructureListForPredicate() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getHolders", "method_43907", "getStructureListForPredicate", "m_245526_"), "(Lfx$c;Ljz;)Ljava/util/Optional;");
    }

    static jobject getStructureListForPredicate(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getStructureListForPredicate();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeLocateStructure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "locateStructure", "method_43905", "executeLocateStructure", "m_214471_"), "(Let;Lfx$c;)I");
    }

    static jint executeLocateStructure(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeLocateStructure();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeLocateBiome() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "locateBiome", "method_43912", "executeLocateBiome", "m_247543_"), "(Let;Lfw$c;)I");
    }

    static jint executeLocateBiome(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeLocateBiome();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_executeLocatePoi() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "locatePoi", "method_43915", "executeLocatePoi", "m_245206_"), "(Let;Lfw$c;)I");
    }

    static jint executeLocatePoi(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_executeLocatePoi();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_sendCoordinates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "showLocateResult", "method_45148", "sendCoordinates", "m_262830_"), "(Let;Lfw$c;Ljd;Lcom/mojang/datafixers/util/Pair;Ljava/lang/String;ZLjava/time/Duration;)I");
    }

    static jint sendCoordinates(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID_sendCoordinates();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID__sendCoordinates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "showLocateResult", "method_24499", "sendCoordinates", "m_262810_"), "(Let;Lfx$c;Ljd;Lcom/mojang/datafixers/util/Pair;Ljava/lang/String;ZLjava/time/Duration;)I");
    }

    static jint _sendCoordinates(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jobject& arg4, const jboolean& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID__sendCoordinates();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID___sendCoordinates() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "showLocateResult", "method_45149", "sendCoordinates", "m_262858_"), "(Let;Ljd;Lcom/mojang/datafixers/util/Pair;Ljava/lang/String;ZLjava/lang/String;Ljava/time/Duration;)I");
    }

    static jint __sendCoordinates(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jobject& arg3, const jboolean& arg4, const jobject& arg5, const jobject& arg6) {
       const auto clazz = self();
       const auto methodID = methodID___sendCoordinates();
       return MinecraftSDK::env->CallStaticIntMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    };
    
    static jmethodID methodID_getDistance() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "dist", "method_13439", "getDistance", "m_137853_"), "(IIII)F");
    }

    static jfloat getDistance(const jint& arg0, const jint& arg1, const jint& arg2, const jint& arg3) {
       const auto clazz = self();
       const auto methodID = methodID_getDistance();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0, arg1, arg2, arg3);
    };
    
};

#endif // NET_MINECRAFT_SERVER_COMMAND_LOCATECOMMAND_HPP