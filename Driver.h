#ifndef Included_Driver_H
#define  Included_Driver_H
#include<string>
#include "Car.h"
using namespace std;
class Car;
class Driver
{
private:
    string dri_name;
    string dri_id;
    int xp_years;
    int dri_avalible;
    Car *car;
    static int numb;
public:
    Driver();
    Driver(string, string, int, int);
    Car* getCar();
    void display();
    void PrintData();
};

#endif // Included_Driver_H


