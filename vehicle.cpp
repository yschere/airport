#include <iostream>
#include <string>
#include "vehicle.h"
using namespace std;

// Default constructor
Vehicle::Vehicle() : mID("ABC123"), mPassengerCapacity(124), mSpeed(492.29),
  mWeight(2001.384), mFuelUsage(3489.283), mFuelCapacity(90.129),
  mLiquidCarryCapacity(8890.8), mLiquidTransferRate(23.829),
  mCargoCarryCapacity(898.88), mCargoTransferRate(18.77),
  mDmgProbability(0.002) {}

// Constructor: object created with value input
Vehicle::Vehicle(string ID, int passengerCapacity, float speed,
  float weight, float fuelUsage, float fuelCapacity,
  float liquidCarryCapacity, float liquidTransferRate,
  float cargoCarryCapacity, float cargoTransferRate,
  float dmgProbability) : mPassengerCapacity(passengerCapacity),
  mSpeed(speed), mWeight(weight), mFuelUsage(fuelUsage),
  mFuelCapacity(fuelCapacity), mLiquidCarryCapacity(liquidCarryCapacity),
  mLiquidTransferRate(liquidTransferRate),
  mCargoCarryCapacity(cargoCarryCapacity),
  mCargoTransferRate(cargoTransferRate),
  mDmgProbability(dmgProbability) {}

// Returns the ID of a vehicle
string Vehicle::getID() const { return mID; }

// Returns the passenger capacity of  a vehicle
int Vehicle::getPassengerCapacity() const { return mPassengerCapacity; }

// Sets the speed of a vehicle
void Vehicle::setSpeed( const float speed ){ mSpeed = speed; }

// Returns the speed of a vehicle
float Vehicle::getSpeed() const{ return mSpeed; }

// Sets the weight of a vehicle
void Vehicle::setWeight( const float weight ){ mWeight = weight; }

// Returns the weight of a vehicle
float Vehicle::getWeight() const{ return mWeight; }

// Sets the fuel usage of a vehicle
void Vehicle::setFuelUsage( const float fuelUsage ){ mFuelUsage = fuelUsage; }

// Returns the fuel usage of a vehicle
float Vehicle::getFuelUsage() const{ return mFuelUsage; }

// Returns the fuel capacity of a vehicle
float Vehicle::getFuelCapacity() const{ return mFuelCapacity; }

// Returns the liquid carry capacity of a vehicle
float Vehicle::getLiquidCarryCapacity() const{ return mLiquidCarryCapacity; }

// Sets the liquid transfer rate of a vehicle
void Vehicle::setLiquidTransferRate( const float liquidTransferRate ){ mLiquidTransferRate = liquidTransferRate; }

// Returns the liquid transfer rate of a vehicle
float Vehicle::getLiquidTransferRate() const{ return mLiquidTransferRate; }

// Returns the cargo carry capacity of a vehicle
float Vehicle::getCargoCarryCapacity() const{ return mCargoCarryCapacity; }

// Sets the cargo trnasfer rate of a vehicle
void Vehicle::setCargoTransferRate( const float cargoTransferRate ){ mCargoTransferRate = cargoTransferRate; }

// Returns the cargo trnasfer rate of a vehicle
float Vehicle::getCargoTransferRate() const{ return mCargoTransferRate; }

// Sets the damage probability of a vehicle
void Vehicle::setDmgProbability( const float dmgProbability ){ mDmgProbability = dmgProbability; }

// Returns the damage probability of a vehicle
float Vehicle::getDmgProbability() const{ return mDmgProbability; }

// Return the value of each member variable
void Vehicle::print() const {
  cout << "Vehicle Base" << endl;
  cout << "ID: " << getID() << endl;
  cout << "Passenger Capacity: " << getPassengerCapacity() << endl;
  cout << "Speed: " << getSpeed() << endl;
  cout << "Weight: " << getWeight() << endl;
  cout << "Fuel Usage: " << getFuelUsage() << endl;
  cout << "Fuel Capacity: " << getFuelCapacity() << endl;
  cout << "Liquid Carry Capacity: " << getLiquidCarryCapacity() << endl;
  cout << "Liquid Transfer Rate: " << getLiquidTransferRate() << endl;
  cout << "Cargo Carry Capacity: " << getCargoCarryCapacity() << endl;
  cout << "Cargo Transfer Rate: " << getCargoTransferRate() << endl;
  cout << "Damage Probability: " << getDmgProbability() << endl;
}

// Destruct the Vehicle object
Vehicle::~Vehicle(){
  cout << "Vehicle destructor" << endl;
}

/*create objects
runways
 2
 occupied, planes taxing, planes landing
gates
 5
 occupied, free
*/
