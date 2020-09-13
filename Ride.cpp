#include <iostream>
#include "Ride.h"
int Ride::numb = 0;
Ride::Ride()
{
    numb++;
}
Ride::Ride(string a, string b, int c, int d, int e)
{
    pickup_point = a;
    drop_point = b;
    ride_avalible = c;
    ride_id = d;
    num = e;
}
void Ride::display()
{
    cout<< numb;
}
int Ride::get_num()
{
    return num;
}
void Ride::PrintData()
{
    cout << "\n\t\t\t==========   Ride's INFORMATION    ==========\n";
    cout<<"\t\t\tRide ID: \t\t\t"<<ride_id<<endl;
    cout<<"\t\t\tRide Available: \t\t\t"<<(ride_avalible ? "Yes":"No")<<endl;
    cout<<"\t\t\tRide's Pickup point: \t\t\t"<<pickup_point<<endl;
    cout<<"\t\t\tRide's Drop point: \t\t\t"<<drop_point<<endl;
    cout << "\t\t\t---------------------------------------------\n\n";
}
