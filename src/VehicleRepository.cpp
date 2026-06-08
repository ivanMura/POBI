//
// Created by kacpe on 7.06.2026.
//

#include "../include/VehicleRepository.h"

VehicleRepository::VehicleRepository()
{
}

VehicleRepository::~VehicleRepository() {
}

bool VehicleRepository::add(std::shared_ptr<Vehicle> vehicle)
{
    if (!vehicle) {
        return false;
    }
    for (int i=0; i<vehicles.size(); i++) {
        if (vehicles[i]==vehicle) {
            return false;
        }
    }
    vehicles.push_back(vehicle);
    return true;
}
std::shared_ptr<Vehicle> VehicleRepository::getByVin(std::string vin)
{
    for (int i=0; i<vehicles.size(); i++) {
        if (vehicles.at(i)->getVin()==vin) {
            return vehicles.at(i);
        }
    }
    return nullptr;
}
