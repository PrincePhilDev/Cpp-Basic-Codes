#include <iostream>
using namespace std;
int main()
{
int num,reversed,remainder;
cout<<"Enter your desired number to be reversed"<<endl;
cin>>num;
while(num!=0)
{
remainder= num%10;
reversed=reversed*10 + remainder;
num=num/10;
}
cout<<reversed;
    return 0;
}