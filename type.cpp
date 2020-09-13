#include<iostream>
#include<string>
#include"type.h"
int luxury::numb = 0;
luxury::luxury()
{
    numb++;
}
luxury::luxury(int a, int b, int c, int d)
{
    extra_tyre = a;
    extra_fuel = b;
    ac = c;
    outCity = d;
}
void luxury::display()
{
    cout<< numb;
}
void luxury::PrintData()
{
    cout<<"\n\t\t\tAdditional:"<<endl;
    cout<<"\t\t\tExtra Fuel: \t\t\t"<<(extra_tyre ? "Yes" : "No")<<endl;
    cout<<"\t\t\tExtra Tyre: \t\t\t"<<(extra_fuel ? "Yes": "No")<<endl;
    cout<<"\t\t\tAir Conditioned:\t\t\t"<<(ac ? "Yes": "No")<<endl;
    cout<<"\t\t\tLocation out of city:\t\t"<<(outCity ? "Yes": "No")<<endl;
    cout << "\t\t\t---------------------------------------------\n\n";
}
