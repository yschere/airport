#ifndef _GATE_H
#define _GATE_H
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class Runway {

public:

// Default constructor
  runway();

// Constructor: object created with value input for runway
  runway();

// Returns ID of a runway
  string getID() const;

// Sets the current flight for a runway
  void setCurrentFlight( const string currentFlight );

// Returns the length of a runway
  float getLength() const;

// Sets the type of runway
  void setType( const bool type );

// Sets the type of runway
  bool getType() const;

// Returns the type of runway
  int getDelay() const;

// Returns the detach time of a gate
  int getMaxQueueSize() const;

// Returns the list of planes queued to takeoff
  queue<string> getTakeoffFlights() const;

// Returns the list of planes queued to takeoff
  queue<string> getLandingFlights() const;

// Add flight to takeoff queue
  bool addTakeoffFlight( string flightID const );

// Add flight to landing queue
  bool addLandingFlight( string flightID const );

// Removes flight from takeoff queue
  string popTakeoffFlight();

// Removes flight from takeoff queue
  string popLandingFlight();

// Switch runway type between takeoff and landing
  void changeRunwayType();

// Returns the value of each member variable
  void print() const;

// Destructor of the gate object
  ~runway();

protected:
  string mID const;
  float mLength const; // runway length
  bool mType; //takeoff vs land
  int mDelay; // seconds between switch mType if need be
  int mMaxQueueSize const; //max num flights queued to take off
  vector<string> mFlights; //list of gse IDs for gate
  queue<string> mTakeoffList; //queue of flights taking off from this runway
  queue<string> mLandingList; //queue of flights landing on this runway
};

// should the lists hold pointers to the objects or the ids

#endif
