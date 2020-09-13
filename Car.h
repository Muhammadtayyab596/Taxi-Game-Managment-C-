#ifndef Included_Car_H
#define Included_Car_H
#include<string>
#include "Driver.h"
using namespace std;
class Driver;
class Car
{
private:
string reg_number;
string model;
string company;
string fuel_type;
string car_color;
int mod_year;
Driver *driver;
static int numb;
public:
    Car();
    Car(string, string, string, string, string, int);

    Driver* getDriver();
    void display();
    void printData();

};

#endif // Included_Car_H


