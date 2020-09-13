#ifndef Included_Platform_H
#define Included_Platform_H
#include<iostream>
#include<string>
using namespace std;
class Platform
{
private:
    string name;
    string id;
    string ip_address;
    static int numb;
public:
    Platform();
    Platform(string, string, string);
    void display();
    void PrintData();
};

#endif // Included_Platform_H

