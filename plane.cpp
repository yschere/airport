#include <iostream>
#include <string>
#include "plane.h"
using namespace std;

// Default constructor
Plane::Plane() :
  Vehicle(), mAirSpeed(65.000), mAirFuelUsage(14958.999),
    mMinRunwayLength(0.75) {}

// Constructor: object created with value input for only the plane
Plane::Plane(float airSpeed, float airFuelUsage,
  float minRunwayLength) :
    Vehicle(), mAirSpeed(airSpeed),
      mAirFuelUsage(airFuelUsage),
      mMinRunwayLength(minRunwayLength) {}

// Constructor: object created with user input for the plane and vehicle
Plane::Plane(float airSpeed, float airFuelUsage,
  float minRunwayLength, string ID, int passengerCapacity,
  float speed, float weight, float fuelUsage, float fuelCapacity,
  float liquidCarryCapacity, float liquidTransferRate,
  float cargoCarryCapacity, float cargoTransferRate,
  float dmgProbability) :
    Vehicle(ID, passengerCapacity, speed, weight, fuelUsage, fuelCapacity,
      liquidCarryCapacity, liquidTransferRate, cargoCarryCapacity,
      cargoTransferRate, dmgProbability), mAirSpeed(airSpeed),
      mAirFuelUsage(airFuelUsage), mMinRunwayLength(minRunwayLength) {}

// Sets the air speed of a plane
void Plane::setAirSpeed( const float airSpeed ) { mAirSpeed = airSpeed; }

// Returns the air speed of a plane
float Plane::getAirSpeed() const { return mAirSpeed; }

// Sets the fuel usage of a plane
void Plane::setAirFuelUsage( const float airFuelUsage ) { mAirFuelUsage = airFuelUsage; }

// Returns the fuel usage of a plane
float Plane::getAirFuelUsage() const { return mAirFuelUsage; }

// Returns the minimum runway length of a plane
float Plane::getMinRunwayLength() const { return mMinRunwayLength; }

// Return the value of each member variable
void Plane::print() const {
  cout << "Plane" << endl;
  cout << "Air speed: " << getAirSpeed() << endl;
  cout << "Air fuel usage: "<< getAirFuelUsage() << endl;
  cout << "Min runway length: " << getMinRunwayLength() << endl << endl;
  Vehicle::print();
}

// Destructor of the plane object
Plane::~Plane(){
  cout << "plane destructor" << endl;
}
