#include <iostream>
using namespace std;
int main(){
int a;
cout<<"How many values do you wanna input"<<endl;
cin>>a;
int winner;
int myArray[a];
for(int i=0;i<a;i++)
 {   
 cout<<"enter  no."<<endl;
  cin>>myArray[i];
 }
 cout<<"The numbers in descending order is:"<<endl;
int b;
int i;
 for( b=0;b<a;b++)
 {
for( i=b+1;i<a;i++)
{
    if(myArray[b]<myArray[i])
 { 
     winner=myArray[b];
     myArray[b]=myArray[i];
     myArray[i]=winner;
 }
}
 }
for(i=0;i<a;i++)
{
   cout<<myArray[i]<<endl;
}


 return 0;
}