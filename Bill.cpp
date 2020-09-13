#include<iostream>
#include<string>
#include "Bill.h"
int Bill::numb = 0;
Bill::Bill()
{
    numb++;
}
void Bill::display()
{
    cout<< numb<<endl;
}
Bill::Bill(int a)
{
    Ride_Bill = a;
}
void Bill::PrintData()
{
    cout << "\n\t\t\t==========    Bill  INFORMATION    ==========\n";
    cout<<"\t\t\tThe bill for the ride: \t\t\t"<<Ride_Bill<<"$"<<endl;
    cout<<"\t\t\tThe Total Bill :\t\t\t"<<Ride_Bill+40<<"$"<<endl;
    cout << "\t\t\t---------------------------------------------\n\n";
}
