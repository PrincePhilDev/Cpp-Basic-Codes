#include <iostream>
using namespace std;
int main(){
double P,I;
float R;
int T;
const int div=100;
cout<<"Please enter the loan amount"<<endl;
cin>>P;
cout<<"Kindly provide the rate on the loan"<<endl;
cin>>R;
cout<<"Please enter the time"<<endl;
cin>>T;

I=(P*R*T)/div;
cout<<"The interest on the loan is= "<<I<<endl;



 return 0;   
}