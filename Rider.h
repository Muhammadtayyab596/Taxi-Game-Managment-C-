#ifndef Included_Rider_H
#define  Included_Rider_H
#include<string>
using namespace std;
class Ride;
class Rider
{
private:
    string rider_id;
    string rider_name;
    Ride *ride;
    static int numb;
public:
    Rider();
    Rider(string, string);
    Ride* getRide();
    void display();
    void PrintData();

};

#endif // Included_Rider_H

