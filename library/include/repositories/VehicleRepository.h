//
// Created by kacpe on 7.06.2026.
//

#ifndef UNTITLED5_VEHICLEREPOSITORY_H
#define UNTITLED5_VEHICLEREPOSITORY_H
#include <memory>
#include <vector>

#include "../model/Vehicle.h"


class VehicleRepository
{
    public:
    VehicleRepository();
    ~VehicleRepository();
    /**
     * @brief Dodaje nowy pojazd do repozytorium.
     * @param vehicle Wskaźnik na obiekt pojazdu, który ma zostać zapisany.
     * @return true Jeśli dodawanie zakończyło się sukcesem.
     * @return false Jeśli pojazd o tym samym numerze VIN już istnieje w bazie.
     */
    bool add(std::shared_ptr<Vehicle> vehicle);
    std::shared_ptr<Vehicle> getByVin(std::string vin);
private:
    std::vector<std::shared_ptr<Vehicle>> vehicles;
};


#endif //UNTITLED5_VEHICLEREPOSITORY_H
