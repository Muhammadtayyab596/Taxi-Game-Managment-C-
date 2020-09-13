#include <iostream>
#include<string>
#include<vector>
//taxi Classess
#include"Ride.h"
#include"type.h"
#include"Bill.h"
#include"Car.h"
#include"Rider.h"
#include"Driver.h"
//game company classes
#include"GameCompany.h"
#include"Game.h"
#include"Platform.h"
#include"Gamer.h"
#include"Online.h"
#include"Offline.h"
using namespace std;
void fillVector_Game_Management(vector<GameCompany>&, vector<Game>&, vector<Gamer>&, vector<Platform>&, vector<Online>& , vector<Offline>&);
void fillVector_Taxi_Management(vector<Car>&, vector<luxury>&, vector<Driver>&, vector<Rider>&, vector<Bill>& , vector<Ride>&);
int main()
{
    vector<Car> car;
    vector<luxury> luxu;
    vector<Driver> driver;
    vector<Rider> rider;
    vector<Bill> bill;
    vector<Ride> ride;
    vector<GameCompany> gameCompany;
    vector<Game> game;
    vector<Gamer> gamer;
    vector<Platform> platform;
    vector<Online> online;
    vector<Offline> offline;
    fillVector_Taxi_Management(car, luxu, driver, rider, bill, ride);
    fillVector_Game_Management(gameCompany, game, gamer, platform, online, offline);
    return 0;
}
void fillVector_Taxi_Management(vector<Car>& car, vector<luxury>& luxu, vector<Driver>& driver, vector<Rider>& rider, vector<Bill>& bill, vector<Ride>& ride)
{
    cout<<"\n\n\t\t\t\t  Taxi-Cab Management System"<<endl;
    cout<<"\t\t\t\t  ==========================="<<endl;
    cout<<"\n\t\t\t\t Ride # 01"<<endl;
    Car car1("YRT2116", "1992", "SUZUKI", "ONLY PETROL", "SILVER", 2016), car2;
    car1.printData();
    car2 = car1;

    luxury luxu1(2, 3, 1, 0), luxu2;
    luxu1 = luxu2;
    luxu1.PrintData();

    Driver driver1("AJMAL", "AJ-07", 4, 1), driver2;
    driver2 = driver1;
    driver1.PrintData();

    Ride ride1("SMI UNIVERSITY", "NORTH KARACHI", 1 , 525, 1), ride2;
    ride2 = ride1;
    ride1.PrintData();
    Rider rider1("AKMAL", "JAMAL"), rider2;
    rider2 = rider1;
    rider1.PrintData();

    Bill bill01(500), bill02;
    bill02 = bill01;
    bill01.PrintData();

    cout<<"\n\t\t\t\t Ride # 02"<<endl;
    car2.printData();
    cout<<"Number of Objects: ";
    car2.display();

    luxu2.PrintData();
    cout<<"Number of Objects: ";
    luxu2.display();

    driver2.PrintData();
    cout<<"Number of Objects: ";
    driver2.display();

    rider2.PrintData();
    cout<<"Number of Objects: ";
    rider2.display();

    ride2.PrintData();
    cout<<"Number of Objects: ";
    ride2.display();
}
void fillVector_Game_Management(vector<GameCompany>& gameCompany, vector<Game>& game, vector<Gamer>& gamer, vector<Platform>& platform, vector<Online>& online, vector<Offline>& offline)
{
    cout<<"\n\n\t\t\tGame Management System"<<endl;
    cout<<"\t\t\t==========================="<<endl;
    cout<<"\n\t\t\t\t Detail # 01"<<endl;
    GameCompany gameCompany1("MARK SD", "TIMES PALZA PAKISTAN", "JAVA -87YTA", 33), gameCompany2;
    gameCompany1.PrintData();
    gameCompany2 = gameCompany1;

    Game game1("DOOM 3.0", "doom232221XUZ", 100, "Action&&FPS"), game2;
    game2 = game1;
    game1.PrintData();

    Gamer gamer1("UMER ALAM GAMER", "UM-786", "26FIERENOME", "UMERALAM@gmail.com", "171.33.443.1" , 1), gamer2;
    gamer2 = gamer1;
    gamer1.PrintData();

    Platform platform1("RANK OF GAMER", "ADDIAS2322", "124.114.12.441.0.1"), platform2;
    platform2 = platform1;
    platform1.PrintData();

    Online online1(20), online2;
    online2 = online1;
    online1.PrintData();

    Offline offline1("wqeqq2311", "ASD-234D-T76ADF-3EDAS", 1), offline2;
    offline2 = offline1;
    offline1.PrintData();

    cout<<"\n\n\t\t Detail # 02"<<endl;
    gameCompany2.PrintData();
    cout<<"Number of Objects: ";
    gameCompany2.display();

    game2.PrintData();
    cout<<"Number of Objects: ";
    game2.display();

    platform2.PrintData();
    cout<<"Number of Objects: ";
    platform2.display();

    online2.PrintData();
    cout<<"Number of Objects: ";
    online2.display();

    offline2.PrintData();
    cout<<"Number of Objects: ";
    offline2.display();
}
