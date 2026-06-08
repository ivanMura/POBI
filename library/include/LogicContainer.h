//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_LOGICCONTAINER_H
#define UNTITLED5_LOGICCONTAINER_H
#include "managers/ClientManager.h"
#include "managers/VehicleManager.h"


class LogicContainer
{
    public:
    LogicContainer();
    ~LogicContainer();
    ClientManager& getClientManager();
    VehicleManager& getVehicleManager();
    //RepairOrderManager getRepairOrderManager();
private:
    ClientManager clientManager;
    VehicleManager vehicleManager;
  //  RepairOrderManager repairOrderManager;
};


#endif //UNTITLED5_LOGICCONTAINER_H
