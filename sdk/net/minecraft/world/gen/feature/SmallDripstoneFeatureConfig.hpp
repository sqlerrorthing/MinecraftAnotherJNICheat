// WARNING: This code was automatically generated by MinecraftCppSDK.
// It is highly recommended to not modify this file directly.
// Any changes made to this file will be overwritten by the next generation. 

#ifndef NET_MINECRAFT_WORLD_GEN_FEATURE_SMALLDRIPSTONEFEATURECONFIG_HPP
#define NET_MINECRAFT_WORLD_GEN_FEATURE_SMALLDRIPSTONEFEATURECONFIG_HPP
#include <sdk.hpp>


/*
 * Minecraft class
 * Original: net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig
 * Remapped: eer
 */
namespace SmallDripstoneFeatureConfig {
    static jclass self() {
        static jclass cachedClass = nullptr;
        if (cachedClass == nullptr) {
            cachedClass = MinecraftSDK::env->FindClass(MinecraftSDK::getRemapped("eer", "net/minecraft/world/level/levelgen/feature/configurations/PointedDripstoneConfiguration", "net/minecraft/class_5733", "net/minecraft/world/gen/feature/SmallDripstoneFeatureConfig", "net/minecraft/src/C_182992_"));
        }
        return cachedClass;
    };

    // getter for static public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#CODEC
    [[maybe_unused]] static jobject get_field_CODEC() {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_28237", "CODEC", "f_191274_"), "Lcom/mojang/serialization/Codec;");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetStaticObjectField(clazz, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#CODEC
    [[maybe_unused]] static void set_field_CODEC(const jobject &value) {
        const auto clazz = self();
        const auto fieldID = MinecraftSDK::env->GetStaticFieldID(clazz, MinecraftSDK::getRemapped("a", "CODEC", "field_28237", "CODEC", "f_191274_"), "Lcom/mojang/serialization/Codec;");
        return MinecraftSDK::env->SetStaticObjectField(clazz, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#chanceOfTallerDripstone
    static jfloat get_field_chanceOfTallerDripstone(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "chanceOfTallerDripstone", "field_28241", "chanceOfTallerDripstone", "f_191275_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#chanceOfTallerDripstone
    static void set_field_chanceOfTallerDripstone(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("b", "chanceOfTallerDripstone", "field_28241", "chanceOfTallerDripstone", "f_191275_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#chanceOfDirectionalSpread
    static jfloat get_field_chanceOfDirectionalSpread(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chanceOfDirectionalSpread", "field_35416", "chanceOfDirectionalSpread", "f_191276_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#chanceOfDirectionalSpread
    static void set_field_chanceOfDirectionalSpread(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("c", "chanceOfDirectionalSpread", "field_35416", "chanceOfDirectionalSpread", "f_191276_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#chanceOfSpreadRadius2
    static jfloat get_field_chanceOfSpreadRadius2(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "chanceOfSpreadRadius2", "field_35417", "chanceOfSpreadRadius2", "f_191277_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#chanceOfSpreadRadius2
    static void set_field_chanceOfSpreadRadius2(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("d", "chanceOfSpreadRadius2", "field_35417", "chanceOfSpreadRadius2", "f_191277_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

    // getter for public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#chanceOfSpreadRadius3
    static jfloat get_field_chanceOfSpreadRadius3(const jobject &obj) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "chanceOfSpreadRadius3", "field_35418", "chanceOfSpreadRadius3", "f_191278_"), "F");
        if(fieldID == nullptr) { return 0; }
        
        return MinecraftSDK::env->GetFloatField(obj, fieldID);
    };

    // setter for static public field net.minecraft.world.gen.feature.SmallDripstoneFeatureConfig#chanceOfSpreadRadius3
    static void set_field_chanceOfSpreadRadius3(const jobject &obj, const jfloat &value) {
        const auto fieldID = MinecraftSDK::env->GetFieldID(self(), MinecraftSDK::getRemapped("e", "chanceOfSpreadRadius3", "field_35418", "chanceOfSpreadRadius3", "f_191278_"), "F");
        return MinecraftSDK::env->SetFloatField(obj, fieldID, value);
    };

};

#endif // NET_MINECRAFT_WORLD_GEN_FEATURE_SMALLDRIPSTONEFEATURECONFIG_HPP