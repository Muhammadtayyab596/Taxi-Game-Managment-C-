#include <iostream>
#include<string>
#include"Platform.h"
int Platform::numb = 0;
Platform::Platform()
{
    numb++;
}

Platform::Platform(string a, string b, string c)
{
    name = a;
    id = b;
    ip_address = c;
}
void Platform::display()
{
    cout<< numb<<endl;
}
void Platform::PrintData()
{
    cout << "\n\t\t\t==========    Platform's INFORMATION    ==========n";
    cout<<"\t\t\tPlatform Name:  \t\t\t\t"<<name<<endl;
    cout<<"\t\t\tRegistration id:  \t\t\t\t"<<id<<endl;
    cout<<"\t\t\tIp address:  \t\t\t\t"<<ip_address<<endl;
    cout << "\t\t\t-----------------------------------------\n\n";
}
