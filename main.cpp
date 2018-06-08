#include <iostream>
#include <string>
#include "plane.h"
#include "gse.h"
#include "vehicle.h"
using namespace std;

int main(){
  Vehicle *v = new Plane();
  v->print();
  delete v;

  GSE *a = new GSE();
  a->print();
  delete a;

  Vehicle *b = new GSE(24589.2343, 32432, GSE::TUG, "EER", 124, 9238.22, 393.2, 23.4, 2429.34343, 8743.293, 32.43, 1111.1, 94242.22, 0.003);
  b->print();
  delete b;

  return 0;
}
