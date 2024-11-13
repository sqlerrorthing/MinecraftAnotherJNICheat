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