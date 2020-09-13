#ifndef Included_Luxury_H
#define  Included_Luxury_H
#include<string>
#include "Car.h"
using namespace std;
class luxury : public Car
{
private:
    int extra_tyre;
    int extra_fuel;
    int ac;
    int outCity;
    static int numb;
public:
    luxury();
    luxury(int, int, int, int);
    void display();
    void PrintData();

};

#endif // Included_Luxury_H

