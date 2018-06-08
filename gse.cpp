#include <iostream>
#include <string>
#include "gse.h"
using namespace std;

// Default constructor
GSE::GSE() : Vehicle(), mPushWeightCapacity(6476.98),
  mPullWeightCapacity(5658.95), mType(BUS) {}

// Constructor: object created with value input for only the GSE type
GSE::GSE(GSE::eType type) : Vehicle(), mPushWeightCapacity(6476.98),
  mPullWeightCapacity(5658.95), mType(type) {}

// Constructor: object created with value input for only the GSE
GSE::GSE(float pushWeightCapacity, float pullWeightCapacity, GSE::eType type) :
  Vehicle(), mPushWeightCapacity(pushWeightCapacity),
    mPullWeightCapacity(pullWeightCapacity), mType(type) {}

// Constructor: object created with user input for the GSE and vehicle
GSE::GSE(float pushWeightCapacity, float pullWeightCapacity, GSE::eType type,
  string ID, int passengerCapacity, float speed, float weight, float fuelUsage,
  float fuelCapacity, float liquidCarryCapacity, float liquidTransferRate,
  float cargoCarryCapacity, float cargoTransferRate, float dmgProbability) :
    Vehicle(ID, passengerCapacity, speed, weight, fuelUsage, fuelCapacity,
      liquidCarryCapacity, liquidTransferRate, cargoCarryCapacity,
      cargoTransferRate, dmgProbability), mPushWeightCapacity(pushWeightCapacity),
      mPullWeightCapacity(pullWeightCapacity), mType(type) {}

// Returns the pull weight capacity of a GSE
float GSE::getPushWeightCapacity() const { return mPushWeightCapacity; }

// Returns the push weight capacity of a GSE
float GSE::getPullWeightCapacity() const { return mPullWeightCapacity; }

// Returns the etype of a GSE
GSE::eType GSE::getType() const { return mType; }

// Return the value of each member variable
void GSE::print() const{
  cout << "Ground Support Equipment" << endl;
  cout << "GSE type: "<< getType() << endl << endl;
  cout << "Push weight capacity: " << getPushWeightCapacity() << endl;
  cout << "Pull weight capacity: " << getPullWeightCapacity() << endl;
  Vehicle::print();
}

// Destructor of the GSE object
GSE::~GSE() {
  cout << "gse destructor" << endl;
}
