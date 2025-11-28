#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive integer no greater than 15"<<endl;
    cin >> number;

    while (number <= 0 || number >= 15) {
        cout << "Invalid input. Please enter a number between 1 and 15: ";
        cin >> number;
    }

    for (int row = 1; row <= number; row++) {
        for (int  count = 0; row>count; count++)
        {
            cout << "X";
        }
        
        cout << endl; 
        
    }

    return 0;
}