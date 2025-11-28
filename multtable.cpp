#include <iostream>
using namespace std;
int main ()
{
    int num,result;
cout<<"Enter any number and get its multiplication table"<<endl;
cin>>num;
for(int x=1;x<=12;x++)
{
result= num*x;
cout<<num<<"*"<<x<<"="<<result<<endl;

}




    return 0;
}