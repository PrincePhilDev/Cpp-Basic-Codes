#include<iostream>
using namespace std;
int main(){
double seconds,days,hours,minutes;
cout<<"Enter the number of seconds"<<endl;
cin>>seconds;
days = (seconds/86400);
hours= (seconds/3600);
minutes= (seconds/60); 
if (seconds>86400||seconds==86400)
{
cout<<seconds<<" seconds involves "<<days<<" days"<<endl;
}
else if(seconds<86400 && seconds>=3600)
{
    cout<<seconds<<" seconds involves "<<hours<<" hours."<<endl;
}
else if(seconds<3600&&seconds>=60)
{
    cout<<seconds<<" seconds involves "<<minutes<<" minutes."<<endl;
}

else 
cout<<"That is "<<seconds<<" seconds"<<endl;

    return 0;
}