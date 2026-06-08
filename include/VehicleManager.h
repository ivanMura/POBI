//
// Created by kacpe on 7.06.2026.
//

#ifndef UNTITLED5_VEHICLEMANAGER_H
#define UNTITLED5_VEHICLEMANAGER_H
#include <memory>

#include "VehicleRepository.h"


class VehicleManager
{
    public:
    VehicleManager();
    ~VehicleManager();
    std::shared_ptr<Vehicle> registerCar(std::string vin, std::string brand, std::string model, int doorCount);
    std::shared_ptr<Vehicle> registerMotorcycle(std::string vin, std::string brand, std::string model, std::string typeOfWheels);
    private:
    std::shared_ptr<VehicleRepository> vehicleRepository;
};


#endif //UNTITLED5_VEHICLEMANAGER_H
