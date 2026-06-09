//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_MOTORCYCLE_H
#define UNTITLED5_MOTORCYCLE_H
#include <string>

#include "model/Vehicle.h"


class Motorcycle  : public Vehicle
{
public:
    Motorcycle(std::string vin, std::string brand, std::string model, std::string typeOfWheels);
    ~Motorcycle() override = default;
    /**
     * @brief Oblicza bazowy koszt naprawy specyficzny dla motocykla (w zaleznosci od kol jakie ten posiada).
     * @return double Kwota bazowa kosztu naprawy.
     */
    double calculateBaseRepairCost() override;
    std::string getTypeOfWheels();
    std::string getInfo() override;
private:
    std::string typeOfWheels;
};


#endif //UNTITLED5_MOTORCYCLE_H
