#include <iostream>
using namespace std;
main() {

    float i,p,n;
cout << "Enter Imposter Count: ";
cin >> i;
cout << "Enter Player Count: ";
cin >> p;
n=100*(i/p);
cout << "Chances of being an imposter: "<<n<<"%";
}