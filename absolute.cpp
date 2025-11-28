#include<iostream>
using namespace std;
double absolute(double number)
{
    if(number<0)
    {
        return -number;
    }
        else
        {
            return number;
        }
    
}

int main()
{
cout<<absolute(-9)<<endl;

    return 0;
}