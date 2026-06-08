//
// Created by kacpe on 4.06.2026.
//

#include "../../include/model/Vehicle.h"

Vehicle::Vehicle(std::string vin, std::string brand, std::string model) : vin(vin), brand(brand), model(model)
{
}


std::string Vehicle::getInfo()
{
    return vin + " " + brand + " " + model;
}

double Vehicle::getBaseRepairCost() const //proba dodania consta zeby dzialal repair order
{
    return baseRepairCost;
}

std::string Vehicle::getVin() const // tak samo jak na gorze ^
{
    return vin;
}
