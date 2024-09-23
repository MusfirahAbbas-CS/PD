#include <iostream>
using namespace std;
main() {
    int n,fps,number;
    cout << "Number of Minutes: ";
    cin >> n;
    cout << "Frames per Second: ";
    cin >> fps;
    number=(n*60)*(fps);
    cout << "Total number of Frames: ";
    cout << number;

   
}