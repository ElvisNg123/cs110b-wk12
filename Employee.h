#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee
{
  protected:
    //Employee Number, Name, Address
        string name;
        string address;
        string number;
  public:
    string getNumber() const { return number; }
    string getName() const { return name; }
    string getAddress() const { return address; }
    void setNumber(string nu){ number = nu; }
    void setName(string na){ name = na; }
    void setAddress(string ad){ address = ad; }
    // initalize calcPay()=0
    virtual double calcPay() { return 0;}
    virtual void printCheck(){}

};

#endif