//
// Created by kacpe on 4.06.2026.
//

#include "../../include/model/Car.h"

Car::Car(std::string vin, std::string brand, std::string model, int doorCount) : Vehicle(vin, brand, model), doorCount(doorCount)
{
}

double Car::calculateBaseRepairCost()
{
    return getBaseRepairCost() * doorCount;
}

std::string Car::getInfo()
{
    return Vehicle::getInfo() + std::to_string(doorCount);
}
