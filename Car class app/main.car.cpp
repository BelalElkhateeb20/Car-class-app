#include <iostream>
#include"car.h"
using namespace std;
int main()
{
    car c1;
    c1.setMaker("BMW");
    cout<<"The Car's Maker Is"<<c1.getMaker()<<endl;
    c1.setColor("White");
    cout<<"The Car's Color IS"<<c1.getColor();
    c1.setModel(2020);
    cout<<"The Car's Model IS"<<c1.getModel();


return 0;
}
