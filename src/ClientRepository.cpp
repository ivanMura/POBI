//
// Created by kacpe on 4.06.2026.
//

#include "../include/ClientRepository.h"

ClientRepository::ClientRepository() {
}

ClientRepository::~ClientRepository() {
}

bool ClientRepository::add(std::shared_ptr<Client> client)
{
    for (int i=0; i<clients.size(); i++) {
        if (clients.at(i)==client || clients.at(i)->getId()==client->getId()) {
            return false;
        }
    }
    clients.push_back(client);

    return true;
}

bool ClientRepository::remove(std::shared_ptr<Client> client) {
    for (int i=0; i<clients.size(); i++) {
        if (clients.at(i)==client) {
            clients.erase(clients.begin()+i);
            return true;
        }
    }
    return false;
}

std::vector<std::shared_ptr<Client>> ClientRepository::getAll()
{
    return clients;
}

std::shared_ptr<Client> ClientRepository::findClientById(int id)
{
    for (int i=0; i<clients.size(); i++) {
        if (clients.at(i)->getId()==id) {
            return clients.at(i);
        }
    }
    return nullptr;
}

void ClientRepository::addVehicleToClient(int clientId, std::shared_ptr<Vehicle> vehicle)
{
    findClientById(clientId)->addVehicle(vehicle);
}
