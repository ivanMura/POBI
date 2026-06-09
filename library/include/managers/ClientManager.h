//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_CLIENTMANAGER_H
#define UNTITLED5_CLIENTMANAGER_H
#include <memory>

//#include "Client.h"
#include "../repositories/ClientRepository.h"
class Client;
class ClientManager
{
    public:
    ClientManager();
    ~ClientManager();
    /**
         * @brief Rejestruje nowego klienta w systemie.
         * @param firstName Imię klienta.
         * @param lastName Nazwisko klienta.
         * @param id Unikalny identyfikator klienta.
         * @return std::shared_ptr<Client> Wskaźnik na utworzonego klienta.
         */
    std::shared_ptr<Client> registerClient(std::string firstName, std::string lastName, int id);
    /**
     * @brief Wyszukuje klienta na podstawie jego identyfikatora ID.
     * @param id Identyfikator szukanego klienta.
     * @return std::shared_ptr<Client> Wskaźnik na klienta lub nullptr, jeśli nie znaleziono.
     */
    std::shared_ptr<Client> findClientById(int id);
    /**
     * @brief Wyszukuje klienta na podstawie jego identyfikatora ID.
     * @param id Identyfikator szukanego klienta.
     * @return std::shared_ptr<Client> Wskaźnik na klienta lub nullptr, jeśli nie znaleziono.
     */
    void addVehicleToClient(int id, std::shared_ptr<Vehicle> vehicle);
private:
    std::shared_ptr<ClientRepository> clientRepository;

};


#endif //UNTITLED5_CLIENTMANAGER_H
