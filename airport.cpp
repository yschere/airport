#include <iostream>
#include <string>
#include <vector>
#include "airport.h"
using namespace std;

// Default constructor
Airport::airport() : mID("AAA"), mRunways({"R1","R2","R3"}), mGates({"A1","A2"}),
  mLocation({1.1,2.2}) {}

// Constructor: object create with values input for airport
Airport::airport(string ID, vector<string> runways, vector<string> gates,
  vector<float> location): mID(ID), mRunways(runways), mGates(gates),
  mLocation(location) {}

// Returns ID of an airport
string Airport::getID() const { return mID; }

// Sets the list of runways of an airport
void Airport::setRunways( const vector<string> runways ) { mRunways = runways; }

// Returns the list of runways of an airport
vector<string> Airport::getRunways() const { return mRunways; }

// Sets the list of gates of an airport
void Airport::setGates( const vector<string> gates ) { mGates = gates; }

// Returns the list of gates of an airport
vector<string> Airport::getGates() const { return mGates; }

// Returns the location of an airport
vector<float> Airport::getLocation() const { return mLocation; }

// Returns the value of each member variable
void Airport::print() const {
  cout << "Airport" << endl;
  cout << "ID: " << getID() << endl;
  cout << "Location: (" << getLocation()[0] << ',' << getLocation()[1] << ")" << endl ;
  cout << "Runways:";
  vector<string> r = getRunways();
  for (vector<string>::iterator it = r.begin(); it != r.end(); it++) {
    cout << ' ' << *it;
  }
  cout << endl;
  cout << "Gates:";
  vector<string> g = getGates();
  for (vector<string>::iterator it = g.begin(); it != g.end(); it++) {
    cout << ' ' << *it;
  }
  cout << endl;
}

// Destructor of the airport object
Airport::~airport() {
  cout << "Airport destructor" << endl;
}
