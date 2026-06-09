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
    /**
     * @brief Czysto wirtualna metoda do obliczania bazowego kosztu naprawy.
     * @return double Koszt naprawy (musi być zaimplementowany w klasach pochodnych).
     */
    virtual double calculateBaseRepairCost() = 0;
    /**
     * @brief Wirtualna metoda zwracająca podstawowe informacje o pojeździe.
     * @return std::string Ciąg tekstowy z danymi pojazdu (wspolne dla motocykla/samochodu).
     */
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
