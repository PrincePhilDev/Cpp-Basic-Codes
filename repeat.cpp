#include<iostream>
using namespace std;
string repeated,result;
string output(string inputer){
    for(int i=0;i<inputer.length();i++)
    {
        // result=inputer[i]+inputer[i];
        result.push_back(inputer[i]);
        result.push_back(inputer[i]);
        // cout<<result<<endl;
      repeated.append(result);

      result = "";
        
    }
    return repeated;
}

int main(){

string me = output("stringer");
cout<<me<<endl;

    return 0;
}