#include <iostream>
using namespace std;
int main(){
    int num,factorial;
    int result=1;
cout<<"Enter the desired number"<<endl;
cin>>num;
for(factorial=num;factorial>0;factorial--)
{
result= result*factorial;

}
cout<<"The factorial is="<<result<<endl;




    return 0;
}