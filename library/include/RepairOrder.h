//
// Created by Ivan Muratov on 8/6/26.
//

#ifndef UNTITLED5_REPAIRORDER_H
#define UNTITLED5_REPAIRORDER_H
#include <string>
#include <vector>
#include "memory"
#include "Part.h"
#include "StatusType.h"
#include "model/Vehicle.h"


class RepairOrder {
private:
    int id;
    std::string arrivalTime;
    std::string issueType;
    StatusType status;

    std::shared_ptr<Vehicle> vehicle;
    std::vector<std::shared_ptr<Part>> parts;
public:
    RepairOrder(int id, std::string arrivalTime, std::string issueType, std::shared_ptr<Vehicle> vehicle);

    void addPart(std::shared_ptr<Part> part);
    /**
     * @brief Oblicza całkowity koszt zlecenia ( koszt części + bazowy koszt naprawy pojazdu).
     * @return double Sumaryczny koszt naprawy.
     */
    double calculateCost();
    /**
     * @brief Zamyka zlecenie naprawy i zmienia jego status na COMPLETED.
     */
    void closeOrder();

    int getId() const;
    StatusType getStatus() const ;
    std::shared_ptr<Vehicle> getVehicle() const ;


};


#endif //UNTITLED5_REPAIRORDER_H
