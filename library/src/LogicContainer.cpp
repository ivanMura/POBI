//
// Created by kacpe on 4.06.2026.
//

#include "../include/LogicContainer.h"

LogicContainer::LogicContainer()
{
}

LogicContainer::~LogicContainer() {
}

ClientManager & LogicContainer::getClientManager()
{
 return clientManager;
}

VehicleManager & LogicContainer::getVehicleManager()
{
 return vehicleManager;
}

RepairOrderManager & LogicContainer::getRepairOrderManager() {
 return repairOrderManager;
}


