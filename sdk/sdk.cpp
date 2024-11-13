#include "sdk.hpp"

MinecraftSDK::Mappings MinecraftSDK::selectedMapping = MinecraftSDK::OBFUSCATED;
JavaVM* MinecraftSDK::vm = nullptr;
JNIEnv* MinecraftSDK::env = nullptr;