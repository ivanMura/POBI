//
// Created by kacpe on 7.06.2026.
//

#ifndef UNTITLED5_VEHICLEMANAGER_H
#define UNTITLED5_VEHICLEMANAGER_H
#include <memory>

#include "../repositories/VehicleRepository.h"


class VehicleManager
{
    public:
    VehicleManager();
    ~VehicleManager();
    /**
     * @brief Rejestruje nowy samochód w systemie.
     * @param vin Unikalny numer identyfikacyjny pojazdu (VIN).
     * @param brand Marka samochodu.
     * @param model Model samochodu.
     * @param doorCount Liczba drzwi w samochodzie.
     * @return std::shared_ptr<Vehicle> Wskaźnik na utworzony obiekt samochodu.
     */
    std::shared_ptr<Vehicle> registerCar(std::string vin, std::string brand, std::string model, int doorCount);
    /**
     * @brief Rejestruje nowy motocykl w systemie.
     * @param vin Unikalny numer identyfikacyjny pojazdu (VIN).
     * @param brand Marka motocykla.
     * @param model Model motocykla.
     * @param typeOfWheels Typ kół/napędu w motocyklu.
     * @return std::shared_ptr<Vehicle> Wskaźnik na utworzony obiekt motocykla.
     */
    std::shared_ptr<Vehicle> registerMotorcycle(std::string vin, std::string brand, std::string model, std::string typeOfWheels);
    private:
    std::shared_ptr<VehicleRepository> vehicleRepository;
};


#endif //UNTITLED5_VEHICLEMANAGER_H
