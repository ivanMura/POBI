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
    /**
     * @brief Tworzy nowe zlecenie naprawy w systemie.
     * @param vehicleVin Numer VIN pojazdu, którego dotyczy zlecenie.
     * @param issueType Typ/opis usterki lub zgłoszonego problemu.
     * @param vehicle Wskaźnik na obiekt pojazdu powiązany ze zleceniem.
     * @return std::shared_ptr<RepairOrder> Wskaźnik na nowo utworzone zlecenie naprawy.
     */
    std::shared_ptr<RepairOrder> createOrder(std::string vehicleVin, std::string issueType, std::shared_ptr<Vehicle> vehicle);
    /**
         * @brief Dodaje część zamienną do istniejącego zlecenia naprawy.
         * @param orderId Unikalny identyfikator zlecenia, do którego dodawana jest część.
         * @param part Wskaźnik na obiekt części, która ma zostać przypisana.
         */
    void addPartToOrder(int orderId, std::shared_ptr<Part> part);
    /**
     * @brief Zamyka/kończy zlecenie naprawy.
     * @param orderId Unikalny identyfikator zlecenia, które ma zostać zamknięte.
     */
    void closeOrder(int orderId);
};


#endif //UNTITLED5_REPAIRORDERMANAGER_H
