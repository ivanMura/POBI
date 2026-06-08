//
// Created by kacpe on 4.06.2026.
//

#include "../../include/managers/ClientManager.h"


ClientManager::ClientManager()
{
    clientRepository = std::make_shared<ClientRepository>();
}

ClientManager::~ClientManager() {
}

std::shared_ptr<Client> ClientManager::registerClient(std::string firstName, std::string lastName, int id)
{
    std::shared_ptr<Client> client = std::make_shared<Client>(firstName, lastName, id);
    clientRepository->add(client);
    return client;
}

std::shared_ptr<Client> ClientManager::findClientById(int id)
{
 return clientRepository->findClientById(id);
}
