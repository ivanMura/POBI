#include <iostream>
#include <memory>
#include <boost/smart_ptr/shared_ptr.hpp>
#include <stdexcept>

#include "managers/RepairOrderManager.h"
#include "managers/ClientManager.h"
#include "managers/VehicleManager.h"
#include "model/Car.h"
#include "model/Motorcycle.h"
#include "model/Client.h"

using namespace std;

int main() {
    cout<<"Pokaz zarzadzania warsztatem"<<endl;

    ClientManager clientManager;
    VehicleManager vehicleManager;
    RepairOrderManager repairOrderManager;

    cout<<"Tworzymy baze danych: "<<endl;

    shared_ptr<Client> client = make_shared<Client>("Jan", "Kowalski", 1);
    cout<<"Dodajemy klienta: "<<client->getFullName()<<endl;


    cout<<"Tworzymy dwa pojazdy: "<<endl;

    shared_ptr<Vehicle> car = vehicleManager.registerCar("123456789", "Koenigsegg", "Gemera",2);
    shared_ptr<Vehicle> moto = vehicleManager.registerMotorcycle("vinjakis", "Yamaha", "mt-07", "szutrowe");

    client->addVehicle(car);
    client->addVehicle(moto);

    cout<<"Pojazdy zostaly przypisane do klienta"<<endl;

    shared_ptr<RepairOrder> order = repairOrderManager.createOrder("123456789", "zmianaOpon", car);
    shared_ptr<RepairOrder> order2 = repairOrderManager.createOrder("vinjakis", "zmianaOleju", moto);

    cout<<"Pojzdy sa w naprawie sprawdzamy czy dziala zabezpieczenie: "<<endl;

    try {
        shared_ptr<RepairOrder> order3 = repairOrderManager.createOrder("123456789", "wymianaKlimy", car);
        cout<<"Mozna utworzyc zamowienie [BLAD W IMPLEMENTACJI!!!!!!]"<<endl;
    }
    catch (const std::logic_error& e) {
        cout<<"Zlapano wyjatek! Nie mozna utworzyc zamowienia: " << e.what() << endl;
    }

    return 0;
}