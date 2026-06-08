cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_COMPILER g++)#requires g++ to be available on PATH
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(untitled5)
enable_language(CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_VERBOSE_MAKEFILE TRUE)

set(SOURCE_FILES
        src/main.cpp
        src/vehicle.cpp
        include/vehicle.h
        src/Car.cpp
        include/Car.h
        src/Motorcycle.cpp
        include/Motorcycle.h
        src/Client.cpp
        include/Client.h
        src/ClientRepository.cpp
        include/ClientRepository.h
        src/ClientManager.cpp
        include/ClientManager.h
        src/ClientManager.cpp
        src/LogicContainer.cpp
        include/LogicContainer.h
        src/VehicleRepository.cpp
        include/VehicleRepository.h
        src/VehicleManager.cpp
        include/VehicleManager.h)

add_executable(untitled5 ${SOURCE_FILES}
            src/main.cpp
        src/ClientManager.cpp)

target_include_directories(untitled5 PUBLIC include)


#TESTs
find_package(Boost 1.65 COMPONENTS "unit_test_framework" REQUIRED)
