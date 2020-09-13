#include <iostream>
#include<string>
#include"Offline.h"
int Offline::numb = 0;
Offline::Offline()
{
    numb++;
}

Offline::Offline(string a, string b, int c)
{
    hardware_id = a;
    mac_address = b;
    type = c;
}
void Offline::display()
{
    cout<< numb<<endl;
}
void Offline::PrintData()
{
    cout << "\n\t\t\t==========    Offline Platform's INFORMATION    ==========\n";
    cout<<"\t\t\tHardware Id:  \t\t\t\t"<<hardware_id<<endl;
    cout<<"\t\t\tMac Address:  \t\t\t\t"<<mac_address<<endl;
    cout<<"\t\t\tType:  \t\t\t\t"<<type<<endl;
    cout << "\t\t\t---------------------------------------------------\n\n";
}
