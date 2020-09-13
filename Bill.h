#ifndef Included_Bill_H
#define  Included_Bill_H
#include<iostream>
#include<string>
#include "Ride.h"
#include"type.h"
using namespace std;
class Bill : public Ride
{
private:
    int Ride_Bill;
    int extra_bill;
    static int numb;
public:
    Bill();
    Bill(int);
    void display();

    void PrintData();
};
#endif // Included_Bill_H
