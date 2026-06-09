//
// Created by Ivan Muratov on 8/6/26.
//
#include <boost/test/unit_test.hpp>
#include <memory>
#include "repositories/ClientRepository.h"
#include "model/Client.h"
#include "managers/RepairOrderManager.h"
#include "model/Car.h"
#include "model/Motorcycle.h"
#include "repositories/ClientRepository.h"


BOOST_AUTO_TEST_SUITE(WorkshopTestSuite)

    BOOST_AUTO_TEST_CASE(AddAndFindClient) {
    ClientRepository clientRepository;
    std::shared_ptr<Client> client = std::make_shared<Client>("Ivan", "Muratov", 1);
    clientRepository.add(client);
    std::shared_ptr<Client> foundClient = clientRepository.findClientById(1);
    BOOST_REQUIRE(foundClient != nullptr);
    BOOST_CHECK_EQUAL(foundClient->getFullName(), "Ivan Muratov");
}

    BOOST_AUTO_TEST_CASE(BlockadeForDoubleOrder) {
    RepairOrderManager repairOrderManager;
    std::shared_ptr<Vehicle> car = std::make_shared<Car>("blokadas", "Koenigsegg", "Gemera", 2);
    std::shared_ptr<RepairOrder> order = repairOrderManager.createOrder("blokadas", "emeryturaDlaArtysty", car);
    BOOST_REQUIRE(order != nullptr);
    BOOST_CHECK(order->getStatus() == StatusType::NEW);
    std::shared_ptr<RepairOrder> order2 = repairOrderManager.createOrder("blokadas", "cosinnego", car);
    BOOST_REQUIRE_THROW(repairOrderManager.createOrder("blokadas", "cosinnego", car), std::logic_error);
}

BOOST_AUTO_TEST_CASE(BlockadeForDoubleOrderMoto) {
    RepairOrderManager manager;
    std::shared_ptr<Vehicle> moto = std::make_shared<Motorcycle>("vinMot", "Yamaha", "mt-07", "szutrowe");
    std::shared_ptr<RepairOrder> order = manager.createOrder("vinMot", "zmiana1", moto);
    BOOST_REQUIRE(order != nullptr);
    BOOST_CHECK(order->getStatus() == StatusType::NEW);
    std::shared_ptr<RepairOrder> order2 = manager.createOrder("vinMot", "cosinnego", moto);
}





BOOST_AUTO_TEST_SUITE_END()
