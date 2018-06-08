#ifndef _GSE_H
#define _GSE_H
#include <iostream>
#include <string>
#include "vehicle.h"
using namespace std;

class GSE : public Vehicle{

public:

// Ground Support Equipment enumeration type
  enum eType {BUS, TUG, FUELTRUCK, CARGOLOADER};

// Default constructor
  GSE();

// Constructor: object created with value input for only the GSE type
  GSE(eType type);

// Constructor: object created with value input for only the GSE
  GSE(float pushWeightCapacity, float pullWeightCapacity, eType type);

// Constructor: object created with user input for the GSE and vehicle
  GSE(float pushWeightCapacity, float pullWeightCapacity, eType type,
    string ID, int passengerCapacity, float speed, float weight,
    float fuelUsage, float fuelCapacity,
    float liquidCarryCapacity, float liquidTransferRate,
    float cargoCarryCapacity, float cargoTransferRate,
    float dmgProbability);

// Returns the pull weight capacity of a GSE
  float getPushWeightCapacity() const;

// Returns the push weight capacity of a GSE
  float getPullWeightCapacity() const;

// Returns the etype of a GSE
  eType getType() const;

// Return the value of each member variable
  virtual void print() const;

// Destructor of the GSE object
  virtual ~GSE();

protected:
  const float mPushWeightCapacity; //lbs
  const float mPullWeightCapacity; //lbs
  const eType mType; // BUS, TUG, FUELTRUCK, or CARGOLOADER
};

#endif
