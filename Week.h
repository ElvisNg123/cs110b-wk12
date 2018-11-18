#ifndef WEEK_H
#define WEEK_H
#include "Employee.h"
#include <iostream>
using namespace std;

class WeeklyEmployee : public Employee {
    // get week and wage, then calcaulate wage. Then print check
  protected:
        double wage;
  public:
    void setWage(double wa){ wage = wa; }
    double calcPay() const { return 4*wage; }
    void printCheck() { 
        cout << "The check is for "<< name << " is a total of " << calcPay() <<"$." << endl; 
    } 
};

#endif