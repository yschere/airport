#ifndef _RUNWAY_H
#define _RUNWAY_H
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class Runway {

public:

// Ground Support Equipment enumeration type
  enum runwayType {TAKEOFF, LANDING};

// Default constructor
  Runway();

// Constructor: object created with value input for runway
  Runway(string ID, float length, runwayType type, int delay,
    int maxQueueSize);

// Returns ID of a runway
  string getID() const;

// Sets the current flight for a runway
  void setCurrentFlight();

// Returns the current flight for a runway
  string getCurrentFlight() const;

// Returns the length of a runway
  float getLength() const;

// Sets the type of runway
  void setRunwayType( const runwayType type );

// Sets the type of runway
  bool getRunwayType() const;

// Returns the type of runway
  int getDelay() const;

// Returns the detach time of a gate
  int getMaxQueueSize() const;

// Returns the list of planes queued to takeoff
  queue<string> getTakeoffFlights() const;

// Returns the list of planes queued to takeoff
  queue<string> getLandingFlights() const;

// Add flight to takeoff queue
  bool addTakeoffFlight( string const flightID );

// Add flight to landing queue
  bool addLandingFlight( string const flightID );

// Gets next takeoff flight from queue
  string nextTakeoffFlight();

// Gets next takeoff flight from queue
  string nextLandingFlight();

// Removes flight from takeoff queue
  void popTakeoffFlight();

// Removes flight from takeoff queue
  void popLandingFlight();

// Switch runway type between takeoff and landing
  void changeRunwayType();

// Returns the value of each member variable
  void print() const;

// Destructor of the gate object
  ~Runway();

protected:
  string const mID;
  float const mLength; // runway length
  runwayType mRunwayType; //takeoff vs landing
  string mCurrentFlight; //current flight using the runway
  int mDelay; // seconds between switch mType if need be
  uint const mMaxQueueSize; //max num flights queued to take off
  queue<string> mTakeoffList; //queue of flights taking off from this runway
  queue<string> mLandingList; //queue of flights landing on this runway
};

// should the lists hold pointers to the objects or the ids

#endif
