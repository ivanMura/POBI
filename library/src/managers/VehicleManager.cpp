//
// Created by kacpe on 7.06.2026.
//

#include "../../include/managers/VehicleManager.h"

#include "../../include/model/Car.h"
#include "../../include/model/Motorcycle.h"

VehicleManager::VehicleManager()
{
    vehicleRepository = std::make_shared<VehicleRepository>();
}

VehicleManager::~VehicleManager() {
}

std::shared_ptr<Vehicle> VehicleManager::registerCar(std::string vin, std::string brand, std::string model,
    int doorCount)
{
    std::shared_ptr<Vehicle> car = std::make_shared<Car>(vin, brand, model, doorCount);
    vehicleRepository->add(car);
    return car;
}


std::shared_ptr<Vehicle> VehicleManager::registerMotorcycle(std::string vin, std::string brand, std::string model,
    std::string typeOfWheels)
{
    std::shared_ptr<Vehicle> motorcycle = std::make_shared<Motorcycle>(vin, brand, model, typeOfWheels);
    vehicleRepository->add(motorcycle);
    return motorcycle;
}

