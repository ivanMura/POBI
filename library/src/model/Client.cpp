//
// Created by kacpe on 4.06.2026.
//

#include "../../include/model/Client.h"
#include <boost/uuid/random_generator.hpp>

Client::Client(std::string firstName, std::string lastName, int id) : firstName(firstName), lastName(lastName), id(id)
{
}

Client::~Client()
{
}

std::string Client::getFullName()
{
    return firstName + " " + lastName;
}

int Client::getId()
{
    return id;
}

void Client::addVehicle(std::shared_ptr<Vehicle> vehicle)
{
    vehicles.push_back(vehicle);
}

