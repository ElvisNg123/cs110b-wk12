#include <iostream>
#include <string>
using namespace std;
#include "Hour.h"
#include "Week.h"

int main() {
  //Default Employees
  HourlyEmployee a;
  WeeklyEmployee b;
  Employee *employe1 = &a;
  Employee *employe2 = &b;
  employe1 -> setName("Elvis");
  employe2 -> setName("Emilia");
  b.setWage(500);
  a.setWage(10);
  a.setHour(100);
  employe1 -> printCheck();
  employe2 -> printCheck();
  return 0; 
}