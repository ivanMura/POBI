cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_COMPILER g++)#requires g++ to be available on PATH
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(untitled5)
enable_language(CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_VERBOSE_MAKEFILE TRUE)

set(LIBRARY_SOURCES
        library/src/model/Vehicle.cpp
        library/src/model/Car.cpp
        library/src/model/Motorcycle.cpp
        library/src/model/Client.cpp
        library/src/repositories/ClientRepository.cpp
        library/src/managers/ClientManager.cpp
        library/src/LogicContainer.cpp
        library/src/repositories/VehicleRepository.cpp
        library/src/managers/VehicleManager.cpp
        library/src/RepairOrder.cpp
        library/src/repositories/RepairOrderRepository.cpp
        library/src/managers/RepairOrderManager.cpp
)
add_executable(untitled5
        program/src/main.cpp
        ${LIBRARY_SOURCES}
)
target_include_directories(untitled5 PUBLIC library/include)


#TESTs
find_package(Boost 1.65 COMPONENTS "unit_test_framework" REQUIRED)

set(TEST_SOURCES
        library/test/master.cpp
        library/test/ModelTests.cpp
        library/test/WorkshopTest.cpp
        library/test/VehicleRepositoryTest.cpp
)

add_executable(WorkshopTests ${TEST_SOURCES} ${LIBRARY_SOURCES})
target_include_directories(WorkshopTests PUBLIC library/include)
target_link_libraries(WorkshopTests Boost::unit_test_framework)