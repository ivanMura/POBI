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
    /**
     * @brief Konstruktor klasy Car.
     * @param vin Numer VIN samochodu.
     * @param brand Marka samochodu.
     * @param model Model samochodu.
     * @param doorCount Liczba drzwi.
     */
    Car(std::string vin, std::string brand, std::string model, int doorCount);
    ~Car() override = default;
    /**
     * @brief Oblicza bazowy koszt naprawy specyficzny dla samochodu (w zaleznosci od ilosci drzwi).
     * @return double Kwota bazowa kosztu naprawy.
     */
    double calculateBaseRepairCost() override;
    /**
     * @brief Zwraca ciąg tekstowy z informacjami o samochodzie.
     * @return std::string Informacje o pojeździe (w tym liczba drzwi).
     */
    std::string getInfo() override;
private:
    int doorCount;

};


#endif //UNTITLED5_CAR_H
