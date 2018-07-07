#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include "plane.h"
#include "gse.h"
#include "vehicle.h"
#include "runway.h"
#include "gate.h"
using namespace std;

int main(){
  /****************************/
  //
  // Vehicle, GSE, Plane testing
  //
  /****************************/

  // Vehicle *v = new Plane();
  // v->print();
  // cout << endl;
  // delete v;
  //
  // GSE *a = new GSE();
  // a->print();
  // cout << endl;
  // delete a;
  //
  // Vehicle *b = new GSE(24589.2343, 32432, GSE::TUG, "EER", 124, 9238.22, 393.2, 23.4, 2429.34343, 8743.293, 32.43, 1111.1, 94242.22, 0.003);
  // b->print();
  // cout << endl;
  // delete b;
  //
  // cout << endl;

  /****************************/
  //
  // Runway testing
  //
  /****************************/

  // Runway *r = new Runway();
  // r->print();
  // cout << endl;
  //
  // r->addLandingFlight("LAX");
  // r->popTakeoffFlight();
  // r->print();
  // cout << endl;
  //
  // r->setCurrentFlight();
  // cout << r->getCurrentFlight() << endl;
  // queue<string> q = r->getLandingFlights();
  // while (q.size() > 0) {
  //   cout << q.front() << ' ';
  //   q.pop();
  // }
  // cout << endl;
  // delete r;
  //
  // cout << endl;

  /****************************/
  //
  // Gate testing
  //
  /****************************/

  Gate *g = new Gate();
  g->print();
  cout << endl;
  delete g;

  g = new Gate("ABK", "ABC783", 12412, 2333, {});
  g->addSupportVehicle("f");g->addSupportVehicle("k");
  g->addSupportVehicle("o");g->addSupportVehicle("P");
  g->print();
  cout << endl;

  g->removeSupportVehicle("f");
  g->print();
  cout << endl;
  delete g;

  cout << endl;


  return 0;
}
