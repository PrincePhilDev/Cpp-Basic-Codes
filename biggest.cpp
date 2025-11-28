#include <iostream>
using namespace std;
int main(){
    int a,b,c;
cout<<"Enter your first number"<<endl;
cin>>a;
cout<<"Enter your second number"<<endl;
cin>>b;
cout<<"Enter your third number"<<endl;
cin>>c;
int highest;
int myArray[3]= {a,b,c};
int i= 0;

    if(myArray[i]>myArray[i+1]&&myArray[i]>myArray[i+2])
    {
        highest=myArray[i];
    }
    else if(myArray[i+1]>myArray[i]&&myArray[i+1]>myArray[i+2])
    {
        highest=myArray[i+1];
    }
    else if(myArray[i+2]>myArray[i]&&myArray[i+2]>myArray[i+1])
    {
        highest=myArray[i+2];
    }

 cout<<"biggest is "<<highest;
    return 0;
}