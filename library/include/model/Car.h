//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_CAR_H
#define UNTITLED5_CAR_H
#include <string>

#include "Vehicle.h"


class Car : public Vehicle
{
    public:
    Car(std::string vin, std::string brand, std::string model, int doorCount);
    ~Car() override = default;
    double calculateBaseRepairCost() override;
    std::string getInfo() override;
private:
    int doorCount;

};


#endif //UNTITLED5_CAR_H
