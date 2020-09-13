#include <iostream>
#include<string>
#include "Car.h"
int Car::numb = 0;
Car::Car()
{
    numb++;
}
Car::Car(string a, string b, string c, string d, string col, int g)
{
    reg_number = a;
    model = b;
    car_color = col;
    company = c;
    fuel_type = d;
    mod_year = g;
}
void Car::display()
{
    cout<< numb;
}
Driver* Car::getDriver()
{
    return driver;
}
void Car::printData()
{
    cout << "\n\t\t\t==========   Car's INFORMATION    ==========\n";
    cout<<"\t\t\tRegistration Number: \t\t"<<reg_number<<endl;
    cout<<"\t\t\tModel: \t\t\t\t" <<model<<endl;
    cout<<"\t\t\tModel Year: \t\t\t"<<mod_year<<endl;
    cout<<"\t\t\tCompany: \t\t\t"<<company<<endl;
    cout<<"\t\t\tVehicle Color: \t\t\t"<< car_color<<endl;
    cout<<"\t\t\tFuel Type: \t\t\t"<<fuel_type<<endl;

}


