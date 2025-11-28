#include <iostream>
using namespace std;
int main()
{
    int firstNum,secondNum;
cout<<"Input two numbers as range limits"<<endl;
cout<<"Enter your first range number"<<endl;
cin>>firstNum;
cout<<"Enter your second range number"<<endl;
cin>>secondNum;
for(int x=firstNum;x<secondNum; x++)
{
if(x%2==0)
{
cout<<x<<endl;
}
}



    return 0;
}