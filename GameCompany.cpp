#include<iostream>
#include<string>
#include "GameCompany.h"
int GameCompany::numb = 0;
GameCompany::GameCompany()
{
    numb++;
}
GameCompany::GameCompany(string a, string b, string c, int d)
{
    name = a;
    address = b;
    reg_num = c;
    num_employ = d;
}
void GameCompany::display()
{
    cout<< numb<<endl;
}
Game* GameCompany::getGame()
{
    return game;
}
void GameCompany::PrintData()
{
    cout << "\n\t\t\t==========    Game Company's INFORMATION    ==========\n";
    cout<<"\t\t\tCompany Name:  \t\t\t"<<name<<endl;
    cout<<"\t\t\tCompany Address:  \t\t\t\t"<<address<<endl;
    cout<<"\t\t\tRegistration Number:  \t\t\t\t"<<reg_num<<endl;
    cout<<"\t\t\tNumber of Employees:  \t\t\t\t"<<num_employ<<endl;
    cout << "\t\t\t---------------------------------------------\n\n";
}

