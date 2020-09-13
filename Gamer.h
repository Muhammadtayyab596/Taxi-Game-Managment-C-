#ifndef Included_Gamer_H
#define Included_Gamer_H
#include<iostream>
#include<string>
#include"Game.h"
using namespace std;
class Gamer
{
private:
    string name;
    string id;
    string password;
    string email;
    string ip_address;
    int type;
    static int numb;
    Game *game;
public:
    Gamer();
    Gamer(string, string, string, string, string, int);
    void display();
    Game *getGame();
    void PrintData();
};

#endif // Included_Gamer_H
