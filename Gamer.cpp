#include <iostream>
#include<string>
#include"Gamer.h"
int Gamer::numb = 0;
Gamer::Gamer()
{
    numb++;
}

Gamer::Gamer(string a, string b, string c, string d, string e, int f)
{
    name = a;
    id = b;
    password = c;
    email = d;
    ip_address = e;
    type = f;
}
void Gamer::display()
{
    cout<< numb<<endl;
}
Game* Gamer::getGame()
{
    return game;
}
void Gamer::PrintData()
{
    cout << "\n\t\t\t==========   Gamer's INFORMATION    ==========n";
    cout<<"\t\t\tGamer ID:  \t\t\t\t"<<id<<endl;
    cout<<"\t\t\tGamer Name:  \t\t\t\t"<<name<<endl;
    cout<<"\t\t\tGamer Password:  \t\t\t\t"<<password<<endl;
    cout<<"\t\t\tGamer Email:  \t\t\t\t"<<email<<endl;
    cout<<"\t\t\tIp Adress:  \t\t\t\t"<<ip_address<<endl;
    cout<<"\t\t\tGamer Type:  \t\t\t\t"<<(type ? "Free": "Paid")<<endl;
    cout << "\t\t\t-------------------------------------\n\n";
}
