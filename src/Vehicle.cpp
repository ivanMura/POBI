//
// Created by kacpe on 4.06.2026.
//

#include "../include/Vehicle.h"

Vehicle::Vehicle(std::string vin, std::string brand, std::string model) : vin(vin), brand(brand), model(model)
{
}


std::string Vehicle::getInfo()
{
    return vin + " " + brand + " " + model;
}

double Vehicle::getBaseRepairCost()
{
    return baseRepairCost;
}

std::string Vehicle::getVin()
{
    return vin;
}
