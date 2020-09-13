#ifndef Included_Offline_H
#define Included_Offline_H
#include<iostream>
#include<string>
#include"Platform.h"
using namespace std;
class Offline : public Platform
{
private:
    string hardware_id;
    string mac_address;
    int type;
    static int numb;
public:
    Offline();
    Offline(string, string, int);
    void display();
    void PrintData();
};

#endif // Included_Offline_H
