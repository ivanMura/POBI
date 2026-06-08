//
// Created by Ivan Muratov on 8/6/26.
//

#include "../../include/managers/RepairOrderManager.h"
#include "../../include/repositories/RepairOrderRepository.h"
#include <iostream>
#include <chrono>
#include <iomanip>
#include <sstream>

RepairOrderManager::RepairOrderManager() {
    orderRepository = std::make_shared<RepairOrderRepository>();
}

std::shared_ptr<RepairOrder> RepairOrderManager::createOrder(std::string vehicleVin, std::string issueType, std::shared_ptr<Vehicle> vehicle) {
    std::vector<std::shared_ptr<RepairOrder>> allOrders = orderRepository->getAll();
    for (int i=0; i<allOrders.size(); i++) {
        std::shared_ptr<RepairOrder> order = allOrders.at(i);

        if (order->getVehicle()->getVin()==vehicleVin) {
            StatusType currentStatus = order->getStatus();

            if (currentStatus == StatusType::NEW || currentStatus == StatusType::PROCESSING) {
                std::cout << "Vehicle is already in repair, vin: " << vehicleVin <<std::endl;
                return nullptr;
            }
        }
    }
    auto now = std::chrono::system_clock::now();
    auto in_time_t = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << std::put_time(std::localtime(&in_time_t), "%Y-%m-%d");
    std::string date = ss.str();

    int newOrderId = allOrders.size()+1;
    std::shared_ptr<RepairOrder> newOrder = std::make_shared<RepairOrder>(newOrderId,date, issueType, vehicle);
    orderRepository->add(newOrder);
    std::cout << "New repair order created with id: " << newOrderId << std::endl;
    return newOrder;
}
