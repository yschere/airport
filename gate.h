#ifndef _GATE_H
#define _GATE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Gate {

public:

// Default constructor
  gate();

// Constructor: object created with value input for gate
  gate(string ID, string currentFlight, int attachTime, int detachTime,
    vector<string> supportVehicles);

// Returns ID of a gate
  string getID() const;

// Sets the current flight for a gate
  void setCurrentFlight( const string currentFlight );

// Returns the current flight for a gate
  string getCurrentFlight() const;

// Returns the attach time of a gate
  int getAttachTime() const;

// Returns the detach time of a gate
  int getDetachTime() const;

// Sets the list of GSE vehicles of a gate
  void setSupportVehicles( const vector<string> supportVehicles );

// Returns the list of GSE vehicles of a gate
  vector<string> getSupportVehicles() const;

// Returns the value of each member variable
  void print() const;

// Destructor of the gate object
  ~gate();

protected:
  string mID;
  string mCurrentFlight;
  int mAttachTime; // seconds
  int mDetachTime; // seconds
  vector<string> mSupportVehicles; //list of gse IDs for gate
};

// should the lists hold pointers to the objects or the ids

#endif
