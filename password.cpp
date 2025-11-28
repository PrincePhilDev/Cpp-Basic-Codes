#include <iostream>
using namespace std;
int main(){
string password,username;
string orgUser = "Princephil";
string orgPass= "Ethan102";
while(password!=orgPass && username!=orgUser)
{
cout<<"Enter your username"<<endl;
cin>>username;
cout<<"Enter password"<<endl;
cin>>password;
}
cout<<"You have access now"<<endl;


    return 0;
}