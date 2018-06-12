#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include "runway.h"
using namespace std;

// Default constructor
Runway::Runway() : mID("RUN123"), mLength(789), mRunwayType(TAKEOFF),
  mDelay(15673), mMaxQueueSize(5) {}

// Constructor: object created with value input for runway
Runway::Runway(string ID, float length, bool type, int delay,
  int maxQueueSize) : mID(ID), mLength(length), mRunwayType(type),
  mDelay(delay), mMaxQueueSize(maxQueueSize) {}

// Returns ID of a runway
string Runway::getID() const { return mID; }

// Sets the current flight for a runway
void Runway::setCurrentFlight() {}

// Gets the current flight for a runway
string Runway::getCurrentFlight() {

}

// Returns the length of a runway
float Runway::getLength() const { return mLength; }

// Sets the type of runway
void Runway::setRunwayType( const bool type ) { mRunwayType = type; }

// Returns the type of runway
bool Runway::getRunwayType() const { return mRunwayType; }

// Returns the delay time of runway
int Runway::getDelay() const { return mDelay; }

// Returns the max queue size of both flight lists
int Runway::getMaxQueueSize() const { return mMaxQueueSize; }

// Returns the list of planes queued to takeoff
queue<string> Runway::getTakeoffFlights() const { return mTakeoffList; }

// Returns the list of planes queued to takeoff
queue<string> Runway::getLandingFlights() const { return mLandingList; }

// Adds flight to takeoff queue
bool Runway::addTakeoffFlight( string flightID const ) {
  if ( mTakeoffList.size() < mMaxQueueSize ) {
    mTakeoffList.push(flightID);
    return true;
  }
  return false;
}

// Adds flight to landing queue
bool Runway::addLandingFlight( string flightID const ) {
  if ( mTakeoffList.size() < mMaxQueueSize ) {
    mLandingList.push(flightID);
    return true;
  }
  return false;
}

// Removes flight from takeoff queue
string Runway::popTakeoffFlight() { return mTakeoffList.pop(); }

// Removes flight from takeoff queue
string Runway::popLandingFlight() { return mLandingList.pop(); }

// Switches runway type between takeoff and landing
void Runway::changeRunwayType() {
  if ( mRunwayType == TAKEOFF ) {
    mRunwayType = LANDING;
  } else {
    mRunwayType = TAKEOFF;
  }
}

// Returns the value of each member variable
void Runway::print() const {
  cout << "Runway" << endl;
  cout << "ID: " << getID() << endl;
  cout << "Length: " << getLength() << endl;
  cout << "Delay: " << getDelay() << endl;
  cout << "Runway Type: " << getRunwayType() << endl;
  cout << "Max Queue Size: " << getMaxQueueSize() << endl;
  cout << "Current Flight: " << getCurrentFlight() << endl;
  cout << "Takeoff Queue Size: " << mTakeoffList.size() << endl;
  cout << "Landing Queue Size: " << mLandingList.size() << endl;
}

// Destructor of the gate object
Runway::~Runway() { cout << "Runway destructor" << endl; }
