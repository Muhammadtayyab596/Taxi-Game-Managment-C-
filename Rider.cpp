#include<iostream>
#include "Rider.h"
int Rider::numb = 0;
Rider::Rider()
{
    numb++;
}
Rider::Rider(string a, string b)
{
    rider_id = a;
    rider_name = b;
}
void Rider::display()
{
    cout<< numb;
}
Ride* Rider::getRide()
{
    return ride;
}
void Rider::PrintData()
{
    cout << "\n\t\t\t*********    Riders's INFORMATION    ***********\n";
    cout<<"\t\t\tRider ID: \t\t\t"<<rider_id<<endl;
    cout<<"\t\t\tRider Name: \t\t\t" <<rider_name<<endl;
    cout << "\t\t\t------------------------------------------\n\n";
}

