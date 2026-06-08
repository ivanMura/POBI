//
// Created by Ivan Muratov on 8/6/26.
//

#include "../include/RepairOrder.h"

RepairOrder::RepairOrder(int id, std::string arrivalTime, std::string issueType, std::shared_ptr<Vehicle> vehicle)
: id(id), arrivalTime(arrivalTime), issueType(issueType), vehicle(vehicle), status(StatusType::NEW) {}

void RepairOrder::addPart(std::shared_ptr<Part> part) {
    if (part != nullptr) {
        parts.push_back(part);
        if (status == StatusType::NEW) {
            status = StatusType::PROCESSING;
        }
    }
}

double RepairOrder::calculateCost() {
    double total = 0.0;
    if (vehicle != nullptr) {
        total += vehicle->calculateBaseRepairCost();
    }
    for (const auto& part : parts) {
        total += part->getCost();
    }
    return total;
}

void RepairOrder::closeOrder() {
    status = StatusType::COMPLITED;
}

int RepairOrder::getId() const { return id; }
StatusType RepairOrder::getStatus() const { return status; }
std::shared_ptr<Vehicle> RepairOrder::getVehicle() const { return vehicle; }