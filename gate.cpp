#include <iostream>
#include <string>
#include <vector>
#include "gate.h"

using namespace std;

// Default constructor
Gate::gate() : mID("XYZ"), mCurrentFlight("ABC123"),
  mAttachTime(12345), mDetachTime(9821), mSupportVehicles({"C","D","E"})

// Constructor: object created with value input for gate
Gate::gate(string ID, string currentFlight, int attachTime, int detachTime,
  vector<string> supportVehicles) : mID(ID), mCurrentFlight(currentFlight),
    mAttachTime(attachTime), mDetachTime(detachTime),
    mSupportVehicles(supportVehicles)

// Returns ID of a gate
string Gate::getID() const { return mID; }

// Sets the current flight for a gate
void Gate::setCurrentFlight( const string currentFlight ) { mCurrentFlight = currentFlight; }

// Returns the current flight for a gate
string Gate::getCurrentFlight() const { return mCurrentFlight; }

// Returns the attach time of a gate
int Gate::getAttachTime() const { return mAttachTime; }

// Returns the detach time of a gate
int Gate::getDetachTime() const { return mDetachTime; }

// Sets the list of GSE vehicles of a gate
void Gate::setSupportVehicles( const vector<string> supportVehicles ) { mSupportVehicles = supportVehicles; }

// Returns the list of GSE vehicles of a gate
vector<string> Gate::getSupportVehicles() const { return mSupportVehicles; }

// Returns the value of each member variable
void Gate::print() const {
  cout << "Gate" << endl;
  cout << "ID: " << getID() << endl;
  cout << "Current Flight: " << getCurrentFlight() << endl;
  cout << "Attach Time: " << getAttachTime() << endl;
  cout << "Detach Time: " << getDetachTime() << endl;
  cout << "Support Vehicles:";
  vector<string> sv = getSupportVehicles();
  for (vector<string>::iterator it = sv.begin(); it != sv.end(); it++) {
    cout << ' ' << *it;
  }
  cout << endl;
}

// Destructor of the gate object
Gate::~gate() {
  cout << "Gate destructor" << endl;
}
