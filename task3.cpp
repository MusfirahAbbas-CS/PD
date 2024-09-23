#include <iostream>
using namespace std;
main() {
    int vi,a,t,vf;
cout << "Enter Initial Velocity (m/s): ";
cin >> vi;
cout << "Enter Acceleration(m/s^2) : ";
cin >> a;
cout << "Enter Time (s): ";
cin >> t;
vf=(a*t)+vi;
cout << "Final velocity (m/s) : "<< vf;   
}