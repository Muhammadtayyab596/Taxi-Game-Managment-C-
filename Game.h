#ifndef Included_Game_H
#define Included_Game_H
#include<iostream>
#include<string>
#include"Platform.h"
using namespace std;
class Game
{
private:
    string gam_name;
    string gam_regis;
    int num_player;
    string type;
    static int numb;
    Platform *platform;
public:
    Game();
    Game(string, string, int, string);
    Platform* getPlatform();
    void display();
    void PrintData();
};

#endif // Included_Game_H
