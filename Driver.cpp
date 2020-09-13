#include<iostream>
#include "Driver.h"
int Driver::numb = 0;
Driver::Driver()
{
    numb++;
}
Driver::Driver(string a, string b, int c, int d)
{
    dri_name = a;
    dri_id = b;
    xp_years = c;
    dri_avalible = d;
}
void Driver::display()
{
    cout<< numb;
}
Car* Driver::getCar()
{
    return car;
}
void Driver::PrintData()
{
    cout << "\n\t\t\t==========    Driver's INFORMATION    ==========\n";
    cout<<"\t\t\tDriver Name: \t\t\t"<<dri_name<<endl;
    cout<<"\t\t\tDriver ID: \t\t\t" <<dri_id<<endl;
    cout<<"\t\t\tExperience Years: \t\t\t"<<xp_years<<endl;
    cout<<"\t\t\tAvailability: \t\t\t" << (dri_avalible ? "Yes" : "No") << endl;
    cout << "\t\t\t----------------------------------------------\n\n";
}
