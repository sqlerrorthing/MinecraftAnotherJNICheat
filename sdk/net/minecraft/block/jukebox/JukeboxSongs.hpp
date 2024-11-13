// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_BLOCK_JUKEBOX_JUKEBOXSONGS_HPP
#define NET_MINECRAFT_BLOCK_JUKEBOX_JUKEBOXSONGS_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.block.jukebox.JukeboxSongs
 * Remapped: cux
 */
namespace JukeboxSongs {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("cux", "net/minecraft/world/item/JukeboxSongs", "net/minecraft/class_9796", "net/minecraft/block/jukebox/JukeboxSongs", "net/minecraft/src/C_336445_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#THIRTEEN
    [[maybe_unused]] static jobject get_field_THIRTEEN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "THIRTEEN", "field_52037", "THIRTEEN", "f_337150_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#THIRTEEN
    [[maybe_unused]] static void set_field_THIRTEEN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "THIRTEEN", "field_52037", "THIRTEEN", "f_337150_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#CAT
    [[maybe_unused]] static jobject get_field_CAT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CAT", "field_52038", "CAT", "f_336636_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#CAT
    [[maybe_unused]] static void set_field_CAT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "CAT", "field_52038", "CAT", "f_336636_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#BLOCKS
    [[maybe_unused]] static jobject get_field_BLOCKS() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BLOCKS", "field_52039", "BLOCKS", "f_337408_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#BLOCKS
    [[maybe_unused]] static void set_field_BLOCKS(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("c", "BLOCKS", "field_52039", "BLOCKS", "f_337408_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#CHIRP
    [[maybe_unused]] static jobject get_field_CHIRP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CHIRP", "field_52040", "CHIRP", "f_337443_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#CHIRP
    [[maybe_unused]] static void set_field_CHIRP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("d", "CHIRP", "field_52040", "CHIRP", "f_337443_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#FAR
    [[maybe_unused]] static jobject get_field_FAR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "FAR", "field_52041", "FAR", "f_337095_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#FAR
    [[maybe_unused]] static void set_field_FAR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("e", "FAR", "field_52041", "FAR", "f_337095_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#MALL
    [[maybe_unused]] static jobject get_field_MALL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MALL", "field_52042", "MALL", "f_336732_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#MALL
    [[maybe_unused]] static void set_field_MALL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("f", "MALL", "field_52042", "MALL", "f_336732_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#MELLOHI
    [[maybe_unused]] static jobject get_field_MELLOHI() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MELLOHI", "field_52043", "MELLOHI", "f_336704_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#MELLOHI
    [[maybe_unused]] static void set_field_MELLOHI(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("g", "MELLOHI", "field_52043", "MELLOHI", "f_336704_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#STAL
    [[maybe_unused]] static jobject get_field_STAL() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "STAL", "field_52044", "STAL", "f_337138_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#STAL
    [[maybe_unused]] static void set_field_STAL(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("h", "STAL", "field_52044", "STAL", "f_337138_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#STRAD
    [[maybe_unused]] static jobject get_field_STRAD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "STRAD", "field_52045", "STRAD", "f_337148_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#STRAD
    [[maybe_unused]] static void set_field_STRAD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("i", "STRAD", "field_52045", "STRAD", "f_337148_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#WARD
    [[maybe_unused]] static jobject get_field_WARD() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "WARD", "field_52046", "WARD", "f_336617_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#WARD
    [[maybe_unused]] static void set_field_WARD(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("j", "WARD", "field_52046", "WARD", "f_336617_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#ELEVEN
    [[maybe_unused]] static jobject get_field_ELEVEN() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "ELEVEN", "field_52047", "ELEVEN", "f_336656_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#ELEVEN
    [[maybe_unused]] static void set_field_ELEVEN(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("k", "ELEVEN", "field_52047", "ELEVEN", "f_336656_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#WAIT
    [[maybe_unused]] static jobject get_field_WAIT() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "WAIT", "field_52048", "WAIT", "f_337323_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#WAIT
    [[maybe_unused]] static void set_field_WAIT(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("l", "WAIT", "field_52048", "WAIT", "f_337323_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#PIGSTEP
    [[maybe_unused]] static jobject get_field_PIGSTEP() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "PIGSTEP", "field_52049", "PIGSTEP", "f_336758_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#PIGSTEP
    [[maybe_unused]] static void set_field_PIGSTEP(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("m", "PIGSTEP", "field_52049", "PIGSTEP", "f_336758_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#OTHERSIDE
    [[maybe_unused]] static jobject get_field_OTHERSIDE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "OTHERSIDE", "field_52050", "OTHERSIDE", "f_337463_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#OTHERSIDE
    [[maybe_unused]] static void set_field_OTHERSIDE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("n", "OTHERSIDE", "field_52050", "OTHERSIDE", "f_337463_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#FIVE
    [[maybe_unused]] static jobject get_field_FIVE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "FIVE", "field_52051", "FIVE", "f_336950_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#FIVE
    [[maybe_unused]] static void set_field_FIVE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("o", "FIVE", "field_52051", "FIVE", "f_336950_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#RELIC
    [[maybe_unused]] static jobject get_field_RELIC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "RELIC", "field_52052", "RELIC", "f_337390_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#RELIC
    [[maybe_unused]] static void set_field_RELIC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("p", "RELIC", "field_52052", "RELIC", "f_337390_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#PRECIPICE
    [[maybe_unused]] static jobject get_field_PRECIPICE() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PRECIPICE", "field_52053", "PRECIPICE", "f_337103_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#PRECIPICE
    [[maybe_unused]] static void set_field_PRECIPICE(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("q", "PRECIPICE", "field_52053", "PRECIPICE", "f_337103_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#CREATOR
    [[maybe_unused]] static jobject get_field_CREATOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "CREATOR", "field_52054", "CREATOR", "f_337537_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#CREATOR
    [[maybe_unused]] static void set_field_CREATOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("r", "CREATOR", "field_52054", "CREATOR", "f_337537_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static public field net.minecraft.block.jukebox.JukeboxSongs#CREATOR_MUSIC_BOX
    [[maybe_unused]] static jobject get_field_CREATOR_MUSIC_BOX() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "CREATOR_MUSIC_BOX", "field_52055", "CREATOR_MUSIC_BOX", "f_337205_"), "Lakq;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.block.jukebox.JukeboxSongs#CREATOR_MUSIC_BOX
    [[maybe_unused]] static void set_field_CREATOR_MUSIC_BOX(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("s", "CREATOR_MUSIC_BOX", "field_52055", "CREATOR_MUSIC_BOX", "f_337205_"), "Lakq;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    static jmethodID methodID_of() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "create", "method_60764", "of", "m_340109_"), "(Ljava/lang/String;)Lakq;");
    }

    static jobject of(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_of();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID_register() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "register", "method_60766", "register", "m_339933_"), "(Lqq;Lakq;Ljm$c;II)V");
    }

    static void register(const jobject& arg0, const jobject& arg1, const jobject& arg2, const jint& arg3, const jint& arg4) {
       const auto clazz = self();
       const auto methodID = methodID_register();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2, arg3, arg4);
    };
    
    static jmethodID methodID_bootstrap() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "bootstrap", "method_60765", "bootstrap", "m_339777_"), "(Lqq;)V");
    }

    static void bootstrap(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_bootstrap();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0);
    };
    
};

#endif // NET_MINECRAFT_BLOCK_JUKEBOX_JUKEBOXSONGS_HPP