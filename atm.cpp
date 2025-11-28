#include <iostream>
using namespace std;
int main()
{
double balleft=1240.00,depmoney,withmoney;
int task;
cout<<"What task do you want to perform (1,2,3 or 4)"<<endl;
cout<<"1.Check Balance"<<endl<<"2.Deposit money"<<endl<<"3.Withdraw money"<<endl<<"4.Exit"<<endl;
cin>>task;
switch(task)
{
    case 1 : cout<< "Your balance is="<<balleft;
break;
case 2: cout<< "How much do you want to deposit"<<endl;
cin>>depmoney;
balleft=balleft+depmoney;
cout<<"Your balance now is="<<balleft<<endl;
break;
case 3: cout<<"How much do you want to withdraw"<<endl;
cin>>withmoney;
if(withmoney<=balleft)
{
balleft=balleft-withmoney;
cout<<"Your balance now is="<<balleft<<endl;
}
else
{
    cout<<"Money you want to withdraw is bigger than your balance"<<endl;
}
break;
case 4 : cout<<"Process ended"<<endl;
}

    return 0;
}