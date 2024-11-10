#include <iostream>
using namespace std;
main()
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box-Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string code;
    cout << "Enter the pin: ";
    cin >> code;
    check(moves, code);
    
}

void check(string moves[10], string code) {
    int digit = 0;
    while (code[digit] != '\0') {
        digit++;
    }

    if (digit == 4) {
        for (int i = 0; i < 4; i++) {
            if (code[i] >= '0' && code[i] <= '9') {
                int str = (code[i] - '0' + i) % 10;
                cout << moves[str] << " ";
            } else {
                cout << "Invalid input! Only digits allowed." << endl;
                return;
            }
        }
        cout << endl;
    } else {
        cout << "Invalid Input! PIN must be exactly 4 digits." << endl;
    }

}