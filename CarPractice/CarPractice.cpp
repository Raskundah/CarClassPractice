// CarPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.hpp"
#include <string>

void DescribeCar(Car toDescribe)
{
    std::cout << "Make: " << toDescribe.make << ", Model: " << toDescribe.model << ", Number of doors: " << toDescribe.doors << ", Miles per Gallon " << toDescribe.mpg
        << ", Current mileage: " << toDescribe.mileage << ", Fuel Level " << toDescribe.fuelLevel << "\n";
}

int main()


{
    Car sports;
    Car Suv;
    Car muscle;

    sports.make = "Subaru";
    sports.model = "Impreza";
    sports.doors = 5;
    sports.mpg = 100;

    sports.mileage = 0;
    sports.fuelLevel = 0.87;

    //Next//

    Suv.make = "Land Rover";
    Suv.model = "4x4";
    Suv.doors = 5;
    Suv.mpg = 150;

    Suv.mileage = 10000;
    Suv.fuelLevel = 1;

    //Next//

    muscle.make = "Dodge";
    muscle.model = "Charger";
    muscle.doors = 4;
    muscle.mpg = 85;

    muscle.mileage = 50000;
    muscle.fuelLevel = 0;

    DescribeCar(sports);
    DescribeCar(Suv);
    DescribeCar(muscle);

}


