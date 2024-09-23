#include <iostream>
using namespace std;
 main() {
    float s,c,a,cpp,cps;
cout << "Enter the size of the fertilizer bag in pounds:$ ";
cin >> s;
cout << "Enter the cost of the bag:$ ";
cin >> c;
cout << "Enter the area in square feet that can be covered by the bag: ";
cin >> a;
cpp=c/s;
cps=c/a;
cout << "Cost of fertilizer per pound: $"<<cpp<<endl;
cout << "Cost of fertilizer per square foot: $"<<cps;
}