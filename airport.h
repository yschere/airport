#ifndef _AIRPORT_H
#define _AIRPORT_H
#include <iostream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

class Airport {

public:

// Default constructor
  airport();

// Constructor: object create with values input for airport
  airport(string ID, vector<string> runways, vector<string> gates,
    vector<float> location);

// Returns ID of an airport
  string getID() const;

// Sets the list of runways of an airport
  void setRunways( const vector<string> runways );

// Returns the list of runways of an airport
  vector<string> getRunways() const;

// Sets the list of gates of an airport
  void setGates( const vector<string> gates );

// Returns the list of gates of an airport
  vector<string> getGates() const;

// Returns the location of an airport
  vector<float> getLocation() const;

// Returns the value of each member variable
  void print() const;

// Destructor of the airport object
  ~airport();

protected:
  const string mID;
  vector<string> mRunways; // list of runways
  vector<string> mGates; // list of gates
  const vector<float> mLocation; // x,y coordinates
};

// should the lists hold pointers to the objects or the ids

#endif
