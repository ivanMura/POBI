//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_CLIENTREPOSITORY_H
#define UNTITLED5_CLIENTREPOSITORY_H
#include <memory>
#include <vector>

#include "../model/Client.h"


class ClientRepository
{
public:
    ClientRepository();
    ~ClientRepository();
    bool add(std::shared_ptr<Client> client);
    bool remove(std::shared_ptr<Client> client);
    std::vector<std::shared_ptr<Client>> getAll();
    std::shared_ptr<Client> findClientById(int id);
    void addVehicleToClient(int clientId, std::shared_ptr<Vehicle> vehicle);

private:
    std::vector<std::shared_ptr<Client>> clients;
};


#endif //UNTITLED5_CLIENTREPOSITORY_H
