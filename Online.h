#ifndef Included_Online_H
#define Included_Online_H
#include<iostream>
#include<string>
#include"Platform.h"
using namespace std;
class Online : public Platform
{
private:
    int num_servers;
    static int numb;
public:
    Online();
    Online(int);
    void display();
    void PrintData();
};

#endif // Included_Online_H
