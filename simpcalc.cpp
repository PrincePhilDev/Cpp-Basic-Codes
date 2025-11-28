#include <iostream>
using namespace std;
int main(){
    double firstNum,secondNum,result;
    char operation;
cout<<"Enter your first number"<<endl;
cin>>firstNum;
cout<<"Enter a math operator(+,-,*,/)"<<endl;
cin>>operation;
cout<<"Enter your second number"<<endl;
cin>>secondNum;

switch(operation)
{
case '+': result=firstNum+secondNum;
break;
case '-': result=firstNum-secondNum;
break;
case '*': result=firstNum*secondNum;
break;
case '/': result=firstNum/secondNum;
break;
default: cout<<"invalid operation"<<endl;
break;

}

cout<<"The answer is="<<result<<endl;

    return 0;
}