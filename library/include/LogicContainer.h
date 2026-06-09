//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_LOGICCONTAINER_H
#define UNTITLED5_LOGICCONTAINER_H
#include "managers/ClientManager.h"
#include "managers/RepairOrderManager.h"
#include "managers/VehicleManager.h"


class LogicContainer
{
    public:
    LogicContainer();
    ~LogicContainer();
    /**
     * @brief Pobiera referencję do menedżera klientów.
     * @return ClientManager& Referencja do obiektu clientManager.
     */
    ClientManager& getClientManager();

    /**
     * @brief Pobiera referencję do menedżera pojazdów.
     * @return VehicleManager& Referencja do obiektu vehicleManager.
     */
    VehicleManager& getVehicleManager();

    /**
     * @brief Pobiera referencję do menedżera zleceń naprawy.
     * @return RepairOrderManager& Referencja do obiektu repairOrderManager.
     */
    RepairOrderManager& getRepairOrderManager();
private:
    ClientManager clientManager;
    VehicleManager vehicleManager;
    RepairOrderManager repairOrderManager;
};


#endif //UNTITLED5_LOGICCONTAINER_H
