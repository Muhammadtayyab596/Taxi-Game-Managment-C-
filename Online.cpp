#include <iostream>
#include<string>
#include"Online.h"
int Online::numb = 0;
Online::Online()
{
    numb++;
}

Online::Online(int a)
{
    num_servers = a;
}
void Online::display()
{
    cout<< numb<<endl;
}
void Online::PrintData()
{
    cout << "\n\t\t\t==========    Online Platform's INFORMATION    ==========\n";
    cout<<"\t\t\tNumber of servers:  \t\t\t\t"<<num_servers<<endl;
    cout << "\t\t\t------------------------------------------------\n\n";
}
