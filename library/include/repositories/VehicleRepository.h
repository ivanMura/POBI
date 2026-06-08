//
// Created by kacpe on 7.06.2026.
//

#ifndef UNTITLED5_VEHICLEREPOSITORY_H
#define UNTITLED5_VEHICLEREPOSITORY_H
#include <memory>
#include <vector>

#include "../model/Vehicle.h"


class VehicleRepository
{
    public:
    VehicleRepository();
    ~VehicleRepository();
    bool add(std::shared_ptr<Vehicle> vehicle);
    std::shared_ptr<Vehicle> getByVin(std::string vin);
private:
    std::vector<std::shared_ptr<Vehicle>> vehicles;
};


#endif //UNTITLED5_VEHICLEREPOSITORY_H
