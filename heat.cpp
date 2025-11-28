#include <iostream>
using namespace std;
int main(){
double amountWater,Fahrenheit,Celsius,Grams,Capacity,Energy;
cout<<"Enter your desired amount of water in lb"<<endl;
cin>>amountWater;
if(amountWater>0)
{
Grams=453.59*amountWater;
cout<<"Enter the temperature increase value in Fahrenheit"<<endl;
cin>>Fahrenheit;
Celsius=Fahrenheit* (5.0/9.0);
Capacity=4.2;
Energy=Grams*Capacity*Celsius;

cout<<"The amount of Joules needed is= "<<Energy<<endl;
}
    return 0;

}
