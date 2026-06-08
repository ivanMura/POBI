//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_VEHICLE_H
#define UNTITLED5_VEHICLE_H
#include <string>


class Vehicle
{
public:
    Vehicle(std::string vin, std::string brand, std::string model);
    virtual ~Vehicle() =  default;
    virtual double calculateBaseRepairCost() = 0;
    virtual std::string getInfo() ;
    double getBaseRepairCost() const; //proba dodania consta zeby dzialal repair order
    std::string getVin() const; //tutaj tak samo jak na gorze ^

private:
    std::string vin;
    std::string brand;
    std::string model;
    double baseRepairCost = 100.0;
};


#endif //UNTITLED5_VEHICLE_H
