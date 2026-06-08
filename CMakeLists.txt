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
        program/src/main.cpp
        library/src/model/Vehicle.cpp
        library/include/model/Vehicle.h
        library/src/model/Car.cpp
        library/include/model/Car.h
        library/src/model/Motorcycle.cpp
        library/include/model/Motorcycle.h
        library/src/model/Client.cpp
        library/include/model/Client.h
        library/src/repositories/ClientRepository.cpp
        library/include/repositories/ClientRepository.h
        library/src/managers/ClientManager.cpp
        library/include/managers/ClientManager.h
        library/src/managers/ClientManager.cpp
        library/src/LogicContainer.cpp
        library/include/LogicContainer.h
        library/src/repositories/VehicleRepository.cpp
        library/include/repositories/VehicleRepository.h
        library/src/managers/VehicleManager.cpp
        library/include/managers/VehicleManager.h
        library/include/StatusType.h
        library/include/Part.h
        library/src/RepairOrder.cpp
        library/include/RepairOrder.h
        library/src/repositories/RepairOrderRepository.cpp
        library/include/repositories/RepairOrderRepository.h
        library/src/managers/RepairOrderManager.cpp
        library/include/managers/RepairOrderManager.h)

add_executable(untitled5 ${SOURCE_FILES}
        program/src/main.cpp
        library/src/managers/ClientManager.cpp)

target_include_directories(untitled5 PUBLIC library/include)


#TESTs
find_package(Boost 1.65 COMPONENTS "unit_test_framework" REQUIRED)
