#ifndef _PLANE_H
#define _PLANE_H
#include <iostream>
#include <string>
#include "vehicle.h"
using namespace std;

class Plane : public Vehicle {

public:

// Default constructor
  Plane();

// Constructor: object created with value input for only the plane
  Plane(float airSpeed, float airFuelUsage,
    float minRunwayLength);

// Constructor: object created with user input for the plane and vehicle
  Plane(float airSpeed, float airFuelUsage,
    float minRunwayLength, string ID, int passengerCapacity,
    float speed, float weight, float fuelUsage,
    float fuelCapacity, float liquidCarryCapacity,
    float liquidTransferRate, float cargoCarryCapacity,
    float cargoTransferRate, float dmgProbability);

// Sets the air speed of a plane
  void setAirSpeed( const float airSpeed );

// Returns the air speed of a plane
  float getAirSpeed() const;

// Sets the fuel usage of a plane
  void setAirFuelUsage( const float airFuelUsage );

// Returns the fuel usage of a plane
  float getAirFuelUsage() const;

// Returns the minimum runway length of a plane
  float getMinRunwayLength() const;

// Return the value of each member variable
  virtual void print() const;

// Destructor of the plane object
  virtual ~Plane();

protected:
  float mAirSpeed; //mph
  float mAirFuelUsage; //mpg
  const float mMinRunwayLength; //mi
};

#endif
