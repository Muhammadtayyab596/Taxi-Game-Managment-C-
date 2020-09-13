#ifndef Included_Ride_H
#define  Included_Ride_H
#include<string>
using namespace std;
class Ride
{
private:
    string pickup_point;
    string drop_point;
    int ride_avalible;
    int ride_id;
    int num;
    static int numb;
public:
    Ride();
    Ride(string, string, int, int, int);
    int get_num();
    void display();
    void PrintData();
};

#endif // Included_Ride_H
