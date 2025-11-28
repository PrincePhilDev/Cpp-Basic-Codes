#include <iostream>
using namespace std;
int main(){
int airlineChoice,classChoice;
string airlineName,className;
int price=0;
cout<<"Welcome to Airline Booking System!"<<endl;
cout<<"Please select an airline of your choice"<<endl;
cout<<"1. Prince's airlines"<<endl;
cout<<"2. Qatar airways"<<endl;
cout<<"3.Fly Emirates"<<endl;
cout<<"Enter airline of choice (1-3)"<<endl;
cin>>airlineChoice;

switch(airlineChoice){
case 1: airlineName = "Prince's airways";
break;
case 2: airlineName = "Qatar airways";
break;
case 3: airlineName = "Fly Emirates";
break;
default:
cout<<"invalid Choice"<<endl;
return 0;
}
cout<<"Select a class"<<endl;
cout<<"1.First Class- $1000"<<endl;
cout<<"2.Business Class - $500"<<endl;
cout<<"3.Economy Class - $200"<<endl;
cout<<"Enter a class of your choice(1 to 3)"<<endl;
cin>>classChoice;

switch(classChoice){
case 1: price =1000;
break;
case 2: price=500;
break;
case 3: price=200;
break;
default:
cout<<"invalid class choice"<<endl;
return 0;
}

cout<<"You chose "<<airlineName<<endl;
if(classChoice==1)
{
cout<<"Class: First Class"<<endl;
}
else if(classChoice==2)
{
    cout<<"Class: Business"<<endl;
}
else
{
    cout<<"Class:Economy"<<endl;
}
cout<<"Price:"<<" $"<<price<<endl;



}