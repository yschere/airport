#ifndef _VEHICLE_H
#define _VEHICLE_H
#include <iostream>
#include <string>
using namespace std;

class Vehicle {

public:

// Default constructor
  Vehicle();

// Constructor: object created with value input
  Vehicle(string ID, int passengerCapacity, float speed,
    float weight, float fuelUsage, float fuelCapacity,
    float liquidCarryCapacity, float liquidTransferRate,
    float cargoCarryCapacity, float cargoTransferRate,
    float dmgProbability);

// Returns the ID of a vehicle
  string getID() const;

// Returns the passenger capacity of  a vehicle
  int getPassengerCapacity() const;

// Sets the speed of a vehicle
  void setSpeed( const float speed );

// Returns the speed of a vehicle
  float getSpeed() const;

// Sets the weight of a vehicle
  void setWeight( const float weight );

// Returns the weight of a vehicle
  float getWeight() const;

// Sets the fuel usage of a vehicle
  void setFuelUsage( const float fuelUsage );

// Returns the fuel usage of a vehicle
  float getFuelUsage() const;

// Returns the fuel capacity of a vehicle
  float getFuelCapacity() const;

// Returns the liquid carry capacity of a vehicle
  float getLiquidCarryCapacity() const;

// Sets the liquid transfer rate of a vehicle
  void setLiquidTransferRate( const float liquidTransferRate );

// Returns the liquid transfer rate of a vehicle
  float getLiquidTransferRate() const;

// Returns the cargo carry capacity of a vehicle
  float getCargoCarryCapacity() const;

// Sets the cargo trnasfer rate of a vehicle
  void setCargoTransferRate( const float cargoTransferRate );

// Returns the cargo trnasfer rate of a vehicle
  float getCargoTransferRate() const;

// Sets the damage probability of a vehicle
  void setDmgProbability( const float dmgProbability );

// Returns the damage probability of a vehicle
  float getDmgProbability() const;

// Return the value of each member variable
  virtual void print() const = 0;

// Destruct the Vehicle object
  virtual ~Vehicle();

protected:
  const string mID; //vehicle id
  const int mPassengerCapacity;
  float mSpeed; //mph
  float mWeight; //lbs
  float mFuelUsage; //mpg
  const float mFuelCapacity;
  const float mLiquidCarryCapacity; //gl
  float mLiquidTransferRate; //gl/min
  const float mCargoCarryCapacity; //lbs
  float mCargoTransferRate; //lbs/min
  float mDmgProbability; //(0.0-0.1)
  // avgRepairTime //min
  // repairTimeStdeviation
};

#endif
