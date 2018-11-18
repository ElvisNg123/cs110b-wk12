#ifndef HOUR_H
#define HOUR_H
#include "Employee.h"
#include <iostream>
using namespace std;

class HourlyEmployee : public Employee {
  // get hour and wage, then calcaulate wage. Then print check
  protected:
        double hour;
        double wage;
  public:
    void setHour(double hr){ hour = hr; }
    void setWage(double wa){ wage = wa; }
    double calcPay() const { return hour*wage; }
    void printCheck()
      { 
        cout << "The check is for "<< this->name << " is a total of " << calcPay() <<"$." << endl;
      } 
};

#endif