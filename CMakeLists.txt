cmake_minimum_required(VERSION 3.29)
project(MinecraftAnotherJNICheat)

set(CMAKE_CXX_STANDARD 23)

find_package(JNI REQUIRED)
find_package(openjdk)
find_package(fmt)
find_package(opengl_system)
find_package(glfw3)

if (WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -finput-charset=UTF-8 -fexec-charset=UTF-8")

add_library(MinecraftAnotherJNICheat SHARED src/main.cpp
        src/hooks/Hooks.cpp
        src/hooks/Hooks.hpp
        src/Includes.h
        includes/jnihook/classfile.cpp
        includes/jnihook/classfile.hpp
        includes/jnihook/jnihook.cpp
        includes/jnihook/jnihook.h
        includes/jnihook/jnihook.hpp
        includes/jnihook/uuid.cpp
        includes/jnihook/uuid.hpp
        sdk/sdk.cpp
        src/listeners/Listener.h
        src/listeners/Listeners.cpp
        src/listeners/Listeners.h
        src/listeners/GlobalEventListener.cpp
        src/listeners/GlobalEventListener.h
        src/features/Feature.h
        src/features/KeyBinding.h
        src/features/Category.h
        src/features/FeatureManager.cpp
        src/features/FeatureManager.h
        src/features/impl/movement/AutoSprint.cpp
        src/features/impl/movement/AutoSprint.h
        src/features/impl/player/XCarry.cpp
        src/features/impl/player/XCarry.h
        src/settings/Setting.h
        src/settings/Settings.h
        src/features/impl/player/AntiHunger.cpp
        src/features/impl/player/AntiHunger.h
        src/utils/TimeUtil.h
        src/utils/InventoryUtil.h
        src/features/impl/player/NoJumpDelay.cpp
        src/features/impl/player/NoJumpDelay.h
        src/features/impl/player/PearlBlockThrow.cpp
        src/features/impl/player/PearlBlockThrow.h
        src/features/impl/movement/NoPush.cpp
        src/features/impl/movement/NoPush.h
        src/hooks/hooks/MinecraftClientHooks.cpp
        src/hooks/hooks/KeyboardHooks.cpp
        src/hooks/hooks/ClientPlayerEntityHooks.cpp
        src/hooks/hooks/ClientConnectionHooks.cpp
        src/hooks/hooks/EntityHooks.cpp
        src/features/impl/render/FullBright.h
        src/hooks/hooks/LightmapTextureManagerHooks.cpp
        src/features/impl/player/PortalInventory.h
)

include_directories(${JNI_INCLUDE_DIRS})
include_directories(${PROJECT_SOURCE_DIR}/sdk)
include_directories(${PROJECT_SOURCE_DIR}/includes/jnihook)

target_link_libraries(MinecraftAnotherJNICheat
        ${JNI_LIBRARIES}
        openjdk::openjdk
        fmt::fmt
        opengl::opengl
        glfw)