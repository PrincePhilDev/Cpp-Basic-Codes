#include <iostream>
using namespace std;
int main(){
int year;
cout<<"Enter the year"<<endl;
cin>>year;
if((year%4==0 && year%100!=0)||(year%400==0))
{
    cout<<"It's a leap year"<<endl;
}
else
{
    cout<<"It's not a leap year"<<endl;
}



    return 0;
}