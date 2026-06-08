//
// Created by Ivan Muratov on 8/6/26.
//

#ifndef UNTITLED5_REPAIRORDERMANAGER_H
#define UNTITLED5_REPAIRORDERMANAGER_H
#include <memory>
#include "repositories/RepairOrderRepository.h"

class RepairOrderManager {
private:
    std::shared_ptr<RepairOrderRepository> orderRepository;
public:
    RepairOrderManager();
    ~RepairOrderManager() = default;
    std::shared_ptr<RepairOrder> createOrder(std::string vehicleVin, std::string issueType, std::shared_ptr<Vehicle> vehicle);

    void addPartToOrder(int orderId, std::shared_ptr<Part> part);
    void closeOrder(int orderId);
};


#endif //UNTITLED5_REPAIRORDERMANAGER_H
