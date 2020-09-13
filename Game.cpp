#include <iostream>
#include<string>
#include"Game.h"
int Game::numb = 0;
Game::Game()
{
    numb++;
}

Game::Game(string a, string b, int c, string d)
{
    gam_name = a;
    gam_regis = b;
    num_player = c;
    type = d;
}
void Game::display()
{
    cout<< numb<<endl;
}
Platform* Game::getPlatform()
{
    return platform;
}
void Game::PrintData()
{
    cout << "\n\t\t\t==========    Game's INFORMATION    ==========\n";
    cout<<"\t\t\tGame Name:  \t\t\t\t"<<gam_name<<endl;
    cout<<"\t\t\tRegistration Number:  \t\t\t\t"<<gam_regis<<endl;
    cout<<"\t\t\tNumber of Players:  \t\t\t\t"<<num_player<<endl;
    cout<<"\t\t\tType of Game:  \t\t\t\t"<<type<<endl;
    cout << "\t\t\t-------------------------------------\n\n";
}
