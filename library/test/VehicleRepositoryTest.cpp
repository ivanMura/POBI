//
// Created by Ivan Muratov on 8/6/26.
//

#include <boost/test/unit_test.hpp>
#include <memory>

#include "repositories/VehicleRepository.h"
#include "model/Car.h"
#include "model/Motorcycle.h"

BOOST_AUTO_TEST_SUITE(VehicleRepositoryTestSuite)

BOOST_AUTO_TEST_CASE(AddAndFindByVin) {
    VehicleRepository vehicleRepository;
    std::shared_ptr<Vehicle> car = std::make_shared<Car>("123456789", "Koenigsegg", "Gemera", 2);
    vehicleRepository.add(car);
    std::shared_ptr<Vehicle> foundCar = vehicleRepository.getByVin("123456789");
    BOOST_REQUIRE(foundCar != nullptr);
    BOOST_CHECK_EQUAL(foundCar->getVin(), "123456789");
}
BOOST_AUTO_TEST_CASE(AddAndFindByVinMOTOR) {
    VehicleRepository vehicleRepository;
    std::shared_ptr<Vehicle> motorcycle = std::make_shared<Motorcycle>("komarek2137", "Yamaha", "mt-07", "żużlowe");
    vehicleRepository.add(motorcycle);
    std::shared_ptr<Vehicle> foundMotorcycle = vehicleRepository.getByVin("komarek2137");
    BOOST_REQUIRE(foundMotorcycle != nullptr);
    BOOST_CHECK_EQUAL(foundMotorcycle->getVin(), "komarek2137");
}
BOOST_AUTO_TEST_SUITE_END()