//
// Created by kacpe on 4.06.2026.
//

#ifndef UNTITLED5_CLIENT_H
#define UNTITLED5_CLIENT_H
#include <memory>
#include <string>
#include <vector>



class Vehicle;
class Client
{
public:
    Client(std::string firstName, std::string lastName, int id);
    ~Client();
    std::string getFullName();
    int getId();
    /**
     * @brief Przypisuje nowy pojazd do listy pojazdów posiadanych przez klienta.
     * @param vehicle Wskaźnik shared_ptr na obiekt pojazdu.
     */
    void addVehicle(std::shared_ptr<Vehicle> vehicle);
private:
    std::string firstName;
    std::string lastName;
    int id;

    std::vector<std::shared_ptr<Vehicle>> vehicles;
};


#endif //UNTITLED5_CLIENT_H
