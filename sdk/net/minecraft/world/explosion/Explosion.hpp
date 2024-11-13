// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_EXPLOSION_EXPLOSION_HPP
#define NET_MINECRAFT_WORLD_EXPLOSION_EXPLOSION_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.explosion.Explosion
 * Remapped: dco
 */
namespace Explosion {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("dco", "net/minecraft/world/level/Explosion", "net/minecraft/class_1927", "net/minecraft/world/explosion/Explosion", "net/minecraft/src/C_1578_"));
        }
        return cachedClass;
    };

    // getter for static private field net.minecraft.world.explosion.Explosion#DEFAULT_BEHAVIOR
    [[maybe_unused]] static jobject get_field_DEFAULT_BEHAVIOR() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXPLOSION_DAMAGE_CALCULATOR", "field_25818", "DEFAULT_BEHAVIOR", "f_46008_"), "Ldcp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#DEFAULT_BEHAVIOR
    [[maybe_unused]] static void set_field_DEFAULT_BEHAVIOR(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "EXPLOSION_DAMAGE_CALCULATOR", "field_25818", "DEFAULT_BEHAVIOR", "f_46008_"), "Ldcp;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for static private field net.minecraft.world.explosion.Explosion#field_30960
    [[maybe_unused]] static jint get_field_field_30960() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_DROPS_PER_COMBINED_STACK", "field_30960", "field_30960", "f_151469_"), "I");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticIntField(clazz, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#field_30960
    [[maybe_unused]] static void set_field_field_30960(const jint &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("b", "MAX_DROPS_PER_COMBINED_STACK", "field_30960", "field_30960", "f_151469_"), "I");
        return MinecraftSDK::env->SetStaticIntField(clazz, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#createFire
    static jboolean get_field_createFire(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fire", "field_9186", "createFire", "f_46009_"), "Z");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetBooleanField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#createFire
    static void set_field_createFire(const jobject &obj, const jboolean &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "fire", "field_9186", "createFire", "f_46009_"), "Z");
        return MinecraftSDK::env->SetBooleanField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#destructionType
    static jobject get_field_destructionType(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "blockInteraction", "field_9184", "destructionType", "f_46010_"), "Ldco$a;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#destructionType
    static void set_field_destructionType(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "blockInteraction", "field_9184", "destructionType", "f_46010_"), "Ldco$a;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#random
    static jobject get_field_random(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "random", "field_9191", "random", "f_46011_"), "Layw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#random
    static void set_field_random(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "random", "field_9191", "random", "f_46011_"), "Layw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#world
    static jobject get_field_world(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "level", "field_9187", "world", "f_46012_"), "Ldcw;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#world
    static void set_field_world(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("f", "level", "field_9187", "world", "f_46012_"), "Ldcw;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#x
    static jdouble get_field_x(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "x", "field_9195", "x", "f_46013_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#x
    static void set_field_x(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("g", "x", "field_9195", "x", "f_46013_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#y
    static jdouble get_field_y(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "y", "field_9192", "y", "f_46014_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#y
    static void set_field_y(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("h", "y", "field_9192", "y", "f_46014_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#z
    static jdouble get_field_z(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "z", "field_9189", "z", "f_46015_"), "D");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetDoubleField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#z
    static void set_field_z(const jobject &obj, const jdouble &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("i", "z", "field_9189", "z", "f_46015_"), "D");
        return MinecraftSDK::env->SetDoubleField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#entity
    static jobject get_field_entity(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "source", "field_9185", "entity", "f_46016_"), "Lbsr;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#entity
    static void set_field_entity(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("j", "source", "field_9185", "entity", "f_46016_"), "Lbsr;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#power
    static jfloat get_field_power(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "radius", "field_9190", "power", "f_46017_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#power
    static void set_field_power(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("k", "radius", "field_9190", "power", "f_46017_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#damageSource
    static jobject get_field_damageSource(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "damageSource", "field_9193", "damageSource", "f_46018_"), "Lbrk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#damageSource
    static void set_field_damageSource(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("l", "damageSource", "field_9193", "damageSource", "f_46018_"), "Lbrk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#behavior
    static jobject get_field_behavior(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "damageCalculator", "field_25400", "behavior", "f_46019_"), "Ldcp;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#behavior
    static void set_field_behavior(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("m", "damageCalculator", "field_25400", "behavior", "f_46019_"), "Ldcp;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#particle
    static jobject get_field_particle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "smallExplosionParticles", "field_47328", "particle", "f_303246_"), "Llk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#particle
    static void set_field_particle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("n", "smallExplosionParticles", "field_47328", "particle", "f_303246_"), "Llk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#emitterParticle
    static jobject get_field_emitterParticle(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "largeExplosionParticles", "field_47329", "emitterParticle", "f_302779_"), "Llk;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#emitterParticle
    static void set_field_emitterParticle(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("o", "largeExplosionParticles", "field_47329", "emitterParticle", "f_302779_"), "Llk;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#soundEvent
    static jobject get_field_soundEvent(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "explosionSound", "field_47330", "soundEvent", "f_302233_"), "Ljm;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#soundEvent
    static void set_field_soundEvent(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("p", "explosionSound", "field_47330", "soundEvent", "f_302233_"), "Ljm;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#affectedBlocks
    static jobject get_field_affectedBlocks(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "toBlow", "field_9188", "affectedBlocks", "f_46020_"), "Lit/unimi/dsi/fastutil/objects/ObjectArrayList;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#affectedBlocks
    static void set_field_affectedBlocks(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("q", "toBlow", "field_9188", "affectedBlocks", "f_46020_"), "Lit/unimi/dsi/fastutil/objects/ObjectArrayList;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    // getter for private field net.minecraft.world.explosion.Explosion#affectedPlayers
    static jobject get_field_affectedPlayers(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "hitPlayers", "field_9194", "affectedPlayers", "f_46021_"), "Ljava/util/Map;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetObjectField(obj, fieldID);
    };

    // setter for static private field net.minecraft.world.explosion.Explosion#affectedPlayers
    static void set_field_affectedPlayers(const jobject &obj, const jobject &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("r", "hitPlayers", "field_9194", "affectedPlayers", "f_46021_"), "Ljava/util/Map;");
        return MinecraftSDK::env->SetObjectField(obj, fieldID, value);
    };

    static jmethodID methodID_createDamageSource() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getDefaultDamageSource", "method_55108", "createDamageSource", "m_308019_"), "(Ldcw;Lbsr;)Lbrk;");
    }

    static jobject createDamageSource(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_createDamageSource();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_chooseBehavior() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "makeDamageCalculator", "method_29553", "chooseBehavior", "m_46062_"), "(Lbsr;)Ldcp;");
    }

    static jobject chooseBehavior(const jobject& obj, const jobject& arg0) {
                
       const auto methodID = methodID_chooseBehavior();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_getExposure() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "getSeenPercent", "method_17752", "getExposure", "m_46064_"), "(Lexc;Lbsr;)F");
    }

    static jfloat getExposure(const jobject& arg0, const jobject& arg1) {
       const auto clazz = self();
       const auto methodID = methodID_getExposure();
       return MinecraftSDK::env->CallStaticFloatMethod(clazz, methodID, arg0, arg1);
    };
    
    static jmethodID methodID_getPower() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "radius", "method_55107", "getPower", "m_305027_"), "()F");
    }

    static jfloat getPower(const jobject& obj) {
                
       const auto methodID = methodID_getPower();
       return MinecraftSDK::env->CallFloatMethod(obj, methodID);
    };
    
    static jmethodID methodID_getPosition() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("b", "center", "method_55109", "getPosition", "m_307721_"), "()Lexc;");
    }

    static jobject getPosition(const jobject& obj) {
                
       const auto methodID = methodID_getPosition();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_collectBlocksAndDamageEntities() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("c", "explode", "method_8348", "collectBlocksAndDamageEntities", "m_46061_"), "()V");
    }

    static void collectBlocksAndDamageEntities(const jobject& obj) {
                
       const auto methodID = methodID_collectBlocksAndDamageEntities();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_affectWorld() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("a", "finalizeExplosion", "method_8350", "affectWorld", "m_46075_"), "(Z)V");
    }

    static void affectWorld(const jobject& obj, const jboolean& arg0) {
                
       const auto methodID = methodID_affectWorld();
       MinecraftSDK::env->CallVoidMethod(obj, methodID, arg0);
    };
    
    static jmethodID methodID_tryMergeStack() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("a", "addOrAppendStack", "method_24023", "tryMergeStack", "m_306516_"), "(Ljava/util/List;Lcuq;Ljd;)V");
    }

    static void tryMergeStack(const jobject& arg0, const jobject& arg1, const jobject& arg2) {
       const auto clazz = self();
       const auto methodID = methodID_tryMergeStack();
       MinecraftSDK::env->CallStaticVoidMethod(clazz, methodID, arg0, arg1, arg2);
    };
    
    static jmethodID methodID_shouldDestroy() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("d", "interactsWithBlocks", "method_46667", "shouldDestroy", "m_254884_"), "()Z");
    }

    static jboolean shouldDestroy(const jobject& obj) {
                
       const auto methodID = methodID_shouldDestroy();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAffectedPlayers() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("e", "getHitPlayers", "method_8351", "getAffectedPlayers", "m_46078_"), "()Ljava/util/Map;");
    }

    static jobject getAffectedPlayers(const jobject& obj) {
                
       const auto methodID = methodID_getAffectedPlayers();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getCausingEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetStaticMethodID(clazz, MinecraftSDK::getRemapped("b", "getIndirectSourceEntityInternal", "method_55110", "getCausingEntity", "m_306928_"), "(Lbsr;)Lbtn;");
    }

    static jobject getCausingEntity(const jobject& arg0) {
       const auto clazz = self();
       const auto methodID = methodID_getCausingEntity();
       return MinecraftSDK::env->CallStaticObjectMethod(clazz, methodID, arg0);
    };
    
    static jmethodID methodID__getCausingEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("f", "getIndirectSourceEntity", "method_8347", "getCausingEntity", "m_252906_"), "()Lbtn;");
    }

    static jobject _getCausingEntity(const jobject& obj) {
                
       const auto methodID = methodID__getCausingEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEntity() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("g", "getDirectSourceEntity", "method_46406", "getEntity", "m_253049_"), "()Lbsr;");
    }

    static jobject getEntity(const jobject& obj) {
                
       const auto methodID = methodID_getEntity();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_clearAffectedBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("h", "clearToBlow", "method_8352", "clearAffectedBlocks", "m_46080_"), "()V");
    }

    static void clearAffectedBlocks(const jobject& obj) {
                
       const auto methodID = methodID_clearAffectedBlocks();
       MinecraftSDK::env->CallVoidMethod(obj, methodID);
    };
    
    static jmethodID methodID_getAffectedBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("i", "getToBlow", "method_8346", "getAffectedBlocks", "m_46081_"), "()Ljava/util/List;");
    }

    static jobject getAffectedBlocks(const jobject& obj) {
                
       const auto methodID = methodID_getAffectedBlocks();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getDestructionType() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("j", "getBlockInteraction", "method_55111", "getDestructionType", "m_307824_"), "()Ldco$a;");
    }

    static jobject getDestructionType(const jobject& obj) {
                
       const auto methodID = methodID_getDestructionType();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("k", "getSmallExplosionParticles", "method_55112", "getParticle", "m_307149_"), "()Llk;");
    }

    static jobject getParticle(const jobject& obj) {
                
       const auto methodID = methodID_getParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getEmitterParticle() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("l", "getLargeExplosionParticles", "method_55113", "getEmitterParticle", "m_307299_"), "()Llk;");
    }

    static jobject getEmitterParticle(const jobject& obj) {
                
       const auto methodID = methodID_getEmitterParticle();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_getSoundEvent() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("m", "getExplosionSound", "method_55114", "getSoundEvent", "m_305033_"), "()Ljm;");
    }

    static jobject getSoundEvent(const jobject& obj) {
                
       const auto methodID = methodID_getSoundEvent();
       return MinecraftSDK::env->CallObjectMethod(obj, methodID);
    };
    
    static jmethodID methodID_canTriggerBlocks() {
       const auto clazz = self();
       return MinecraftSDK::env->GetMethodID(clazz, MinecraftSDK::getRemapped("n", "canTriggerBlocks", "method_60274", "canTriggerBlocks", "m_338923_"), "()Z");
    }

    static jboolean canTriggerBlocks(const jobject& obj) {
                
       const auto methodID = methodID_canTriggerBlocks();
       return MinecraftSDK::env->CallBooleanMethod(obj, methodID);
    };
    
};

#endif // NET_MINECRAFT_WORLD_EXPLOSION_EXPLOSION_HPP