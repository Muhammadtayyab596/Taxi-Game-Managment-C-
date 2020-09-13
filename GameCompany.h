#ifndef Included_GameCompany_H
#define Included_GameCompany_H
#include<iostream>
#include<string>
#include"Game.h"
using namespace std;
class GameCompany
{
private:
    string name;
    string address;
    string reg_num;
    int num_employ;
    static int numb;
    Game *game;
public:
    GameCompany();
    GameCompany(string, string, string, int);
    void display();
    Game *getGame();
    void PrintData();
};

#endif // Included_GameCompany_H

