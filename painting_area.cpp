#include <iostream>
#include <cmath>

using namespace std;

int main(){
int coveragePerGallon = 340;
int fenceHeight = 6;
int fenceLength = 100;
int coatSize = 2;
double singleCoat= fenceHeight*fenceLength;
double totalPaint= singleCoat*coatSize;
double gallonsNeeded = ceil(totalPaint/coveragePerGallon);
//ceil for approximation

cout<<"You will need approximately "<<gallonsNeeded<<" gallons of paint to apply "<<coatSize <<" coats on a "<<fenceHeight <<" by "<<fenceLength <<" foot fence."<<endl;



return 0;
}