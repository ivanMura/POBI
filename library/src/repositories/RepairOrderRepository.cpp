//
// Created by Ivan Muratov on 8/6/26.
//

#include "../../include/repositories/RepairOrderRepository.h"

RepairOrderRepository::RepairOrderRepository() {

}

RepairOrderRepository::~RepairOrderRepository() {

}


void RepairOrderRepository::add(std::shared_ptr<RepairOrder> order) {
    if (order != nullptr) {
        orders.push_back(order);
    }
}

std::shared_ptr<RepairOrder> RepairOrderRepository::getById(int id) {
    for (const auto& order : orders) {
        if (order->getId() == id) {
            return order;
        }
    }
    return nullptr;
}

std::vector<std::shared_ptr<RepairOrder>> RepairOrderRepository::getAll() const {
    return orders;
}
