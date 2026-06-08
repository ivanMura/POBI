//
// Created by kacpe on 4.06.2026.
//

#include "../include/Motorcycle.h"

Motorcycle::Motorcycle(std::string vin, std::string brand, std::string model, std::string typeOfWheels) : Vehicle(vin, brand, model), typeOfWheels(typeOfWheels)
{
}

double Motorcycle::calculateBaseRepairCost()
{
   if (typeOfWheels == "szutrowe") {
       return getBaseRepairCost() * 2;
   }
    else if (typeOfWheels == "uliczne") {
        return getBaseRepairCost() * 3;
    }
    else if (typeOfWheels == "żużlowe") {
        return getBaseRepairCost() * 4;
    }
    else
        return getBaseRepairCost();
}

std::string Motorcycle::getTypeOfWheels()
{
    return typeOfWheels;
}
std::string Motorcycle::getInfo() {
    return Vehicle::getInfo() + typeOfWheels;
}
