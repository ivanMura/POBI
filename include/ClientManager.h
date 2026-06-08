//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_CLIENTMANAGER_H
#define UNTITLED5_CLIENTMANAGER_H
#include <memory>

//#include "Client.h"
#include "ClientRepository.h"
class Client;
class ClientManager
{
    public:
    ClientManager();
    ~ClientManager();
    std::shared_ptr<Client> registerClient(std::string firstName, std::string lastName, int id);
    std::shared_ptr<Client> findClientById(int id);
    void addVehicleToClient(int id, std::shared_ptr<Vehicle> vehicle);
private:
    std::shared_ptr<ClientRepository> clientRepository;

};


#endif //UNTITLED5_CLIENTMANAGER_H
