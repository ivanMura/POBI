//
// Created by Ivan Muratov on 8/6/26.
//
#include <boost/test/unit_test.hpp>
#include <memory>
#include "model/Car.h"
#include "model/Motorcycle.h"


BOOST_AUTO_TEST_SUITE(ModelTestSuite)

BOOST_AUTO_TEST_CASE(CalculateCarRepairCost) {
    Car car("123456789", "Koenigsegg", "Gemera", 2);
    BOOST_CHECK_EQUAL(car.calculateBaseRepairCost(), 200.0);
}

BOOST_AUTO_TEST_CASE(CalculateMotoRepairCost) {
    Motorcycle moto("vinjakis", "Yamaha", "mt-07", "szutrowe");
    BOOST_CHECK_EQUAL(moto.calculateBaseRepairCost(), 200.0);
}

BOOST_AUTO_TEST_CASE(ShouldCalculateStreetMotorcycleCost) {
    Motorcycle streetMoto("mt456", "Honda", "CBR", "uliczne");
    BOOST_CHECK_EQUAL(streetMoto.calculateBaseRepairCost(), 300.0);
}





BOOST_AUTO_TEST_SUITE_END()